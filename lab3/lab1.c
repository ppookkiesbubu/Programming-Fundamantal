#include<stdio.h>

int main(){
    int a,x=0;
    scanf("%d",&a);
    while (1)
    {
        if(a>0)
        {
            x += a%10;
            a = a/10;
        }
        else{
            if (x>9)
            {
                a = x;
                x = 0;
            }
            else{
                printf("%d",x);
                break;
            }
            
        }
        
    }
    
    return 0;
}

// 1.รับค่าเก็บใน a
// 2. x=0
// 3.ทำซ้ำเป็นอนันต์
//     1.ถ้า a>0
//         1. x = x+ a%10
//         2. a = a/10
//     2.ถ้าไม่ใช่
//         1.ถ้า x>9
//             1.ให้ a = x
//             2. x = 0
//         2.ถ้าไม่ใช่
//             1.แสดงผลค่า x
//             2.หยุดการทำงาน
    