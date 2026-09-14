#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h> // unix standard

// DIGITAL CLOCK
// Gets the current system time and continuously displays it.
// The time updates every second and stays on the same line.

int main(){

	// STEP 1: Create variables needed for the clock

	// time_t is used to store calendar time.
	// On most systems, this is represented as the number of seconds
	// since January 1st, 1970 (Unix epoch).
	time_t rawtime = 0;

	// struct tm stores the time broken down into separate values
	// such as hours, minutes and seconds.
	// pTime is a pointer that will store the address of this struct.
	struct tm *pTime = NULL;

	// bool stores true or false.
	// We use this to control whether the clock loop continues running.
	bool isRunning = true;


	// STEP 2: Print the title

	printf("Digital Clock\n");


	// STEP 3: Start the clock loop

	// while(isRunning) keeps repeating the code while isRunning is true.
	// Since isRunning is never changed to false, the clock continues
	// running until the user stops the program with Ctrl+C.
	while(isRunning){

		
		// STEP 4: Get the current system time

		// time() gets the current calendar time and stores it in rawtime.
		// &rawtime gives time() the address of rawtime so it can modify it.
		time(&rawtime);


		// STEP 5: Convert the raw time into local time

		// localtime() converts rawtime into a struct tm containing
		// separate values for the hour, minute, second, etc.
		// It returns a pointer to that struct, which we store in pTime.
		pTime = localtime(&rawtime);


		// STEP 6: Display the current time

		// (*pTime).tm_hour means:
		// dereference pTime to access the struct, then access tm_hour.
		// The same applies to tm_min and tm_sec.
		//
		// %02d prints an integer using at least 2 characters,
		// adding a 0 if necessary (e.g. 07 instead of 7).
		//
		// \r moves the cursor back to the beginning of the current line,
		// allowing the next time to overwrite the previous time.
		printf("\r%02d:%02d:%02d",
		       (*pTime).tm_hour,
		       (*pTime).tm_min,
		       (*pTime).tm_sec);


		// STEP 7: Force the output to appear immediately

		// fflush(stdout) forces anything waiting in the stdout buffer
		// to be sent to the terminal immediately.
		fflush(stdout);


		// STEP 8: Wait one second before getting the time again

		// After one second, the loop starts again and gets the new time.
		sleep(1);

	}


	// STEP 9: End the program

	// This is never normally reached because isRunning is never
	// changed to false. Ctrl+C stops the program manually.
	return 0;
}
