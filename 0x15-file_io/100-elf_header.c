#include <stdio.h>
#include <stdlib.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void _elfch(unsigned char *ted);
void _magicpri(unsigned char *ted);
void print_class(unsigned char *ted);
void print_data(unsigned char *ted);
void print_version(unsigned char *ted);
void print_abi(unsigned char *ted);
void print_osabi(unsigned char *ted);
void print_type(unsigned int typ, unsigned char *ted);
void print_entry(unsigned long int try, unsigned char *ted);
void close_elf(int elf);

/**
 * _elfch - fxn that checks an ELF file
 * @ted: a pointer to the ELF magic numbers
 * Desc: exit code 98 if file is not an ELF
 * Return: Nothing!
 */
void _elfch(unsigned char *ted)
{
	int din;

	for (din = 0; din < 4; din++)
	{
		if (ted[din] != 127 &&
		    ted[din] != 'E' &&
		    ted[din] != 'L' &&
		    ted[din] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not ELF file\n");
			exit(98);
		}
	}
}

/**
 * _magicpri - fxn that prints the magic numbers of an ELF
 * @ted: a pointer to the ELF magic numbers
 * Desc: spaces separate magic numbers
 * Return: Nothing!
 */
void _magicpri(unsigned char *ted)
{
	int din;

	printf(" Magic: ");

	for (din = 0; din < EI_NIDENT; din++)
	{
		printf("%02x", ted[din]);

		if (din == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * _classpri - fxn that prints the class of an ELF
 * @ted: a pointer to the ELF class
 * Return: Nothing!
 */
void _classpri(unsigned char *ted)
{
	printf(" Class: ");

	switch (ted[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", ted[EI_CLASS]);
	}
}

/**
 * _datapri - fxn that prints the data of an ELF
 * @ted: a pointer to the ELF class
 * Return: Nothing!
 */
void _datapri(unsigned char *ted)
{
	printf(" Data: ");

	switch (ted[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", ted[EI_CLASS]);
	}
}

/**
 * _versionpri - fxn that prints the version of an ELF
 * @ted: a pointer to the ELF version
 * Return: Nothing!
 */
void _versionpri(unsigned char *ted)
{
	 printf(" Version: %d",
			  ted[EI_VERSION]);

	switch (ted[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * _osabipri - fxn that prints the OS/ABI of an ELF
 * @ted: a pointer to the ELF version
 * Return: Nothing!
 */
void _osabipri(unsigned char *ted)
{
	printf(" OS/ABI: ");

	switch (ted[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", ted[EI_OSABI]);
	}
}

/**
 * _abipri - fxn that prints the ABI version of an ELF
 * @ted: a pointer to the ELF ABI version
 * Return: Nothing!
 */
void _abipri(unsigned char *ted)
{
	printf(" ABI Version: %d\n",
		ted[EI_ABIVERSION]);
}

/**
 * _typepri - fxn that prints the type of an ELF
 * @typ: an ELF type
 * @ted: a pointer to the ELF class
 * Return: Nothing!
 */
void _typepri(unsigned int typ, unsigned char *ted)
{
	if (ted[EI_DATA] == ELFDATA2MSB)
		typ >>= 8;

	printf(" Type: ");

	switch (typ)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", typ);
	}
}

/**
 * _entrypri - fxn that prints the entry point of an ELF
 * @try: address of the ELF entry point
 * @ted: a pointer to the ELF class
 * Return: Nothing!
 */
void _entrypri(unsigned long int try, unsigned char *ted)
{
	printf(" Entry point address: ");

	if (ted[EI_DATA] == ELFDATA2MSB)
	{
		try = ((try << 8) & 0xFF00FF00) |
			  ((try >> 8) & 0xFF00FF);
		try = (try << 16) | (try >> 16);
	}

	if (ted[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)try);

	else
		printf("%#lx\n", try);
}

/**
 * _elfclose - fxn that closes an ELF file
 * @elf: file desc of the ELF file
 * Desc: exit code 98 if file cannot close
 */
void _elfclose(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Cannot close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - shows info contained in the ELF file.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 * Desc: exit code 98 if file not ELF or fails
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int c, v;

	c = open(argv[1], O_RDONLY);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		_elfclose(c);
		dprintf(STDERR_FILENO, "Error: cannot read file %s\n", argv[1]);
		exit(98);
	}
	v = read(c, header, sizeof(Elf64_Ehdr));
	if (v == -1)
	{
		free(header);
		_elfclose(c);
		dprintf(STDERR_FILENO, "Error: `%s`: file not exist\n", argv[1]);
		exit(98);
	}

	_elfch(header->ted);
	printf("ELF Header:\n");
	_magicpri(header->ted);
	_classpri(header->ted);
	_datapri(header->ted);
	_versionpri(header->ted);
	_osabipri(header->ted);
	_abipri(header->ted);
	_typepri(header->typ, header->ted);
	_entrypri(header->try, header->ted);

	free(header);
	_elfclose(c);
	return (0);
}

