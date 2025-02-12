char* removeOuterParentheses(char* s) {
    int len = strlen(s);  
    char *ans = (char *)malloc(sizeof(char) * 100000); 
    
    if (ans == NULL) { 
        return NULL;
    }

    
    int count=0,j=0;

    for(int i=0;i<strlen(s);i++){
        if(s[i] == '('){
            if(count!=0){
                //   printf("%c",s[i]);
                   ans[j++]=s[i];
            }
             count++;
        }
        else{
            count--;
            if(count!=0){
                ans[j++]=s[i];
            }
        }
    }
    ans[j]='\0';
    printf("%s",ans);
    return ans;
    
}