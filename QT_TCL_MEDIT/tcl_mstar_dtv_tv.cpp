#include "tcl_mstar_dtv_tv.h"

TCL_MSTAR_DTV_TV::TCL_MSTAR_DTV_TV()
{
}

TCL_MSTAR_DTV_TV::TCL_MSTAR_DTV_TV(char ch_num,
                                   short pcr_id,
                                   short vedio_id,
                                   short audio_id,
                                   short service_id,
                                   short list_num,
                                   short nw_id,
                                   short on_id,
                                   short ts_id,
                                   QString &name)
{
    ui_ch_num=ch_num;
    ui2_pcr_id=pcr_id;
    ui2_vedio_id=vedio_id;
    ui2_audio_id=audio_id;
    ui2_service_id=service_id;
    ui2_list_num=list_num;
    ui2_nw_id=nw_id;
    ui2_on_id=on_id;
    ui2_ts_id=ts_id;
    ps_name=name;
}

int TCL_MSTAR_DTV_TV::Read_Data(QDataStream &in)
{
  return 0;
}

int TCL_MSTAR_DTV_TV::Write_Data(QDataStream &out)
{

  return 0;
}
