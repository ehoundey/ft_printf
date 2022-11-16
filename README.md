# ft_printf
42cursus' project
The printf function is one of the most versatile and well-known functions in the C language.From a testing aid to tabulation method, printf is a very powerful and important tool in everydev's kit. This project aims to recreate the behaviour of the original MacOS's printf, includingits basic error management, some of its flags, minimum field width stipulation and most of itsbasic conversions.

Features
Passed 3 tester
Sanatana Tester
Tripouille Tester
Mazoise Tester (Optional) -- to join Kitty Club
Support Linux and Mac environment
Cover all bonus flag and * flag
Mandatory
A small description of the required conversion:

%c print a single character.
%s print a string of characters.
%p The void * pointer argument is printed in hexadecimal.
%d print a decimal (base 10) number.
%i print an integer in base 10.
%u print an unsigned decimal (base 10) number.
%x print a number in hexadecimal (base 16).
%% print a percent sign.
Bonus
Manage any combination of the following flags:

-0. and minimum field width with all conversions
Manage all the following flags: # +(yes, one of them is a space)

Conversions & Flags & Expected Order
Conversion	Description	Project
c	Single ascii character	Mandatory
s	String of characters NULL terminated	Mandatory
p	Pointer location converted to hexadecimal value	Mandatory
d	Decimal number	Mandatory
i	Integer in decimal base	Mandatory
u	Unsigned integer in decimal base	Mandatory
x	Unsigned number printed in lowercase hexadecimal base	Mandatory
X	Unsigned number printed in uppercase hexadecimal base	Mandatory
%	The '%' ascii character	Mandatory
o	Unsigned number printed in octal base	Extra

My Results: 
![photo_5451975900531901929_m](https://user-images.githubusercontent.com/118346014/202169031-9f73647c-f60c-4bd8-bbc4-27ee8cbe5119.jpg)
