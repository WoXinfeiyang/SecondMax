#include <stdio.h>
#include <stdlib.h>

#define MinNum (-32767)
/**找出数组中第二大的数值*/
int FindSecondMax(int *data,int length)
{
	int firstMax=data[0];/*定义一个int类型变量存储最大数值*/
	int secMax=MinNum;/*定义一个int类型的变量存储第二大数值*/
	int i;
	for(i=1;i<length;i++){
		
		if(data[i]>firstMax){/*当data[i]大于最大数值时*/
			secMax=firstMax;
			firstMax=data[i];
		}
		else
		{
			if(data[i]>secMax){/*当data[i]大于第二大数值并且小于最大数值时*/
				secMax=data[i];
			}			
		}
	}	
	return secMax;
	
}

int main(int argc, char *argv[]) {
	
	int array[]={2,5,6,7,7,8,98,3,458,5,6};
	int length=sizeof(array)/sizeof(array[0]); 
	printf("%d\n",FindSecondMax(array,length));
	
	return 0;
}
