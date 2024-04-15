#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)
struct st
{
	int a;
	char ch;
	float f;
	struct st *next;
};
void main()
{

printf("%ld",sizeof(struct st));
}
