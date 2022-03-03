/********************************************************************************
** Form generated from reading UI file 'permission.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERMISSION_H
#define UI_PERMISSION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Permission
{
public:

    void setupUi(QWidget *Permission)
    {
        if (Permission->objectName().isEmpty())
            Permission->setObjectName(QString::fromUtf8("Permission"));
        Permission->resize(400, 300);

        retranslateUi(Permission);

        QMetaObject::connectSlotsByName(Permission);
    } // setupUi

    void retranslateUi(QWidget *Permission)
    {
        Permission->setWindowTitle(QApplication::translate("Permission", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Permission: public Ui_Permission {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERMISSION_H
