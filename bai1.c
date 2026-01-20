/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

// BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH TÍNH HỌC LỰC  
// Input: Nhập vào điểm của sinh viên (0-10) 
// Output: Hiển thị ra màn hình học lực của sinh viên 
// Biết rằng: 
// Học lực xuất sắc: Điểm >= 9 
// Học lực giỏi: 9 > điểm >= 8 
// Học lực khá: 8 > điểm >= 6.5 
// Học lực trung bình: 6.5 > điểm >= 5 
// Học lực yếu: 5 > điểm >= 3.5 
// Học lực kém: 3.5 > điểm

#include <stdio.h>

int main(){

    // Khai báo biến
int main(void) {
    setlocale(LC_ALL, "");

    float diem;v

    // Nhập dữ liệu
printf("Nhập điểm của sinh viên (0–10): ");
    scanf("%f", &diem);

    // Xử lý, tính toán VÀ Hiển thị kết quả
if (diem < 0 || diem > 10) {
        printf("Điểm không hợp lệ. Vui lòng nhập từ 0 đến 10.\n");
    }
    else if (diem >= 9) {
        printf("Học lực: Xuất sắc\n");
    }
    else if (diem >= 8) {
        printf("Học lực: Giỏi\n");
    }
    else if (diem >= 6.5) {
        printf("Học lực: Khá\n");
    }
    else if (diem >= 5) {
        printf("Học lực: Trung bình\n");
    }
    else if (diem >= 3.5) {
        printf("Học lực: Yếu\n");
    }
    else {
        printf("Học lực: Kém\n");
    }

    return 0;
}
    return 0;
}