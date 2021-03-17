void rFilter(char *s) {
    int count=0;
    while((s+count)<(s+strlen(s))){
        if(*(s+count)<'A' || *(s+count)>'z'){
            *(s+count)='_';
        }
        if(*(s+count)>char(91)&&*(s+count)<char(96)){
            *(s+count)='_';
        }
        ++count;
    }
}
