#include "tcl_atv_tv.h"

TCL_ATV_TV::TCL_ATV_TV()
{
}

TCL_ATV_TV::TCL_ATV_TV(uint ch_val,
                       uint freq,
                       uint tv_sys,
                       uint nw_flag,
                       QString &name)
{
    ui4_ch_val=ch_val;
    ui4_freq=freq;
    ui4_tv_sys=tv_sys;
    ui4_nw_flag=nw_flag;
    ps_name=name;
}

int TCL_ATV_TV::Read_Data(QDataStream &in)
{

    return 0;
}

int TCL_ATV_TV::Write_Data(QDataStream &out)
{
    return 0;
}
