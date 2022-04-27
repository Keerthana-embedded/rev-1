#include<stdio.h>
#define max 5
int q[max];
int front=0,rear=0;
void enq(int);
int deq();
int main()
{
	int c,n;
	while(1)
	{
	printf("enter choice 1:enq 2:deq 3:\n");
	scanf("%d",&c);
	switch(c)
	{
		case 1:printf("enter element\n");
		       scanf("%d",&n);
		       enq(n);
		       break;
		case 2:printf("data dequed=%d\n",deq());
		       break;
		case 3:exit(0);
	}
	}
}
void enq(int n)
{
	if(rear==max)
		printf("queue is full\n");
	else
       q[rear++]=n;
}
int deq()
{
if(rear==front)
	printf("list is empty\n");
else

	return q[front];
}

