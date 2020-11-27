unsigned int m_strlen(char * str){
    int result = 0;
    for(int item = 0; str[item] != 0 ; item ++){
            result++;
    }
    return result;
}
// transfrom : string -> num
int trans_sn (char * str){
    int result = 0, length = strlen(str);
    int s = 1,state = 1,item =  0;
    //set state - or + 
    if(str[0] == '-')state = -1;
    //check    
    for(item = 1; item < length - 1;item++){

        if( str[item] > 57 || str[item] < 48)   return -1;
        
    }
    //count
    for(item = 1; item <= length; item++){
        int num = (int)str[ length  - item ] - 48;
        if( num <= 0){
            s *= 10;
            continue;
        }
        result += num * s;
        s *= 10;
    }
    return result * state;
}