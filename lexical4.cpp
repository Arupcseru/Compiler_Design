#include<bits/stdc++.h>

char ch[50];

int is_char(char ch){
    if(ch>='A'&&ch<='Z') return 1;
    if(ch>='a'&&ch<='z') return 1;
    return 0;
}
int is_digit(char ch){
    if(ch>='0' && ch<='9') return 1;
    return 0;
}

void solve(){
    int length=strlen(ch);
    int i, count;
    if((ch[0]>='i' && ch[0]<='n') || (ch[0]>='I' && ch[0]<='N')){
        count=1;
        for(i=1;i<length;i++){
            if(is_char(ch[i]) || is_digit(ch[i]))
                count++;
        }
        if(count==length)
            printf("Integer Variable\n");
        else
            printf("Invalid\n");
    }
    else if(ch[0]>='1' && ch[0]<='9'){
        count=1;
        for(i=1;i<length;i++){
            if(is_digit(ch[i]))
                count++;
        }
        if(length==count && length<=4){
            printf("Short Integer\n");
        }
        if(length==count && length>4){
            printf("Long Integer\n");
        }

    }
    else{
        printf("Invalid\n");
    }
}

int main(){

    gets(ch);
    solve();


}
