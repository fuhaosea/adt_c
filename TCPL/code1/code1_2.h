double  trans_CF(int length,char mode){
    double result = (double)length;
    // double tmp_result = 0.0;
    if(mode == 'F'){
        result = (result - 32 ) * 5.0 / 9.0;
        return result;
    }
    else{
        result = ( result / 5.0 * 9.0) + 32;
        // tmp_result = result;
        // for( int item = 0; item < 9; item++){
        //     tmp_result = (tmp_result - 32 ) * 5.0 / 9.0;

        // }
        return result;
    }
}