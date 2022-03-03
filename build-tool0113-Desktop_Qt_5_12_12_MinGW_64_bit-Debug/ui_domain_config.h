/********************************************************************************
** Form generated from reading UI file 'domain_config.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOMAIN_CONFIG_H
#define UI_DOMAIN_CONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Domain_Config
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QToolButton *toolButton;
    QToolButton *toolButton_2;

    void setupUi(QWidget *Domain_Config)
    {
        if (Domain_Config->objectName().isEmpty())
            Domain_Config->setObjectName(QString::fromUtf8("Domain_Config"));
        Domain_Config->resize(480, 62);
        gridLayout = new QGridLayout(Domain_Config);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame = new QFrame(Domain_Config);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout->addWidget(lineEdit_2);

        toolButton = new QToolButton(frame);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));

        horizontalLayout->addWidget(toolButton);

        toolButton_2 = new QToolButton(frame);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));

        horizontalLayout->addWidget(toolButton_2);


        gridLayout->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(Domain_Config);

        QMetaObject::connectSlotsByName(Domain_Config);
    } // setupUi

    void retranslateUi(QWidget *Domain_Config)
    {
        Domain_Config->setWindowTitle(QApplication::translate("Domain_Config", "Form", nullptr));
        label->setText(QApplication::translate("Domain_Config", "\345\237\237\350\214\203\345\233\264", nullptr));
        label_2->setText(QApplication::translate("Domain_Config", "-", nullptr));
        toolButton->setText(QApplication::translate("Domain_Config", "\351\205\215\347\275\256", nullptr));
        toolButton_2->setText(QApplication::translate("Domain_Config", "\345\210\240\351\231\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Domain_Config: public Ui_Domain_Config {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOMAIN_CONFIG_H
