#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>
#include "capteur.h"
#include "fonction.h"
#include "callbacks.h"
#include "interface.h"
#include "support.h"

char idmodif[15],idsupp[15];
   capteur s;

   capteur c;

//valider ajout
void
on_valider_ajout_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *nom1,*type1,*etat1,*position1,*id1,*valeur1,*mois1,*jour1,*anne1;

    capteur c;

    nom1 = lookup_widget(button, "entry27") ;
    strcpy(c.nom,gtk_entry_get_text(GTK_ENTRY(nom1)));
    
    /*type1 = lookup_widget(button, "entry28") ;
    strcpy(c.type,gtk_entry_get_text(GTK_ENTRY(type1)));*/
  
    type1 = lookup_widget(button, "comboboxentry4") ;
    gchar *type=gtk_combo_box_get_active_text(type1);
    strcpy(c.type,type);

    etat1 = lookup_widget(button, "entry31") ;
    strcpy(c.etat,gtk_entry_get_text(GTK_ENTRY(etat1)));
    

    position1 = lookup_widget(button, "entry52") ;
    strcpy(c.position,gtk_entry_get_text(GTK_ENTRY(position1)));
    

    id1 = lookup_widget(button, "entry29") ;
    strcpy(c.id,gtk_entry_get_text(GTK_ENTRY(id1)));
    

    valeur1 = lookup_widget(button, "entry30") ;
    strcpy(c.valeur,gtk_entry_get_text(GTK_ENTRY(valeur1)));
    

    anne1 = lookup_widget(button, "comboboxentryanne1") ;
    gchar *anne=gtk_combo_box_get_active_text(anne1);
    strcpy(c.d.annee,anne);
    

    mois1 = lookup_widget(button, "comboboxentrymois1") ;
    gchar *mois=gtk_combo_box_get_active_text(mois1);
    strcpy(c.d.mois,mois);
    
    jour1 = lookup_widget(button, "comboboxentryjour1") ;
    gchar *jour=gtk_combo_box_get_active_text(jour1);
    strcpy(c.d.jour,jour);
    
       ajouter(c);
     

}


void
on_button7_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{

}

//valider modification
void
on_valider_modif_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{

GtkWidget *nom1,*id1,*type1,*etat1,*valeur1,*position1,*mois1,*jour1,*anne1;
    




    
    nom1 = lookup_widget(button, "entry33") ;
    strcpy(s.nom,gtk_entry_get_text(GTK_ENTRY(nom1)));

    id1 = lookup_widget(button, "entry34") ;
    strcpy(s.id,gtk_entry_get_text(GTK_ENTRY(id1)));
   

   /*type1 = lookup_widget(button, "entry35") ;
    strcpy(s.type,gtk_entry_get_text(GTK_ENTRY(type1)));*/
     
    type1 = lookup_widget(button, "comboboxentry5") ;
    gchar *type=gtk_combo_box_get_active_text(type1);
    strcpy(s.type,type);
 

    etat1 = lookup_widget(button, "entry36") ;
    strcpy(s.etat,gtk_entry_get_text(GTK_ENTRY(etat1)));
    

    valeur1 = lookup_widget(button, "entry40") ;
    strcpy(s.valeur,gtk_entry_get_text(GTK_ENTRY(valeur1)));
    

    position1 = lookup_widget(button, "entry41") ;
    strcpy(s.position,gtk_entry_get_text(GTK_ENTRY(position1)));
    

    anne1 = lookup_widget(button, "comboboxentry3") ;
    gchar *anne=gtk_combo_box_get_active_text(anne1);
    strcpy(s.d.annee,anne);
   
    mois1 = lookup_widget(button, "comboboxentry2") ;
    gchar *mois=gtk_combo_box_get_active_text(mois1);
    strcpy(s.d.mois,mois);
  
    jour1 = lookup_widget(button, "comboboxentry1") ;
    gchar *jour=gtk_combo_box_get_active_text(jour1);
    strcpy(s.d.jour,jour);
   
    
       modifier(idmodif,s);
   
       
}


void
on_button11_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
  GtkNotebook *notebookc;
   notebookc=lookup_widget(button, "notebook1") ;
  gtk_notebook_set_current_page (notebookc,0);
}

//valider suppression
void
on_valider_sup_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{

  GtkWidget *id1;

  id1 = lookup_widget(button, "entry42") ;
  strcpy(idsupp,gtk_entry_get_text(GTK_ENTRY(id1)));
  

  
     supprimer(idsupp);


}



void
on_button13_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
   GtkNotebook *notebookc;
   notebookc=lookup_widget(button, "notebook1") ;
  gtk_notebook_set_current_page (notebookc,0);
}


void
on_buttonaAfficher_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{
   GtkWidget *treeview1;
  treeview1 = lookup_widget(button, "treeview2") ;
  
  afficher(treeview1);
}


void
on_buttonAfficheval_clicked            (GtkButton       *button,
                                        gpointer         user_data)
{
  GtkWidget *treeview3;
  treeview3 = lookup_widget(button, "treeview3") ;
  
  affichervaleur(treeview3);
}


void
on_button14_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
GtkNotebook *notebookc;
   notebookc=lookup_widget(button, "notebook1") ;
  gtk_notebook_set_current_page (notebookc,0);

}


void
on_rechercher_a_modofierbutton10_clicked
                                        (GtkButton       *button,
                                        gpointer         user_data)
{




  GtkWidget *nom1,*id1,*id2,*type1,*etat1,*valeur1,*position1,*mois1,*jour1,*anne1;
  GtkWidget *window3 ;

 int joour,moois,annne,x;
  
   id2= lookup_widget(button, "entry39") ;
   strcpy(idmodif,gtk_entry_get_text(GTK_ENTRY(id2)));
     
    c=chercher(idmodif);

    nom1 = lookup_widget(button, "entry33") ;
    gtk_entry_set_text(GTK_ENTRY(nom1),c.nom);

    id1 = lookup_widget(button, "entry34") ;
    gtk_entry_set_text(GTK_ENTRY(id1),c.id);


  // type1 = lookup_widget(button, "entry35") ;
    //gtk_entry_set_text(GTK_ENTRY(type1),c.type);
      type1 = lookup_widget(button, "comboboxentry5") ;
      if (strcmp(c.type,"temperature")==0)
      {x=0;}
      if (strcmp(c.type,"hydraulique")==0)
      {x=1;}
      if (strcmp(c.type,"humidite")==0)
      {x=2;}

    gtk_combo_box_set_active(GTK_COMBO_BOX(type1),x);



    etat1 = lookup_widget(button, "entry36") ;
    gtk_entry_set_text(GTK_ENTRY(etat1),c.etat);

    valeur1 = lookup_widget(button, "entry40") ;
    gtk_entry_set_text(GTK_ENTRY(valeur1),c.valeur);

    position1 = lookup_widget(button, "entry41") ;
    gtk_entry_set_text(GTK_ENTRY(position1),c.position);
    
    joour=atof(c.d.jour);
    jour1 = lookup_widget(button, "comboboxentry1") ;
    gtk_combo_box_set_active(GTK_COMBO_BOX(jour1),joour);
    
    moois=atof(c.d.mois);
    mois1 = lookup_widget(button, "comboboxentry2") ;
    gtk_combo_box_set_active(GTK_COMBO_BOX(mois1),moois);

    annne=atof(c.d.annee);
    anne1 = lookup_widget(button, "comboboxentry3") ;
    gtk_combo_box_set_active(GTK_COMBO_BOX(anne1),annne-1909);
   
  
}


void
on_treeview2_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{

}


void
on_button1_insc_clicked                (GtkButton       *button,
                                        gpointer         user_data)
{
FILE *f=NULL;
GtkWidget *login,*pw, *windowAuth ;
char login1[20];
char passw[20];
login = lookup_widget (button, "entry1_nom") ;
pw = lookup_widget (button, "entry2_Mot") ;
strcpy(login1,gtk_entry_get_text(GTK_ENTRY(login)));
strcpy(passw,gtk_entry_get_text(GTK_ENTRY(pw)));
//ouvrrir le fichier
f=fopen("utilisateur.txt","a+");
if(f!=NULL)
{
fprintf(f,"%s %s\n",login1,passw);
fclose(f);

}
else
printf("\n Not found");
}


void
on_button2_auth_clicked                (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *username,*password, *window1;
char user[20];
char pasw[20];
int trouve=0;
username = lookup_widget (button, "entry1_nom") ;
password = lookup_widget (button, "entry2_Mot") ;

strcpy(user,gtk_entry_get_text(GTK_ENTRY(username)));
strcpy(pasw,gtk_entry_get_text(GTK_ENTRY(password)));
trouve=verif(user,pasw);

if(trouve==1)
{
  window1 = create_window1 ();
  gtk_widget_show (window1);
}
}

