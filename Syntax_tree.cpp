#include <stdio.h>
#include <string.h>
char grammar[][10] = {"E+E","E-E","E*E","E/E","(E)","a","b","c"};
char target[100],str[100];

void replace(int pos,char *s){
    int i;
    for(i=0;i<s[i];i++){
        target[i+pos]=s[i];
    }
    target[i+pos]='\0';
}

int main(){
    int i,j,ln,op;
    strcpy(target,"E");
    scanf("%s",str);
    ln=strlen(str);
    puts(target);
    for(i=0,j=0;i<ln;){
        if(target[j]=='E' && i+1<ln){
            if(str[i+1]=='+') op=0;
            else if(str[i+1]=='-') op=1;
            else if(str[i+1]=='*') op=2;
            else op=3;
            replace(j,grammar[op]);
            puts(target);

        }
        target[j]=str[i];
        puts(target);
        i=i+2;
        j=j+2;
    }
    return 0;
}
