// 文件名：Sys_Type.h
// 作者 ： thundersnark
// 文件说明：这个文件用于声明系统用到的类型定义，为了便于数据类型定义和CPU架构隔离，便于以后的移植
//

#ifndef SYS_TYPE_H
#define SYS_TYPE_H
	
#include "Sys_Type.h"

typedef unsigned long int sys_u32t ;
typedef long int sys_32t ;
typedef unsigned char sys_u8t ;
typedef char sys_8t ;
//
typedef signed long int sys_error_t ; //用来记录系统错误号的类型
typedef long int sys_stack_t ; //系统的栈数据类型

typedef unsigned long int sys_prio_t ; //用来记录各个任务（可用于系统任务以及应用任务）优先级的类型
typedef unsigned long int sys_stklen_t ; //用来记录各个任务的堆栈的长度的数据类型



#endif //SYS_TYPE_H

