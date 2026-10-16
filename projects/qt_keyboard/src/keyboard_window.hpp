#pragma once

#include <cstddef>

#include <QKeyEvent>
#include <QLineEdit>
#include <QWidget>

#include "keyboard.hpp"

namespace drw {
	class KeyBoardWindow : public QWidget {
		private:
			QLineEdit* display;
			KeyBoard* keyboard;

		public:
			KeyBoardWindow(QWidget* parent = nullptr);

		private slots:
			void handleKeyPressed(const QString& text);
			void handleBackspace();
			void handleSpace();

		protected:
			void keyPressEvent(QKeyEvent* event) override;
	};
}
