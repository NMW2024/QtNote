#ifndef NOTEWINDOWWIDGET_H
#define NOTEWINDOWWIDGET_H

#include <QWidget>

namespace Ui {
class NoteWindowWidget;
}

class NoteWindowWidget : public QWidget
{
    Q_OBJECT

public:
    explicit NoteWindowWidget(QWidget *parent = nullptr);
    ~NoteWindowWidget();

private:
    Ui::NoteWindowWidget *ui;
};

#endif // NOTEWINDOWWIDGET_H
