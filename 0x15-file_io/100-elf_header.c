#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#define ERROR_EXIT 98

/**
 * print_elf_header- print elf
 * @header: arge
 * Return: void
 */

void print_header(Elf64_Ehdr header)
{
	int i;
    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (i = 0; i < 16; i++)
        printf("%02x ", header.e_ident[i]);
    printf("\n");
    printf("  Class:                             ");
    if (header.e_ident[EI_CLASS] == ELFCLASS32)
        printf("ELF32\n");
    else if (header.e_ident[EI_CLASS] == ELFCLASS64)
        printf("ELF64\n");
    else
        printf("<unknown: %x>\n", header.e_ident[EI_CLASS]);
    printf("  Data:                              ");
    if (header.e_ident[EI_DATA] == ELFDATA2LSB)
        printf("2's complement, little endian\n");
    else if (header.e_ident[EI_DATA] == ELFDATA2MSB)
        printf("2's complement, big endian\n");
    else
        printf("<unknown: %x>\n", header.e_ident[EI_DATA]);
    printf("  Version:                           %d (current)\n", header.e_ident[EI_VERSION]);
    printf("  OS/ABI:                            ");
    switch (header.e_ident[EI_OSABI]) {
        case ELFOSABI_SYSV: printf("UNIX - System V\n"); break;
        case ELFOSABI_HPUX: printf("HP-UX\n"); break;
        case ELFOSABI_NETBSD: printf("NetBSD\n"); break;
        case ELFOSABI_LINUX: printf("Linux\n"); break;
        case ELFOSABI_SOLARIS: printf("Solaris\n"); break;
        case ELFOSABI_AIX: printf("AIX\n"); break;
        case ELFOSABI_IRIX: printf("IRIX\n"); break;
        case ELFOSABI_FREEBSD: printf("FreeBSD\n"); break;
        case ELFOSABI_TRU64: printf("Compaq TRU64 UNIX\n"); break;
        case ELFOSABI_ARM: printf("ARM\n"); break;
        case ELFOSABI_STANDALONE: printf("Standalone App\n"); break;
        default: printf("<unknown: %x>\n", header.e_ident[EI_OSABI]); break;
    }
    printf("  ABI Version:                       %d\n", header.e_ident[EI_ABIVERSION]);
    printf("  Type:                              ");
    switch (header.e_type) {
        case ET_NONE: printf("NONE (No file type)\n"); break;
        case ET_REL: printf("REL (Relocatable file)\n"); break;
        case ET_EXEC: printf("EXEC (Executable file)\n"); break;
        case ET_DYN: printf("DYN (Shared object file)\n"); break;
        case ET_CORE: printf("CORE (Core file)\n"); break;
        default: printf("<unknown: %x>\n", header.e_type); break;
    }
    printf("  Entry point address:               0x%lx\n", header.e_entry);
}


/**
 * main - return elf
 * @argc: argument count
 * @argv: argument vector
 * Return: int
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;
	ssize_t n;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		fprintf(stderr, "Error: Could not open file %s\n", argv[1]);
		exit(98);
	}
	n = read(fd, &header, sizeof(header));
	if (n != sizeof(header))
	{
		fprintf(stderr, "Error: failed to read ELF header\n");
		close(fd);
		return (ERROR_EXIT);
	}
	close(fd);
	print_header(header);
	return (0);
}
