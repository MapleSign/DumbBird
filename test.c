#include <stdio.h>

int main(void)
{
	FILE *fr,*fw;
	char num[1];
	fr = fopen("read","rb");
	fw = fopen("write","wb");
	fread(num,sizeof(char),1,fr);
	fwrite(num,sizeof(char),1,fw);
	num[0]++;
	//fseek(fr,sizeof(char),SEEK_CUR);
	//fread(num,sizeof(char),1,fr);
	fwrite(num,sizeof(char),1,fw);
	fclose(fr);
	fclose(fw);
	return 0;
}
