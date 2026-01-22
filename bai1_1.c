// VÍ DỤ
/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
    * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
    * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
    *****************************************************************************/
// BÀI 1.1: XÂY DỰNG CHƯƠNG TRÌNH TÍNH TỔNG CÁC SỐ LẺ TỪ 1 ĐẾN N
// Input: Nhập vào số nguyên dương N từ bàn phím
// Output:
// Hiển thị ra màn hình tổng các số lẻ từ 1 đến N
#include <stdio.h>
int main() {
    int N, sum = 0;
    // Nhập dữ liệu
    printf("Nhap so nguyen duong N: ");
    scanf("%d", &N);
    // Xử lý, tính toán
    for (int i = 1; i <= N; i += 2) {
        sum += i;
    }
    // Hiển thị kết quả
    printf("Tong cac so le tu 1 den %d la: %d\n", N, sum);
    return 0;
}