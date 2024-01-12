# 0x17. C - Doubly linked lists

## Overview

This project focuses on understanding and implementing doubly linked lists in the C programming language. It is part of the CAlgorithmData structure series created by Julien Barbier. The project aims to enhance your understanding of doubly linked lists and how to perform various operations such as deletion and insertion on them.

## Project Details

- **Author:** Julien Barbier
- **Weight:** 1
- **Project Duration:** Jan 11, 2024, 6:00 AM - Jan 12, 2024, 6:00 AM
- **Checker Release:** Jan 11, 2024, 12:00 PM
- **Auto Review:** An auto review will be launched at the deadline.

## Resources

Read or watch:

- [What is a Doubly Linked List](#)

## Learning Objectives

By the end of this project, you should be able to explain the following concepts without external assistance:

- **General**
  - What is a doubly linked list
  - How to use doubly linked lists
  - Understand and implement various operations (deletion, insertion, etc.) with doubly linked lists
  - Develop the ability to find the right sources of information independently

## Copyright - Plagiarism

- You are expected to solve the tasks independently to meet the learning objectives.
- Do not copy and paste someone else's work.
- Publishing any content of this project is not allowed.
- Strictly avoid plagiarism, as it will result in removal from the program.

## Requirements

### General

- **Allowed Editors:** vi, vim, emacs
- **Compilation Environment:** Ubuntu 20.04 LTS using python3 (version 3.8.5)
- **File Endings:** All files should end with a new line
- **Mandatory File:** README.md at the root of the project folder
- **Coding Style:** Use the Betty style, checked using betty-style.pl and betty-doc.pl
- **Global Variables:** Not allowed
- **Functions per File:** No more than 5 functions per file
- **C Standard Library Functions:** Only allowed: malloc, free, printf, and exit
- **Main Files:** main.c files are provided as examples for testing functions, but not mandatory for submission
- **Prototypes:** Include prototypes of all functions in a header file called lists.h
- **Header Files:** All header files should be include guarded

## More Information

Please use the provided data structure for this project:

```c
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```

## Quiz Questions

Answer the following quiz questions related to the project.

1. [Question 1]
2. [Question 2]
3. [Question 3]

## Instructions

Follow the guidelines and complete the tasks to achieve the learning objectives. Remember to adhere to the specified coding standards and project requirements. Good luck with your project!
