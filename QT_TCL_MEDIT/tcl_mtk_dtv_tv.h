#ifndef TCL_MTK_DTV_TV_H
#define TCL_MTK_DTV_TV_H
#include"tcl_tv.h"

class TCL_MTK_DTV_TV : public TCL_TV
{
public:
    TCL_MTK_DTV_TV();
    TCL_MTK_DTV_TV(uint ch_val,
                   uint freq,
                   uint bandwidth,
                   short nw_id,
                   short on_id,
                   short ts_id,
                   short prog_id,
                   uint sys_rate,
                   uint mod,
                   uint nw_flag);
    int Read_Data(QDataStream &in);
    int Write_Data(QDataStream &out);

private:
    uint ui4_freq;
    uint e_bandwidth;
    short ui2_nw_id;
    short ui2_on_id;
    short ui2_ts_id;
    short ui2_prog_id;
    uint ui4_sys_rate;
    uint e_mod;
};

#endif // TCL_MTK_DTV_TV_H
