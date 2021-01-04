#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "troupeau.h"
#include <string.h>


void
on_buttonb3_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{GtkWidget *WRwindow1;
 GtkWidget *WRwindow2;


WRwindow2 = create_WRwindow2();
gtk_widget_show (WRwindow2);

WRwindow1=lookup_widget(button,"WRwindow1");
gtk_widget_hide(WRwindow1);

}


void
on_buttonb4_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{GtkWidget *WRwindow1, *WRwindow3;

WRwindow1=lookup_widget(button,"WRwindow1");
gtk_widget_hide(WRwindow1);
WRwindow3 = create_WRwindow3();
gtk_widget_show (WRwindow3);

}


void
on_button1_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonb7_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{troupeau o;

GtkWidget *input1,*input2,*input3,*input4;


input1=lookup_widget(button,"entryb3");
input2=lookup_widget(button,"entryb4");
input3=lookup_widget(button,"entryb5");
input4=lookup_widget(button,"entryb6");





strcpy(o.id,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(o.genre,gtk_entry_get_text(GTK_ENTRY(input2)));
strcpy(o.type,gtk_entry_get_text(GTK_ENTRY(input3)));
strcpy(o.naissance,gtk_entry_get_text(GTK_ENTRY(input4)));




       
ajouter_troupeau(o);


}


void
on_buttonbackb2_clicked                (GtkButton       *button,
                                        gpointer         user_data)
{GtkWidget *WRwindow2, *WRwindow1;
WRwindow2=lookup_widget(button,"WRwindow2");
gtk_widget_hide(WRwindow2);
WRwindow1 = create_WRwindow1();
gtk_widget_show (WRwindow1);

}


void
on_buttonbackb3_clicked                (GtkButton       *button,
                                        gpointer         user_data)
{GtkWidget *WRwindow2, *WRwindow1;
WRwindow2=lookup_widget(button,"WRwindow2");
gtk_widget_hide(WRwindow2);
WRwindow1 = create_WRwindow1();
gtk_widget_show (WRwindow1);

}


void
on_buttonb13_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{GtkWidget *WRwindow2;
troupeau o;
GtkWidget *treeview;
WRwindow2=lookup_widget(button,"WRwindow2");
treeview=lookup_widget(WRwindow2,"treeviewb1");
afficher_troupeau(treeview);
}


void
on_buttonb9_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{char ID[20];
int test;
troupeau o;
GtkWidget *entryb14,*entryb15,*entryb16,*entryb11;
GtkWidget *WRwindow2,*WRwindow4;
GtkWidget *output;

WRwindow4=create_WRwindow4();


entryb14=lookup_widget(WRwindow4,"entryb14");
entryb15=lookup_widget(WRwindow4,"entryb15");
entryb16=lookup_widget(WRwindow4,"entryb16");


output= lookup_widget(button,"label1");
entryb11=lookup_widget(button,"entryb11");
strcpy(ID,gtk_entry_get_text(GTK_ENTRY(entryb11)));
g_print("%s\n",ID);
if (verifier_id(ID)==0)
{
gtk_label_set_text(GTK_LABEL(output),"le troupeau n'existe pas");
}

else
{
FILE *f2;
f2=fopen("troupeau.txt","r"); 
if (f2!=NULL)
{while (fscanf(f2,"%s %s %s \n",o.genre,o.type,o.naissance)!=EOF)
{if (strcmp(o.id,ID)==0) 
{ gtk_widget_show(WRwindow4);

gtk_entry_set_text(GTK_ENTRY(entryb14),o.genre) ;
gtk_entry_set_text(GTK_ENTRY(entryb15),o.type) ;
gtk_entry_set_text(GTK_ENTRY(entryb16),o.naissance) ;


break ;}}
}
fclose(f2);
}	
}



void
on_buttonb10_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{GtkWidget *input;
GtkWidget *output;
troupeau o;
char ref[30];
input=lookup_widget(button,"entryb12");
output=lookup_widget(button,"labelb29");
strcpy(ref,gtk_entry_get_text(GTK_ENTRY(input)));
if(strcmp(ref,o.id)==0)
gtk_label_set_text(GTK_LABEL(output),"Le troupeau n'existe pas");
else
{
supprimer_troupeau(ref);
gtk_label_set_text(GTK_LABEL(output),"La suppression est effectué avec succés");
}

}


void
on_buttonb11_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{GtkWidget *WRwindow3;

GtkWidget *treeview;
WRwindow3=lookup_widget(button,"WRwindow3");
treeview=lookup_widget(WRwindow3,"treeviewb2");
afficher_troupeau(treeview);

}




void
on_buttonb14_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{troupeau o;
GtkWidget *entryb13,*entryb14,*entryb15,*entryb16;
GtkWidget *output;

entryb14=lookup_widget(button,"entryb14");
entryb15=lookup_widget(button,"entryb15");
entryb16=lookup_widget(button,"entryb16");


output=lookup_widget(button,"label2");

strcpy(o.genre,gtk_entry_get_text(GTK_ENTRY(entryb14)));
strcpy(o.type,gtk_entry_get_text(GTK_ENTRY(entryb15)));
strcpy(o.naissance,gtk_entry_get_text(GTK_ENTRY(entryb16)));

modifier_troupeau(o);
gtk_label_set_text(GTK_LABEL(output),"La modification est effectué avec succés") ;

}


void
on_buttonb963_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *WRwindow2, *WRwindow4;
WRwindow4=lookup_widget(button,"WRwindow4");
gtk_widget_hide(WRwindow4);
WRwindow2 = create_WRwindow2();
gtk_widget_show (WRwindow2);
}







void
on_treeviewb1_row_activated            (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
	GtkTreeIter iter;
	gchar* id;
	gchar* genre;
	gchar* type;
	gchar* naissance;
	troupeau o;
        
	GtkTreeModel *model = gtk_tree_view_get_model(treeview);
	if (gtk_tree_model_get_iter(model, &iter ,path))
	{
		
		gtk_tree_model_get (GTK_LIST_STORE(model),&iter, 0, &id, 1, &genre, 2, &type ,3, &naissance,-1);
		strcpy(o.id,id);
		strcpy(o.genre,genre);
		strcpy(o.type,type);
		strcpy(o.naissance,naissance);
		afficher_troupeau(treeview);
	}

}



