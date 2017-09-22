#include "contiki.h" // all contiki OS abstractions
#include <stdio.h> // printf();

PROCESS(my_first_process, "Hello World Process");

AUTOSTART_PROCESSES(&my_first_process);

PROCESS_THREAD(my_first_process, ev, data){
	PROCESS_BEGIN();

	printf("Hello WSN World!\n");
	
	PROCESS_END();
}