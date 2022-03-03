/********************************************************************************
** Form generated from reading UI file 'userpermission.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERPERMISSION_H
#define UI_USERPERMISSION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserPermission
{
public:

    void setupUi(QWidget *UserPermission)
    {
        if (UserPermission->objectName().isEmpty())
            UserPermission->setObjectName(QString::fromUtf8("UserPermission"));
        UserPermission->resize(400, 300);

        retranslateUi(UserPermission);

        QMetaObject::connectSlotsByName(UserPermission);
    } // setupUi

    void retranslateUi(QWidget *UserPermission)
    {
        UserPermission->setWindowTitle(QApplication::translate("UserPermission", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserPermission: public Ui_UserPermission {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERPERMISSION_H
