#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definisci le costanti
#define N 3
#define MAX_STRLEN 30
#define FNAME "elenco.csv"

// Definisci il tipo di dato struct s_studente
struct s_studente {
    char nome[MAX_STRLEN+1];
    char cognome[MAX_STRLEN+1];
    int eta;
    char classe[MAX_STRLEN+1];
};

// Definisci studente come struct s_studente
typedef struct s_studente studente;

int main(int argc, char** argv) {
    FILE *outFile;
    studente alunno;
    int i;
    
    outFile = fopen(FNAME, "w");
    if(outFile){
        fprintf(outFile, "nome;cognome;eta';classe\n");

        for(i=0;i<N;i++) {
            printf("Inserisci il nome: ");
            scanf("%s", alunno.nome);
            fprintf(outFile, "%s;", alunno.nome);

            printf("Inserisci il cognome: ");
            scanf("%s", alunno.cognome);
            fprintf(outFile, "%s;", alunno.cognome);

            printf("Inserisci l'eta': ");
            scanf("%d", &alunno.eta);
            fprintf(outFile, "%d;", alunno.eta);

            printf("Inserisci la classe: ");
            scanf("%s", alunno.classe);
            fprintf(outFile, "%s\n", alunno.classe);
            printf("\n");
        }

        fclose(outFile);
    }else {
        printf("Impossibile creare il file");
    }
    
    return (EXIT_SUCCESS);
}