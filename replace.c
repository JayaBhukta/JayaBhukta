 #include<stdio.h>
#include<string.h>
int main(){
    char c[]="love",b[]="hate";
  int i,j,k;
  printf("Within how many words you want to confress ???? ");
  scanf("%d\n",&k);
 char a[k][100],d[k][100];
  for(i=0;i<k;i++)
      gets(a[i]);
 for(i=0;i<k;i++)
    { 
        if(strcmp(a[i],b)!=0){
        strcpy(d[i],a[i]);
            continue;
        }
        else
            strcpy(a[i],c);  
            strcpy(d[i],a[i]);
    }
     puts("Oh fabulous, actually -----");
     for(i=0;i<k;i++)
         puts(d[i]);
  for(i=0;i<k;i++){
    if(strcmp(a[i],c)!=0)
            continue;
     else
            strcpy(a[i],b);  
    }
    puts("but you think that -----");
       for(i=0;i<k;i++)
         puts(a[i]);
    return 0;
}

