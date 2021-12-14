signals: signal.c
	gcc signal.c -o signals 
		
clear: signals
	rm signals
