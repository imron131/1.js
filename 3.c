	#include <stdio.h>
	#include <conio.h>
	
	void main ()
	{
		char s[]="bcdefghijklmnopqrstuvwcyz";
		int chasc,i, cnt=0,konsonan=0;
		char ch,str[40]="";
		printf("===============================================\n");
		printf("Program Menghitung jumlah huruf hidup\n");
		printf("================================================\n");
		
		printf("silakan masukan kata :");
		scanf("%[^\n]s",str);
		for(i=0; str[i]!='\0';i++)
		{
			chasc = str[i];
			switch(chasc)
			{
				case'a' :
				case'A' :
				case'i' :
				case'I' :
				case'u' :
				case'U' :
				case'e' :
				case'E' :
				case'o' :
				case'O' :
					
				cnt++;
				break;
				default:
				konsonan++;
				break;
			}
		}
		
		printf("\n JUMLAH HURUF HIDUP ADALAH			:%d",cnt);
		printf("\n DAN JUMLAH HURUF KONSONAN ADALAH		:%d",konsonan);
		return 0;
		getch;
	}
