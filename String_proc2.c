
#include<stdio.h>
//Count how many vowels and consonants are there
//Find out vowel and consonants are existed in the above string
// Divide the given string into two separate strings, where one string only contains
// the word started with vowel, and another contains the word started with consonant.
//Munmun is the student of Computer Science & Engineering.

char str[100];
int mr[500];

int is_vowel(char ch){
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') return 1;
    return 0;
}
int is_char(char ch){
    if(ch>='A'&&ch<='Z') return 1;
    if(ch>='a'&&ch<='z') return 1;
    return 0;
}
void solve_count(){

    int cnt=0,vow=0,cons=0,vow1=0,cons1=0, others = 0,i,j,k,x,y;
    char vw[1000],cns[1000];
    for(i=0;str[i];i++){
        x=(int)str[i];
        if(is_vowel(str[i])){
           vow++;
            if(!mr[x])
                vw[vow1++] = str[i];
           //printf("%c\n",vw[vow-1]);
        }
        else if(is_char(str[i])){
            cons++;
            if(!mr[x])
                cns[cons1++] = str[i];
        }
        mr[(int)str[i]] = 1;
    }
    printf("\nNumbers of VOWELS : %d\n",vow);
    printf("Numbers of CONSONANTS : %d\n",cons);
    printf("\nVowels : ");
    for(i=0;i<vow1;i++){
        printf("%c ",vw[i]);
    }
    printf("\nConsonants : ");
    for(i=0;i<cons1;i++){
        printf("%c ",cns[i]);
    }
}

void separateVC(){
    int i,j,k,inv=0,inc=0;
    char vw[1000], cns[1000];
    for(i=0;str[i];i++){
        if(is_vowel(str[i])){
            while(str[i]!=' ' && str[i]!='\0'){
                vw[inv++]=str[i++];
            }
            i--;
            vw[inv++]=' ';
        }
        else if(is_char(str[i])){
            while(str[i]!=' ' && str[i]!='\0'){
                cns[inc++]=str[i++];
            }
            i--;
            cns[inc++]=' ';
        }
    }
    vw[inv]='\0';
    cns[inc]='\0';
    printf("\n\n Words started with vowel: %s\n",vw);
    printf(" Words started with consonant: %s\n",cns);
}


int main(){
     int i,j,k,l,m,n;

     freopen("in2.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    scanf(" %[^\n]",str);

    solve_count();
    separateVC();
    //put_id();

    return 0;
}
