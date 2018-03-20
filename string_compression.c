#include <stdio.h>
int main()
{
    char s[100],unique_char[100];
    int i,j,a,k=0;
    scanf("%s",s);
    a=strlen(s);
    for(i=0;i<a;i++)
    {
        int count=0;
        for(j=0;j<i;j++)
        {
            if(s[i]==s[j])
            {
                count+=1;
            }
        }
        if(count==0)
        {
            unique_char[k++]=s[i];
        }
    }
    for(i=0;i<k;i++)
    {
        int c=0;
        for(j=0;j<a;j++)
        {
            if(unique_char[i]==s[j])
            {
                c+=1;
            }
        }
        printf("%c%d",unique_char[i],c);
    }
}
