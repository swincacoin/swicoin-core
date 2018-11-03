// Copyright (c) 2017-2018 The PIVX developers
// Copyright (c) 2018 The SWI developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef ZSWICONTROLDIALOG_H
#define ZSWICONTROLDIALOG_H

#include <QDialog>
#include <QTreeWidgetItem>
#include "primitives/zerocoin.h"
#include "privacydialog.h"

class CZerocoinMint;
class WalletModel;

namespace Ui {
class ZSwiControlDialog;
}

class CZSwiControlWidgetItem : public QTreeWidgetItem
{
public:
    explicit CZSwiControlWidgetItem(QTreeWidget *parent, int type = Type) : QTreeWidgetItem(parent, type) {}
    explicit CZSwiControlWidgetItem(int type = Type) : QTreeWidgetItem(type) {}
    explicit CZSwiControlWidgetItem(QTreeWidgetItem *parent, int type = Type) : QTreeWidgetItem(parent, type) {}

    bool operator<(const QTreeWidgetItem &other) const;
};

class ZSwiControlDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ZSwiControlDialog(QWidget *parent);
    ~ZSwiControlDialog();

    void setModel(WalletModel* model);

    static std::set<std::string> setSelectedMints;
    static std::set<CMintMeta> setMints;
    static std::vector<CMintMeta> GetSelectedMints();

private:
    Ui::ZSwiControlDialog *ui;
    WalletModel* model;
    PrivacyDialog* privacyDialog;

    void updateList();
    void updateLabels();

    enum {
        COLUMN_CHECKBOX,
        COLUMN_DENOMINATION,
        COLUMN_PUBCOIN,
        COLUMN_VERSION,
        COLUMN_CONFIRMATIONS,
        COLUMN_ISSPENDABLE
    };
    friend class CZSwiControlWidgetItem;

private slots:
    void updateSelection(QTreeWidgetItem* item, int column);
    void ButtonAllClicked();
};

#endif // ZSWICONTROLDIALOG_H
