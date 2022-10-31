#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * check_elf - check if a file is an ELF file
 * @buf: pointer to an array containing the ELF magic numbers
 *
 * Description: If the file is not an ELF file - exit code 98
 */
void check_elf(unsigned char *buf)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (buf[i] != 127 &&
			buf[i] != 'E' &&
			buf[i] != 'L' &&
			buf[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magic - print the magic numbers of an ELF header
 * @buf: pointer to an array containing the ELF magic numbers
 *
 * Description: Magic numbers are separated by spaces
 */
void print_magic(unsigned char *buf)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf(" %02x", buf[i]);
	printf("\n");
}

/**
 * print_class - print the class of an ELF header
 * @buf: pointer to an array containing the ELF class
 */
void print_class(unsigned char *buf)
{
	printf("  Class:                             ");

	switch (buf[EI_CLASS])
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
		printf("<unknown: %x>\n", buf[EI_CLASS]);
	}
}

/**
 * print_data - print the data of an ELF header
 * @buf: pointer to an array containing the ELF class
 */
void print_data(unsigned char *buf)
{
	printf("  Data:                              ");

	switch (buf[EI_DATA])
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
		printf("<unknown: %x>\n", buf[EI_CLASS]);
	}
}

/**
 * print_version - print the version of an ELF header
 * @buf: pointer to an array containing the ELF version
 */
void print_version(unsigned char *buf)
{
	printf("  Version:                           %d",
		   buf[EI_VERSION]);

	switch (buf[EI_VERSION])
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
 * print_osabi - print the OS/ABI of an ELF header
 * @buf: pointer to an array containing the ELF version
 */
void print_osabi(unsigned char *buf)
{
	printf("  OS/ABI:                            ");

	switch (buf[EI_OSABI])
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
		printf("<unknown: %x>\n", buf[EI_OSABI]);
	}
}

/**
 * print_abi - print the ABI version of an ELF header
 * @buf: pointer to an array containing the ELF ABI version
 */
void print_abi(unsigned char *buf)
{
	printf("  ABI Version:                       %d\n",
		   buf[EI_ABIVERSION]);
}

/**
 * print_type - print the type of an ELF header
 * @type: the ELF type
 * @buf:pointer to an array containing the ELF class
 */
void print_type(unsigned int type, unsigned char *buf)
{
	if (buf[EI_DATA] == ELFDATA2MSB)
		type >>= 8;

	printf("  Type:                              ");

	switch (type)
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
		printf("<unknown: %x>\n", type);
	}
}

/**
 * print_entry - print the entry point of an ELF header
 * @addr:address of the ELF entry point
 * @buf: pointer to an array containing the ELF class
 */
void print_entry(unsigned long int addr, unsigned char *buf)
{
	printf("  Entry point address:               ");

	if (buf[EI_DATA] == ELFDATA2MSB)
	{
		addr = ((addr << 8) & 0xFF00FF00) |
				  ((addr >> 8) & 0xFF00FF);
		addr = (addr << 16) | (addr >> 16);
	}

	if (buf[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)addr);
	else
		printf("%#lx\n", addr);
}

/**
 * close_elf - close an ELF file
 * @elf: file descriptor of the ELF file
 *
 * Description: If the file cannot be closed - exit code 98
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - display the information contained in the
 *        ELF header at the start of an ELF file
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 *
 * Description: If the file is not an ELF File or
 *              the function fails - exit code 98
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int fd, r;

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (!header)
	{
		close_elf(fd);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(fd, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		close_elf(fd);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	check_elf(header->e_ident);
	printf("ELF Header:\n");
	print_magic(header->e_ident);
	print_class(header->e_ident);
	print_data(header->e_ident);
	print_version(header->e_ident);
	print_osabi(header->e_ident);
	print_abi(header->e_ident);
	print_type(header->e_type, header->e_ident);
	print_entry(header->e_entry, header->e_ident);

	free(header);
	close_elf(fd);
	return (0);
}

