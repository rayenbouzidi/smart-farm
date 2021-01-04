#include <gtk/gtk.h>
typedef struct{

char annee[10];
char mois[5];
char jour[5];
}Date;

typedef struct
{
char id[30];
char type[30];
char genre[30];
char naissance[30];
Date Ab;

}troupeau;
void ajouter_troupeau(troupeau o);
void afficher_troupeau(GtkWidget *liste);
void afficher_absence(GtkWidget *liste);
void supprimer_troupeau(char refer[]);
void modifier_troupeau(troupeau o);
int verifier_id(char ID[]);
void enregristrer_absence (troupeau o);

