#include <stdio.h>
#include <string.h>
#include<ctype.h>
#include<stdlib.h>
#include<conio.h>
void password(int,char *);
int main()
{
    system("cls");
    int p=0;
    char j;
    char pass[8],mail[20];
    printf(" \n               :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    printf("                                 Enter your email-id :::::::::: ");
    scanf("%s",mail);
    printf("                                 Enter your password :::::::::: ");
    while(p<8){
        j=getch();
        pass[p]=j;
        j='*';
        printf("%c",j);
        p++;
    }
        printf(" \n               :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");

    pass[p]='\0';
        password(p,&pass[0]);
    printf("\n                                Mail-id:::::::: ");
        puts(mail);
    exit(0);
    return 0;
}
void password(int i,char *pass){
    int p=0,alph=0,calph=0,num=0,space=0;
    for(i=0;i<=9;i++)
    {
        if(*(pass+i)>='a' && *(pass+i)<='z' ){
            alph++;
        }
        if(*(pass+i)>='A' && *(pass+i)<='Z'){
            calph++;
        }
        if(*(pass+i)>='0' && *(pass+i)<='9'){
            num++;
        }
        if(*(pass+i)==32){
            space++;
        }
    }        
        if((alph && calph && num && !(space))){
           printf("\n\n:::::::::::::::::::::::::: You have entered the correct password ::::::::::::::::::::::::::");
            printf("\n\n                               Password is :::::::::   ");
    for(p=0;p<8;p++)
    printf("%c",*(pass+p));
       }       
    else {
     printf("\nYou have entered the wrong password\n");
     main();
        }
 }
