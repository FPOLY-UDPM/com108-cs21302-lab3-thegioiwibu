/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH TIỀN ĐIỆN 
//  Input: Nhập vào số điện tiêu thụ hàng tháng 
//  Output: Hiển thị số tiền cần phải đóng
 
#include <stdio.h>

   // Xử lý, tính toán VÀ Hiển thị kết quả
 printf("Nhap so dien tieu thu (kWh): ");
scanf("%d", &soDien);
if (soDien <= 50) {
    tienDien = soDien * 1678;
} else if (soDien <= 100) {
    tienDien = 50 * 1734 + (soDien - 50) * 1734;
} else if (soDien <= 200) {
    
}