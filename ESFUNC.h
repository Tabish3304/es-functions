#ifndef _ESFUNC_H_
#define _ESFUNC_H_

void delay(unsigned int time)
{
	unsigned int i,j;
	for(i=0;i<time;i++)
		for(j=0;j<1275;j++);
}

unsigned char cm_an[]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
unsigned char cm_cat[]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x7F,0x4F};

#endif