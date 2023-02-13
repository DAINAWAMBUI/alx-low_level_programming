#include "main.h"
void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type,unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * check_elf - checksif a file is an ELF file
 * @e_ident: pointer to an array containing the ELF magic numbers
 * Description: exit code 98 if the file is not an ELf
 */
void check_elf(unsigned char *e_ident)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (e_indent[index] != 127 &&
		    e_ident[index] != 'E' &&
		    e_ident[index] != 'L' &&
		    e_ident[index] != 'F')
		{
			dprint(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magic - prints the magic numbers of an ELF header
 * @e_ident: pointer to an array containing the ELF magic numbers
 * Description: magic numbers are seperated by spaces
 */
void print_magic(unsigned char *e_ident)
{
	int index;

	printf(" MAGIC: ");
	for (index = 0; index  EI_NIDENT; index++)
	{
		printf("%02x", e_ident[index]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_class - prints the class of an ELF head
 * @e_ident: pointer to an array containing the ELF class
 */
void print_class(unsigned char *e_ident)
{
	printf"Class:
		switch (e_ident[EI_CLASS])
		{
			case ELFCLASSNONE:
				printf("none\n");
				break;
			case ELFCLASS32:
				printf("ELF32\n");
				break;
			case ELFCLASS64:
				printf("ELF64\N");
				break;
			default:
				printf("<unknown: %x>\n", e_type);
		}
}
/**
 * print_entry - prints the entry point of ELF header
 * @e_entry: address of the ELF entry point
 * @e_ident: poiter to array containing the ELF class
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf(* Entry point address.			*);

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 0) & oxFF00FF00) |
			   ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}
	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%nlx\n", (unsigned int)e_entry);
	else
		printf("%nlx\n", e_entry);
}
/**
 * close_elf - close ELF file
 * @elf: file descriptor of the file ELF
 * description: if the file cannot be closed - exit code 98
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_ FILENO,
				"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

