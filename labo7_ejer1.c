#include <stdio.h> //David Alejandro Sandoval Quijano 00379422
int main(){
   
    FILE *nume_pos = fopen("numeros_positivos.txt", "w");
    FILE *nume_neg = fopen("numeros_negativos.txt", "w");

    if (nume_pos == NULL){
        printf("ERROR!!!");
        return 1;
    }
    if (nume_neg == NULL){
        printf("ERROR!!!");
        return 1;
    }

     int cant=1;

            do{
                printf("Escriba un numero entero: ");
                if(cant > 0){
                    scanf("%d", &cant); //lo escribe en el primer archivo
                    fprintf(nume_pos, "%d",cant);
                    fprintf(nume_pos,"\n");
                }
                else if (cant < 0){ //lo escribe en el segundo archivo
                    scanf("%d", &cant);
                    fprintf(nume_neg, "%d",cant);
                    fprintf(nume_neg,"\n");
                      }
            }
            
            while(cant != 0);

    
    fclose(nume_pos);
    fclose(nume_neg);
    return 0;
}