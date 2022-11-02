#include <stdio.h> //David Alejandro Sandoval Quijano 00379422
int main(){
   
    FILE *notas = fopen("notas.txt", "r"); //leemos el archivo previamente hecho
    
    if (notas == NULL){
        printf("ERROR!!!");
        return 1;
    }

    float not, suma = 0;
    
   while(!feof(notas)){
        fscanf(notas, "%f", &not);//recibe los datos del doc en txt
        if(not > 0){
            suma = suma + not;//como revisa cada dato hasta que no haya nada, cada dato que encuentre lo suma
        }
    }
        printf("El promedio de las notas es: %.2f", suma / 5); //como hemos puesto 5 notas en el txt, ya sabemos entre cuanto dividirlo

    fclose(notas);
    return 0;   
}