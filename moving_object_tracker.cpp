//! @file		moving_object_tracker.hpp
//! @brief		移動物体認識プログラムのソース
#include <QApplication>
#include "window/config_window/config_window.hpp"

using namespace utl;
//! 移動物体認識プログラムのメイン文
int main(int argc, char *argv[]) {
	QApplication app(argc, argv);
	singleton<ConfigWindow>::get_instance().show();
	return app.exec();
}
