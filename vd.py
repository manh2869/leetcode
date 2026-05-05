import requests

# 1. Gửi một yêu cầu đến trang chủ Google
print("Đang gửi yêu cầu đến Google...")
response = requests.get("https://www.google.com")

# 2. Kiểm tra mã trạng thái (Status Code)
# 200 có nghĩa là "Thành công", 404 là "Không tìm thấy"
print(f"Mã phản hồi từ Server: {response.status_code}")

if response.status_code == 200:
    print("Kết nối thành công!")
    # 3. In ra 100 ký tự đầu tiên của mã HTML mà Google gửi về máy bạn
    print("Nội dung nhận được (HTML):")
    print(response.text[:100] + "...")
else:
    print("Có lỗi xảy ra khi kết nối.")