#include <stdio.h>

typedef struct {
    char Nome[20];
    char Cognome[30];
    int Eta;
} t_Persona;

int main() {

    t_Persona compagnoDiBanco;

    printf("Inserisci il nome del tuo compagno di banco: ");
    scanf ("%s", &compagnoDiBanco.Nome);

    printf("Inserisci il cognome del tuo compagno di banco: ");
    scanf ("%s",&compagnoDiBanco.Cognome);

    printf("Inserisci l'eta' del tuo compagno di banco: ");
    scanf("%d", &compagnoDiBanco.Eta);

    printf("\nInformazioni del compagno di banco:\n");
    printf("Nome: %s\n", compagnoDiBanco.Nome);
    printf("Cognome: %s\n", compagnoDiBanco.Cognome);
    printf("Eta': %d\n", compagnoDiBanco.Eta);

    return 0;
}
