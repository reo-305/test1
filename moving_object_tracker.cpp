//! @file		moving_object_tracker.hpp
//! @brief		�ړ����̔F���v���O�����̃\�[�X
#include <QApplication>
#include "window/config_window/config_window.hpp"

using namespace utl;
//! �ړ����̔F���v���O�����̃��C����
int main(int argc, char *argv[]) {
	QApplication app(argc, argv);
	singleton<ConfigWindow>::get_instance().show();
	return app.exec();
}
