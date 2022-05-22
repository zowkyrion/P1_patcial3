/* Autor: Pasantes Bucio Jaime 28/04/2022
	Hacer un programa que pida el nombre de un archivo e imprima su contenido 
	en pantalla , Imprimiendo caracter por caracter 
*/
#include<stdio.h>
#include "milibreria.h"

int main(){
	char nombre[50], c;
	FILE *f;
	int n=0, lineas=0;
	leers("Nombre del archivo:",nombre,50);
	//Abrir el archivo
	f=fopen(nombre,"r");
	//Verificar si se abrio correctamente el archivo
	if (f==NULL) {
		printf("Error al tratar de abrir el archivo\n");
	}
	else{
		//Proceso 
		while(1){
			c=fgetc(f);
			printf("%c\n",c);
			n++;
			if (c==EOF){
				break;
			}
			else if (c==10){
				lineas++;
			}
		}
		//Cerrar
		fclose(f);
		printf("\n--------->El archivo contiene %d caracteres\n",n);
		printf("\n--------->El archivo contiene %d lineas\n",lineas);
	}
		
	return 0;
}
