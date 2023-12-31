/*
    จงเขียนโปรแกรมภาษาซีเพื่อเก็บข้อมูลเข้าไปในอาเรย์จำนวน N ค่า และแสดงผลลัพธ์ออกมาบนหน้าจอ (โดยหากกรอก -1 ให้หยุดกรอกค่าและแสดงผลทันที)
    
    Test case:
        Input [0] : 
            1
        Input [1] : 
            1
        Input [2] : 
            3
        Input [3] : 
            9
        Input [4] : 
            8
        Input [5] : 
            2
        Input [6] : 
            7
        Input [7] : 
            8
        Input [8] : 
            -1
    Output:
        Index = 0 1 2 3 4 5 6 7
        Array = 1 1 3 9 8 2 7 8

*/

#include <stdio.h>

int main() {
    int array[ 100 ] ;
    int n = 0 , k = 0 ;

    while ( k != -1 ) {
        printf ( "Input [%d] :\n", n ) ;
        scanf ( "%d", &array[ n ] ) ;
        if ( array[ n ] == -1 ) { // ถ้าเจอ -1 ให้หยุดเก็บค่าทันที
            break ;
        } // end if
        k = array [ n ]  ;
        n++ ;
    } // end while
    
    printf ( "Index =" ) ;
    for ( int i = 0 ; i < n ; i++ ) { // แสดง Index
        printf ( " %d", i ) ;
    } // end for

    printf ( "\nArray =" ) ;
    for ( int i = 0 ; i < n ; i++ ) { // แสดง Array
        printf ( " %d", array[ i ] ) ;
    } // end for
    return 0 ;
}