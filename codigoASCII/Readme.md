# Programa para mostrar código ASCII en pantalla

Programa escrito en lenguaje C que muestra en pantalla los caracteres imprimibles del código [ASCII](https://es.wikipedia.org/wiki/ASCII) Se pretende diseñar y construir un programa que permita imprimir en pantalla los códigos numéricos correspondientes a los caracteres ASCII, con la finalidad de conocerlos.

Para la construcción del programa propuesto, se procederá a plantear las diferentes etapas necesarias para la construcción de un programa, partiendo del análisis de los datos que deben ser manipulados, el diseño del algoritmo necesario para su construcción, y su codificación en el lenguaje de programación C.

Para el diseño de este algoritmo no se requiere el ingreso de ningún tipo de información por parte del usuario, por consiguiente el conjunto de datos de entrada es el conjunto vacío. 

Precondición {Ø}

Los datos que se requiere al final del algoritmo son los caracteres imprimibles del código ASCII, junto con su equivalente código numérico correspondiente a dicho carácter.

Poscondición {x | x = carácter imprimible del código ASCII, y | y = código numérico del carácter ASCII}

Primeramente se debe determinar cuál es el primer carácter ASCII imprimible y cuál es el último, para posteriormente determinar su valor numérico y mostrarlos ambos en pantalla. El primer carácter ASCII imprimible es el símbolo signo de admiración (!), al cual le corresponde el valor numérico 33 y el ultimo carácter imprimible es la tilde (~), al cual le corresponde el valor numérico 126.

Para mostrar en pantalla los caracteres ASCII imprimibles y los códigos numéricos correspondientes a cada símbolo, se debe conocer el concepto de [tipo de dato](https://es.wikipedia.org/wiki/Tipo_de_dato) carácter. El tipo de dato carácter se usa para representar un carácter específico del grupo de caracteres ASCII. Para representar un carácter, se debe encerrar entre comillas simples de la siguiente manera ‘a’.

Para mostrar el código numérico de cada carácter ASCII se debe tener claro la conversión de un dato carácter en su correspondiente valor numérico. Para mostrar el valor numérico de un carácter ASCIi, se debe hacer la transformación de dicho valor, indicando entre paréntesis el tipo de valor al cual se quiere convertir dicho carácter, de la siguiente manera (entero) ‘a’. Un valor numérico corresponde a un valor entero entre 0 y 32768, el cual puede ser usado en cualquier operación que amerite un cálculo numérico.

Para poder visualizar todos los caracteres ASCII y su correspondiente valor numérico de manera correcta en la pantalla, se debe conocer el funcionamiento del ciclo repetitivo [para](https://es.wikipedia.org/wiki/Bucle_for), el cual permite repetir una secuencia de instrucciones un número determinado de veces dentro de un rango determinado. La sentencia repetitiva para, se repite indicándole el valor inicial del rango que se quiere usar, la condición de finalización de dicho rango y el formato de pasos de dicho ciclo repetitivo, si se quiere hacer incrementando en la unidad, de dos en dos o el incremento que sea necesario.

El ciclo para se expresa de la siguiente manera

para (valor inicial; condición de parada; patrón de incremento){ Bloque de sentencias }

```c
#include <stdio.h> 

int main(){ 

int i; 

for(i=33;i<127;i++){   
printf(“%d\t%d\n”,I,(char)i);   
} 

return 0; 

}
```
