/*
ESCRIBA UN PROGRAMA QUE CALCULE EL PROMEDIO DE CUATRO NOTAS INGRESADAS POR EL USUARIO.
DIGA CUAL ES LA NOTA MAYOR Y CUAL ES LA NOTA MENOR
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
	int contador=0;
	int acum=0;
	double nota,promfinal;
	char opc='s';
	do{
		system("cls");
		
		do{
			printf("Ingrese Nota: ");
		scanf("%lf",&nota);
		acum = acum + nota;
		contador = contador + 1;
		
		}while (contador<=9);
	if(acum<=0){
			printf("Notas invalidas, no es posible sacar promedio. \n");
		}
		else{
			promfinal = acum/4;
			printf("Tu promedio final es: %.2f \n",promfinal);
		}
	printf("Desea reiniciar la ejecucion? (s/n): ");
	scanf(" %c",&opc);
	}while (opc=='s' || opc=='S');
return 0;
}