


#include<stdio.h>
#include<stdlib.h>

#include "../inc/apr.h"

/*
 main函数的使用
*/
int main(int argc,char const *argv[]){
   
    apr_pool_t *pool=NULL;
    
    apr_pool_initialize();
    apr_pool_create(&pool,NULL);
    //apr_pool_destroy(pool)
    
    return 0;
}

