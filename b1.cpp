void reverse(char *s) {
    char* s1=new char(strlen(s)+1);
    int count=0;
    while(count<strlen(s)){
        *(s1+strlen(s)-count-1)=*(s+count);
        ++count;
    }
    count=0;
    while(count<strlen(s)){
        *(s+count)=*(s1+count);
        ++count;
    }
}
