#include<stdio.h>
#include<windows.h>

int main(){
int h,m,s,d=1000;
printf("--------------------------------\n");
printf("Starting time : ");
scanf("%d %d %d",&h,&m,&s);
printf("--------------------------------\n");
while(1){
s++;
if(s>59)
{
    m+=1;
    s=0;
}
if(m>59)
{
    h+=1;
    m=0;
}
if(h>23){
    h=0;
    m=0;
    s=0;
}
printf("-----------\n     Clock\n----------\n");
printf("%02d : %02d : %02d",h,m,s);
Sleep(d);
system("cls");
}
printf("-----------\n");
printf("-----------\n");
    return 0;
}