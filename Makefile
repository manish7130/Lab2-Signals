signals: signal.c
	gcc signal.c -o signals 
	
timer: timer.c
	gcc timer.c -o timer
				
clear: signals timer
	rm signals timer
