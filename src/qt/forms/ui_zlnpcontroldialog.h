/********************************************************************************
** Form generated from reading UI file 'zlnpcontroldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZLNPCONTROLDIALOG_H
#define UI_ZLNPCONTROLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ZLNPControlDialog
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *labelQuantity;
    QLabel *labelQuantity_int;
    QLabel *labelZLNP;
    QLabel *labelZLNP_int;
    QPushButton *pushButtonAll;
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ZLNPControlDialog)
    {
        if (ZLNPControlDialog->objectName().isEmpty())
            ZLNPControlDialog->setObjectName(QStringLiteral("ZLNPControlDialog"));
        ZLNPControlDialog->resize(681, 384);
        ZLNPControlDialog->setMinimumSize(QSize(681, 384));
        gridLayout = new QGridLayout(ZLNPControlDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        labelQuantity = new QLabel(ZLNPControlDialog);
        labelQuantity->setObjectName(QStringLiteral("labelQuantity"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelQuantity);

        labelQuantity_int = new QLabel(ZLNPControlDialog);
        labelQuantity_int->setObjectName(QStringLiteral("labelQuantity_int"));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelQuantity_int);

        labelZLNP = new QLabel(ZLNPControlDialog);
        labelZLNP->setObjectName(QStringLiteral("labelZLNP"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelZLNP);

        labelZLNP_int = new QLabel(ZLNPControlDialog);
        labelZLNP_int->setObjectName(QStringLiteral("labelZLNP_int"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelZLNP_int);

        pushButtonAll = new QPushButton(ZLNPControlDialog);
        pushButtonAll->setObjectName(QStringLiteral("pushButtonAll"));

        formLayout->setWidget(2, QFormLayout::LabelRole, pushButtonAll);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        treeWidget = new QTreeWidget(ZLNPControlDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(3, QStringLiteral("Confirmations"));
        __qtreewidgetitem->setText(2, QStringLiteral("zLNP Public ID"));
        __qtreewidgetitem->setText(1, QStringLiteral("Denomination"));
        __qtreewidgetitem->setText(0, QStringLiteral("Select"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setMinimumSize(QSize(0, 250));
        treeWidget->setAlternatingRowColors(true);
        treeWidget->setSortingEnabled(true);
        treeWidget->setColumnCount(5);
        treeWidget->header()->setDefaultSectionSize(100);

        verticalLayout->addWidget(treeWidget);

        buttonBox = new QDialogButtonBox(ZLNPControlDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);


        retranslateUi(ZLNPControlDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ZLNPControlDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ZLNPControlDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ZLNPControlDialog);
    } // setupUi

    void retranslateUi(QDialog *ZLNPControlDialog)
    {
        ZLNPControlDialog->setWindowTitle(QApplication::translate("ZLNPControlDialog", "Select zLNP to Spend", 0));
        labelQuantity->setText(QApplication::translate("ZLNPControlDialog", "Quantity", 0));
        labelQuantity_int->setText(QApplication::translate("ZLNPControlDialog", "0", 0));
        labelZLNP->setText(QApplication::translate("ZLNPControlDialog", "zLNP", 0));
        labelZLNP_int->setText(QApplication::translate("ZLNPControlDialog", "0", 0));
        pushButtonAll->setText(QApplication::translate("ZLNPControlDialog", "Select/Deselect All", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(4, QApplication::translate("ZLNPControlDialog", "Is Spendable", 0));
    } // retranslateUi

};

namespace Ui {
    class ZLNPControlDialog: public Ui_ZLNPControlDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZLNPCONTROLDIALOG_H
