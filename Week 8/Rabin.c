#include<stdio.h>
#include<string.h>

#define d 256
#define q 101

void RK(char txt[], char pat[]){
    int N = strlen(txt);
    int M = strlen(pat);

    int p = 0;
    int t = 0;
    int h = 1;

    for(int i=0; i<M-1; i++)
    h = (h*d) % q;

    for(int i=0; i<M; i++){
        p = (p*d+ pat[i]) % q ;
        t = (t*d + txt [i]) % q;
    }

    for (int i=0; i<= N-M; i++){
        if (p==t ){
            int j;
            for(j=0; j<M; j++){
                if(txt[i+j] != pat[j])
                break;
            }
            if (j==M)
            printf("Pattern found : %d\n",i);

        }


        if(i <N-M){
            t= (t-txt[i]*h)*d + txt[i+M];
            t= t % q;
            if (t<0) 
            t+=q;
        }
    }
}


int main(){
    char text[1000], pattern[100];

    printf("Enter the txt:");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';


    printf("Enter the pattern:");
    fgets(pattern, sizeof(pattern), stdin);
    pattern[strcspn(pattern, "\n")] = '\0'; 


    RK(text, pattern);

    return 0;

}
