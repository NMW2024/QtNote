#include "notewindowwidget.h"
#include "ui_notewindowwidget.h"

NoteWindowWidget::NoteWindowWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::NoteWindowWidget)
{
    ui->setupUi(this);
}

NoteWindowWidget::~NoteWindowWidget()
{
    delete ui;
}
