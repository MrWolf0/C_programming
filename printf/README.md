# printf function

In this project We implement C built in function printf we some limits of its features


| File              | discription                             |
| ----------------- | --------------------------------------- |
| `main.c`          | `test our function`                     |
| `main.h  `        | `contain prototpye functions;`          |
| `number_print`    | `function to print integer values;`     |
| `_printf`         | `the function that we impelemen`        |
| `_putchar`        | `print char by char`                    |
| `mod_print`       | `print % sympol if pass it to _printf`  |
| `print_char`      | `print one char if we pass %c`          |
| `print_string`    | `print a string passed to _printf`      |
| `specifiers`      | `contain printf options`                |


## Project discription:

* **main.c**
  * test some cases of our printf by passing the specifier and the function will  print the
   correct value such as `int` and `hex` formate.

* **main.h**
  * contain all prototype functions and the structure used also contain `stdarg.h` file that help
   to manage our work by using variable list to handle more than value passed to the function.

* **number_print**
  * this function is used to handel how to print integer value usnig `ASCII` conversion and its type `variadic function`.

* **_printf**
  * this function in to take the input and pass to specifer function as a variable list to print the right content
  by calling the right specifer.

* **_putchar**
  * by using write function we impelemented the putchar function to write char by char.

* **specifier**
  * a variadic function that callig the right specifer and calling a pointer function that store address of passing 
  list from `_printf` function its depands on struct define in `main.h`.
* **mod_print**
  * print the sympol % as a sympol not as a spichall char for printf if we pass % to printf mean that we will pass a specifier'
  so if pass % inested of a specifier so that function handel that case.
* **print_char**
  * print one char as a specifier input 
* **print_string**
  * function to handle hoe to print string by return -1 if we initialize the string as an empty string and pass it to printf
  also retur null if we use the specifier %s without pass any data
  and if we pass a string containing data the function return positive value of how many characters passed so if the return value 
  is positive value the fuction executed successfully
  
  
  
  
  
  
  
  
  
  
  
  
  
  
