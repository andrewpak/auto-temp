#include<stdio.h>
#include<gtk/gtk.h>



static void
activate (GtkApplication* app, gpointer user_data)
{
	GtkWidget *window;
	window = gtk_application_window_new(app);
	GtkWidget *button;
	GtkWidget *view;
	view = gtk_text_view_new();
	GtkTextBuffer *buffer;
	buffer = gtk_text_view_get_buffer (GTK_TEXT_VIEW (view));
	gtk_text_buffer_set_text(buffer, "This is some text", -1);
	button = gtk_button_new_with_label("hello");
	gtk_window_set_title (GTK_WINDOW (window), "Window");
	gtk_window_set_default_size (GTK_WINDOW (window), 800, 800);
	gtk_widget_show(window);
	gtk_widget_show(button);
}

int main(int argc, char *argv[])

{
	GtkApplication * app;
	int status;

	app = gtk_application_new ("org.gtk.ex", G_APPLICATION_FLAGS_NONE);
	g_signal_connect (app, "activate", G_CALLBACK (activate),  NULL);
	status = g_application_run (G_APPLICATION (app), argc, argv);
	g_object_unref (app);

	return status;
}
