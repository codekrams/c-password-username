#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ANZAHL 2
char *passwortverschluesseln(char*);
char *passwortentschluesseln(char*);

struct benutzer {
    char benutzername[100];
    char passwort[100];
};
typedef struct benutzer BENUTZER;

int main()
{
    char passwortpruef[100];
    char passworterst[100];
    int laenge;
    BENUTZER benutzer;
    printf("Bitte geben Sie Ihren Benutzernamen ein:\n");
    scanf("%s", benutzer.benutzername);

    printf("Bitte geben Sie das Passwort ein:\n");
    scanf("%s", benutzer.passwort);
    passwortverschluesseln(benutzer.passwort);


    printf("Bitte wiederholen Sie die Passworteingabe:\n");
    scanf("%s", passwortpruef);
    passwortverschluesseln(passwortpruef);

     if (strcmp(passwortpruef,benutzer.passwort)==0){
            printf("Die Passworteingabe ist korrekt");
            }
    else {
            do{
            printf("Bitte Wiederholen Sie die Eingabe:\n");
            scanf("%s", passwortpruef);
            passwortverschluesseln(passwortpruef);
            }while (strcmp(passwortpruef,benutzer.passwort)!=0);
            printf("Die Passworteingabe ist korrekt");
        }

    return 0;
}

char *passwortverschluesseln(char *passwort){

    for(; *passwort!='\0'; passwort++){
        *passwort=*passwort+1;
    }
    return passwort;

}

char *passwortentschluesseln(char *passwort){

    for(; *passwort!='\0'; passwort++){
        *passwort=*passwort-1;
    }
    return passwort;

}
