#include "tcl_mtk_dtv_tv.h"

TCL_MTK_DTV_TV::TCL_MTK_DTV_TV()
{
}

TCL_MTK_DTV_TV::TCL_MTK_DTV_TV(uint ch_val,
                               uint freq,
                               uint bandwidth,
                               short nw_id,
                               short on_id,
                               short ts_id,
                               short prog_id,
                               uint sys_rate,
                               uint mod,
                               uint nw_flag,
                               QString &name)
{
    ui4_ch_val=ch_val;
    ui4_freq=freq;
    e_bandwidth=bandwidth;
    ui2_nw_id=nw_id;
    ui2_on_id=on_id;
    ui2_ts_id=ts_id;
    ui2_prog_id=prog_id;
    ui4_sys_rate=sys_rate;
    e_mod=mod;
    ui4_nw_flag=nw_flag;
    ps_name=name;
}


int TCL_MTK_DTV_TV::Read_Data(QDataStream &in)
{

    return 0;
}

int TCL_MTK_DTV_TV::Write_Data(QDataStream &out)
{
    return 0;
}

