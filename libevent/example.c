/*======================================================
    > File Name: example.c
    > Author: wwh
    > E-mail:  
    > Other :  
    > Created Time: 2015年10月27日 星期二 22时25分17秒
 =======================================================*/

#include <stdio.h>
#include <event2/event.h>

static void discard_cb(int severity, const char *msg){
    
}

static FILE *logfile = NULL;
static void write_to_file_cb(int severity, const char*msg){
    const char *s;
    if(!logfile){
        return;
    }
}

int main(){

}
