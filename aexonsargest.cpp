#include<stdio.h>
int main()
{
	int a[10],i,fl,sl;
	for(i=0;i<10;i++)
	{
		printf("Value = ");
		scanf("%d ",&a[i]);
	}
	fl=a[0];
	sl=a[0];
	for(i=0;i<10;i++)
	{
		if (fl>a[i])
		{
			sl=fl;
			fl=a[i];
		}else
		if(sl==fl || sl<a[i] ||fl!=a[i] )
		{
			sl=a[i];
		}
	}
	printf(" first largest =%d",fl);
	printf(" second largest =%d",sl);
		return 0;
}
