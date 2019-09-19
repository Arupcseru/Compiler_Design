#include<stdio.h>

char str[50];

int is_char(char ch){
    if(ch>='A' && ch<='Z') return 1;
    if(ch>='a' && ch<='z') return 1;
    return 0;
}
int is_digit(char ch){
    if(ch>='0' && ch<='9') return 1;
    return 0;
}
int isFloat(){
    int cn=0,i;
    for(i=0;str[i]!='.';i++){
        if(str[i]=='.')continue;
        if(!is_digit(str[i])) return 0;
    }
    for(i++;str[i];i++){
        if(!is_digit(str[i])) return 0;
        cn++;
    }
    return cn;
}

void solve(){
    int length=strlen(str);
    int i, count;
    if((str[0]>='a' && str[0]<='h') || (str[0]>='A' && str[0]<='H')
       || (str[0]>='o' && str[0]<='z') || (str[0]>='O' && str[0]<='Z')){
        count=1;
        for(i=1;i<length;i++){
            if(is_char(str[i]) || is_digit(str[i]))
                count++;
        }
        if(count==length)
            printf("Float Variable\n");
    }
    else if(((str[0]=='0' && str[1]=='.') || (str[0]>='1' && str[0]<='9'))){
        if(isFloat()==2)
            printf("Float Number\n");
        else if(isFloat()>2)
            printf("Double Number\n");
        else
            printf("Invalid\n");

    }
    else{
        printf("Invalid\n");
    }
}

int main(){

    gets(str);
    solve();


}
