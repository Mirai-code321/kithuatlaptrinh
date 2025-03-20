a) Hàm docfile(int*& a, int& n)
    -Mục đích: Đọc dữ liệu từ file "NUM.INP".
    -Mở file ở chế độ đọc (fopen(fn, "r")).
    -Kiểm tra xem file có mở thành công không. Nếu không, in thông báo lỗi.
    -Đọc số nguyên n (số lượng phần tử của mảng).
    -Cấp phát động mảng a với n phần tử.
    -Đọc từng phần tử vào mảng từ file.
    -Đóng file sau khi đọc xong.
    
b) Hàm xuatmang(int* a, int n)
    -Duyệt mảng a và in từng phần tử.
    
c) Hàm SNT(int n)
    -Mục đích: Kiểm tra xem một số có phải số nguyên tố không.
    -Nếu n < 2 thì không phải số nguyên tố.
    -Duyệt từ 2 đến sqrt(n), nếu n chia hết cho bất kỳ số nào trong khoảng này, trả về false.
    -Nếu không chia hết, trả về true.
    
d) Hàm demSNT(int* a, int n)
    -Mục đích: Đếm số lượng số nguyên tố trong mảng.
    -Duyệt mảng a.
    -Kiểm tra từng phần tử có phải số nguyên tố không (gọi hàm SNT).
    -Nếu đúng, tăng biến đếm dem.
    -Trả về tổng số số nguyên tố.

e) Hàm sapxeptang(int* a, int n)
    -Mục đích: Sắp xếp mảng theo thứ tự tăng dần.
    -Duyệt từng phần tử i của mảng.
    -So sánh với các phần tử j sau nó.
    -Nếu phần tử trước lớn hơn phần tử sau, hoán đổi hai phần tử.

f) Hàm ghifile(int*& a, int& n)
    -Mục đích: Ghi kết quả ra file "NUM.OUT".
    -Mở file ở chế độ ghi (fopen(fn, "w")).
    -Kiểm tra nếu mở file thất bại, in thông báo lỗi.
    -Đếm số nguyên tố trong mảng và ghi vào file.
    -Sắp xếp mảng theo thứ tự tăng dần.
    -Ghi các phần tử đã sắp xếp vào file.
    -Đóng file.
    -Xuất mảng ra màn hình để kiểm tra.

g) Hàm main()
    -Khai báo con trỏ a và biến n.
    -Gọi docfile() để đọc dữ liệu từ file.
    -Gọi xuatmang() để hiển thị mảng ban đầu.
    -Gọi ghifile() để xử lý và ghi kết quả.
    -Kết thúc chương trình.
