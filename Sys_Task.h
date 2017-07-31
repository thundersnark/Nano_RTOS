//
#ifndef SYS_TASK_H
#define SYS_TASK_H

#include "Sys_Type.h"
#include "Sys_Core.h" 

static sys_u32t Sys_TaskSchedLockCounter = 0 ; 

struct Sys_TaskBlock //任务的结构体声明
{
	sys_stack_t * StackPtr ; // 任务的堆栈指针
	void (*TaskEntry) ( void * TaskParam ) ; // 任务入口函数的函数指针
	sys_node TaskNode ; //任务本身的节点，用于把任务添加到一系列链表中去
	
};

 
static int a=10 ;
extern abcd ;






#endif //SYS_TASK_H
