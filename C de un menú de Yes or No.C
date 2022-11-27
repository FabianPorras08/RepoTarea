//Fuente de código extraída de: https://algoritmosyalgomas.com/plantilla-de-un-menu-de-opciones-en-lenguaje-ansi-c/

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int main()
{
    int opcion;
    char repetir = TRUE;
    
    do {
        system("cls");
        
        // Texto del menú
        printf("\n\n¿Desea permanecer dentro del codigo?\n");
        printf("1. Yes\n");
        printf("2. No");
        
        printf("\nIngrese una opcion: ");
        scanf("%d", &opcion);
        
        switch (opcion) {
            case 1:
                printf("Yes");
                system("pause>nul"); // Pausa
                break;
                
            case 2:
            	repetir = FALSE;
            	break;
        }           
    } while (repetir);
	 
    return 0;
}
