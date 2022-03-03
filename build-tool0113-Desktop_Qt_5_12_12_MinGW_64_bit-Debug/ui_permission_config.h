/********************************************************************************
** Form generated from reading UI file 'permission_config.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERMISSION_CONFIG_H
#define UI_PERMISSION_CONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Permission_Config
{
public:

    void setupUi(QWidget *Permission_Config)
    {
        if (Permission_Config->objectName().isEmpty())
            Permission_Config->setObjectName(QString::fromUtf8("Permission_Config"));
        Permission_Config->resize(400, 300);

        retranslateUi(Permission_Config);

        QMetaObject::connectSlotsByName(Permission_Config);
    } // setupUi

    void retranslateUi(QWidget *Permission_Config)
    {
        Permission_Config->setWindowTitle(QApplication::translate("Permission_Config", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Permission_Config: public Ui_Permission_Config {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERMISSION_CONFIG_H
