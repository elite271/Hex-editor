#include "HexFileExplorer.h"

HexFileExplorer::HexFileExplorer(QWidget* parent = nullptr)
{
    model = new QFileSystemModel(this);
    treeView = new QTreeView(this);

    model->setRootPath(QDir::currentPath()); // Set the initial directory

    listView->setModel(model);
    listView->setRootIndex(model->index(QDir::currentPath()));
}


HexFileExplorer::~HexFileExplorer()
{

}