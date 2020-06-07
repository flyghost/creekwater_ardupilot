#pragma once

#include <stdint.h>

#include "AP_HAL_Namespace.h"
#include "AP_HAL_Boards.h"
#include "AP_HAL_Macros.h"
#include "AP_HAL_Main.h"

/* HAL Module Classes (all pure virtual) */
// hal 模块类（纯虚类）
/**< hal 模块的类集合，所有的类都是纯虚类<接口类>，
 * 也就是应用层不依赖于具体的底层类，而是依赖于抽象
 * 即：面向接口编程
 */
// 只定义接口，在具体的四大平台中进行实现
// 串口
#include "UARTDriver.h"
// 代表模拟输入器件，比如声纳等，fanout一定范围内的电压值
#include "AnalogIn.h"
// 储存类块设备, 比如sd等
#include "Storage.h"
// GPIO, 及其对应的中断触发方式
#include "GPIO.h"
// 接收机输入
#include "RCInput.h"
// 接收机输出
#include "RCOutput.h"
// 调度器, 提供线程创建等功能
#include "Scheduler.h"
// 信号量相关操作
#include "Semaphores.h"
// 一些辅助性，配置性，工具 比如log存储位置，snprintf等
#include "Util.h"
// 光流，chibios、linux都平台没有实现
#include "OpticalFlow.h"
// flash 页、块操作相关接口
#include "Flash.h"

#if HAL_WITH_UAVCAN
#include "CAN.h"
#endif

//流操作相关接口printf,write,read..., UARTDriver继承了此接口类
#include "utility/BetterStream.h"

/* HAL Class definition */
/**< --->>> 包含了当前目录下的HAL.h, 主要定义了 AP_HAL::HAL 接口类,聚合了系统硬件的几乎所有接口，比如
 * uart, spi, i2c, scheduler等, 该类在四大平台中进行实现 
 */
#include "HAL.h"

#include "system.h"
