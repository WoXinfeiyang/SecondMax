#include <stdio.h>
#include <stdlib.h>

#define MinNum (-32767)
/**�ҳ������еڶ������ֵ*/
int FindSecondMax(int *data,int length)
{
	int firstMax=data[0];/*����һ��int���ͱ����洢�����ֵ*/
	int secMax=MinNum;/*����һ��int���͵ı����洢�ڶ�����ֵ*/
	int i;
	for(i=1;i<length;i++){
		
		if(data[i]>firstMax){/*��data[i]���������ֵʱ*/
			secMax=firstMax;
			firstMax=data[i];
		}
		else
		{
			if(data[i]>secMax){/*��data[i]���ڵڶ�����ֵ����С�������ֵʱ*/
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
