#include<stdio.h>
#include<string.h>


void kmp(char *txt, char *pat){

    int N = strlen(txt);
    int M = strlen(pat);
    

    for (int i=0; i<=N-M; i++){
        int j;
        for (j=0; j<M; j++){
            if(txt[i+j] != pat[j])
            break;
        }

        if(j==M ){
            printf("pattern found %d\n",i);
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


    kmp(text, pattern);

    return 0;

}
