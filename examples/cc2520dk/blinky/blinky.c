#include "contiki.h"


#include <stdio.h> /* For printf() */
/*---------------------------------------------------------------------------*/
PROCESS(blinky_process, "blinky process");
AUTOSTART_PROCESSES(&blinky_process);
/*---------------------------------------------------------------------------*/
PROCESS_THREAD(blinky_process, ev, data)
{

  static int i;
  
  PROCESS_BEGIN();

  P4DIR |= BIT0;                                                  // P4.0 to output
  
  while(1) {
    P4OUT ^= BIT0;                                               // toggle pin

    for(i=0;i<10000;i++) {}
  }



  PROCESS_END();
}
/*---------------------------------------------------------------------------*/
