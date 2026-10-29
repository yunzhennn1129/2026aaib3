//week08-1_old.cpp SOIT108_ADVANCE_002B
#include <stdio.h> //大一教法

int main()
{
	int a,b, c;
	scanf("%d%d%d", &a, &b, &c);
	if (a<b){
		int temp=a;
		a=b;
		b=temp;
	}
	if (b<c){
		int temp =b;
		b=c;
		c=temp;
	}
		if (a<b){
		int temp=a;
		a=b;
		b=temp;
	}
	printf("%d", a*100+b*10+c+1);
}
