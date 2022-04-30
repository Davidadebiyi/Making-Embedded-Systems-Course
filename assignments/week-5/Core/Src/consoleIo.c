// Console IO is a wrapper between the actual in and output and the console code
// In an embedded system, this might interface to a UART driver.

#include "consoleIo.h"
#include <stdio.h>

//use the windows conio.h for kbhit, or a POSIX reproduction
/*
#ifdef _WIN32
#include <conio.h>
*/
/*#else*/
//#include "conioCompat.h"
/*#endif*/

/*static int getch_noblock() {
    if (_kbhit())
        return _getch();
    else
        return EOF;
}*/

eConsoleError ConsoleIoInit(void)
{
	return CONSOLE_SUCCESS;
}

eConsoleError ConsoleIoReceive(uint8_t *buffer, const uint32_t bufferLength, uint32_t *readLength)
{
	uint32_t i = 0;
	char ch;

/*
//	while (uart_is_readable(uart7))
//	{
//  	ch = uart_getc(uart7);
//  	uart_putc(uart7, ch); // echo
//		buffer[i] = (uint8_t) ch;
//		i++;
//	}
*/

	*readLength = i;
	return CONSOLE_SUCCESS;
}

eConsoleError ConsoleIoSendString(const char *buffer)
{
	printf("%s", buffer);
	return CONSOLE_SUCCESS;
}

