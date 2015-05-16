
/* System headers. */
#include <stdio.h>
#include <time.h>
#include <sys/time.h>
#include <stdlib.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <sys/stat.h>
#include <mqueue.h>
#include <errno.h>
#include <unistd.h>

extern "C" {
#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "croutine.h"
#include "partest.h"

/* Demo file headers. */
#include "BlockQ.h"
#include "PollQ.h"
#include "death.h"
#include "crflash.h"
#include "flop.h"
#include "print.h"
#include "fileIO.h"
#include "semtest.h"
#include "integer.h"
#include "dynamic.h"
#include "mevents.h"
#include "crhook.h"
#include "blocktim.h"
#include "GenQTest.h"
#include "QPeek.h"
#include "countsem.h"
#include "recmutex.h"

#include "AsyncIO/AsyncIO.h"
#include "AsyncIO/AsyncIOSocket.h"
#include "AsyncIO/PosixMessageQueueIPC.h"
#include "AsyncIO/AsyncIOSerial.h"

void vApplicationIdleHook( void );
}

static unsigned long uxQueueSendPassedCount = 0;
void vMainQueueSendPassed( void )
{
    /* This is just an example implementation of the "queue send" trace hook. */
    uxQueueSendPassedCount++;
}


void vApplicationIdleHook( void )
{
    vCoRoutineSchedule();   /* Comment this out if not using Co-routines. */
}

int main( void )
{

	return 1;
}
