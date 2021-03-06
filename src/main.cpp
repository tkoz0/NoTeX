
#include <gtkmm.h>

#include "CompileConfig.h"
#include "editorapp.h"

int main(int argc, char** argv) {

	std::cout << "NoTeX version " << NoTeX_VERSION_MAJOR << "."
			  << NoTeX_VERSION_MINOR << std::endl;

	Gtk::Main kit(argc, argv);

	auto application = EditorApplication::create();

	const int status = application->run(argc, argv);
	return status;
}
