#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "sendMail.h"
int main()
{
	Init();
	fillDat();
	SendMail(0);
}
