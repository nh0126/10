#include <stdio.h>
#include <string.h>

void main(int argc, char *argv[])
{	FILE* fp;
	char c;
	
	fp = fopen("sample.txt","r");//두가지 입력 (파일명,모드)
  	if (fp == NULL)//sample.txt가 존재하지 않을 때 
  	{
  		printf("failed to open\n");
        return 0;
  	}

  	while((c=fgetc(fp))!= EOF)//한 글자 읽은게 마지막이 아니면
  	{
	  putchar(c);//한글자 출력  
  	}
  	
  	fclose(fp);
	
	system("PAUSE");	
  	return 0;
}
