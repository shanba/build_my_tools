#include "logic/rec_log.h"
#include "stdio.h"
#include "stdlib.h"
#include "util/time_log.h"


int fill_log_msg(LOG_MSG * log_info, uint8 log_level, uint8 module){
    if(!log_info){
        return -1;
    }

    log_info->timestamp = get_current_timestamp(TIME_USECOND);
    strncpy(log_info->file_name, __FILE__, FILE_NAME_LEN);
    log_info->line_num = __LINE__;
    log_info->log_level = log_level;
    strncpy(log_info->func_name, __FUNCTION__, FUNC_NAME_LEN);
    log_info->module = module;  

    return 0;
    
}