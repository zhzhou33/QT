/********************************************************************************
** Form generated from reading UI file 'TopicConfig.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOPICCONFIG_H
#define UI_TOPICCONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TopicConfig
{
public:
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QTextEdit *textEdit_4;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;

    void setupUi(QWidget *TopicConfig)
    {
        if (TopicConfig->objectName().isEmpty())
            TopicConfig->setObjectName(QString::fromUtf8("TopicConfig"));
        TopicConfig->resize(356, 380);
        widget = new QWidget(TopicConfig);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 20, 311, 331));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        textEdit_4 = new QTextEdit(widget);
        textEdit_4->setObjectName(QString::fromUtf8("textEdit_4"));

        gridLayout_3->addWidget(textEdit_4, 3, 1, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 3, 0, 1, 1);

        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout_3->addWidget(textEdit, 0, 1, 1, 1);

        textEdit_2 = new QTextEdit(widget);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));

        gridLayout_3->addWidget(textEdit_2, 1, 1, 1, 1);

        textEdit_3 = new QTextEdit(widget);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));

        gridLayout_3->addWidget(textEdit_3, 2, 1, 1, 1);


        retranslateUi(TopicConfig);

        QMetaObject::connectSlotsByName(TopicConfig);
    } // setupUi

    void retranslateUi(QWidget *TopicConfig)
    {
        TopicConfig->setWindowTitle(QApplication::translate("TopicConfig", "Form", nullptr));
        label->setText(QApplication::translate("TopicConfig", "\346\227\240\344\277\235\346\212\244", nullptr));
        label_2->setText(QApplication::translate("TopicConfig", "\344\273\205\350\257\273\344\277\235\346\212\244", nullptr));
        label_3->setText(QApplication::translate("TopicConfig", "\344\273\205\345\206\231\344\277\235\346\212\244", nullptr));
        label_4->setText(QApplication::translate("TopicConfig", "\350\257\273\345\206\231\344\277\235\346\212\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TopicConfig: public Ui_TopicConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOPICCONFIG_H
