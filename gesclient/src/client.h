#ifndef __CLIENT__H__
#define __CLIENT__H__
typedef struct{
    int j;
    int m;
    int a;
}date;
typedef struct{
    char id[10];
    char nom[30];
    char prenom[30];
    char email[30];
    char adresse[30];
    char num[30];
    date dateNaissance;
    char ville[20];
    char sexe[7];
}Client;

/*--------------------- CRUD -------------------*/
void afficher_clients(GtkWidget *liste);
void ajouter_client(Client c);
void supprimer_client(char id[]);
int verif_client(char id[]);
void modifier_client(Client c);
int idExiste(char id[]);
int verifName(char c[]);
int verifier_date(int j,int m,int a);
Client find_client(char id[]);
int verifNum(char c[]);
int anneseche();
int verif(char log[],char Pw[]);
#endif

