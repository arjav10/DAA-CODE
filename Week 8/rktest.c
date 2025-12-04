#include<stdio.h>
#include<string.h>

int main(){
    char txt[] = "ababaabbbabca";
    char pat[] = "abc";
    
    int N =strlen (txt);
    int M = strlen (pat);
    
    int hp=0;
    int found=0;
    
    for(int i=0; i<M; i++){
        hp = hp + (pat[i]-'a'+1);
        
    }
    
    for (int i=0; i<=N-M; i++){
        int ht =0;
        
        for (int j=0; j<M; j++){
            ht = ht + (txt[i+j]-'a'+1);
        
        }
        if (ht==hp){
            int j=0;
            while (j<M && txt[i+j] == pat[j])
            j++;
            
            if (j==M){
            printf("match at index %d\n",i);
            found = 1;
            } 
        }
    }
    if (!found){
        printf("match not found");
    }
    return 0;
}