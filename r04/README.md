Tutorial 5
==========
In this tutorial, you are going to learn how to use **objdump** and **gdb** to do reverse engineering. The exercises here is the simplified version of lab3. You must understand how to solve the exercises by yourself so that you can do lab3 (and also for midterm 2).


Steps
-----
1. Type **make**.
2. Type **./e1\_reference** and **./e2\_reference**. You should see **Correct answer** for both commands.
  *  **eN\_reference** are made by **eN\_reference.o** and **eN\_driver.o**
3. Type **./e1\_sol** and **./e2\_sol**. You should see **Wrong answer** for both commands.
  *  **eN\_sol** are made by **eN\.o** and **eN\_driver.o**
4. Your job is to use **objdump** and **gdb** to decipher what **e1\_reference.** and **e2\_reference.o** do and write the corresponding C functions in e1.c and e2.c. In other words, your implementation will let you get **Correct answer** when executing **./e1\_sol** and **./e2\_sol**.

Advices
-------
You will find [Intel instruction set manual](https://www.intel.com/content/dam/www/public/us/en/documents/manuals/64-ia-32-architectures-software-developer-instruction-set-reference-manual-325383.pdf) and [Google](https://google.com) useful. Yes, Google the instruction when you really hate to look it up in the manual. When reading **Makefile** you will see that we pass **-Og** to gcc so that it uses [System V AMD64 ABI](https://en.wikipedia.org/wiki/X86_calling_conventions#System_V_AMD64_ABI) as the calling convention. You have to understand System V AMD64 ABI calling convention before digging into the assembly code.

objdump
-------
Using objdump is easy. Just type **objdump -d TARGET.o**. For example, to decipher **e1\_reference.o**, simply type **objdump -d e1\_reference.o**. What you will see is purely assembly code. To know what does the function perform, you may have to write down how every instruction is used in the function.

gdb
---
Using gdb is less straightforward than objdump. First type **gdb TARGET**. For example, to use gdb to decipher **e1\_reference.o**, type **gdb ./e1\_reference** (question: why e1\_reference instead e1\_reference.o?). Now you need to set a break point to the function in **./e1\_reference.o** so that you can use gdb to track it instruction by instruction. What is the function name in **e1\_reference.o**? You can figure that out by using objdump (or just read e1.c :)). Below lists the GDB commands you will use in order to do this tutorial (and lab3).

1. Set a break point: **b FUNCTION\_NAME**, e.g. **b e1**.
2. Show the assembly: **layout asm**.
3. Run the program: **run**.
4. Run instruction by instruction when the program is break by GDB => **si**.
  *  Usually we use **s** because we want to run line by line (one line in the C program) but we don't have the C source code.
5. Show registers information => **i r REGISTER**, e.g. **i r eax**.

resource
--------
[X86 Assembly/GAS Syntax](https://en.wikibooks.org/wiki/X86_Assembly/GAS_Syntax)

## What to submit and how to submit??
Before submitting your solution, you can type **git diff** to see what you change. Be sure to change those lines or functions specified in above descriptions.  
You need to submit all two modified files.  
**git add e1.c e2.c**   
**git commit -m "r05"**  
**git push**

**Due: Mar 19, 2018**
