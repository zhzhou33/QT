/********************************************************************************
** Form generated from reading UI file 'topbarbutton.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOPBARBUTTON_H
#define UI_TOPBARBUTTON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TopBarButton
{
public:
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *TopBarButton)
    {
        if (TopBarButton->objectName().isEmpty())
            TopBarButton->setObjectName(QString::fromUtf8("TopBarButton"));
        TopBarButton->resize(330, 74);
        horizontalLayout_2 = new QHBoxLayout(TopBarButton);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        frame = new QFrame(TopBarButton);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        horizontalLayout_2->addWidget(frame);


        retranslateUi(TopBarButton);

        QMetaObject::connectSlotsByName(TopBarButton);
    } // setupUi

    void retranslateUi(QWidget *TopBarButton)
    {
        TopBarButton->setWindowTitle(QApplication::translate("TopBarButton", "Form", nullptr));
        pushButton->setText(QApplication::translate("TopBarButton", "\346\226\260\345\242\236", nullptr));
        pushButton_2->setText(QApplication::translate("TopBarButton", "\347\224\237\346\210\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TopBarButton: public Ui_TopBarButton {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOPBARBUTTON_H
