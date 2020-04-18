//Codigo de implementacion del metodo de Euler
//En la funcion se modifica la expresion a la que se quiere aproximar su valor

#include <stdio.h>
#include <math.h>

float funcion(float t, float w){
    //Funcion a modificar
    return (-3)*pow(t,2)*w;
}

int main(void){

    // Definicion de variables a usar
    float a, b, y0, h, w ,t;
    int N;
    
    printf("Este es un programa que implementa el metodo de Euler para una funcion especifica\n");
    printf("Se solicitan los valores del intervalo de tiempo a evaluar, el numero de intervalos\n");

    //Ingreso de datos
    //Ingreso de intervalo de tiempo
    printf("\nIndique el intervalo inferior de calculo");
    scanf("%f", &a);
    a = 0;
    printf("\nEl valor inicial del intervalo es %f", a);
    //INtervalo inicial de tiempo
    t=a;

    printf("\nIndique el intervalo superior de calculo");
    scanf("%f", &b);
    b = 0.5;
    printf("\nEl valor final del intervalo es %f", b);
    
    //Ingreso del valor de los incrementos
    printf("\nIndique el valor de los incrementos");
    scanf("%f", &h);
    h = 0.1;
    printf("\nEl valor de los incrementos es %f", h);
    
    //Ingreso del valor inicial
    printf("\nIndique el valor inicial de la funcion");
    scanf("%f", &y0);
    y0 = 3;
    printf("\nEl valor inicial de la funcion es %f", y0);
    //Valor inicial de la funcion
    w = y0;
    
    //Calculo de numero de pasos del metodo
    N = (int) (b - a) / h;
    printf("\n%f", (b-a)/h);
    printf("\n%d", (int) (b-a)/h);
    N = 5;
    printf("\nSe ejecutaran %d incrementos", N);
    
    
    //Calculo de los valores de la funcion
    //Valores iniciales
    printf("\nCondiciones iniciales");
    printf("\nY0\t\tt");
    printf("\n%f\t%f", w, t);
    
    printf("\n\nValores sucesivos\n");
    printf("N\tt\t\ty");
    for(int i = 1; i <= N; i++){
        w = w + h*(funcion(t, w));
        t=t+h;
        printf("\n%i\t%f\t%f",i, t, w);
    }
    
    printf("\n\nValor aproximado: \t%f", w);

    return 0;
}

