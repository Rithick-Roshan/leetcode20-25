void reverseString(char* s, int n) {
    
    // int n=strlen(s);

    for(int i=0,m=n-1;i<n/2;i++,m--){
        char t=s[i];
        s[i]=s[m];
        s[m]=t;
    }
}