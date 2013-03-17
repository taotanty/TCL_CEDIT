#ifndef TCL_ATV_TV_H
#define TCL_ATV_TV_H
#include"tcl_tv.h"
//
#include<QString>
class TCL_ATV_TV : public TCL_TV
{
public:
    TCL_ATV_TV();
    TCL_ATV_TV(uint,uint,uint,uint ,QString &);
    int Read_Data(QDataStream &);
    int Write_Data(QDataStream &);


private:
    uint ui4_freq;
    uint ui4_tv_sys;
};

#endif // TCL_ATV_TV_H
