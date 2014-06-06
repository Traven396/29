/*
 from http://stackoverflow.com/a/7469410/1161631
 by niko @ http://stackoverflow.com/users/834032/niko
*/

#include <termios.h>
#include <stdio.h>

static struct termios t_old, t_new;

void initTermios(int echo) 
{
	tcgetattr(0, &t_old);
	t_new = t_old;
	t_new.c_lflag &= ~ICANON;
	t_new.c_lflag &= echo ? ECHO : ~ECHO;
	tcsetattr(0, TCSANOW, &t_new);
}

void resetTermios(void) 
{
	tcsetattr(0, TCSANOW, &t_old);
}

char getch_(int echo) 
{
	char ch;
	initTermios(echo);
	ch = getchar();
	resetTermios();
	return ch;
}

char getch(void) 
{
	return getch_(0);
}

char getche(void) 
{
	return getch_(1);
}

int NextStep(const Game& G_){
	int ret;
	ret=-1;
	while(ret==-1){
		switch(getch()){
			case 65: ret=0; break;
			case 67: ret=1; break;
			case 66: ret=2; break;
			case 68: ret=3; break;
		}
	}
	return ret;
}

