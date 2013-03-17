#ifndef TCL_USB_H
#define TCL_USB_H
#include <QString>
#include <QDataStream>
#include<QFile>
#include <QVector>
#include"tcl_tv.h"

class TCL_USB
{
public:
    TCL_USB();
    TCL_USB(QString &file);
    int Read_File(QString &);
    int Read_File();
    int Write_File(QString &);
    int Write_File();

private :
    QString file_name;
    QVector<TCL_TV*> file_info;

};

#endif // TCL_USB_H
