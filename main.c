#include <stdio.h>
#include <string.h>

void main(int argc, char *argv[])
{	FILE* fp;
	char c;
	
	fp = fopen("sample.txt","r");//�ΰ��� �Է� (���ϸ�,���)
  	if (fp == NULL)//sample.txt�� �������� ���� �� 
  	{
  		printf("failed to open\n");
        return 0;
  	}

  	while((c=fgetc(fp))!= EOF)//�� ���� ������ �������� �ƴϸ�
  	{
	  putchar(c);//�ѱ��� ���  
  	}
  	
  	fclose(fp);
	
	system("PAUSE");	
  	return 0;
}
