// 文件名：Sys_Core.h
// 作者 ： thundersnark
// 文件说明：这个文件用于声明系统相关的一些数据结构，例如用于管理任务、时
//          间片等的链表等，以及相应的处理函数的原型声明
//

#ifndef SYS_CORE_H
#define SYS_CORE_H
	
#include "Sys_Type.h"

enum node_state{ //描写节点的状态的枚举
	sys_u8t Used = 1 ;
	sys_u8t Unused = 0 ;
}; //

struct sys_node {
	sys_node * PrevNode ; //指向上一个节点的指针
	sys_node * NextNode ; //指向下一个节点的指针
    node_state NodeState; //节点的状态
};


// 函数名：Sys_Init
// 参数：sys_error * 
// 返回值：void
// 函数功能：初始化系统，在启动系统前对系统进行必要的初始化，并将函数运行状况通过参数指针传回 
void Sys_Init( sys_error * Sys_Err ); 
// 

//函数功能：启动系统，并将函数运行状况通过参数指针传回
void Sys_Start( sys_error * Sys_Err );

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>临界区保护>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>//
//函数功能：进入临界区保护（关中断并关一次任务调度器）
void Sys_EnterCritical( void );

//函数功能：退出临界区保护（打开中断并开一次任务调度器）
void Sys_ExitCritical( void );

//函数功能：进入中断临界区保护（关闭中断）
void Sys_EnterIsrCritical( void );

//函数功能：退出中断临界区保护（打开中断）
void Sys_ExitIsrCritical( void );

//函数功能：进入任务中断临界区保护（关闭一次任务调度器）
void Sys_EnterTaskCritical( void );

//函数功能：退出任务中断临界区保护（打开一次任务调度器）
void Sys_ExitTaskCritical( void );
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<临界区保护<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<//



#endif //SYS_CORE_H
