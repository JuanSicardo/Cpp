**Español más abajo**

# Week 9 - Functions
In this week of the course I reviewed the topic of functions in C++. **The code of this week was copied from the course material**.

#### makefile
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

#### analizedigits.cpp
This program reads a positive integer **num**, and prints the number of digits in **num** and their sum.

#### kcombinations.cpp
Let **n** and **k** be two nonnegative integers, such that **k <= n**. We define **k-combinations** as the number
of unordered selections of **k** distinct elements from the set of size **n**. The **k-combinations** of a set of **n** elements
its also called "n choose k". The formula for **n choose k** is: **n! / [(n-k)! k!]**.
This program reads from the user two positive integers **n**, **k (n >= k)** and prints the value of **n choose k**.

#### solvequadraticequation.cpp
This program reads 3 real numbers, representing coefficients of a
quadratic equation, and prints the solution of the equation, if there are any,
or an appropriate message.

# Semana 9 - Funciones
En esta semana del curso se repasó el tema de funciones en C++. **El código de esta semana se copió del material del curso**.

#### makefile
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

#### analizedigits.cpp
Este programa lee un entero positivo **num** e imprime el número de dígitos en **num** y su suma.

#### kcombinations.cpp
Sean **n** y **k** dos enteros no negativos, tales que **k <= n**. Definimos las **k-combinaciones** como el número
de selecciones desordenadas de **k** elementos distintos del conjunto de tamaño **n**. Las **k-combinaciones** de un conjunto de ** n ** elementos
también se llama "n combinado k". La fórmula para **n combinado k** es: **n! / [(n-k)! k!]**.
Este programa lee del usuario dos enteros positivos **n**, **k (n> = k)** e imprime el valor de **n elige k**.

#### solvequadraticequation.cpp
Este programa lee 3 números reales, que representan coeficientes de un
ecuación cuadrática, e imprime la solución de la ecuación (si hay alguna),
o un mensaje apropiado.