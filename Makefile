signals: signal.c
	gcc signal.c -o signals 
	
timer: timer.c
	gcc timer.c -o timer
	
clear: timer signals
	rm timer signals