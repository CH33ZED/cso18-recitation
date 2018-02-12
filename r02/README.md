Tutorial 2
==========

Type **make** to compile all four programs.  

## Exercise 1 
Carefully read e1.c and decide what is the correct value of **answer** on line 56 in order to print **3360153** instead of 1198. Note that you can only modify line 56.

Hint: To compile, type **gcc e1.c**.  
Hint: Some function calls can be ignore. After figuring out the unnecessary function calls, this question becomes a simple algebra question.
Question: From the mathmetical view, there is only one solution. However, there are multiple solutions for e1.c. Why? (You don't need to sumbit the answer for this "Why?")

## Exercise 2
For this exercise, you need to modify the values of **i** and **j** on line 6 and line 7 respectively so that the output is **-28**. It's easy to get the answer by trial and error but you should understand the meaning of the answer. Note that there are multiple answers. You can pick any one of them.

## Exercise 3
Modify the value of **answer** so that the output is **1069547520**. Note that you can only modify line 6.

Hint: First convert the desired output to a 32-bit binary.  
Hint: Think about the meaning of a pointer.  
Hint: You shall find the floating-point format useful.

## Exercise 4
Modify the value of **answer** so that the output is **39661568**. Note that there are multiple answers. You can pick any one of them. Note that you can only modify line 6.

Hint: What are bitwise shift operators for?

## What to submit and how to submit??
Before submitting your solution, you can type **git diff** to see what you have changed. Be sure to change those lines discussed in above descriptions.
You need to submit all four modified files.  
**git add e1.c e2.c e3.c e4.c**     
**git commit -m "r02"**     
**git push**     

**Due: Feb 12, 2018**
