#ifndef TCL_MSTAR_DTV_TV_H
#define TCL_MSTAR_DTV_TV_H
#include"tcl_tv.h"

class TCL_MSTAR_DTV_TV : public TCL_TV
{
public:
    TCL_MSTAR_DTV_TV();
    TCL_MSTAR_DTV_TV(char ch_num,
                     short pcr_id,
                     short vedio_id,
                     short audio_id,
                     short service_id,
                     short list_num,
                     short nw_id,
                     short on_id,
                     short ts_id,
                     QString &name);
private:
    char ui_ch_num;
    short ui2_pcr_id;
    short ui2_vedio_id;
    short ui2_audio_id;
    short ui2_service_id;
    short ui2_list_num;
    short ui2_nw_id;
    short ui2_on_id;
    short ui2_ts_id;
};

#endif // TCL_MSTAR_DTV_TV_H
