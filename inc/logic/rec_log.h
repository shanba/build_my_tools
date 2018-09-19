#ifndef __REC_LOG_H
#define __REC_LOG_H

#include "util/common_log.h"


typedef struct log_msg{
    uint64  timestamp;//日志时间戳
    uint8   log_level;//日志级别
    uint8   file_name[FILE_NAME_LEN];//文件名字
    uint32  line_num;//日志的位置
    uint8   func_name[FUNC_NAME_LEN];
    uint8   module;//所属的模块
   
}LOG_MSG;
#endif