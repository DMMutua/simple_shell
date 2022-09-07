#include "simpleshell.h"

/**
  * ctrl_c - stop the current process and return to its main loop
  * @signal: signal
  */

void ctrl_c(int signal)
{
	(void)signal;
	write(1, "\n", 1);
	write(1, "#cisfun$ ", 9);
}
