#include<stdio.h>
//Count number of words , letters, digits and other characters
//Separate letters, digits, others characters
// Md. Tareq Zaman, Part-3, 2019


char str[100];
int is_digit(char ch){
    if(ch>='0' && ch<='9') return 1;
    return 0;
}

int is_char(char ch){
    if(ch>='A' && ch<='Z') return 1;
    if(ch>='a' && ch<='z') return 1;

    return 0;
}
void count(){
    int cnt=1, letter_count=0, digit_count=0, others_count=0,i,j,k,x,y;
    for(i=0;str[i];i++){
        if(str[i]==' '&&(is_char(str[i+1])||is_digit(str[i+1]))){
           cnt++;
        }
        if(is_char(str[i])) letter_count++;
        if(is_digit(str[i])) digit_count++;
        if(!is_char(str[i]) && !is_digit(str[i])) others_count++;
    }
    printf("\n\nNumbers of words : %d\n",cnt);
    printf("Numbers of letters : %d\n",letter_count);
    printf("Numbers of digit : %d\n",digit_count);
    printf("Numbers of Other char : %d\n",others_count);

}

char letters[100],digits[100],others[100];
int inl=0,ind=0,ino=0;

int markl[300],markd[300],marko[300];

void separate(){
    int i,j,k,x,y;

    for(i=0;str[i];i++){
        x=(int)str[i];

        if(is_char(str[i]) && !markl[x]){
            letters[inl++]=str[i];
            letters[inl++]=' ';
            markl[x]=1;
        }
        if(is_digit(str[i]) && !markd[x]){
            digits[ind++]=str[i];
            digits[ind++]=' ';
            markd[x]=1;
        }
        if(!is_digit(str[i]) && !is_char(str[i]) & !marko[x]){
            others[ino++]= str[i];
            others[ino++]= ' ';
            marko[x]=1;
        }


    }
    letters[inl] = '\0';
    digits[ind] = '\0';
    others[ino] = '\0';
    printf("\n\nSeparated letters : %s\n",letters);
    printf("Separated digits : %s\n",digits);
    printf("Separated others : %s\n",others);
}


int main(){
     int i,j,k,l,m,n;

     freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    scanf(" %[^\n]",str);

    count();
    separate();
    //put_id();

    return 0;
}
