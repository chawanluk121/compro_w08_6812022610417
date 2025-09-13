#include<stdio.h>

int main(){
    int i=1;  

     while (i<=10) {   
        printf("%d ",++i);  
        ++i; 
        
    }
    printf("\nEnd of loop\n");  
    
    return 0;   
}



/*
กำหนดตัวแปร i เป็น 1
ลูปจะทำงานต่อเมื่อ i<=10 เป็นจริง
เพิ่มค่าของ i ขึ้นที่ละ 1 และแสดงผลลัพธ์
เพิ่มค่าของ i ขึ้นที่ละ 1
แสดงข้อความ End of loop
จบการทำงาน
*/