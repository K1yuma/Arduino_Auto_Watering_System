Hệ Thống Tưới Cây Tự Động

Dự án này là một hệ thống tưới cây tự động dựa trên Arduino, giúp theo dõi độ ẩm của đất bằng cảm biến độ ẩm và hiển thị trạng thái trên màn hình LCD I2C.

## Tính năng
- Theo dõi độ ẩm đất theo thời gian thực.
- Hiển thị trạng thái trên màn hình LCD I2C 16x2.
- Tự động điều khiển tưới cây dựa trên ngưỡng độ ẩm.

## Linh kiện
- Arduino Uno
- Màn hình LCD I2C 16x2 (Địa chỉ: 0x27)
- Cảm biến độ ẩm đất
- Module Relay điều khiển máy bơm nước
- Dây nối

## Sơ đồ nguyên lý (Schematic)
<img width="3000" height="2146" alt="circuit_image" src="https://github.com/user-attachments/assets/d9c28d40-5d4c-4265-8e0c-83e78b0ca3f5" />

## Sơ đồ đấu nối (Wiring)
Bảng dưới đây mô tả các kết nối dây cho dự án:

| Linh kiện | Chân Arduino | Mô tả |
|-----------|--------------|-------|
| **Cảm biến đất** | A0 | Đầu ra Analog |
| **LCD I2C** | SDA (A4) | Dữ liệu nối tiếp |
| **LCD I2C** | SCL (A5) | Xung nhịp nối tiếp |
| **LCD I2C** | VCC | 5V |
| **LCD I2C** | GND | Tiếp địa (Ground) |
| **Đầu ra 1** | Chân 7 | Chân điều khiển Relay |
| **Đầu ra 2** | Chân 8 | Chân LED trạng thái |
| **Đầu ra 3** | Chân 9 | Chân LED trạng thái |

## Cách sử dụng
1. Kết nối các linh kiện theo bảng sơ đồ đấu nối.
2. Mở file `plant_test.ino` trong Arduino IDE.
3. Cài đặt thư viện `LiquidCrystal_I2C`.
4. Nạp code (Upload) vào Arduino của bạn.
5. Theo dõi màn hình LCD để biết mức độ ẩm và trạng thái tưới.
