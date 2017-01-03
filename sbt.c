#include<stdio.h>

typedef union{
	int version;
	struct{
		char a1:1;
		char a2:1;
		char a3:1;
		char a4:1;
		char a5:1;
		char a6:1;
		char a7:1;
		char a8:1;
	}wei;
	struct{
		char a1:4;
		char a2:4;
	}wei2;	

	char c;

}my_union;

typedef struct{
    char a1:1;
    char a2:1;
    char a3:1;
    char a4:1;
    char a5:1;
    char a6:1;
    char a7:1;
    char a8:1;
}wei3;
typedef struct{
	char a;
	int b;
}wei;


typedef struct{
	char b;
	int a;
}wei2 __attribute__((__packed));


int main()
{
	my_union mu;
	int i = 0;
	printf("sizeof swei:%lu\n",sizeof(wei));
	printf("sizeof swei2:%lu\n",sizeof(wei2));
	printf("sizeof swei3:%lu\n",sizeof(wei3));
	
	mu.c = 0x21;
	printf("wei:%x\n",  *(char *)&mu.wei);
	printf("a1:%x\n", mu.wei.a1 & 0x01);
	printf("a2:%x\n", mu.wei.a2 & 0x01);
	printf("a3:%x\n", mu.wei.a3 & 0x01);
	printf("a4:%x\n", mu.wei.a4 & 0x01);

	printf("A1:%x\n", mu.wei2.a1 & 0x0F);
	printf("A2:%x\n", mu.wei2.a2 & 0x0F);
	return 0;

}
