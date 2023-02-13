// Lab 34
/*  BÀI 1:
    Nhập một số nguyên (int)
    Kiểm tra xem số đó là số chẵn hay lẻ.
    In kết quả.
*/
/*  BÀI 2:
    Nhập tên học sinh;
    Nhập điểm trung bình Toán, Lý, Hóa của học sinh đó.
    Tính điểm trung bình 3 môn Toán, Lý, Hóa và
    Kiểm tra xem học sinh đó xếp hạng loại gì.
    Biết:   9-10 điểm => xếp loại A
            7-8 điểm => xếp loại B
            5-6 điểm => xếp loại C
            Dưới 5 điểm => xếp loại D
*/

#include <stdio.h>

int main()
{
    int x;
    printf("Nhap x:");
    scanf("%d", &x);

    if (x % 2 == 1)
    {
        printf("%d la so le", x);
        return 0;
    }
    printf("%d la so chan", x);

    return 0;
}