/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_WRwindow1 (void)
{
  GtkWidget *WRwindow1;
  GtkWidget *fixed2;
  GtkWidget *calendar1;
  GtkWidget *button1;
  GtkWidget *alignment3;
  GtkWidget *hbox3;
  GtkWidget *image5;
  GtkWidget *label1257;
  GtkWidget *buttonb3;
  GtkWidget *buttonb4;

  WRwindow1 = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (WRwindow1), _("Espace des troupeaux"));

  fixed2 = gtk_fixed_new ();
  gtk_widget_show (fixed2);
  gtk_container_add (GTK_CONTAINER (WRwindow1), fixed2);

  calendar1 = gtk_calendar_new ();
  gtk_widget_show (calendar1);
  gtk_fixed_put (GTK_FIXED (fixed2), calendar1, 624, 96);
  gtk_widget_set_size_request (calendar1, 200, 184);
  gtk_calendar_display_options (GTK_CALENDAR (calendar1),
                                GTK_CALENDAR_SHOW_HEADING
                                | GTK_CALENDAR_SHOW_DAY_NAMES);

  button1 = gtk_button_new ();
  gtk_widget_show (button1);
  gtk_fixed_put (GTK_FIXED (fixed2), button1, 264, 352);
  gtk_widget_set_size_request (button1, 184, 40);

  alignment3 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment3);
  gtk_container_add (GTK_CONTAINER (button1), alignment3);

  hbox3 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox3);
  gtk_container_add (GTK_CONTAINER (alignment3), hbox3);

  image5 = gtk_image_new_from_stock ("gtk-go-back", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image5);
  gtk_box_pack_start (GTK_BOX (hbox3), image5, FALSE, FALSE, 0);

  label1257 = gtk_label_new_with_mnemonic (_("retour"));
  gtk_widget_show (label1257);
  gtk_box_pack_start (GTK_BOX (hbox3), label1257, FALSE, FALSE, 0);

  buttonb3 = gtk_button_new_with_mnemonic (_("Gestion des troupeaux"));
  gtk_widget_show (buttonb3);
  gtk_fixed_put (GTK_FIXED (fixed2), buttonb3, 24, 96);
  gtk_widget_set_size_request (buttonb3, 500, 60);

  buttonb4 = gtk_button_new_with_mnemonic (_("Reclamation"));
  gtk_widget_show (buttonb4);
  gtk_fixed_put (GTK_FIXED (fixed2), buttonb4, 24, 216);
  gtk_widget_set_size_request (buttonb4, 500, 60);

  g_signal_connect ((gpointer) button1, "clicked",
                    G_CALLBACK (on_button1_clicked),
                    NULL);
  g_signal_connect ((gpointer) buttonb3, "clicked",
                    G_CALLBACK (on_buttonb3_clicked),
                    NULL);
  g_signal_connect ((gpointer) buttonb4, "clicked",
                    G_CALLBACK (on_buttonb4_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (WRwindow1, WRwindow1, "WRwindow1");
  GLADE_HOOKUP_OBJECT (WRwindow1, fixed2, "fixed2");
  GLADE_HOOKUP_OBJECT (WRwindow1, calendar1, "calendar1");
  GLADE_HOOKUP_OBJECT (WRwindow1, button1, "button1");
  GLADE_HOOKUP_OBJECT (WRwindow1, alignment3, "alignment3");
  GLADE_HOOKUP_OBJECT (WRwindow1, hbox3, "hbox3");
  GLADE_HOOKUP_OBJECT (WRwindow1, image5, "image5");
  GLADE_HOOKUP_OBJECT (WRwindow1, label1257, "label1257");
  GLADE_HOOKUP_OBJECT (WRwindow1, buttonb3, "buttonb3");
  GLADE_HOOKUP_OBJECT (WRwindow1, buttonb4, "buttonb4");

  return WRwindow1;
}

GtkWidget*
create_WRwindow2 (void)
{
  GtkWidget *WRwindow2;
  GtkWidget *fixed4;
  GtkWidget *notebook1;
  GtkWidget *fixed5;
  GtkWidget *entryb3;
  GtkWidget *entryb4;
  GtkWidget *entryb5;
  GtkWidget *entryb6;
  GtkWidget *calendar2;
  GtkWidget *labelb13;
  GtkWidget *labelb12;
  GtkWidget *labelb14;
  GtkWidget *labelb15;
  GtkWidget *buttonbackb2;
  GtkWidget *alignment15;
  GtkWidget *hbox15;
  GtkWidget *image19;
  GtkWidget *label1269;
  GtkWidget *buttonb7;
  GtkWidget *alignment1;
  GtkWidget *hbox1;
  GtkWidget *image2;
  GtkWidget *label1255;
  GtkWidget *labelb8;
  GtkWidget *fixed6;
  GtkWidget *scrolledwindow1;
  GtkWidget *treeviewb1;
  GtkWidget *buttonbackb3;
  GtkWidget *alignment14;
  GtkWidget *hbox14;
  GtkWidget *image18;
  GtkWidget *label1268;
  GtkWidget *buttonb13;
  GtkWidget *alignment6;
  GtkWidget *hbox6;
  GtkWidget *image9;
  GtkWidget *label1260;
  GtkWidget *labelb9;
  GtkWidget *fixed7;
  GtkWidget *entryb11;
  GtkWidget *labelb25;
  GtkWidget *buttonb9;
  GtkWidget *alignment9;
  GtkWidget *hbox9;
  GtkWidget *image12;
  GtkWidget *label1263;
  GtkWidget *label1;
  GtkWidget *labelb24;
  GtkWidget *labelb10;
  GtkWidget *fixed8;
  GtkWidget *entryb12;
  GtkWidget *labelb27;
  GtkWidget *buttonb10;
  GtkWidget *alignment8;
  GtkWidget *hbox8;
  GtkWidget *image11;
  GtkWidget *label1262;
  GtkWidget *labelb29;
  GtkWidget *labelb26;
  GtkWidget *labelb11;

  WRwindow2 = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (WRwindow2), _("Gestion des troupeaux"));

  fixed4 = gtk_fixed_new ();
  gtk_widget_show (fixed4);
  gtk_container_add (GTK_CONTAINER (WRwindow2), fixed4);

  notebook1 = gtk_notebook_new ();
  gtk_widget_show (notebook1);
  gtk_fixed_put (GTK_FIXED (fixed4), notebook1, 64, 80);
  gtk_widget_set_size_request (notebook1, 984, 600);

  fixed5 = gtk_fixed_new ();
  gtk_widget_show (fixed5);
  gtk_container_add (GTK_CONTAINER (notebook1), fixed5);

  entryb3 = gtk_entry_new ();
  gtk_widget_show (entryb3);
  gtk_fixed_put (GTK_FIXED (fixed5), entryb3, 220, 20);
  gtk_widget_set_size_request (entryb3, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entryb3), 8226);

  entryb4 = gtk_entry_new ();
  gtk_widget_show (entryb4);
  gtk_fixed_put (GTK_FIXED (fixed5), entryb4, 220, 70);
  gtk_widget_set_size_request (entryb4, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entryb4), 8226);

  entryb5 = gtk_entry_new ();
  gtk_widget_show (entryb5);
  gtk_fixed_put (GTK_FIXED (fixed5), entryb5, 220, 120);
  gtk_widget_set_size_request (entryb5, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entryb5), 8226);

  entryb6 = gtk_entry_new ();
  gtk_widget_show (entryb6);
  gtk_fixed_put (GTK_FIXED (fixed5), entryb6, 220, 170);
  gtk_widget_set_size_request (entryb6, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entryb6), 8226);

  calendar2 = gtk_calendar_new ();
  gtk_widget_show (calendar2);
  gtk_fixed_put (GTK_FIXED (fixed5), calendar2, 568, 32);
  gtk_widget_set_size_request (calendar2, 253, 184);
  gtk_calendar_display_options (GTK_CALENDAR (calendar2),
                                GTK_CALENDAR_SHOW_HEADING
                                | GTK_CALENDAR_SHOW_DAY_NAMES);

  labelb13 = gtk_label_new_with_mnemonic (_("<span><b>Genre :</b></span>"));
  gtk_widget_show (labelb13);
  gtk_fixed_put (GTK_FIXED (fixed5), labelb13, 50, 70);
  gtk_widget_set_size_request (labelb13, 150, 30);
  gtk_label_set_use_markup (GTK_LABEL (labelb13), TRUE);

  labelb12 = gtk_label_new_with_mnemonic (_("<span><b>Identifiant :</b></span>"));
  gtk_widget_show (labelb12);
  gtk_fixed_put (GTK_FIXED (fixed5), labelb12, 50, 20);
  gtk_widget_set_size_request (labelb12, 150, 30);
  gtk_label_set_use_markup (GTK_LABEL (labelb12), TRUE);

  labelb14 = gtk_label_new_with_mnemonic (_("<span><b>Type :</b></span>"));
  gtk_widget_show (labelb14);
  gtk_fixed_put (GTK_FIXED (fixed5), labelb14, 50, 120);
  gtk_widget_set_size_request (labelb14, 150, 30);
  gtk_label_set_use_markup (GTK_LABEL (labelb14), TRUE);

  labelb15 = gtk_label_new_with_mnemonic (_("<span><b>Date de naissance:</b></span>"));
  gtk_widget_show (labelb15);
  gtk_fixed_put (GTK_FIXED (fixed5), labelb15, 50, 170);
  gtk_widget_set_size_request (labelb15, 150, 30);
  gtk_label_set_use_markup (GTK_LABEL (labelb15), TRUE);

  buttonbackb2 = gtk_button_new ();
  gtk_widget_show (buttonbackb2);
  gtk_fixed_put (GTK_FIXED (fixed5), buttonbackb2, 520, 344);
  gtk_widget_set_size_request (buttonbackb2, 200, 70);

  alignment15 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment15);
  gtk_container_add (GTK_CONTAINER (buttonbackb2), alignment15);

  hbox15 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox15);
  gtk_container_add (GTK_CONTAINER (alignment15), hbox15);

  image19 = gtk_image_new_from_stock ("gtk-go-back", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image19);
  gtk_box_pack_start (GTK_BOX (hbox15), image19, FALSE, FALSE, 0);

  label1269 = gtk_label_new_with_mnemonic (_("prec\303\251dent"));
  gtk_widget_show (label1269);
  gtk_box_pack_start (GTK_BOX (hbox15), label1269, FALSE, FALSE, 0);

  buttonb7 = gtk_button_new ();
  gtk_widget_show (buttonb7);
  gtk_fixed_put (GTK_FIXED (fixed5), buttonb7, 220, 344);
  gtk_widget_set_size_request (buttonb7, 200, 70);

  alignment1 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment1);
  gtk_container_add (GTK_CONTAINER (buttonb7), alignment1);

  hbox1 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox1);
  gtk_container_add (GTK_CONTAINER (alignment1), hbox1);

  image2 = gtk_image_new_from_stock ("gtk-add", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image2);
  gtk_box_pack_start (GTK_BOX (hbox1), image2, FALSE, FALSE, 0);

  label1255 = gtk_label_new_with_mnemonic (_("Ajouter"));
  gtk_widget_show (label1255);
  gtk_box_pack_start (GTK_BOX (hbox1), label1255, FALSE, FALSE, 0);

  labelb8 = gtk_label_new (_("<span font_desc=\"Purisa\"foreground=\"purple\">ajouter</span>"));
  gtk_widget_show (labelb8);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1), 0), labelb8);
  gtk_widget_set_size_request (labelb8, 200, -1);
  gtk_label_set_use_markup (GTK_LABEL (labelb8), TRUE);

  fixed6 = gtk_fixed_new ();
  gtk_widget_show (fixed6);
  gtk_container_add (GTK_CONTAINER (notebook1), fixed6);

  scrolledwindow1 = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_show (scrolledwindow1);
  gtk_fixed_put (GTK_FIXED (fixed6), scrolledwindow1, 16, 128);
  gtk_widget_set_size_request (scrolledwindow1, 448, 304);

  treeviewb1 = gtk_tree_view_new ();
  gtk_widget_show (treeviewb1);
  gtk_container_add (GTK_CONTAINER (scrolledwindow1), treeviewb1);
  gtk_widget_set_size_request (treeviewb1, 300, 200);

  buttonbackb3 = gtk_button_new ();
  gtk_widget_show (buttonbackb3);
  gtk_fixed_put (GTK_FIXED (fixed6), buttonbackb3, 600, 248);
  gtk_widget_set_size_request (buttonbackb3, 200, 70);

  alignment14 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment14);
  gtk_container_add (GTK_CONTAINER (buttonbackb3), alignment14);

  hbox14 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox14);
  gtk_container_add (GTK_CONTAINER (alignment14), hbox14);

  image18 = gtk_image_new_from_stock ("gtk-go-back", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image18);
  gtk_box_pack_start (GTK_BOX (hbox14), image18, FALSE, FALSE, 0);

  label1268 = gtk_label_new_with_mnemonic (_("Retour"));
  gtk_widget_show (label1268);
  gtk_box_pack_start (GTK_BOX (hbox14), label1268, FALSE, FALSE, 0);

  buttonb13 = gtk_button_new ();
  gtk_widget_show (buttonb13);
  gtk_fixed_put (GTK_FIXED (fixed6), buttonb13, 128, 24);
  gtk_widget_set_size_request (buttonb13, 200, 70);

  alignment6 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment6);
  gtk_container_add (GTK_CONTAINER (buttonb13), alignment6);

  hbox6 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox6);
  gtk_container_add (GTK_CONTAINER (alignment6), hbox6);

  image9 = gtk_image_new_from_stock ("gtk-justify-center", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image9);
  gtk_box_pack_start (GTK_BOX (hbox6), image9, FALSE, FALSE, 0);

  label1260 = gtk_label_new_with_mnemonic (_("afficher"));
  gtk_widget_show (label1260);
  gtk_box_pack_start (GTK_BOX (hbox6), label1260, FALSE, FALSE, 0);

  labelb9 = gtk_label_new (_("<span font_desc=\"Purisa\"foreground=\"purple\">afficher</span>"));
  gtk_widget_show (labelb9);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1), 1), labelb9);
  gtk_widget_set_size_request (labelb9, 200, 40);
  gtk_label_set_use_markup (GTK_LABEL (labelb9), TRUE);

  fixed7 = gtk_fixed_new ();
  gtk_widget_show (fixed7);
  gtk_container_add (GTK_CONTAINER (notebook1), fixed7);

  entryb11 = gtk_entry_new ();
  gtk_widget_show (entryb11);
  gtk_fixed_put (GTK_FIXED (fixed7), entryb11, 272, 136);
  gtk_widget_set_size_request (entryb11, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entryb11), 8226);

  labelb25 = gtk_label_new_with_mnemonic (_("<span><b>Identifiant :</b></span>"));
  gtk_widget_show (labelb25);
  gtk_fixed_put (GTK_FIXED (fixed7), labelb25, 112, 136);
  gtk_widget_set_size_request (labelb25, 150, 30);
  gtk_label_set_use_markup (GTK_LABEL (labelb25), TRUE);

  buttonb9 = gtk_button_new ();
  gtk_widget_show (buttonb9);
  gtk_fixed_put (GTK_FIXED (fixed7), buttonb9, 392, 312);
  gtk_widget_set_size_request (buttonb9, 200, 70);

  alignment9 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment9);
  gtk_container_add (GTK_CONTAINER (buttonb9), alignment9);

  hbox9 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox9);
  gtk_container_add (GTK_CONTAINER (alignment9), hbox9);

  image12 = gtk_image_new_from_stock ("gtk-edit", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image12);
  gtk_box_pack_start (GTK_BOX (hbox9), image12, FALSE, FALSE, 0);

  label1263 = gtk_label_new_with_mnemonic (_("modifier"));
  gtk_widget_show (label1263);
  gtk_box_pack_start (GTK_BOX (hbox9), label1263, FALSE, FALSE, 0);

  label1 = gtk_label_new ("");
  gtk_widget_show (label1);
  gtk_fixed_put (GTK_FIXED (fixed7), label1, 208, 192);
  gtk_widget_set_size_request (label1, 592, 104);

  labelb24 = gtk_label_new (_("<span font_desc=\"Purisa\"foreground=\"purple\">Donner l'identifiant du troupeau \303\240 changer</span>"));
  gtk_widget_show (labelb24);
  gtk_fixed_put (GTK_FIXED (fixed7), labelb24, 320, 25);
  gtk_widget_set_size_request (labelb24, 400, 104);
  gtk_label_set_use_markup (GTK_LABEL (labelb24), TRUE);

  labelb10 = gtk_label_new (_("<span font_desc=\"Purisa\"foreground=\"purple\">modifier</span>"));
  gtk_widget_show (labelb10);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1), 2), labelb10);
  gtk_widget_set_size_request (labelb10, 200, -1);
  gtk_label_set_use_markup (GTK_LABEL (labelb10), TRUE);

  fixed8 = gtk_fixed_new ();
  gtk_widget_show (fixed8);
  gtk_container_add (GTK_CONTAINER (notebook1), fixed8);

  entryb12 = gtk_entry_new ();
  gtk_widget_show (entryb12);
  gtk_fixed_put (GTK_FIXED (fixed8), entryb12, 480, 184);
  gtk_widget_set_size_request (entryb12, 160, 30);
  gtk_entry_set_invisible_char (GTK_ENTRY (entryb12), 8226);

  labelb27 = gtk_label_new (_("<span><b>Identifiant:</b></span>"));
  gtk_widget_show (labelb27);
  gtk_fixed_put (GTK_FIXED (fixed8), labelb27, 304, 184);
  gtk_widget_set_size_request (labelb27, 150, 30);
  gtk_label_set_use_markup (GTK_LABEL (labelb27), TRUE);

  buttonb10 = gtk_button_new ();
  gtk_widget_show (buttonb10);
  gtk_fixed_put (GTK_FIXED (fixed8), buttonb10, 424, 336);
  gtk_widget_set_size_request (buttonb10, 184, 72);

  alignment8 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment8);
  gtk_container_add (GTK_CONTAINER (buttonb10), alignment8);

  hbox8 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox8);
  gtk_container_add (GTK_CONTAINER (alignment8), hbox8);

  image11 = gtk_image_new_from_stock ("gtk-delete", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image11);
  gtk_box_pack_start (GTK_BOX (hbox8), image11, FALSE, FALSE, 0);

  label1262 = gtk_label_new_with_mnemonic (_("supprimer"));
  gtk_widget_show (label1262);
  gtk_box_pack_start (GTK_BOX (hbox8), label1262, FALSE, FALSE, 0);

  labelb29 = gtk_label_new ("");
  gtk_widget_show (labelb29);
  gtk_fixed_put (GTK_FIXED (fixed8), labelb29, 216, 224);
  gtk_widget_set_size_request (labelb29, 592, 104);

  labelb26 = gtk_label_new (_("<span font_desc=\"Purisa\"foreground=\"purple\">Introduire l'identifiant du troupeau \303\240 supprimer</span>"));
  gtk_widget_show (labelb26);
  gtk_fixed_put (GTK_FIXED (fixed8), labelb26, 180, 25);
  gtk_widget_set_size_request (labelb26, 720, 128);
  gtk_label_set_use_markup (GTK_LABEL (labelb26), TRUE);

  labelb11 = gtk_label_new (_("<span font_desc=\"Purisa\"foreground=\"purple\">supprimer</span>"));
  gtk_widget_show (labelb11);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1), 3), labelb11);
  gtk_widget_set_size_request (labelb11, 200, -1);
  gtk_label_set_use_markup (GTK_LABEL (labelb11), TRUE);

  g_signal_connect ((gpointer) buttonbackb2, "clicked",
                    G_CALLBACK (on_buttonbackb2_clicked),
                    NULL);
  g_signal_connect ((gpointer) buttonb7, "clicked",
                    G_CALLBACK (on_buttonb7_clicked),
                    NULL);
  g_signal_connect ((gpointer) treeviewb1, "row_activated",
                    G_CALLBACK (on_treeviewb1_row_activated),
                    NULL);
  g_signal_connect ((gpointer) buttonbackb3, "clicked",
                    G_CALLBACK (on_buttonbackb3_clicked),
                    NULL);
  g_signal_connect ((gpointer) buttonb13, "clicked",
                    G_CALLBACK (on_buttonb13_clicked),
                    NULL);
  g_signal_connect ((gpointer) buttonb9, "clicked",
                    G_CALLBACK (on_buttonb9_clicked),
                    NULL);
  g_signal_connect ((gpointer) buttonb10, "clicked",
                    G_CALLBACK (on_buttonb10_clicked),
                    NULL);

  gtk_label_set_mnemonic_widget (GTK_LABEL (labelb13), entryb4);
  gtk_label_set_mnemonic_widget (GTK_LABEL (labelb12), calendar2);
  gtk_label_set_mnemonic_widget (GTK_LABEL (labelb14), entryb5);
  gtk_label_set_mnemonic_widget (GTK_LABEL (labelb15), entryb6);
  gtk_label_set_mnemonic_widget (GTK_LABEL (labelb25), entryb11);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (WRwindow2, WRwindow2, "WRwindow2");
  GLADE_HOOKUP_OBJECT (WRwindow2, fixed4, "fixed4");
  GLADE_HOOKUP_OBJECT (WRwindow2, notebook1, "notebook1");
  GLADE_HOOKUP_OBJECT (WRwindow2, fixed5, "fixed5");
  GLADE_HOOKUP_OBJECT (WRwindow2, entryb3, "entryb3");
  GLADE_HOOKUP_OBJECT (WRwindow2, entryb4, "entryb4");
  GLADE_HOOKUP_OBJECT (WRwindow2, entryb5, "entryb5");
  GLADE_HOOKUP_OBJECT (WRwindow2, entryb6, "entryb6");
  GLADE_HOOKUP_OBJECT (WRwindow2, calendar2, "calendar2");
  GLADE_HOOKUP_OBJECT (WRwindow2, labelb13, "labelb13");
  GLADE_HOOKUP_OBJECT (WRwindow2, labelb12, "labelb12");
  GLADE_HOOKUP_OBJECT (WRwindow2, labelb14, "labelb14");
  GLADE_HOOKUP_OBJECT (WRwindow2, labelb15, "labelb15");
  GLADE_HOOKUP_OBJECT (WRwindow2, buttonbackb2, "buttonbackb2");
  GLADE_HOOKUP_OBJECT (WRwindow2, alignment15, "alignment15");
  GLADE_HOOKUP_OBJECT (WRwindow2, hbox15, "hbox15");
  GLADE_HOOKUP_OBJECT (WRwindow2, image19, "image19");
  GLADE_HOOKUP_OBJECT (WRwindow2, label1269, "label1269");
  GLADE_HOOKUP_OBJECT (WRwindow2, buttonb7, "buttonb7");
  GLADE_HOOKUP_OBJECT (WRwindow2, alignment1, "alignment1");
  GLADE_HOOKUP_OBJECT (WRwindow2, hbox1, "hbox1");
  GLADE_HOOKUP_OBJECT (WRwindow2, image2, "image2");
  GLADE_HOOKUP_OBJECT (WRwindow2, label1255, "label1255");
  GLADE_HOOKUP_OBJECT (WRwindow2, labelb8, "labelb8");
  GLADE_HOOKUP_OBJECT (WRwindow2, fixed6, "fixed6");
  GLADE_HOOKUP_OBJECT (WRwindow2, scrolledwindow1, "scrolledwindow1");
  GLADE_HOOKUP_OBJECT (WRwindow2, treeviewb1, "treeviewb1");
  GLADE_HOOKUP_OBJECT (WRwindow2, buttonbackb3, "buttonbackb3");
  GLADE_HOOKUP_OBJECT (WRwindow2, alignment14, "alignment14");
  GLADE_HOOKUP_OBJECT (WRwindow2, hbox14, "hbox14");
  GLADE_HOOKUP_OBJECT (WRwindow2, image18, "image18");
  GLADE_HOOKUP_OBJECT (WRwindow2, label1268, "label1268");
  GLADE_HOOKUP_OBJECT (WRwindow2, buttonb13, "buttonb13");
  GLADE_HOOKUP_OBJECT (WRwindow2, alignment6, "alignment6");
  GLADE_HOOKUP_OBJECT (WRwindow2, hbox6, "hbox6");
  GLADE_HOOKUP_OBJECT (WRwindow2, image9, "image9");
  GLADE_HOOKUP_OBJECT (WRwindow2, label1260, "label1260");
  GLADE_HOOKUP_OBJECT (WRwindow2, labelb9, "labelb9");
  GLADE_HOOKUP_OBJECT (WRwindow2, fixed7, "fixed7");
  GLADE_HOOKUP_OBJECT (WRwindow2, entryb11, "entryb11");
  GLADE_HOOKUP_OBJECT (WRwindow2, labelb25, "labelb25");
  GLADE_HOOKUP_OBJECT (WRwindow2, buttonb9, "buttonb9");
  GLADE_HOOKUP_OBJECT (WRwindow2, alignment9, "alignment9");
  GLADE_HOOKUP_OBJECT (WRwindow2, hbox9, "hbox9");
  GLADE_HOOKUP_OBJECT (WRwindow2, image12, "image12");
  GLADE_HOOKUP_OBJECT (WRwindow2, label1263, "label1263");
  GLADE_HOOKUP_OBJECT (WRwindow2, label1, "label1");
  GLADE_HOOKUP_OBJECT (WRwindow2, labelb24, "labelb24");
  GLADE_HOOKUP_OBJECT (WRwindow2, labelb10, "labelb10");
  GLADE_HOOKUP_OBJECT (WRwindow2, fixed8, "fixed8");
  GLADE_HOOKUP_OBJECT (WRwindow2, entryb12, "entryb12");
  GLADE_HOOKUP_OBJECT (WRwindow2, labelb27, "labelb27");
  GLADE_HOOKUP_OBJECT (WRwindow2, buttonb10, "buttonb10");
  GLADE_HOOKUP_OBJECT (WRwindow2, alignment8, "alignment8");
  GLADE_HOOKUP_OBJECT (WRwindow2, hbox8, "hbox8");
  GLADE_HOOKUP_OBJECT (WRwindow2, image11, "image11");
  GLADE_HOOKUP_OBJECT (WRwindow2, label1262, "label1262");
  GLADE_HOOKUP_OBJECT (WRwindow2, labelb29, "labelb29");
  GLADE_HOOKUP_OBJECT (WRwindow2, labelb26, "labelb26");
  GLADE_HOOKUP_OBJECT (WRwindow2, labelb11, "labelb11");

  return WRwindow2;
}

GtkWidget*
create_WRwindow3 (void)
{
  GtkWidget *WRwindow3;
  GtkWidget *fixed9;
  GtkWidget *treeviewb2;
  GtkWidget *buttonb11;
  GtkWidget *alignment11;
  GtkWidget *hbox11;
  GtkWidget *image14;
  GtkWidget *label1265;
  GtkWidget *buttonback5;
  GtkWidget *alignment10;
  GtkWidget *hbox10;
  GtkWidget *image13;
  GtkWidget *label1264;

  WRwindow3 = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (WRwindow3), _("reclamation"));

  fixed9 = gtk_fixed_new ();
  gtk_widget_show (fixed9);
  gtk_container_add (GTK_CONTAINER (WRwindow3), fixed9);

  treeviewb2 = gtk_tree_view_new ();
  gtk_widget_show (treeviewb2);
  gtk_fixed_put (GTK_FIXED (fixed9), treeviewb2, 48, 96);
  gtk_widget_set_size_request (treeviewb2, 300, 200);

  buttonb11 = gtk_button_new ();
  gtk_widget_show (buttonb11);
  gtk_fixed_put (GTK_FIXED (fixed9), buttonb11, 0, 16);
  gtk_widget_set_size_request (buttonb11, 312, 56);

  alignment11 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment11);
  gtk_container_add (GTK_CONTAINER (buttonb11), alignment11);

  hbox11 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox11);
  gtk_container_add (GTK_CONTAINER (alignment11), hbox11);

  image14 = gtk_image_new_from_stock ("gtk-justify-center", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image14);
  gtk_box_pack_start (GTK_BOX (hbox11), image14, FALSE, FALSE, 0);

  label1265 = gtk_label_new_with_mnemonic (_("afficher les commentaires "));
  gtk_widget_show (label1265);
  gtk_box_pack_start (GTK_BOX (hbox11), label1265, FALSE, FALSE, 0);

  buttonback5 = gtk_button_new ();
  gtk_widget_show (buttonback5);
  gtk_fixed_put (GTK_FIXED (fixed9), buttonback5, 424, 40);
  gtk_widget_set_size_request (buttonback5, 66, 29);

  alignment10 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment10);
  gtk_container_add (GTK_CONTAINER (buttonback5), alignment10);

  hbox10 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox10);
  gtk_container_add (GTK_CONTAINER (alignment10), hbox10);

  image13 = gtk_image_new_from_stock ("gtk-go-back", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image13);
  gtk_box_pack_start (GTK_BOX (hbox10), image13, FALSE, FALSE, 0);

  label1264 = gtk_label_new_with_mnemonic (_("back"));
  gtk_widget_show (label1264);
  gtk_box_pack_start (GTK_BOX (hbox10), label1264, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) buttonb11, "clicked",
                    G_CALLBACK (on_buttonb11_clicked),
                    NULL);
  g_signal_connect ((gpointer) buttonback5, "clicked",
                    G_CALLBACK (on_buttonback5_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (WRwindow3, WRwindow3, "WRwindow3");
  GLADE_HOOKUP_OBJECT (WRwindow3, fixed9, "fixed9");
  GLADE_HOOKUP_OBJECT (WRwindow3, treeviewb2, "treeviewb2");
  GLADE_HOOKUP_OBJECT (WRwindow3, buttonb11, "buttonb11");
  GLADE_HOOKUP_OBJECT (WRwindow3, alignment11, "alignment11");
  GLADE_HOOKUP_OBJECT (WRwindow3, hbox11, "hbox11");
  GLADE_HOOKUP_OBJECT (WRwindow3, image14, "image14");
  GLADE_HOOKUP_OBJECT (WRwindow3, label1265, "label1265");
  GLADE_HOOKUP_OBJECT (WRwindow3, buttonback5, "buttonback5");
  GLADE_HOOKUP_OBJECT (WRwindow3, alignment10, "alignment10");
  GLADE_HOOKUP_OBJECT (WRwindow3, hbox10, "hbox10");
  GLADE_HOOKUP_OBJECT (WRwindow3, image13, "image13");
  GLADE_HOOKUP_OBJECT (WRwindow3, label1264, "label1264");

  return WRwindow3;
}

GtkWidget*
create_WRwindow4 (void)
{
  GtkWidget *WRwindow4;
  GtkWidget *fixed11;
  GtkWidget *entryb14;
  GtkWidget *entryb15;
  GtkWidget *entryb16;
  GtkWidget *label2;
  GtkWidget *labelb30;
  GtkWidget *labelb32;
  GtkWidget *labelb33;
  GtkWidget *labelb34;
  GtkWidget *buttonb963;
  GtkWidget *alignment12;
  GtkWidget *hbox12;
  GtkWidget *image15;
  GtkWidget *label1266;
  GtkWidget *buttonb14;
  GtkWidget *alignment13;
  GtkWidget *hbox13;
  GtkWidget *image16;
  GtkWidget *label1267;

  WRwindow4 = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (WRwindow4), _("modifier"));

  fixed11 = gtk_fixed_new ();
  gtk_widget_show (fixed11);
  gtk_container_add (GTK_CONTAINER (WRwindow4), fixed11);

  entryb14 = gtk_entry_new ();
  gtk_widget_show (entryb14);
  gtk_fixed_put (GTK_FIXED (fixed11), entryb14, 248, 120);
  gtk_widget_set_size_request (entryb14, 150, 30);
  gtk_entry_set_invisible_char (GTK_ENTRY (entryb14), 8226);

  entryb15 = gtk_entry_new ();
  gtk_widget_show (entryb15);
  gtk_fixed_put (GTK_FIXED (fixed11), entryb15, 248, 180);
  gtk_widget_set_size_request (entryb15, 150, 30);
  gtk_entry_set_invisible_char (GTK_ENTRY (entryb15), 8226);

  entryb16 = gtk_entry_new ();
  gtk_widget_show (entryb16);
  gtk_fixed_put (GTK_FIXED (fixed11), entryb16, 248, 240);
  gtk_widget_set_size_request (entryb16, 150, 30);
  gtk_entry_set_invisible_char (GTK_ENTRY (entryb16), 8226);

  label2 = gtk_label_new ("");
  gtk_widget_show (label2);
  gtk_fixed_put (GTK_FIXED (fixed11), label2, 288, 368);
  gtk_widget_set_size_request (label2, 41, 17);

  labelb30 = gtk_label_new (_("\n<span font_desc=\"Purisa\"foreground=\"purple\"> Modifier les coordonn\303\251es d'un troupeau </span>"));
  gtk_widget_show (labelb30);
  gtk_fixed_put (GTK_FIXED (fixed11), labelb30, 128, 0);
  gtk_widget_set_size_request (labelb30, 360, 56);
  gtk_label_set_use_markup (GTK_LABEL (labelb30), TRUE);
  gtk_misc_set_alignment (GTK_MISC (labelb30), 0.57, 0.5);

  labelb32 = gtk_label_new (_("Le nouveau genre :"));
  gtk_widget_show (labelb32);
  gtk_fixed_put (GTK_FIXED (fixed11), labelb32, 70, 120);
  gtk_widget_set_size_request (labelb32, 170, 40);

  labelb33 = gtk_label_new (_("Le nouveau type :"));
  gtk_widget_show (labelb33);
  gtk_fixed_put (GTK_FIXED (fixed11), labelb33, 70, 180);
  gtk_widget_set_size_request (labelb33, 170, 40);

  labelb34 = gtk_label_new (_("La nouvelle date :"));
  gtk_widget_show (labelb34);
  gtk_fixed_put (GTK_FIXED (fixed11), labelb34, 70, 240);
  gtk_widget_set_size_request (labelb34, 170, 40);

  buttonb963 = gtk_button_new ();
  gtk_widget_show (buttonb963);
  gtk_fixed_put (GTK_FIXED (fixed11), buttonb963, 400, 400);
  gtk_widget_set_size_request (buttonb963, 150, 50);

  alignment12 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment12);
  gtk_container_add (GTK_CONTAINER (buttonb963), alignment12);

  hbox12 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox12);
  gtk_container_add (GTK_CONTAINER (alignment12), hbox12);

  image15 = gtk_image_new_from_stock ("gtk-go-back", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image15);
  gtk_box_pack_start (GTK_BOX (hbox12), image15, FALSE, FALSE, 0);

  label1266 = gtk_label_new_with_mnemonic (_("back"));
  gtk_widget_show (label1266);
  gtk_box_pack_start (GTK_BOX (hbox12), label1266, FALSE, FALSE, 0);

  buttonb14 = gtk_button_new ();
  gtk_widget_show (buttonb14);
  gtk_fixed_put (GTK_FIXED (fixed11), buttonb14, 200, 400);
  gtk_widget_set_size_request (buttonb14, 150, 50);

  alignment13 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment13);
  gtk_container_add (GTK_CONTAINER (buttonb14), alignment13);

  hbox13 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox13);
  gtk_container_add (GTK_CONTAINER (alignment13), hbox13);

  image16 = gtk_image_new_from_stock ("gtk-apply", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image16);
  gtk_box_pack_start (GTK_BOX (hbox13), image16, FALSE, FALSE, 0);

  label1267 = gtk_label_new_with_mnemonic (_("valider"));
  gtk_widget_show (label1267);
  gtk_box_pack_start (GTK_BOX (hbox13), label1267, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) buttonb963, "clicked",
                    G_CALLBACK (on_buttonb963_clicked),
                    NULL);
  g_signal_connect ((gpointer) buttonb14, "clicked",
                    G_CALLBACK (on_buttonb14_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (WRwindow4, WRwindow4, "WRwindow4");
  GLADE_HOOKUP_OBJECT (WRwindow4, fixed11, "fixed11");
  GLADE_HOOKUP_OBJECT (WRwindow4, entryb14, "entryb14");
  GLADE_HOOKUP_OBJECT (WRwindow4, entryb15, "entryb15");
  GLADE_HOOKUP_OBJECT (WRwindow4, entryb16, "entryb16");
  GLADE_HOOKUP_OBJECT (WRwindow4, label2, "label2");
  GLADE_HOOKUP_OBJECT (WRwindow4, labelb30, "labelb30");
  GLADE_HOOKUP_OBJECT (WRwindow4, labelb32, "labelb32");
  GLADE_HOOKUP_OBJECT (WRwindow4, labelb33, "labelb33");
  GLADE_HOOKUP_OBJECT (WRwindow4, labelb34, "labelb34");
  GLADE_HOOKUP_OBJECT (WRwindow4, buttonb963, "buttonb963");
  GLADE_HOOKUP_OBJECT (WRwindow4, alignment12, "alignment12");
  GLADE_HOOKUP_OBJECT (WRwindow4, hbox12, "hbox12");
  GLADE_HOOKUP_OBJECT (WRwindow4, image15, "image15");
  GLADE_HOOKUP_OBJECT (WRwindow4, label1266, "label1266");
  GLADE_HOOKUP_OBJECT (WRwindow4, buttonb14, "buttonb14");
  GLADE_HOOKUP_OBJECT (WRwindow4, alignment13, "alignment13");
  GLADE_HOOKUP_OBJECT (WRwindow4, hbox13, "hbox13");
  GLADE_HOOKUP_OBJECT (WRwindow4, image16, "image16");
  GLADE_HOOKUP_OBJECT (WRwindow4, label1267, "label1267");

  return WRwindow4;
}

