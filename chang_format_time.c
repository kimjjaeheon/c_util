#include <stdio.h>
#include <time.h>

void change_format_time(time_t atime, char* buf, size_t buf_size) 
{
    struct tm *timeinfo;

    timeinfo = localtime(&atime);

    // YYYYDDMM HH:MM:SS 형태로 포맷
    snprintf(buf, buf_size, "%04d%02d%02d %02d:%02d:%02d",
             timeinfo->tm_year + 1900, 
             timeinfo->tm_mon + 1,    
             timeinfo->tm_mday,       
             timeinfo->tm_hour,        
             timeinfo->tm_min,         
             timeinfo->tm_sec);       

    printf("Formatted time: %s\n", buf);
}