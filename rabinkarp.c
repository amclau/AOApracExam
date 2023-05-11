#include<string.h>
#include<stdlib.h>
#include<stdio.h>
int charToint(char c)
{

int num=c-'a'+1;
return num;
}

int stringtoInt(char input[100])
{
    int sum=0;
    int len=strlen(input);
  
    for (int i = 0; i < len; i++)
    {
        int res=charToint(input[i]);
        sum=sum*10+res;
    }
    return sum;
}

void main()
{
    // int sum;
    char input[]="abcdeeffffesecc";
    // se=stringtoInt(input);

    char searchString[]="sec";
    int res=stringtoInt(searchString);


    int len=strlen(input);
    int sublen=3;
        for (int i = 0; i <= len - sublen; i++) {
        char sub[sublen + 1];
        strncpy(sub, &input[i], sublen);
        sub[sublen] = '\0';
        printf("%s\n", sub);
        int sstrres= stringtoInt(sub);
        if(sstrres==res)
        {
            printf("string found");
        }
    }

































    ////////////////////////////JUGAD CODE

    // char *start=strstr(input,"ecs");
    // if(start!=NULL)
    // {
    //     printf("string found at %ld\n",start-input);
    // }
    // else{
    //      printf("No string found");
    // }






    
}