# Derivative Calculator 
by: **Tausif Tamim** and **Muhammad Rashid**



## Introduction

### Why make a Derivative Calculator?

Creating a program to find the derivative is notoriously difficult in C Programming. While Python and Matlab can find the derivative in minutes, C language cannot. These two types of functions serve to fulfill different purposes. Matlab and Python are list operator programs that are expecially designed to utilize numbers. C programming is creative text manipulation based.

Being college freshman, all of us have surely used online calculators to find the derivative of a function before, whether we like to admit to it or not. With the importance of a derivative calculator being obvious, why not try and make it in C?

### What does this project do?

This program does exactly what it is named after: it finds the derivative. We created a program that can find the derivative of ANY linear, binomial, and trinomial function. Having this snappy program allows anyone who possesses the code to find the derivative of their desired function quickly.


## Technical Discription



### User Input and Switch

The first thing we did was create a user input key to make the user choose between three types of functions. We used the switch method and assigned an integer to each of the three cases and based on the integer, a part of the switch activates while the others do not run.

### Creating A Data Bank For Each Type of Function

For each type of function, we make an array which is like a databank. For example, we use y = mx + b. 'm' and 'b' can be any number, so we need to user to "replace" them somhow. So using the illusion of a databank array, we use a for loop to let the user know which variable they would be changing. We then take the input from the user and place it in a fresh new array.

### Returning the Derivative:

To Return the Derivative we have our array of the variables we replaced, which are our ...vals[x], we simply just printf the value using a template of how to find the derivative. For example 3 x ^ 2.

The derivative of that is 6 x ^ 1  so we replace the a and b on a x ^ b with (ab) x ^ (b-1).
