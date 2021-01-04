



#include<stdio.h>
#include<string.h>
#include "troupeau.h"
#include <gtk/gtk.h>


enum
{

     ID,
     TYPE,
     GENRE,
     NAISSANCE,
     COLUMNS,
};
//ajouter troupeau

void ajouter_troupeau(troupeau o)
{

FILE *f,*f1;
f=fopen("troupeau.txt","a+");
if((f!=NULL))
{
fprintf(f,"%s %s %s %s\n",o.id,o.type,o.genre,o.naissance);
}

fclose(f);
}

// supprimer troupeau

void supprimer_troupeau(char refer[])
{
FILE *f,*f1;
troupeau o;

f=fopen("troupeau.txt","r");
f1=fopen("troupeau_tmp.txt","w");
 if ((f!=NULL))
{
while(fscanf(f,"%s %s %s %s\n",o.id,o.genre,o.type,o.naissance)!=EOF)
{
if(strcmp(refer,o.id)!=0)
{
fprintf(f1,"%s %s %s %s\n",o.id,o.genre,o.type,o.naissance);
}
}
fclose(f) ;
fclose(f1);


remove("troupeau.txt");
rename("troupeau_tmp.txt","troupeau.txt");
}
}

//modifier troupeau
void modifier_troupeau(troupeau o)
{

troupeau m;

FILE *f;
FILE *f2;
f=fopen("troupeau.txt","r");
f2=fopen("troupeau_tmp.txt","a+");
if (f!=NULL)
{
if (f2!=NULL)

{
     while (fscanf(f,"%s %s %s %s\n",m.id,m.genre,m.type,m.naissance)!=EOF)
    {
if (strcmp(o.id,m.id)==0){
   fprintf(f2,"%s %s %s %s\n",o.id,o.genre,o.type,o.naissance);
}
else
{    fprintf(f2,"%s %s %s %s\n",m.id,m.genre,m.type,m.naissance);
     }

}}
fclose(f2);
fclose(f);
remove("troupeau.txt");
rename("troupeau_tmp.txt","troupeau.txt");

}


}

//verifier troupeau
int verifier_id(char ID[])
{troupeau o;
FILE *f;
int test = 0 ;
f=fopen("troupeau.txt","r+");
if (f!=NULL)
    {
      while(fscanf(f,"%s %s %s %s\n",o.id,o.genre,o.type,o.naissance)!=EOF)
       { g_print("%s\n",o.id);
         g_print("%s\n",ID);
         if(strcmp(o.id,ID)==0)
         {
             test=1 ;
             return test;
         }
       }
    }
fclose(f);

return test;
}
//afficher troupeau

void afficher_troupeau(GtkWidget *liste)
{
	GtkCellRenderer *renderer;
	GtkTreeViewColumn *column;
	GtkTreeIter iter;

	GtkListStore *store;

char id[30];
char genre[30];
char type[30];
char naissance[30];

store=NULL;

FILE *f;

store=gtk_tree_view_get_model(liste);
if(store==NULL)
{
	renderer =gtk_cell_renderer_text_new();
	column = gtk_tree_view_column_new_with_attributes(" id",renderer, "text",ID,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);
	
renderer = gtk_cell_renderer_text_new();
	column = gtk_tree_view_column_new_with_attributes(" genre",renderer, "text",GENRE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);
	
renderer = gtk_cell_renderer_text_new();
	column = gtk_tree_view_column_new_with_attributes(" type",renderer, "text",TYPE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);
	
renderer = gtk_cell_renderer_text_new();
	column = gtk_tree_view_column_new_with_attributes(" naissance",renderer, "text",NAISSANCE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);

}
	store=gtk_list_store_new(6,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);
f = fopen("troupeau.txt","r");
if(f==NULL)
{
return;
}
else
{
 f=fopen("troupeau.txt","a+");
	while(fscanf(f,"%s %s %s %s\n",id,genre,type,naissance)!=EOF)
	{
	gtk_list_store_append (store,&iter);
	gtk_list_store_set(store,&iter,ID,id,GENRE,genre,TYPE,type,NAISSANCE,naissance);
	}
	fclose(f);}
	gtk_tree_view_set_model(GTK_TREE_VIEW(liste), GTK_TREE_MODEL(store));
	g_object_unref(store);

	
}

//afficher absence


void afficher_absence(GtkWidget *liste)
{
	GtkCellRenderer *renderer;
	GtkTreeViewColumn *column;
	GtkTreeIter iter;

	GtkListStore *store;
char annee[7];
char mois[5];
char jour[5];
char id[20];
store=NULL;

FILE *f;

store=gtk_tree_view_get_model(liste);
if(store==NULL)
{
	renderer =gtk_cell_renderer_text_new();
	column = gtk_tree_view_column_new_with_attributes("jour",renderer, "text",jour,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);
	
renderer = gtk_cell_renderer_text_new();
	column = gtk_tree_view_column_new_with_attributes("mois",renderer, "text",mois,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);
	
renderer = gtk_cell_renderer_text_new();
	column = gtk_tree_view_column_new_with_attributes("annee",renderer, "text",annee,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);
	
renderer = gtk_cell_renderer_text_new();
	column = gtk_tree_view_column_new_with_attributes("id",renderer, "text",id,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste),column);
	


}
	store=gtk_list_store_new(4,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);
f = fopen("absence.txt","r");
if(f==NULL)
{
return;
}
else
{
 f=fopen("absence.txt","a+");
	while(fscanf(f,"%s %s %s %s\n",jour,mois,annee,id)!=EOF)
	{
	gtk_list_store_append (store,&iter);
	gtk_list_store_set(store,&iter,ID,jour,GENRE,mois,TYPE,annee,NAISSANCE,id,-1);
	}
	fclose(f);
	gtk_tree_view_set_model(GTK_TREE_VIEW(liste), GTK_TREE_MODEL(store));
	g_object_unref(store);
}
	
}




void enregristrer_absence(troupeau o)
{
  FILE *f;
  
f=fopen("absence.txt","a+");
if(f!=NULL)
{
      fprintf(f,"%s %s %s %s\n",o.Ab.jour,o.Ab.mois,o.Ab.annee,o.id);
}
fclose(f);
}











