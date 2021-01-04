#include <gtk/gtk.h>


void
on_buttonAJ_clicked                    (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_buttonCHR_clicked                   (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_BF_clicked                          (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_radiobuttonH_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_radiobuttonF_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_SUP_clicked                         (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_buttonMOD_clicked                   (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_AFAC_clicked                        (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_button6_clicked                     (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_CHAB_clicked                        (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_MQAB_clicked                        (GtkWidget       *objet,
                                        gpointer         user_data);

gboolean
on_spinbuttonT_output                  (GtkSpinButton   *spinbutton,
                                        gpointer         user_data);
