/*En este tutorial para aprender C estaré creando una tabla y en el proceso expicando lo que 
hace cada función exceptuando lo que ya mostré en el anterior*/

// Aquí se creará una tabla que muesta la conversión de far a cel (temperatura)
#include <stdio.h>

int main(void)
{

	float far, cel; //aquí se crean las variables far y cel y como en C hay que especificar correctamente el
	//el tipo de dato pongo delante float que son los decimales cortos

	int min = 0; //en este caso int se utiliza para los enteros - valor minimo 0
	int max = 300; //uso el = y le doy un valor a la variable   - valor maximo 300
	int can = 20;  //recordar que como ya lo dice el nombre es una variale el valor puede variar - aumento en 20

	far = min; //cambio el valor de far por el minimo es decir 0
	
	printf("Far:  Cel:\n"); /* Ya se que anteriormente expliqué lo que hace la funcion printf() pero bueno 
	ahorea regreso a explicar que en C normalmente todo se ejecuta en el orden en el que lo escribas, lo
	que quiero decir con esto es que no puedes ejectuar ejemplo una variable si esta la creaste debajo de
	donde una función la utilizará es decir que hay que tener muy en cuenta el orden en el que hacemos las
	cosas (Lo que hace aquí printf como ya se ve es imprimir sobre la tabla en el lado correspondiente a 
	cada columna cual es la misma) */
	


/* Ahora vamos con lo siguiente, que es la funcion WHILE, en la misma dentro tenemos que far es menor o 
igual al límite maximo, por lo que la función significa algo como: Bueno siempre que se cumpla mi propiedad 
"far <= max" entonces repetiré lo que se encuentra dentro de mi cuerpo (a que me refiero con cuerpo, pues 
a todo lo que se encuentre dentro de: {} )*/
	while(far <= max){

		/* ahora voy a ir paso por paso, primero, aquí debajo le doy un valor a la variable cel en este caso
		una ecuacion que lo que hará sera resolverla para tomar el valor resultante*/
		cel = (5.0/9.0)*(far-32.0);

		printf("%3.0f\t%6.1f\n", far, cel);
				/* justo por aquí tengo el printf que (Al igual que cuando creamos una funcion tenemos que decir su 
		tipo) para imprimir el valor de una variable entre las comillas utilizaremos el signo % y la abrevi
		-acion de su típo (en este caso como es un decimal corto o float utilizo %f) si te das cuenta entre 
		estos se encuentra 3.0 que lo que dice es el numera antes del punto se escribirá hasta un tamaño de
		tres lugares y luego del punto cero lugares, lo mismo pasa con 6.1 todo esto se pondra en el lugar del
		texto a imprimir en el que queremos que se encuentre el valor 
		
		
		( ejemplo: int nombre = Miguel;
		          printf("Hola! Mucho gusto %i\n", nombre); "%i este se utiliza para los enteros"

		esto Imprimiria lo siguiente:
		Hola! Mucho gusto Miguel )  

		ahoro que expliqué como se debe especificar donde y el tipo de variable que se imprimirá también 
		deben decirle que variable ha de imprimirse pues creo que por más avanzada que sea la teconlogía
		tampoco adivina 
		esto es de la siguiente manera, como se observa luega de todo lo que esta dentro de las comillas 
		hay una "," y seguido el nombre de la variable que en este caso seria a las que queremos llamar/im
		-primir "nombre" segun el ejemplo, ten en cuenta que esto lo debemos escribir en el orden que quer
		-emos que sea imprimida

		También tenemos entre ambos "%f" esto "\t" que le dice al programa que entre lo que  va a imorimir
		deje un espacio de un tab que en mi caso serian 4 espacios 

		Y pues creo que con esto ya deberias entender lo que hace lo que se encuentra dentro de printf*/


		far = far + can; /*ahoro aqui lo que hago es modificar otra vez la variable far tomando el valor 
		que tenia anteriormente 0 con el de can 20 lo que es igual a 0+20*/
	

		/* continuando con la función while y casi finalizar con este tuto explicar su funcionamiento junto
		con lo que se encuentra dentro de ella
		1- inicia la funcion y revisa que far sea menor o igual max como sera cierto continuara con el proceso
		2- cambia el valor de cel como expliqué anteriormente
		3- luego imprime en la pantalla el primer valor que encuentre de far y el que encuentre de cel a una 
		distancia ya especificada
		4- camia el valor de far sumandole 20
		5- vuelve al inicio de la funcion y tomando en cuenta que que el valor de far cambio se vuelve a pregu
		-ntar si este es menor que max (300) como el valor ahora es 20 sigue siendo cierto y continua
		6- se repite el calculo de cel pero tomando en cuenta el nuevo valor de far 
		7- imprime los ahora nuevos valores 
		8- se vuelve a sumar 20 a far siendo ahora cuarenta y continua como expliqué anteriormente 
		......................................................................................................
		9- ahora para finalizar cuando el valor de far llegue a 300 y se le vuelva a sumar 20 al este ya no 
		cumplir con lo que especifica while debido a que seria mayor justo entonces finaliza la función y dado
		que no hay mas código que ejecutar entonces termina el programa imprimiendo asi en la terminal la tabla
		terminnada de su valor minimo a maximo*/
	}

	return 0;
}