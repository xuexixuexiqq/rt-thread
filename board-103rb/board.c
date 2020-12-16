/*
 * Copyright (c) 2006-2018, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2019-03-08     obito0   first version
 */
 
#include "board.h"

uint8_t VCPSend(uint8_t* Buf,uint16_t Len);

void rt_hw_console_output(const char* str)
{
  rt_enter_critical();
  VCPSend((uint8_t*)(str), rt_strlen(str));
  rt_exit_critical();
  
  rt_thread_delay(1);
}
