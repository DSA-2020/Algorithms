#include<stdio.h>
#include<string.h>
#define d 256

void search( char *txt, char *pat , int q ){
    int m = strlen(pat);
    int n = strlen(txt);

    int h=1;
    int p=0;
    int t=0;
    int i,j;

    for(i=0; i<m-1 ; i++){
        h = (h*d)%q;
    }

    for(i=0 ; i<m ; i++){
        p = (d*p + pat[i])%q;
        t = (d*t + txt[i])%q;
    }

    for(i=0 ; i<=n-m ; i++){
        if(p==t){
            for(j=0 ; j<m ;j++){
                if( txt[i+j]!=pat[j] ){
                    break;
                }
            }
            if(j==m){
                    printf("pattern at %d" , i);
                }
        }

        if(i<n-m){
            t = (d*(t-txt[i]*h) + txt[i+m])%q;
            if(t<0){
                t+=q;
            }
        }
    }
}

int main(){
    int q = 101;
    char *txt = "string_text";
    char *pat = "text";
    search(txt,pat,q);

}
