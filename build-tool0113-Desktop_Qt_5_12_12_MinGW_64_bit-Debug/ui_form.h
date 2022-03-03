/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QToolButton *toolButton;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(500, 300);
        gridLayoutWidget = new QWidget(Form);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 20, 450, 250));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);

        for(int i = 0;i<11;i++)
              gridLayout->setRowStretch(i,1);
        for(int j = 0;j<24;j++)
              gridLayout->setColumnStretch(j,1);

         //gridLayout->setColumnStretch()
        //lineEdit = new QLineEdit(gridLayoutWidget);
        //lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        /*gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        lineEdit_2 = new QLineEdit(gridLayoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 0, 3, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        toolButton = new QToolButton(gridLayoutWidget);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));

        gridLayout->addWidget(toolButton, 0, 4, 1, 1);
*/

        //retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", nullptr));
        label_2->setText(QApplication::translate("Form", "-", nullptr));
        label->setText(QApplication::translate("Form", "\345\237\237\350\214\203\345\233\264", nullptr));
        toolButton->setText(QApplication::translate("Form", "\351\205\215\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
