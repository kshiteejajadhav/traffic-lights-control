#include<reg51.h>
sbit east_red=P1^7;
sbit east_yellow=P1^6;
sbit east_green=P1^5;
//ease side//
sbit west_red=P1^4;
sbit west_yellow=P1^3;
sbit west_green=P1^2;
//west side//
sbit north_red=P1^1;
sbit north_yellow=P1^0;
sbit north_green=P0^0;
//north side//
sbit south_red=P0^1;
sbit south_yellow=P0^2;
sbit south_green=P0^3;
//south side//
void delay(unsigned int i)
{
unsigned int j,k;
	for(j=0;j<i;j++);
	{
	for(k=0;k<25000;k++);
	}
}
void main()
{
P2=P3=0x00;
	while(1)
	{ east_green=west_red=south_red=north_red=1;
		delay(20);
		east_green=north_red=0;
		east_yellow=north_yellow=1;
		delay(10);
		east_yellow=north_yellow=0;
		east_yellow=north_green=1;
		delay(20);
		north_green=west_red=0;
		north_yellow=west_yellow=1;
		delay(10);
		north_yellow=west_yellow=0;
		north_red=west_green=1;
		delay(20);
		west_green=south_red=0;
		west_yellow=south_yellow=1;
		delay(10);
		west_yellow=south_yellow=0;
		west_red=south_green=1;
		delay(30);
		south_green=east_red=0;
		south_yellow=east_yellow=1;
		delay(10);
		south_yellow=east_yellow=0;
	
	}
}
