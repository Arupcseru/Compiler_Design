#include<stdio.h>
char str[200];


int is_char(char ch){
    if(ch>='A'&&ch<='Z')
        return 1;
    if(ch>='a'&&ch<='z')
        return 1;
    return 0;
}
int is_digit(char ch){
    if(ch>='0' && ch<='9')
        return 1;
    return 0;
}
void solve(){
    int length=strlen(str);
    int i, count;
    if(str[0]=='c'){
        if(str[1]=='h' && str[2]=='_'){
            count=3;
            for(i=3; i<length; i++){
                if(is_char(str[i]) || is_digit(str[i]))
                    count++;
            }
            if(count==length)
                printf("Character Variable\n");
            else
                printf("Invalid\n");
        }
        else
            printf("Invalid\n");
    }
    else if(str[0]=='b'){
        if(str[1]=='n' && str[2]=='_'){
            count=3;
            for(i=3; i<length; i++){
                if(is_char(str[i]) || is_digit(str[i]))
                    count++;
            }
            if(count==length)
                printf("Binary Variable\n");
            else
                printf("Invalid\n");
        }
        else
            printf("Invalid\n");
    }
    else if(str[0]=='0'){
        count=1;
        for(i=1;i<length;i++){
            if(str[i]=='0' || str[i]=='1')
                count++;
        }
        if(count>=2 && count==length)
            printf("Binary Number\n");
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
    return 0;

}
