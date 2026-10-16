#pragma once

#include <cstddef>

#include <QPushButton>
#include <QString>
#include <QWidget>

namespace drw {
	class KeyBoardButton : public QPushButton {
		public:
			KeyBoardButton(const QString& text = "", QWidget* parent = nullptr);
	};
}
