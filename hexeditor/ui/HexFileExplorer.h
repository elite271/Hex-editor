#ifndef HEXFILEEXPLORER_H
#define HEXFILEEXPLORER_H

#include <QFileSystemModel>
#include <QTreeView>
#include <QVBoxLayout>
#include <QWidget>
#include <QDir>
#include <QString>

class HexFileExplorer 
{
    public:

    HexFileExplorer(QWidget* parent);
    ~HexFileExplorer();

    QString& getSelectedFileName();
    

    private:

    QFileSystemModel* model;
    QListView* listView;
    QString fileName;
};

#endif