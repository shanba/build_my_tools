#ifndef __TIME_LOG_H
#define __TIME_LOG_H

#include "sys/time.h"
#include "common_log.h"

enum TIME_TYPE{
    TIME_SECOND,//秒
    TIME_MSECOND,//毫秒
    TIME_USECOND,//微秒
    TIME_UNKNOWN
};

//获取当前时间，可以根据需要返回秒或者微秒或者毫秒
long get_current_timestamp(uint8 time_type){
    struct timeval tv;
    gettimeofday(&tv, NULL);

    switch(time_type){
        case TIME_SECOND:
            return tv.tv_sec;
        case TIME_MSECOND:
            return tv.tv_sec * 1000 + tv.tv_usec / 1000;
        case TIME_USECOND:
            return tv.tv_sec * 1000000 + tv.tv_usec;
        default:
            return -1;     
    }

}
#endif