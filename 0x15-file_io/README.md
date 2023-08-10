<!-- @format -->

# C - FILE INPUT AND OUTPUT (Author: Oreoluwa)

## Synopsis

Welcome to the directory dedicated to understanding and practicing File Input and Output concepts. In this section, we delve into the process of creating, writing to, and reading from files using programs. Whether you're developing code that interacts with files or gaining a deeper understanding of the concept, you'll find valuable resources here.

## Folders 📂

- [0x15-file_io](./0x15-file_io): This folder contains the ALX SE requirements related to File I/O.
- [test](./test): Inside this folder, you'll discover practice work and files that I've used to enhance my grasp of the File I/O concept.

## Helper Files 🙌

- [putchar](./_putchar.c): This helper file plays a crucial role in printing information to the standard output.

## Header Files 📜

- [main.h](./main.h): The main header file encompasses the function prototypes for all the functions utilized throughout the project.

## Contents

- ### _Files with Functions as Targets_ 📄

  | **FILES**                                            |                           **FUNCTIONS**                            | **ACTIONS**                                                                                                      |
  | :--------------------------------------------------- | :----------------------------------------------------------------: | :--------------------------------------------------------------------------------------------------------------- |
  | [0-read_textfile.c](./0-read_textfile.c)             |   ssize_t read_textfile(const char \*filename, size_t letters);    | Reads data from a text file and stores it into a buffer.                                                         |
  | [1-create_file.c](./1-create_file.c)                 |     int create_file(const char *filename, char *text_content);     | Creates a new file and writes data into it. Can also write data into an existing file, overwriting its contents. |
  | [2-append_text_to_file.c](./2-append_text_to_file.c) | int append_text_to_file(const char *filename, char *text_content); | Appends text to the end of a file.                                                                               |

- ### _Files with Programs as Targets_ 📃
  | **FILE**                               |                                       **PROGRAM FUNCTION**                                       |
  | :------------------------------------- | :----------------------------------------------------------------------------------------------: |
  | [3-cp.c](./3-cp.c)                     | Contains a program that emulates the functionality of the 'cp' command found in Linux terminals. |
  | [100-elf_header.c](./100-elf_header.c) |          Displays information contained in the ELF header at the start of an ELF file.           |

## See Also

<details>
  <summary></summary>
  
  1. The _putchar file is provided by ALX.
  2. Test folder:
     * The test folder contains additional files that may not be directly related to the ALX SE.
     * Feel free to disregard any .swp files present in this directory.
</details>

**Author:** Oreoluwa
