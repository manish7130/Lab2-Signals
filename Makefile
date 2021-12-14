signals: signal.c
	gcc signal.c -o signals 
		
clear: timer signals
	rm timer signals
