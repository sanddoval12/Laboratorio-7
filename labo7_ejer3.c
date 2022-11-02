#include <stdio.h> //David Alejandro Sandoval Quijano 00379422
int main(){

    int conta=0, conte=0, conti=0, conto=0, contu=0;
    int i = 0;
    char n[50]; //hay un limite de 50 caracteres dentro del arreglo
    printf("Por favor escriba una palabra o frase sin espacios: ");
    scanf("%s", &n);
    printf("Su palabra escrita ha sido: %s\n", n);

     while(n[i] != '\0'){ //mientras en el arreglo no encuentre un espacio, se ejecuta
        if (n[i] == 'a'){
            conta++;
        }
        else if(n[i] == 'e'){
            conte++;
        }
         else if(n[i] == 'i'){
            conti++;
        }
         else if(n[i] == 'o'){
            conto++;
        }
         else if(n[i] == 'u'){
            contu++;
        }
        i++; //cuando termina la primera posicion, suma +1 en los contadores hasta que termina la palabra
     }
    printf("%d veces se repite la a\n", conta);
    printf("%d veces se repite la e\n", conte);
    printf("%d veces se repite la i\n", conti);
    printf("%d veces se repite la o\n", conto);
    printf("%d veces se repite la u\n", contu);

    return 0;
}