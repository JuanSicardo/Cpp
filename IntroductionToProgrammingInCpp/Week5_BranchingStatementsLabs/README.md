**Español más abajo**

# Week 5 - Branching Statements Lab
This week exercises were carried out to evaluate how the branching statements (if - else, switch) work. **This week's code is original**.

## makefile
Makefile format with which the programs in this directory can be compiled. To compile all the programs in this directory, use:

```
make
```

or:

```
make all
```

To compile only a specific program you use:

```
make [program]
```

Where [program] is the name of the program file without the extension ".cpp"

## countoddeven.cpp
This program receives four integers separated by spaces. The program counts how many odd and even numbers there are. The program then outputs one of three possibilities depending on how many even and odd numbers are entered:
* More evens
* More odds
* Same number of evens and odds

## gradeclass.cpp
This program reads two grades (0 - 100) separated by a space. 
* If both grades are below a score of sixty then the program should output the message: "Student Failed :(". 
* If both grades are greater than or equal to ninety five then the program should output the message: "Student Graduated with Honors :)".
* Otherwise the program should output the message: "Student Graduated!".

## isleapyearc.cpp
This program determines if a year is a leap year or not. In the Gregorian Calendar system years are leap years if they are divisible by 4 but not by 100 unless it is also divisible by 400. The program takes in a year as input (as a command line argument) and returns the string "{year} was a leap year" if true and "{year} was not a leap year" if false.

# Semana 5 - Laboratorios de Estructuras de Selección
En esta semana se realizaron ejercicios para evaluar el funcionamiento de las estructuras de selección (if - else, switch). **El código de esta semana es original**.

## makefile
Formato makefile con el cual se pueden compilar los programas de este directorio. Para compilar todos los programas de este directorio se usa:

```
make
```

o:

```
make all
```

Para compilar solo un programa en específico se utiliza:

```
make [programa]
```

Donde [programa] es el nombre del archivo de programa sin la extensión ".cpp".

## countoddeven.cpp
Este programa recibe cuatro enteros separados por espacios. El programa cuenta cuántos números pares e impares hay. Luego, el programa genera una de tres posibilidades, dependiendo de cuántos números pares e impares se ingresen:
* Más pares
* Más impares
* Mismo número de pares e impares

## gradeclass.cpp
Este programa lee dos calificaciones (0 - 100) separados por un espacio.
* Si ambas calificaciones están por debajo de un puntaje de sesenta, entonces el programa debería mostrar el mensaje: "Student Failed :(".
* Si ambas calificaciones son mayores o iguales a noventa y cinco, el programa debe mostrar el mensaje: "Student Graduated with Honors :)".
* De lo contrario, el programa debería mostrar el mensaje: "Student Graduated!".

## isleapyearc.cpp
Este programa determina si un año es bisiesto o no. En el sistema del calendario gregoriano, los años son bisiestos si son divisibles entre 4 pero no entre 100 a menos que también sean divisibles entre 400. El programa toma un año como entrada (como un argumento de línea de comando) y devuelve la cadena "{año} was a leap year" si es cierto y" {año} was not a leap year" si es falso.