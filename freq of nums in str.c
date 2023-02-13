#include <stdio.h>
#include <string.h>




int main()
{

   char s[100],*c,i,counter=0,arr[10],j;

    //s=malloc(1024*sizeof(char));
    fflush(stdin);
    gets(s);
    fflush(stdin);
    printf("%s\n",s);
    c=s;
    for(i=0;i<10;i++)
    {
        printf("%d\n",i);

        while(*c!='\0')
        {
             if((int)i==(int)*c)
             counter++;

             printf("%d\n",counter);
             c++;
             printf("%d\n",*c);
        }

      arr[i]=counter;
      counter=0;
      c=s;

    }
    for(i=0;i<10;i++)
    printf("%c ",arr[i]);

    //free(s);
    return 0;

 return 0;
}
