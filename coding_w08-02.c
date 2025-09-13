#include<stdio.h>

int main(){
    int start,stop;
    printf("Enter start number:");
        scanf("%d",&start);
        printf("Enter stop number:");
        scanf("%d",&stop);
        printf("start number is %d and stop number %d\n",start,stop);
    printf("---------------\n");
   printf("Sequence from start to stop:");
    while(start<=stop){ 
        printf("%d ",start);
        start++;
    }
    printf("\nThank you.\n");

    return 0;
}
/*
กำหนดตัวแปร start,stop
แสดงข้อความ Enter start number
รับค่าตัวเลขเริ่มต้นจากผู้ใช้
แสดงข้อความ Enter stop number
รับค่าสิ้นสุดจากผู้ใช้งาน
แสดงค่าที่ผู้ใช้กรอกเข้ามา
แสดงข้อความ Sequence from start to stop:
ลูปจะทำงานต่อเมื่อ start<=stop เป็นจริง
แสดงผลลัพธ์ปัจจุบันของ start
เพิ่มค่า start ขึ้นทีละ 1
แสดงข้อความ Thank you.
จบการทำงาน
*/