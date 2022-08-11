#include<stdio.h>
#include<gtk/gtk.h>



static void
activate (GtkApplication* app, gpointer user_data)
{
	GtkWidget *window;
	GtkWidget *button;
	GtkWidget *view;
	GtkTextBuffer *buffer;

	window = gtk_application_window_new(app);
	button = gtk_button_new_with_label("hello");
	view = gtk_text_view_new();
	buffer = gtk_text_view_get_buffer (GTK_TEXT_VIEW (view));

	gtk_text_buffer_set_text(buffer, "This is some text", -1);
	gtk_window_set_title (GTK_WINDOW (window), "Window");
	gtk_window_set_default_size (GTK_WINDOW (window), 800, 800);
	gtk_window_set_child(GTK_WINDOW(window), button);

	gtk_widget_show(window);
	gtk_widget_show(button);
}

int main(int argc, char *argv[])

{
	GtkApplication * app;
	int status;

	app = gtk_application_new("my.app", G_APPLICATION_FLAGS_NONE);
	g_signal_connect(app, "activate", G_CALLBACK (activate),  NULL);
	status = g_application_run(G_APPLICATION (app), argc, argv);
	g_object_unref(app);

	return status;
}
