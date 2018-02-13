#include <stdio.h>
#include <stdlib.h>


    union test
{

	int x1;
	unsigned char t[4];
};

    int main(){
	union test ut;
	ut.x1 = 129;
	ut.x1 = 64;
	ut.x1 = 32;
	printf("%02d %02d %02d %02d", ut.t[0], ut.t[1], ut.t[2], ut.t[3]);
	getche();
}


