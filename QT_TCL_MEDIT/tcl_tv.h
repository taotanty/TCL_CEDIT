#ifndef TCL_TV_H
#define TCL_TV_H
#include <QString>
#include <QDataStream>

class TCL_TV
{
public:
    TCL_TV();
private:
    uint ui4_ch_val;
    QString ps_name;
    uint ui4_nw_flag;
public :
      virtual int Read_Data(QDataStream &);
      virtual int Write_Data(QDataStream &);

};

#endif // TCL_TV_H
