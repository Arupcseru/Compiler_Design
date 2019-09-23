#include<bits/stdc++.h>
using namespace std;

string keywords[32]={"auto","double","int","struct","break","else","long",
       "switch","case","enum","register","typedef","char",
       "extern","return","union","const","float","short",
       "unsigned","continue","for","signed","void","default",
       "goto","sizeof","voltile","do","if","static","while"};

bool iskeyword( string st){
    for ( int i = 0;i < 32; i++){
        if(keywords[i] == st) return 1;
    }
    return 0;
}

bool isarithmetic ( string st ){
    if ( st == "+" || st == "-" || st == "*" || st == "/" || st == "%" || st == "^" || st == "=" ) return 1;
    return 0;
}

bool isrelational ( string st ){
    if ( st == "<" || st== ">" || st == "!=" || st == "==" || st == "<=" || st == ">=" ) return 1;
    return 0;
}
bool islogical_bit ( string st ){
    if( st == "&&" || st == "||" || st == "&" || st == "^" ||
        st == "~" || st == "<<" || st == ">>") return 1;
    return 0;
}
bool ischar(char ch){
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) return 1;
    return 0;
}
bool is_digit (char ch){
    if (ch >= '0' && ch <= '9') return 1;
    return 0;
}
isidentifier(string str){
    if (ischar(str[0])){
        int i=1,cnt=1;
        for (i=1; str[i];i++){
            if (! ischar(str[i]) && ! isdigit(str[i]) && str[i] != '_') return 0;
        }
        return 1;
    }
    return 0;
}
 void checker(string str){
    if (iskeyword(str)){
        printf("is keyword.\n",str);
    }
    else if (isarithmetic(str) || isrelational(str) || islogical_bit(str)){
        printf("is operator.\n",str);

    }
    else if (isidentifier(str)){
        printf("is identifier.\n");
    }
    else {
        printf("is Undefined.\n",str);
    }
 }
int main(){
    string str ;

    freopen("keyword_identifier_operator7.cpp","r",stdin);

    while ( cin >> str){
        cout << str << " ";
        checker(str);
    }
    return 0;
}
