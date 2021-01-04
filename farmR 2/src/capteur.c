#include <stdio.h>
#include <gtk/gtk.h>
#include <string.h>
#include <ctype.h>
#include "capteur.h"



enum
 {
  ENOM,
  EID,
  ETYPE,
  EPOSITION,
  EVALEUR,
  EETAT,
  EJOUR,
  EMOIS,
  EANNE,
  COLUMNS,
  };
//ajouter
void ajouter(capteur c)
{

    FILE *f;
    f=NULL;
    f=fopen("capteurs.txt","a+");

    fprintf(f,"%s %s %s %s %s %s %s %s %s\n",c.nom,c.id,c.type,c.position,c.valeur,c.etat,c.d.jour,c.d.mois,c.d.annee);
fclose(f);

}


//modifier
void modifier(char idmodif[],capteur s)
{
  FILE *f;
    FILE *ftemp;
    ftemp=NULL;
    capteur c;
   
    f=fopen("capteurs.txt","r+");
    ftemp=fopen("capteurs.txt.temp","a+");
    if (f!=NULL)
    {
        while(fscanf(f,"%s %s %s %s %s %s %s %s %s\n",c.nom,c.id,c.type,c.position,c.valeur,c.etat,c.d.jour,c.d.mois,c.d.annee)!=EOF)
        {
            if(strcmp(idmodif,c.id)==0)
            {
		       strcpy(c.id,s.id);
		       strcpy(c.valeur,s.valeur);
		       strcpy(c.nom,s.nom);
                       strcpy(c.position,s.position);
                       strcpy(c.etat,s.etat);
                       strcpy(c.type,s.type);
                       strcpy(c.d.jour,s.d.jour);
                       strcpy(c.d.mois,s.d.mois);
                       strcpy(c.d.annee,s.d.annee);
                       
            }
            fprintf(ftemp,"%s %s %s %s %s %s %s %s %s\n",c.nom,c.id,c.type,c.position,c.valeur,c.etat,c.d.jour,c.d.mois,c.d.annee);
        }

    }
    fclose(ftemp);
    fclose(f);
    remove("capteurs.txt");
    rename("capteurs.txt.temp","capteurs.txt");


}


//chercher
capteur chercher(char idch[])
{
 FILE *f;
   
    capteur c;
   
   
    f=fopen("capteurs.txt","r+");
    
    if (f!=NULL)
    {
        while(fscanf(f,"%s %s %s %s %s %s %s %s %s\n",c.nom,c.id,c.type,c.position,c.valeur,c.etat,c.d.jour,c.d.mois,c.d.annee)!=EOF)
        {
            if(strcmp(idch,c.id)==0)
            {
		      return c;
            }
          
        }

    }
    
    fclose(f);


}
 //supprimer


void supprimer(char idsupp[])
{
    FILE *f;
    FILE *ftemp;
    ftemp=NULL;
    capteur c;
    char id0[15];
    strcpy(id0,"sSs");
   
    f=fopen("capteurs.txt","r+");
    ftemp=fopen("capteurs.txt.temp","a+");
    if (f!=NULL)
    {
        while(fscanf(f,"%s %s %s %s %s %s %s %s %s\n",c.nom,c.id,c.type,c.position,c.valeur,c.etat,c.d.jour,c.d.mois,c.d.annee)!=EOF)
        {
            if(strcmp(idsupp,c.id)==0)
            {
		       strcpy(c.id,id0);
		       
            }
            if(strcmp(id0,c.id)!=0)
               {
                 fprintf(ftemp,"%s %s %s %s %s %s %s %s %s\n",c.nom,c.id,c.type,c.position,c.valeur,c.etat,c.d.jour,c.d.mois,c.d.annee);
               }
         }
    }
    fclose(ftemp);
    fclose(f);
    remove("capteurs.txt");
    rename("capteurs.txt.temp","capteurs.txt");
}

void afficher(GtkWidget *liste)
{
GtkCellRenderer *renderer;
GtkTreeViewColumn *column;
GtkTreeIter iter;
GtkListStore *store;

char nom[20];
char id[20];
char type[15];
char position[20];
char valeur[30];
char etat[50];
char jour[5];
char mois[5];
char anne[7];

store=NULL;


FILE *f;

store=gtk_tree_view_get_model(liste);


if(store==NULL)
{
renderer =gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes("Nom",renderer, "text",ENOM,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

renderer = gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes("ID",renderer, "text",EID,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

renderer = gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes("Type",renderer, "text",ETYPE,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);


renderer = gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes("Position",renderer, "text",EPOSITION,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

renderer = gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes("valeur",renderer,"text",EVALEUR,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

renderer = gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes("Etat",renderer, "text",EETAT,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

renderer =gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes("Jour",renderer, "text",EJOUR,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

renderer =gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes("Mois",renderer, "text",EMOIS,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

renderer =gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes("Année",renderer, "text",EANNE,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);


}
store=gtk_list_store_new(COLUMNS,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);

f = fopen("capteurs.txt","r");
if(f==NULL)
{
  return;
}
else
{

while(fscanf(f,"%s %s %s %s %s %s %s %s %s\n",nom,id,type,position,valeur,etat,jour,mois,anne)!=EOF)
  {
    gtk_list_store_append (store,&iter);
gtk_list_store_set(store,&iter,ENOM,nom,EID,id,ETYPE,type,EPOSITION,position,EVALEUR,valeur,EETAT,etat,EJOUR,jour,EMOIS,mois,EANNE,anne, -1);
}
fclose(f);
gtk_tree_view_set_model(GTK_TREE_VIEW(liste), GTK_TREE_MODEL(store));
g_object_unref(store);
}
}


void affichervaleur(GtkWidget *liste)
{
GtkCellRenderer *renderer;
GtkTreeViewColumn *column;
GtkTreeIter iter;
GtkListStore *store;

char nom[20];
char id[20];
char type[15];
char position[20];
char valeur[30];
char etat[50];
char jour[5];
char mois[5];
char anne[7];

store=NULL;


FILE *f;

store=gtk_tree_view_get_model(liste);


if(store==NULL)
{
renderer =gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes("Nom",renderer, "text",ENOM,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

renderer = gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes("ID",renderer, "text",EID,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

renderer = gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes("Type",renderer, "text",ETYPE,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

renderer = gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes("Position",renderer, "text",EPOSITION,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

renderer = gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes("valeur",renderer,"text",EVALEUR,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

renderer = gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes("Etat",renderer, "text",EETAT,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

renderer =gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes("Jour",renderer, "text",EJOUR,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

renderer =gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes("Mois",renderer, "text",EMOIS,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

renderer =gtk_cell_renderer_text_new();
column = gtk_tree_view_column_new_with_attributes("Année",renderer, "text",EANNE,NULL);
gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);


}
store=gtk_list_store_new(COLUMNS,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);

f = fopen("capteurs.txt","r");
if(f==NULL)
{
  return;
}
else
{

while(fscanf(f,"%s %s %s %s %s %s %s %s %s\n",nom,id,type,position,valeur,etat,jour,mois,anne)!=EOF)
  {      g_print("%f\n",atof(valeur));
	if (((atof(valeur)<0)||(atof(valeur)>100 ))&&(strcmp(type,"humidite")==0))
	

         {
          gtk_list_store_append (store,&iter);
          gtk_list_store_set(store,&iter,ENOM,nom,EID,id,ETYPE,type,EPOSITION,position,EVALEUR,valeur,EETAT,etat,EJOUR,jour,EMOIS,mois,EANNE,anne, -1);
         }
	
	if (((atof(valeur)<-10)||(atof(valeur)>60 ))&&(strcmp(type,"temperature")==0))
	

         {
          gtk_list_store_append (store,&iter);
          gtk_list_store_set(store,&iter,ENOM,nom,EID,id,ETYPE,type,EPOSITION,position,EVALEUR,valeur,EETAT,etat,EJOUR,jour,EMOIS,mois,EANNE,anne, -1);
         }

	if (((atof(valeur)<0)||(atof(valeur)>2 ))&&(strcmp(type,"hydraulique")==0))
	

         {
          gtk_list_store_append (store,&iter);
          gtk_list_store_set(store,&iter,ENOM,nom,EID,id,ETYPE,type,EPOSITION,position,EVALEUR,valeur,EETAT,etat,EJOUR,jour,EMOIS,mois,EANNE,anne, -1);
         }
  }
fclose(f);
gtk_tree_view_set_model(GTK_TREE_VIEW(liste), GTK_TREE_MODEL(store));
g_object_unref(store);
}
}

