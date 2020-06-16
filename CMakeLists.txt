cmake_minimum_required(VERSION 3.5)

project(Posix_GCC_Simulator)

add_definitions(-g3 -ggdb)

include_directories(
        FreeRTOS_Posix
        FreeRTOS_Posix/FreeRTOS_Kernel/include/freertos
        FreeRTOS_Posix/FreeRTOS_Kernel/portable/GCC/Posix
)

add_library(FreeRTOS_Posix
        FreeRTOS_Posix/FreeRTOS_Kernel/croutine.c
        FreeRTOS_Posix/FreeRTOS_Kernel/event_groups.c
        FreeRTOS_Posix/FreeRTOS_Kernel/list.c
        FreeRTOS_Posix/FreeRTOS_Kernel/queue.c
        FreeRTOS_Posix/FreeRTOS_Kernel/tasks.c
        FreeRTOS_Posix/FreeRTOS_Kernel/timers.c
        FreeRTOS_Posix/FreeRTOS_Kernel/portable/GCC/Posix/port.c
        FreeRTOS_Posix/FreeRTOS_Kernel/portable/GCC/Posix/portmacro.h
        FreeRTOS_Posix/FreeRTOS_Kernel/portable/MemMang/heap_3.c
)