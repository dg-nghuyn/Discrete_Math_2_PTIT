# 📄Problem Statements

This document contains all problem descriptions in Vietnamese for the exercises included in the Discrete Mathematics 2 course at PTIT.  
These problems are listed for academic reference, practice, and exam preparation.

> 📌 All content remains in Vietnamese to preserve original structure and clarity for PTIT students.

---

## 🧭 CT001 - Chu trình Euler 01

(Tệp chương trình: CT.CPP; Thời gian chạy chương trình ≤ 1 giây)

Cho trước đồ thị vô hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng danh sách cạnh. Yêu cầu:

    (1) Kiểm tra G có phải là đồ thị Euler, nửa Euler hay không?
    (2) Tìm một chu trình Euler bắt đầu tại đỉnh u của G là đồ thị Euler.
Dữ liệu: Vào từ tệp CT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

+ Nếu t = 1 thì dòng thứ 2 chứa hai số nguyên dương n là số đỉnh và m là số cạnh của G, với n <= 100, m <= n(n-1)/2. Nếu t = 2 thì dòng thứ 2 chứa ba số nguyên dương n, m và u, trong đó n là số đỉnh, m là số cạnh và u là một đỉnh của G, với 1 <= u <= n <= 100, m <= n(n-1)/2.

+ Trong m dòng tiếp theo, mỗi dòng thứi (1 <= i <=m) chứa chứa hai số nguyên ui,vi là đỉnh đầu và đỉnh cuối của cạnh ei, với 1 <= ui < vi <= n. Trong trường hợp t = 2 thì G là đồ thị Euler.

Kết quả: Ghi ra tệp CT.OUT:

- Nếu t = 1 thì ghi ra giá trị 1 nếu G là Euler, giá trị 2 nếu G là nửa Euler và giá trị 0 nếu G không phải là Euler và nửa Euler.

- Nếu t = 2 thì ghi ra trên một dòng gồm dãy các đỉnh mô tả chu trình Euler bắt đầu tại đỉnh u.

## 🧭 CT002 - Chu trình Euler 02

(Tệp chương trình: CT.CPP; Thời gian chạy chương trình ≤ 1 giây)

Cho trước đồ thị vô hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận kề.

Yêu cầu:

    (1) Kiểm tra G có phải là đồ thị Euler, nửa Euler hay không?

    (2) Tìm một chu trình Euler bắt đầu tại đỉnh u của G là đồ thị Euler.

Dữ liệu: Vào từ tệp CT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

+ Nếu t = 1 thì dòng thứ hai chứa số nguyên dương n là số đỉnh của G, n  100. Nếu t = 2 thì dòng thứ 2 chứa hai số nguyên dương n và u, trong đó n là số đỉnh và u là một đỉnh của G, 1 <= u <= n <= 100.

+ Trong n dòng tiếp theo, mỗi dòng chứa n số 0 hoặc 1 mô tả ma trận kề của G. Trong trường hợp t = 2 thì G là đồ thị Euler.

Kết quả: Ghi ra tệp CT.OUT:

- Nếu t = 1 thì ghi ra giá trị 1 nếu G là Euler, giá trị 2 nếu G là nửa Euler và giá trị 0 nếu G không phải là Euler và nửa Euler.

- Nếu t = 2 thì ghi ra trên một dòng gồm dãy các đỉnh mô tả chu trình Euler bắt đầu tại đỉnh u.

## 🧭 CT003 - Chu trình Euler 03

(Tệp chương trình: CT.CPP; Thời gian chạy chương trình ≤ 1 giây)

Cho trước đồ thị có hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng danh sách kề.

Yêu cầu:

    (1) Kiểm tra G có phải là đồ thị Euler, nửa Euler hay không?

    (2) Tìm một chu trình Euler bắt đầu tại đỉnh u của G là đồ thị Euler.
Dữ liệu: Vào từ tệp CT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Nếu t = 1 thì dòng thứ hai chứa số nguyên dương n là số đỉnh của G, n <= 100. Nếu t = 2 thì dòng thứ 2 chứa hai số nguyên dương n và u, trong đó n là số đỉnh và u là một đỉnh của G, 1 <= u <= n <= 100.

- Trong n dòng tiếp theo, mỗi dòng thứ i (1 <= i <= n) chứa số tự nhiên k là số lương đỉnh kề với đỉnh i và k số tự nhiên theo thứ tự tăng v1, ..., vk là số hiệu các đỉnh kề tương ứng. Trong trường hợp t = 2 thì G là đồ thị Euler.

Kết quả: Ghi ra tệp CT.OUT:

- Nếu t = 1 thì ghi ra giá trị 1 nếu G là Euler, giá trị 2 nếu G là nửa Euler và giá trị 0 nếu G không phải là Euler và nửa Euler.

- Nếu t = 2 thì ghi ra trên một dòng gồm dãy các đỉnh mô tả chu trình Euler bắt đầu tại đỉnh u.

## 🧭 CT004 - Chu trình Hamilton 01

(Tệp chương trình: CT.CPP; Thời gian chạy chương trình ≤ 1 giây)

Cho trước đồ thị G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận kề và một đỉnh u.

Yêu cầu: Tìm tất cả các chu trình Hamilton của G bắt đầu tại u.

Dữ liệu: Vào từ tệp CT.INP:

- Dòng đầu chứa hai số nguyên dương n là số đỉnh và u là một đỉnh của G, 1 <= u <= n <= 100.

- Trong n dòng tiếp theo, mỗi dòng chứa n số 0 hoặc 1 mô tả ma trận kề của G.

Kết quả: Ghi ra tệp CT.OUT:

- Dòng đầu ghi giá trị t là số lượng các chu trình Hamilton tìm được.

- Trong trường hợp t > 0, tiếp theo ghi ra t dòng, mỗi dòng ghi dãy các đỉnh của một chu trình Hamilton.

## 🧭 CT005 - Chu trình Hamilton 02

(Tệp chương trình: CT.CPP; Thời gian chạy chương trình ≤ 1 giây)

Cho trước đồ thị có hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng danh sách cạnh và một đỉnh u.

Yêu cầu: Tìm tất cả các chu trình Hamilton của G bắt đầu tại u.

Dữ liệu: Vào từ tệp CT.INP:

- Dòng đầu chứa ba số nguyên dương n, m và u, trong đó n là số đỉnh, m là số cạnh và u là một đỉnh của G, với 1 <=u <= n <= 100, m <= n(n-1)/2.

- Trong m dòng tiếp theo, mỗi dòng thứ i (1 <= i <=m) chứa hai số nguyên ui,vi là đỉnh đầu và đỉnh cuối của cạnh ei, với 1 <= ui, vi <= n.

Kết quả: Ghi ra tệp CT.OUT:

- Dòng đầu ghi giá trị t là số lượng các chu trình Hamilton tìm được.

- Trong trường hợp t > 0, tiếp theo ghi ra t dòng, mỗi dòng ghi dãy các đỉnh của một chu trình Hamilton.

## 🧭 CT006 - Chu trình Hamilton 03

(Tệp chương trình: CT.CPP; Thời gian chạy chương trình ≤ 1 giây)

Cho trước đồ thị có trọng số G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận trọng số không âm và một đỉnh u.

Yêu cầu: Tìm chu trình Hamilton của G bắt đầu tại u có tổng trọng số trên các cạnh là nhỏ nhất sử dụng thuật toán duyệt toàn thể.

Dữ liệu: Vào từ tệp CT.INP:

- Dòng đầu chứa hai số nguyên dương n và u, trong đó n là số đỉnh, u là đỉnh của G, với 1 <= u <= n <= 100.

- Trong n dòng tiếp theo, mỗi dòng thứ i chứa n số tự nhiên c[i][j] mô tả ma trận trọng số của G. Trong đó, với hai đỉnh i, j (i khác j) có cạnh nối thì 0 < c[i][j] <= 50, nếu không có cạnh nối thì c[i][j] = 10000 và c[i][i] = 0.

Kết quả: Ghi ra tệp CT.OUT:

- Nếu tìm được chu trình Hamilton thỏa mãn yêu cầu thì ghi ra theo quy cách:

- Dòng đầu ghi tổng trọng số của tất cả các cạnh trong chu trình Hamilton tìm được;

- Dòng sau ghi dãy các đỉnh trên chu trình Hamilton tìm được bắt đầu từ u.

- Nếu không có chu trình Hamilton thì ghi giá trị 0.

## 📌 DT001 - Ma trận kề - Danh sách cạnh

Cho đồ thị vô hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận kề.

Yêu cầu:

    (1) Xác định bậc các đỉnh của G;

    (2) Biểu diễn G dưới dạng danh sách cạnh.

Dữ liệu: Vào từ tệp DT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Dòng thứ hai chứa số nguyên dương n không vượt quá 100 là số đỉnh của G.

- Trong n dòng tiếp theo, mỗi dòng chứa n số 0 hoặc 1 mô tả ma trận kề của G.

Kết quả: Ghi ra tệp DT.OUT:

- Nếu t = 1 thì ghi ra một dòng gồm n số tự nhiên tương ứng là bậc của n đỉnh.

- Nếu t = 2 thì ghi ra theo qui cách:

+ Dòng đầu ghi ra hai số tự nhiên n và m là số đỉnh và số cạnh của G.

+ Trong m dòng tiếp theo, mỗi dòng thứ i (1 £ i £ m) ghi hai số ui, vi là đỉnh đầu và đỉnh cuối của cạnh ei. Các cạnh của G được đánh số theo thứ tự từ điển.

## 🔗 TRR1001 - 1.1 Đồ thị

Cho đồ thị vô hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận kề.

Yêu cầu:

    (1) Xác định bậc các đỉnh của G;
    
    (2) Biểu diễn G dưới dạng danh sách cạnh.

Dữ liệu: Vào từ tệp DT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Dòng thứ hai chứa số nguyên dương n không vượt quá 100 là số đỉnh của G.

- Trong n dòng tiếp theo, mỗi dòng chứa n số 0 hoặc 1 mô tả ma trận kề của G.

Kết quả: Ghi ra tệp DT.OUT:

- Nếu t = 1 thì ghi ra một dòng gồm n số tự nhiên tương ứng là bậc của n đỉnh.

- Nếu t = 2 thì ghi ra theo qui cách:

+ Dòng đầu ghi ra hai số tự nhiên n và m là số đỉnh và số cạnh của G.

+ Trong m dòng tiếp theo, mỗi dòng thứ i (1 £ i £ m) ghi hai số ui, vi là đỉnh đầu và đỉnh cuối của cạnh ei. Các cạnh của G được đánh số theo thứ tự từ điển.

## 🔗 TRR1002 - 1.2 Đồ thị

Cho đồ thị vô hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận kề.

Yêu cầu:

    (1) Xác định bậc các đỉnh của G;

    (2) Biểu diễn G dưới dạng danh sách kề.

Dữ liệu: Vào từ tệp DT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Dòng thứ hai chứa số nguyên dương n không vượt quá 100 là số đỉnh của G.

- Trong n dòng tiếp theo, mỗi dòng chứa n số 0 hoặc 1 mô tả ma trận kề của G.

Kết quả: Ghi ra tệp DT.OUT:

- Nếu t = 1 thì ghi ra một dòng gồm n số tự nhiên tương ứng là bậc của n đỉnh.

- Nếu t = 2 thì ghi ra theo qui cách:

+ Dòng đầu ghi ra số tự nhiên n là số đỉnh của G.

+ Trong n dòng tiếp theo, mỗi dòng thứ i (1 £ i £ n) ghi số tự nhiên k là số lương đỉnh kề với đỉnh i và k số tự nhiên theo thứ tự tăng v1, …, vk là số hiệu các đỉnh kề tương ứng.

## 🔗 TRR1003 - 1.3 Đồ thị

Cho đồ thị vô hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận kề.

Yêu cầu:

    (1) Xác định bậc các đỉnh của G;

    (2) Biểu diễn G dưới dạng ma trận liên thuộc.

Dữ liệu: Vào từ tệp DT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Dòng thứ hai chứa số nguyên dương n không vượt quá 100 là số đỉnh của G.

- Trong n dòng tiếp theo, mỗi dòng chứa n số 0 hoặc 1 mô tả ma trận kề của G.

Kết quả: Ghi ra tệp DT.OUT:

- Nếu t = 1 thì ghi ra một dòng gồm n số tự nhiên tương ứng là bậc của n đỉnh.

- Nếu t = 2 thì ghi ra n+1 dòng:

+ Dòng đầu ghi ra hai số tự nhiên n và m là số hàng và số cột của ma trận liên thuộc.

+ Trong n dòng tiếp theo, mỗi dòng ghi m số 0 hoặc 1 mô tả ma trận liên thuộc tìm được. Các cạnh của G được đánh số theo thứ tự từ điển.

## 🔗 TRR1004 - 1.4 Đồ thị

Cho đồ thị vô hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng danh sách cạnh.

Yêu cầu:

    (1) Xác định bậc các đỉnh của G;

    (2) Biểu diễn G dưới dạng ma trận kề.

Dữ liệu: Vào từ tệp DT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Dòng thứ hai chứa hai số nguyên n là số đỉnh và m là số cạnh của G. Trong đó, 1 £ n £ 100 và 1 £ m £ n(n-1)/2.

- Trong m dòng tiếp theo, mỗi dòng thứ i (1 £ i £ m) chứa hai số nguyên ui, vi là đỉnh đầu và đỉnh cuối của cạnh ei. Trong đó, 1 £ ui < vi £ n.

Kết quả: Ghi ra tệp DT.OUT:

- Nếu t = 1 thì ghi ra một dòng gồm n số tự nhiên tương ứng là bậc của n đỉnh.

- Nếu t = 2 thì ghi ra n+1 dòng:

+ Dòng đầu ghi ra số tự nhiên n là bậc của ma trận kề.

+ Trong n dòng tiếp theo, mỗi dòng ghi n số 0 hoặc 1 mô tả ma trận kề tìm được.

## 🔗 TRR1005 - 1.5 Đồ thị

Cho đồ thị vô hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng danh sách cạnh.

Yêu cầu:

    (1) Xác định bậc các đỉnh của G;

    (2) Biểu diễn G dưới dạng danh sách kề.

Dữ liệu: Vào từ tệp DT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Dòng thứ hai chứa hai số nguyên n là số đỉnh và m là số cạnh của G. Trong đó, 1 £ n £ 100 và 1 £ m £ n(n-1)/2.

- Trong m dòng tiếp theo, mỗi dòng thứ i (1 £ i £ m) chứa hai số nguyên ui, vi là đỉnh đầu và đỉnh cuối của cạnh ei. Trong đó, 1 £ ui < vi £ n.

Kết quả: Ghi ra tệp DT.OUT:

- Nếu t = 1 thì ghi ra một dòng gồm n số tự nhiên tương ứng là bậc của n đỉnh.

- Nếu t = 2 thì ghi ra n+1 dòng:

+ Dòng đầu ghi ra số tự nhiên n là số đỉnh của G.

+ Trong n dòng tiếp theo, mỗi dòng thứ i (1 £ i £ n) ghi số tự nhiên k là số lương đỉnh kề với đỉnh i và k số tự nhiên theo thứ tự tăng v1, …, vk là số hiệu các đỉnh kề tương ứng.

## 🔗 TRR1006 - 1.6 Đồ thị

Cho đồ thị vô hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng danh sách cạnh.

Yêu cầu:

    (1) Xác định bậc các đỉnh của G;

    (2) Biểu diễn G dưới dạng ma trận liên thuộc.

Dữ liệu: Vào từ tệp DT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Dòng thứ hai chứa hai số nguyên n là số đỉnh và m là số cạnh của G. Trong đó, 1 £ n £ 100 và 1 £ m £ n(n-1)/2.

- Trong m dòng tiếp theo, mỗi dòng thứ i (1 £ i £ m) chứa hai số nguyên ui, vi là đỉnh đầu và đỉnh cuối của cạnh ei. Trong đó, 1 £ ui < vi £ n; Các cạnh của G được liệt kê theo thứ tự từ điển.

Kết quả: Ghi ra tệp DT.OUT:

- Nếu t = 1 thì ghi ra một dòng gồm n số tự nhiên tương ứng là bậc của n đỉnh.

- Nếu t = 2 thì ghi ra n+1 dòng:

+ Dòng đầu ghi ra hai số tự nhiên n và m là số hàng và số cột của ma trận liên thuộc.

+ Trong n dòng tiếp theo, mỗi dòng ghi m số 0 hoặc 1 mô tả ma trận liên thuộc tìm được. Các cạnh của G được đánh số theo thứ tự từ điển.

## 🔗 TRR1007 - 1.7 Đồ thị

Cho đồ thị vô hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng danh sách kề.

Yêu cầu:

    (1) Xác định bậc các đỉnh của G;

    (2) Biểu diễn G dưới dạng ma trận kề.

Dữ liệu: Vào từ tệp DT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Dòng thứ hai chứa hai số nguyên n là số đỉnh của G. Trong đó, 1 £ n £ 100.

- Trong n dòng tiếp theo, mỗi dòng thứ i (1 £ i £ n) chứa số tự nhiên k là số lương đỉnh kề với đỉnh i và k số tự nhiên theo thứ tự tăng v1, …, vk là số hiệu các đỉnh kề tương ứng. 

Kết quả: Ghi ra tệp DT.OUT:

- Nếu t = 1 thì ghi ra một dòng gồm n số tự nhiên tương ứng là bậc của n đỉnh.

- Nếu t = 2 thì ghi ra n+1 dòng:

+ Dòng đầu ghi ra số tự nhiên n là bậc của ma trận kề.

+ Trong n dòng tiếp theo, mỗi dòng ghi n số 0 hoặc 1 mô tả ma trận kề tìm được.

## 🔗 TRR1008 - 1.8 Đồ thị

Cho đồ thị vô hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng danh sách kề.

Yêu cầu:

    (1) Xác định bậc các đỉnh của G;

    (2) Biểu diễn G dưới dạng danh sách cạnh.

Dữ liệu: Vào từ tệp DT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Dòng thứ hai chứa hai số nguyên n là số đỉnh của G. Trong đó, 1 £ n £ 100.

- Trong n dòng tiếp theo, mỗi dòng thứ i (1 £ i £ n) chứa số tự nhiên k là số lương đỉnh kề với đỉnh i và k số tự nhiên theo thứ tự tăng v1, …, vk là số hiệu các đỉnh kề tương ứng. 

Kết quả: Ghi ra tệp DT.OUT:

- Nếu t = 1 thì ghi ra một dòng gồm n số tự nhiên tương ứng là bậc của n đỉnh.

- Nếu t = 2 thì ghi ra theo qui cách:

+ Dòng đầu ghi ra hai số tự nhiên n và m là số đỉnh và số cạnh của G.

+ Trong m dòng tiếp theo, mỗi dòng thứ i (1 £ i £ m) ghi hai số ui, vi là đỉnh đầu và đỉnh cuối của cạnh ei. Các cạnh của G được đánh số theo thứ tự từ điển

## 🔗 TRR1009 - 1.9 Đồ thị

Cho đồ thị vô hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng danh sách kề.

Yêu cầu:

    (1) Xác định bậc các đỉnh của G;

    (2) Biểu diễn G dưới dạng danh sách cạnh.

Dữ liệu: Vào từ tệp DT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Dòng thứ hai chứa hai số nguyên n là số đỉnh của G. Trong đó, 1 £ n £ 100.

- Trong n dòng tiếp theo, mỗi dòng thứ i (1 £ i £ n) chứa số tự nhiên k là số lương đỉnh kề với đỉnh i và k số tự nhiên theo thứ tự tăng v1, …, vk là số hiệu các đỉnh kề tương ứng. 

Kết quả: Ghi ra tệp DT.OUT:

- Nếu t = 1 thì ghi ra một dòng gồm n số tự nhiên tương ứng là bậc của n đỉnh.

- Nếu t = 2 thì ghi ra n+1 dòng:

+ Dòng đầu ghi ra hai số tự nhiên n và m là số hàng và số cột của ma trận liên thuộc.

+ Trong n dòng tiếp theo, mỗi dòng ghi m số 0 hoặc 1 mô tả ma trận liên thuộc tìm được. Các cạnh của G được đánh số theo thứ tự từ điển.

## 🔗 TRR1010 - 1.10 Đồ thị

Cho đồ thị vô hướng có trọng số G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận trọng số.

Yêu cầu:

    (1) Xác định bậc các đỉnh của G;

    (2) Biểu diễn G dưới dạng danh sách cạnh với trọng số.

Dữ liệu: Vào từ tệp DT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Dòng thứ hai chứa số nguyên dương n không vượt quá 100 là số đỉnh của G.

- Trong n dòng tiếp theo, mỗi dòng thứ i (1 £ i £ n) chứa n số tự nhiên c[i][j] (1 £ j £ n) mô tả ma trận trọng số của G. Trong đó, với hai đỉnh i, j (i khác j) có cạnh nối thì 0 < c[i][j] £ 50, nếu không có cạnh nối thì c[i][j] = 10000 và c[i][i] = 0.

Kết quả: Ghi ra tệp DT.OUT:

- Nếu t = 1 thì ghi ra một dòng gồm n số tự nhiên tương ứng là bậc của n đỉnh.

- Nếu t = 2 thì ghi ra theo qui cách:

+ Dòng đầu ghi ra hai số tự nhiên n và m là số đỉnh và số cạnh của G.

+ Trong m dòng tiếp theo, mỗi dòng thứ i (1 £ i £ m) ghi ba số ui, vi, wi là đỉnh đầu, đỉnh cuối và trọng số của cạnh ei. Các cạnh của G được đánh số theo thứ tự từ điển.

## 🔗 TRR1011 - 1.11 Đồ thị

Cho đồ thị vô hướng có trọng số G = (V, E) gồm n đỉnh biểu diễn dưới dạng danh sách cạnh với trọng số.

Yêu cầu:

    (1) Xác định bậc các đỉnh của G;

    (2) Biểu diễn G dưới dạng ma trận trọng số.

Dữ liệu: Vào từ tệp DT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Dòng thứ hai chứa hai số nguyên dương n và m là số đỉnh và số cạnh của G, n £ 100 và 1 £ m £ n(n-1)/2.

- Trong m dòng tiếp theo, mỗi dòng thứ i (1 £ i £ m) chứa ba số ui, vi, wi là đỉnh đầu, đỉnh cuối và trọng số của cạnh ei. Trong đó, 1 £ ui < vi £ n và 1 £ wi £ 50.

Kết quả: Ghi ra tệp DT.OUT:

- Nếu t = 1 thì ghi ra một dòng gồm n số tự nhiên tương ứng là bậc của n đỉnh.

- Nếu t = 2 thì ghi ra theo qui cách:

+ Dòng đầu ghi ra số tự nhiên n là số đỉnh của G.

+ Trong n dòng tiếp theo, mỗi dòng thứ i (1 £ i £ n) chứa n số tự nhiên c[i][j] (1 £ j £ n) mô tả ma trận trọng số của G. Trong đó, với hai đỉnh i, j (i khác j) có cạnh nối thì 0 < c[i][j] £ 50, nếu không có cạnh nối thì c[i][j] = 10000 và c[i][i] = 0.

## 🔗 TRR1012 - 1.12 Đồ thị

Cho đồ thị có hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận kề.

Yêu cầu:

    (1) Xác định bán bậc vào (deg-) và bán bậc ra (deg+) các đỉnh của G;

    (2) Biểu diễn G dưới dạng danh sách cạnh.

Dữ liệu: Vào từ tệp DT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Dòng thứ hai chứa số nguyên dương n không vượt quá 100 là số đỉnh của G.

- Trong n dòng tiếp theo, mỗi dòng chứa n số 0 hoặc 1 mô tả ma trận kề của G.

Kết quả: Ghi ra tệp DT.OUT:

- Nếu t = 1 thì ghi ra n dòng, trong đó dòng thứ i (1 £ i £ n) ghi hai số tự nhiên deg- và deg+ tương ứng là bán bậc vào và ra của đỉnh i.

- Nếu t = 2 thì ghi ra theo qui cách:

+ Dòng đầu ghi ra hai số tự nhiên n và m là số đỉnh và số cạnh của G.

+ Trong m dòng tiếp theo, mỗi dòng thứ i (1 £ i £ m) ghi hai số ui, vi là đỉnh đầu và đỉnh cuối của cạnh ei. Các cạnh của G được đánh số theo thứ tự từ điển.

## 🔗 TRR1013 - 1.13 Đồ thị

Cho đồ thị có hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận kề.

Yêu cầu:

    (1) Xác định bán bậc vào (deg-) và bán bậc ra (deg+) các đỉnh của G;

    (2) Biểu diễn G dưới dạng danh sách kề.

Dữ liệu: Vào từ tệp DT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Dòng thứ hai chứa số nguyên dương n không vượt quá 100 là số đỉnh của G.

- Trong n dòng tiếp theo, mỗi dòng chứa n số 0 hoặc 1 mô tả ma trận kề của G.

Kết quả: Ghi ra tệp DT.OUT:

- Nếu t = 1 thì ghi ra n dòng, trong đó dòng thứ i (1 £ i £ n) ghi hai số tự nhiên deg- và deg+ tương ứng là bán bậc vào và ra của đỉnh i.

- Nếu t = 2 thì ghi ra theo qui cách:

+ Dòng đầu ghi ra số tự nhiên n là số đỉnh của G.

+ Trong n dòng tiếp theo, mỗi dòng thứ i (1 £ i £ n) ghi số tự nhiên k là số lương đỉnh kề với đỉnh i và k số tự nhiên theo thứ tự tăng v1, …, vk là số hiệu các đỉnh kề tương ứng.

## 🔗 TRR1014 - 1.14 Đồ thị

Cho đồ thị có hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận kề.

Yêu cầu:

    (1) Xác định bán bậc vào (deg-) và bán bậc ra (deg+) các đỉnh của G;

    (2) Biểu diễn G dưới dạng ma trận liên thuộc.

Dữ liệu: Vào từ tệp DT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Dòng thứ hai chứa số nguyên dương n không vượt quá 100 là số đỉnh của G.

- Trong n dòng tiếp theo, mỗi dòng chứa n số 0 hoặc 1 mô tả ma trận kề của G.

Kết quả: Ghi ra tệp DT.OUT:

- Nếu t = 1 thì ghi ra n dòng, trong đó dòng thứ i (1 £ i £ n) ghi hai số tự nhiên deg- và deg+ tương ứng là bán bậc vào và ra của đỉnh i.

- Nếu t = 2 thì ghi ra n+1 dòng:

+ Dòng đầu ghi ra hai số tự nhiên n và m là số hàng và số cột của ma trận liên thuộc.

+ Trong n dòng tiếp theo, mỗi dòng ghi m số 0, 1 hoặc -1 mô tả ma trận liên thuộc tìm được. Các cạnh của G được đánh số theo thứ tự từ điển.

## 🔗 TRR1015 - 1.15 Đồ thị

Cho đồ thị có hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng danh sách cạnh.

Yêu cầu:

    (1) Xác định bán bậc vào (deg-) và bán bậc ra (deg+) các đỉnh của G;

    (2) Biểu diễn G dưới dạng ma trận kề.

Dữ liệu: Vào từ tệp DT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Dòng thứ hai chứa hai số nguyên n là số đỉnh và m là số cạnh của G. Trong đó, 1 £ n £ 100 và 1 £ m £ n(n-1)/2.

- Trong m dòng tiếp theo, mỗi dòng thứ i (1 £ i £ m) chứa hai số nguyên ui, vi là đỉnh đầu và đỉnh cuối của cạnh ei. Trong đó, 1 £ ui < vi £ n.

Kết quả: Ghi ra tệp DT.OUT:

- Nếu t = 1 thì ghi ra n dòng, trong đó dòng thứ i (1 £ i £ n) ghi hai số tự nhiên deg- và deg+ tương ứng là bán bậc vào và ra của đỉnh i.

- Nếu t = 2 thì ghi ra n+1 dòng:

+ Dòng đầu ghi ra số tự nhiên n là bậc của ma trận kề.

+ Trong n dòng tiếp theo, mỗi dòng ghi n số 0 hoặc 1 mô tả ma trận kề tìm được

## 🔗 TRR1016 - 1.16 Đồ thị

Cho đồ thị có hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng danh sách cạnh.

Yêu cầu:

    (1) Xác định bán bậc vào (deg-) và bán bậc ra (deg+) các đỉnh của G;

    (2) Biểu diễn G dưới dạng danh sách kề.

Dữ liệu: Vào từ tệp DT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Dòng thứ hai chứa hai số nguyên n là số đỉnh và m là số cạnh của G. Trong đó, 1 £ n £ 100 và 1 £ m £ n(n-1)/2.

- Trong m dòng tiếp theo, mỗi dòng thứ i (1 £ i £ m) chứa hai số nguyên ui, vi là đỉnh đầu và đỉnh cuối của cạnh ei. Trong đó, 1 £ ui < vi £ n.

Kết quả: Ghi ra tệp DT.OUT:

- Nếu t = 1 thì ghi ra n dòng, trong đó dòng thứ i (1 £ i £ n) ghi hai số tự nhiên deg- và deg+ tương ứng là bán bậc vào và ra của đỉnh i.

- Nếu t = 2 thì ghi ra n+1 dòng:

+ Dòng đầu ghi ra số tự nhiên n là số đỉnh của G.

+ Trong n dòng tiếp theo, mỗi dòng thứ i (1 £ i £ n) ghi số tự nhiên k là số lượng đỉnh kề với đỉnh i và k số tự nhiên theo thứ tự tăng v1, …, vk là số hiệu các đỉnh kề tương ứng.

## 🔗 TRR1017 - 1.17 Đồ thị

Cho đồ thị có hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng danh sách cạnh.

Yêu cầu:

    (1) Xác định bán bậc vào (deg-) và bán bậc ra (deg+) các đỉnh của G;

    (2) Biểu diễn G dưới dạng ma trận liên thuộc.

Dữ liệu: Vào từ tệp DT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Dòng thứ hai chứa hai số nguyên n là số đỉnh và m là số cạnh của G. Trong đó, 1 £ n £ 100 và 1 £ m £ n(n-1)/2.

- Trong m dòng tiếp theo, mỗi dòng thứ i (1 £ i £ m) chứa hai số nguyên ui, vi là đỉnh đầu và đỉnh cuối của cạnh ei. Trong đó, 1 £ ui < vi £ n.

Kết quả: Ghi ra tệp DT.OUT:

- Nếu t = 1 thì ghi ra n dòng, trong đó dòng thứ i (1 £ i £ n) ghi hai số tự nhiên deg- và deg+ tương ứng là bán bậc vào và ra của đỉnh i.

- Nếu t = 2 thì ghi ra n+1 dòng:

+ Dòng đầu ghi ra hai số tự nhiên n và m là số hàng và số cột của ma trận liên thuộc.

+ Trong n dòng tiếp theo, mỗi dòng ghi m số 0, 1 hoặc -1 mô tả ma trận liên thuộc tìm được. Các cạnh của G được đánh số theo thứ tự từ điển.

## 🔗 TRR1018 - 1.18 Đồ thị

Cho đồ thị có hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng danh sách kề.

Yêu cầu:

    (1) Xác định bán bậc vào (deg-) và bán bậc ra (deg+) các đỉnh của G;;

    (2) Biểu diễn G dưới dạng ma trận kề.
  
Dữ liệu: Vào từ tệp DT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Dòng thứ hai chứa hai số nguyên n là số đỉnh của G. Trong đó, 1 £ n £ 100.

- Trong n dòng tiếp theo, mỗi dòng thứ i (1 £ i £ n) chứa số tự nhiên k là số lương đỉnh kề với đỉnh i và k số tự nhiên theo thứ tự tăng v1, …, vk là số hiệu các đỉnh kề tương ứng. 

Kết quả: Ghi ra tệp DT.OUT:

- Nếu t = 1 thì ghi ra n dòng, trong đó dòng thứ i (1 £ i £ n) ghi hai số tự nhiên deg- và deg+ tương ứng là bán bậc vào và ra của đỉnh i.

- Nếu t = 2 thì ghi ra n+1 dòng:

+ Dòng đầu ghi ra số tự nhiên n là bậc của ma trận kề.

+ Trong n dòng tiếp theo, mỗi dòng ghi n số 0 hoặc 1 mô tả ma trận kề tìm được.

## 🔗 TRR1019 - 1.19 Đồ thị

Cho đồ thị có hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng danh sách kề.

Yêu cầu:

    (1) Xác định bán bậc vào (deg-) và bán bậc ra (deg+) các đỉnh của G;;

    (2) Biểu diễn G dưới dạng danh sách cạnh.

Dữ liệu: Vào từ tệp DT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Dòng thứ hai chứa số nguyên n là số đỉnh của G. Trong đó, 1 £ n £ 100.

- Trong n dòng tiếp theo, mỗi dòng thứ i (1 £ i £ n) chứa số tự nhiên k là số lương đỉnh kề với đỉnh i và k số tự nhiên theo thứ tự tăng v1, …, vk là số hiệu các đỉnh kề tương ứng. 

Kết quả: Ghi ra tệp DT.OUT:

- Nếu t = 1 thì ghi ra n dòng, trong đó dòng thứ i (1 £ i £ n) ghi hai số tự nhiên deg- và deg+ tương ứng là bán bậc vào và ra của đỉnh i.

- Nếu t = 2 thì ghi ra theo qui cách:

+ Dòng đầu ghi ra hai số tự nhiên n và m là số đỉnh và số cạnh của G.

+ Trong m dòng tiếp theo, mỗi dòng thứ i (1 £ i £ m) ghi hai số ui, vi là đỉnh đầu và đỉnh cuối của cạnh ei. Các cạnh của G được đánh số theo thứ tự từ điển.

## 🔗 TRR1020 - 1.20 Đồ thị

Cho đồ thị có hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng danh sách kề.

Yêu cầu:

    (1) Xác định bán bậc vào (deg-) và bán bậc ra (deg+) các đỉnh của G;;

    (2) Biểu diễn G dưới dạng ma trận liên thuộc.

Dữ liệu: Vào từ tệp DT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Dòng thứ hai chứa số nguyên n là số đỉnh của G. Trong đó, 1 £ n £ 100.

- Trong n dòng tiếp theo, mỗi dòng thứ i (1 £ i £ n) chứa số tự nhiên k là số lương đỉnh kề với đỉnh i và k số tự nhiên theo thứ tự tăng v1, …, vk là số hiệu các đỉnh kề tương ứng. 

Kết quả: Ghi ra tệp DT.OUT:

- Nếu t = 1 thì ghi ra n dòng, trong đó dòng thứ i (1 £ i £ n) ghi hai số tự nhiên deg- và deg+ tương ứng là bán bậc vào và ra của đỉnh i.

- Nếu t = 2 thì ghi ra n+1 dòng:

+ Dòng đầu ghi ra hai số tự nhiên n và m là số hàng và số cột của ma trận liên thuộc.

+ Trong n dòng tiếp theo, mỗi dòng ghi m số 0, 1 hoặc -1 mô tả ma trận liên thuộc tìm được. Các cạnh của G được đánh số theo thứ tự từ điển.

## 🔗 TRR1021 - 1.21 Đồ thị

Cho đồ thị có hướng có trọng số G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận trọng số.

Yêu cầu:

    (1) Xác định bán bậc vào (deg-) và bán bậc ra (deg+) các đỉnh của G;

    (2) Biểu diễn G dưới dạng danh sách cạnh với trọng số.

Dữ liệu: Vào từ tệp DT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Dòng thứ hai chứa số nguyên dương n không vượt quá 100 là số đỉnh của G.

- Trong n dòng tiếp theo, mỗi dòng thứ i (1 £ i £ n) chứa n số tự nhiên c[i][j] (1 £ j £ n) mô tả ma trận trọng số của G. Trong đó, với hai đỉnh i, j (i khác j) có cạnh nối thì 0 < c[i][j] £ 50, nếu không có cạnh nối thì c[i][j] = 10000 và c[i][i] = 0.

Kết quả: Ghi ra tệp DT.OUT:

- Nếu t = 1 thì ghi ra n dòng, trong đó dòng thứ i (1 £ i £ n) ghi hai số tự nhiên deg- và deg+ tương ứng là bán bậc vào và ra của đỉnh i.

- Nếu t = 2 thì ghi ra theo qui cách:

+ Dòng đầu ghi ra hai số tự nhiên n và m là số đỉnh và số cạnh của G.

+ Trong m dòng tiếp theo, mỗi dòng thứ i (1 £ i £ m) ghi ba số ui, vi, wi là đỉnh đầu, đỉnh cuối và trọng số của cạnh ei. Các cạnh của G được đánh số theo thứ tự từ điển.

## 🔗 TRR1022 - 1.22 Đồ thị

Cho đồ thị có hướng có trọng số G = (V, E) gồm n đỉnh biểu diễn dưới dạng danh sách cạnh với trọng số.

Yêu cầu:

    (1) Xác định bán bậc vào (deg-) và bán bậc ra (deg+) các đỉnh của G;

    (2) Biểu diễn G dưới dạng ma trận trọng số.

Dữ liệu: Vào từ tệp DT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Dòng thứ hai chứa hai số nguyên dương n và m là số đỉnh và số cạnh của G, n £ 100 và 1 £ m £ n(n-1)/2.

- Trong m dòng tiếp theo, mỗi dòng thứ i (1 £ i £ m) chứa ba số ui, vi, wi là đỉnh đầu, đỉnh cuối và trọng số của cạnh ei. Trong đó, 1 £ ui < vi £ n và 1 £ wi £ 50.

Kết quả: Ghi ra tệp DT.OUT:

- Nếu t = 1 thì ghi ra n dòng, trong đó dòng thứ i (1 £ i £ n) ghi hai số tự nhiên deg- và deg+ tương ứng là bán bậc vào và ra của đỉnh i.

- Nếu t = 2 thì ghi ra theo qui cách:

+ Dòng đầu ghi ra số tự nhiên n là số đỉnh của G.

+ Trong n dòng tiếp theo, mỗi dòng thứ i (1 £ i £ n) chứa n số tự nhiên c[i][j] (1 £ j £ n) mô tả ma trận trọng số của G. Trong đó, với hai đỉnh i, j (i khác j) có cạnh nối thì 0 < c[i][j] £ 50, nếu không có cạnh nối thì c[i][j] = 10000 và c[i][i] = 0.

## 🚀 TRR2001 - 2.1 Đường đi

Cho trước đồ thị G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận kề và hai đỉnh u, v.

Yêu cầu:

    (1) Tìm số lượng đường đi độ dài 2 trên G từ đỉnh u đến v.

    (2) Tìm đường đi trên G từ đỉnh u đến v sử dụng thuật toán tìm kiếm theo chiều sâu (DFS).

Dữ liệu: Vào từ tệp TK.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Dòng thứ hai chứa ba số nguyên dương n, u và v. Trong đó, n là số đỉnh của G, u và v là hai đỉnh của G, với 1 £ u, v £ n £ 100 và u khác v.

- Trong n dòng tiếp theo, mỗi dòng chứa n số 0 hoặc 1 mô tả ma trận kề của G.

Kết quả: Ghi ra tệp TK.OUT:

- Nếu t = 1 thì ghi ra giá trị là số lượng đường đi độ dài 2 trên G từ đỉnh u đến v.

- Nếu t = 2 thì ghi ra trên một dòng gồm dãy các đỉnh mô tả đường đi trên G từ u đến v. Trong trường hợp không có đường đi trên G từ u đến v thì ghi số 0.

## 🚀 TRR2002 - 2.2 Đường đi

Cho trước đồ thị G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận kề và hai đỉnh u, v.

Yêu cầu:

    (1) Tìm số lượng đường đi độ dài 2 trên G từ đỉnh u đến v.
  
    (2) Tìm đường đi trên G từ đỉnh u đến v sử dụng thuật toán tìm kiếm theo chiều rộng (BFS).

Dữ liệu: Vào từ tệp TK.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Dòng thứ hai chứa ba số nguyên dương n, u và v. Trong đó, n là số đỉnh của G, u và v là hai đỉnh của G, với 1 £ u, v £ n £ 100 và u khác v.

- Trong n dòng tiếp theo, mỗi dòng chứa n số 0 hoặc 1 mô tả ma trận kề của G.

Kết quả: Ghi ra tệp TK.OUT:

- Nếu t = 1 thì ghi ra giá trị là số lượng đường đi độ dài 2 trên G từ đỉnh u đến v.

- Nếu t = 2 thì ghi ra trên một dòng gồm dãy các đỉnh mô tả đường đi trên G từ u đến v. Trong trường hợp không có đường đi trên G từ u đến v thì ghi số 0.

## 🔗 TRR2009 - 2.9 Liên thông

Cho trước đồ thị vô hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận kề.

Yêu cầu: Tìm các thành phần liên thông của G sử dụng thuật toán tìm kiếm theo chiều sâu (DFS).

Dữ liệu: Vào từ tệp TK.INP:

- Dòng đầu chứa số nguyên dương n là số đỉnh của G, n £ 100.

- Trong n dòng tiếp theo, mỗi dòng chứa n số 0 hoặc 1 mô tả ma trận kề của G.

Kết quả: Ghi ra tệp TK.OUT:

- Dòng đầu ghi ra giá trị lt là số lượng các thành phần liên thông của G.

- Trong lt dòng tiếp theo, mỗi dòng thứ i (1 £ i £ lt) ghi các đỉnh thuộc thành phần liên thông thứ i theo thứ tự tăng.

## 🔗 TRR2012 - 2.12 Liên thông

Cho trước đồ thị vô hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận kề.

Yêu cầu: Tìm các thành phần liên thông của G sử dụng thuật toán tìm kiếm theo chiều rộng (BFS).

Dữ liệu: Vào từ tệp TK.INP:

- Dòng đầu chứa số nguyên dương n là số đỉnh của G, n £ 100.

- Trong n dòng tiếp theo, mỗi dòng chứa n số 0 hoặc 1 mô tả ma trận kề của G.

Kết quả: Ghi ra tệp TK.OUT:

- Dòng đầu ghi ra giá trị lt là số lượng các thành phần liên thông của G.

- Trong lt dòng tiếp theo, mỗi dòng thứ i (1 £ i £ lt) ghi các đỉnh thuộc thành phần liên thông thứ i theo thứ tự tăng.

## 🔗 TRR2015 - 2.15 Liên thông

Cho trước đồ thị có hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận kề.

Yêu cầu: Xác định tính liên thông của G sử dụng thuật toán tìm kiếm theo chiều sâu (DFS).

Dữ liệu: Vào từ tệp TK.INP:

- Dòng đầu chứa số nguyên dương n là số đỉnh của G, n £ 100.

- Trong n dòng tiếp theo, mỗi dòng chứa n số 0 hoặc 1 mô tả ma trận kề của G.

Kết quả: Ghi ra tệp TK.OUT theo quy cách :

- Ghi ra giá trị 1 nếu G liên thông mạnh.

- Ghi ra giá trị 2 nếu G liên thông không liên thông mạnh nhưng liên thông yếu.

- Ghi ra giá trị 0 nếu G liên thông không liên thông mạnh và không liên thông yếu.

## 🔗 TRR2018 - 2.18 Liên thông

Cho trước đồ thị có hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận kề.

Yêu cầu: Xác định tính liên thông của G sử dụng thuật toán tìm kiếm theo chiều rộng (BFS).

Dữ liệu: Vào từ tệp TK.INP:

- Dòng đầu chứa số nguyên dương n là số đỉnh của G, n £ 100.

- Trong n dòng tiếp theo, mỗi dòng chứa n số 0 hoặc 1 mô tả ma trận kề của G.

Kết quả: Ghi ra tệp TK.OUT theo quy cách :

- Ghi ra giá trị 1 nếu G liên thông mạnh.

- Ghi ra giá trị 2 nếu G liên thông không liên thông mạnh nhưng liên thông yếu.

- Ghi ra giá trị 0 nếu G liên thông không liên thông mạnh và không liên thông yếu.

## 🧠 TRR2021 - 2.21 Đỉnh trụ

Cho trước đồ thị vô hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận kề.

Yêu cầu: Tìm các đỉnh trụ của G sử dụng thuật toán tìm kiếm theo chiều sâu (DFS).

Dữ liệu: Vào từ tệp TK.INP:

- Dòng đầu chứa số nguyên dương n là số đỉnh của G, n £ 100.

- Trong n dòng tiếp theo, mỗi dòng chứa n số 0 hoặc 1 mô tả ma trận kề của G.

Kết quả: Ghi ra tệp TK.OUT:

- Dòng đầu ghi ra giá trị t là số lượng các đỉnh trụ của G.

- Trong trường hợp t > 0, dòng tiếp theo ghi các đỉnh trụ tìm được theo thứ tự tăng.

## 🧠 TRR2024 - 2.24 Đỉnh trụ

Cho trước đồ thị vô hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận kề.

Yêu cầu: Tìm các đỉnh trụ của G sử dụng thuật toán tìm kiếm theo chiều rộng (BFS).

Dữ liệu: Vào từ tệp TK.INP:

- Dòng đầu chứa số nguyên dương n là số đỉnh của G, n £ 100.

- Trong n dòng tiếp theo, mỗi dòng chứa n số 0 hoặc 1 mô tả ma trận kề của G.

Kết quả: Ghi ra tệp TK.OUT:

- Dòng đầu ghi ra giá trị t là số lượng các đỉnh trụ của G.

- Trong trường hợp t > 0, dòng tiếp theo ghi các đỉnh trụ tìm được theo thứ tự tăng.

## 🌉 TRR2027 - 2.27 Cạnh cầu

Cho trước đồ thị vô hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận kề.

Yêu cầu: Tìm các cạnh cầu của G sử dụng thuật toán tìm kiếm theo chiều sâu (DFS).

Dữ liệu: Vào từ tệp TK.INP:

- Dòng đầu chứa số nguyên dương n là số đỉnh của G, n £ 100.

- Trong n dòng tiếp theo, mỗi dòng chứa n số 0 hoặc 1 mô tả ma trận kề của G.

Kết quả: Ghi ra tệp TK.OUT:

- Dòng đầu ghi ra giá trị c là số lượng các cạnh cầu của G.

- Trong trường hợp c > 0, trong c dòng tiếp theo, mỗi dòng thứ i (1 £ i £ c) ghi hai số nguyên dương ui và vi là đỉnh đầu và đỉnh cuối của cạnh cầu thứ i tìm được. Các cạnh cầu được ghi ra theo thứ tự từ điển.

## 🌉 TRR2030 - 2.30 Cạnh cầu

Cho trước đồ thị vô hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận kề.

Yêu cầu: Tìm các cạnh cầu của G sử dụng thuật toán tìm kiếm theo chiều rộng (BFS).

Dữ liệu: Vào từ tệp TK.INP:

- Dòng đầu chứa số nguyên dương n là số đỉnh của G, n £ 100.

- Trong n dòng tiếp theo, mỗi dòng chứa n số 0 hoặc 1 mô tả ma trận kề của G.

Kết quả: Ghi ra tệp TK.OUT:

- Dòng đầu ghi ra giá trị c là số lượng các cạnh cầu của G.

- Trong trường hợp c > 0, trong c dòng tiếp theo, mỗi dòng thứ i (1 £ i £ c) ghi hai số nguyên dương ui và vi là đỉnh đầu và đỉnh cuối của cạnh cầu thứ i tìm được. Các cạnh cầu được ghi ra theo thứ tự từ điển.

## 🧭 TRR3001 - 3.1 Chu trình Euler

Cho trước đồ thị vô hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận kề.

Yêu cầu:

    (1) Kiểm tra G có phải là đồ thị Euler, nửa Euler hay không?

    (2) Tìm một chu trình Euler bắt đầu tại đỉnh u của G là đồ thị Euler.

Dữ liệu: Vào từ tệp CT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Nếu t = 1 thì dòng thứ hai chứa số nguyên dương n là số đỉnh của G, n £ 100. Nếu t = 2 thì dòng thứ 2 chứa hai số nguyên dương n và u, trong đó n là số đỉnh và u là một đỉnh của G, 1 £ u £ n £ 100.

- Trong n dòng tiếp theo, mỗi dòng chứa n số 0 hoặc 1 mô tả ma trận kề của G. Trong trường hợp t = 2 thì G là đồ thị Euler.

Kết quả: Ghi ra tệp CT.OUT:

- Nếu t = 1 thì ghi ra giá trị 1 nếu G là Euler, giá trị 2 nếu G là nửa Euler và giá trị 0 nếu G không phải là Euler và nửa Euler.

- Nếu t = 2 thì ghi ra trên một dòng gồm dãy các đỉnh mô tả chu trình Euler bắt đầu tại đỉnh u.

## 🧭 TRR3004 - 3.4 Chu trình Euler

Cho trước đồ thị có hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận kề.

Yêu cầu:

    (1) Kiểm tra G có phải là đồ thị Euler, nửa Euler hay không?

    (2) Tìm một chu trình Euler bắt đầu tại đỉnh u của G là đồ thị Euler.

Dữ liệu: Vào từ tệp CT.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Nếu t = 1 thì dòng thứ hai chứa số nguyên dương n là số đỉnh của G, n £ 100. Nếu t = 2 thì dòng thứ 2 chứa hai số nguyên dương n và u, trong đó n là số đỉnh và u là một đỉnh của G, 1 £ u £ n £ 100.

- Trong n dòng tiếp theo, mỗi dòng chứa n số 0 hoặc 1 mô tả ma trận kề của G. Trong trường hợp t = 2 thì G là đồ thị Euler.

Kết quả: Ghi ra tệp CT.OUT:

- Nếu t = 1 thì ghi ra giá trị 1 nếu G là Euler, giá trị 2 nếu G là nửa Euler và giá trị 0 nếu G không phải là Euler và nửa Euler.

- Nếu t = 2 thì ghi ra trên một dòng gồm dãy các đỉnh mô tả chu trình Euler bắt đầu tại đỉnh u.

## 🧭 TRR3007 - 3.7 Chu trình Hamilton

Cho trước đồ thị G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận kề và một đỉnh u.

Yêu cầu: Tìm tất cả các chu trình Hamilton của G bắt đầu tại u.

Dữ liệu: Vào từ tệp CT.INP:

- Dòng đầu chứa hai số nguyên dương n là số đỉnh và u là một đỉnh của G, 1 £ u £ n £ 100.

- Trong n dòng tiếp theo, mỗi dòng chứa n số 0 hoặc 1 mô tả ma trận kề của G.

Kết quả: Ghi ra tệp CT.OUT:

- Nếu không tìm được chu trình Hamilton thì ghi ra giá trị 0.

- Trong trường hợp tìm được chu trình Hamilton thì mỗi dòng ghi dãy các đỉnh của một chu trình Hamilton. Dòng cuối cùng ghi giá trị t là số lượng các chu trình Hamilton tìm được.

## 🌲 TRR4001 - 4.1 Cây khung

Cho trước đồ thị vô hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận kề và một đỉnh s.

Yêu cầu:

      (1) Sử dụng thuật toán tìm kiếm theo chiều sâu (DFS), tìm cây khung của G bắt đầu tại đỉnh s (gọi là cây khung DFS).

      (2) Sử dụng thuật toán tìm kiếm theo chiều rộng (BFS), tìm cây khung của G bắt đầu tại đỉnh s (gọi là cây khung BFS).   

Dữ liệu: Vào từ tệp CK.INP:

- Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.

- Dòng thứ hai chứa hai số nguyên dương n và s, trong đó n là số đỉnh, s là một đỉnh của G, với 1 £ s £ n £ 100.

- Trong n dòng tiếp theo, mỗi dòng thứ i chứa n số 0 hoặc 1 mô tả ma trận kề của đồ thị G.

Kết quả: Ghi ra tệp CK.OUT:

- Nếu t = 1 thì ghi ra theo quy cách:

     + Nếu tìm được cây khung DFS thì dòng đầu ghi giá trị n-1 là số cạnh thuộc cây khung đó. Nếu không tìm được cây khung thì dòng đầu ghi giá trị 0.

     + Trong trường hợp tìm được cây khung DFS, trong n-1 dòng tiếp theo, dòng thứ i (1 £ i £ n-1) ghi hai số ui, vi là đỉnh đầu và đỉnh cuối của cạnh ei thuộc cây khung. Các cạnh của cây khung DFS được ghi ra với thứ tự theo quá trình tìm kiếm DFS.

- Nếu t = 2 thì ghi ra theo qui cách:

     + Nếu tìm được cây khung BFS thì dòng đầu ghi giá trị n-1 là số cạnh thuộc cây khung đó. Nếu không tìm được cây khung thì dòng đầu ghi giá trị 0.

     + Trong trường hợp tìm được cây khung BFS, trong n-1 dòng tiếp theo, dòng thứ i (1 £ i £ n-1) ghi hai số ui, vi là đỉnh đầu và đỉnh cuối của cạnh ei thuộc cây khung. Các cạnh của cây khung BFS được ghi ra với thứ tự theo quá trình tìm kiếm BFS.

## 🌲 TRR4004 - 4.4 Cây khung

Cho trước đồ thị vô hướng có trọng số G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận trọng số và một đỉnh s.

Yêu cầu: Sử dụng thuật toán Prim, tìm cây khung có tổng trọng số của các cạnh thuộc cây nhỏ nhất (cây khung nhỏ nhất) trên G bắt đầu tại đỉnh s.  

Dữ liệu: Vào từ tệp CK.INP:

- Dòng đầu chứa hai số nguyên dương n và s, trong đó n là số đỉnh, s là một đỉnh của G, với 1 £ s £ n £ 100.

- Trong n dòng tiếp theo, mỗi dòng thứ i chứa n số tự nhiên c[i][j] mô tả ma trận trọng số của G. Trong đó, với hai đỉnh i, j (i khác j) có cạnh nối thì 0 < c[i][j] £ 50, nếu không có cạnh nối thì c[i][j] = 10000 và c[i][i] = 0.

Kết quả: Ghi ra tệp CK.OUT:

- Nếu tìm được cây khung nhỏ nhất thì dòng đầu ghi giá trị là tổng trọng số của các cạnh thuộc cây khung đó. Nếu không tìm được cây khung nhỏ nhất thì dòng đầu ghi giá trị 0.

- Trong trường hợp tìm được cây khung nhỏ nhất, trong n-1 dòng tiếp theo,  mỗi dòng thứ i (1 £ i £ n-1) ghi ba số ui, vi và wi là đỉnh đầu, đỉnh cuối và trọng số  của cạnh ei thuộc cây khung đó. Các cạnh của cây khung nhỏ nhất được ghi ra với thứ tự xuất hiên trong quá trình thực hiện thuật toán Prim.

## 🌲 TRR4007 - 4.7 Cây khung

Cho trước đồ thị vô hướng có trọng số G = (V, E) gồm n đỉnh và m cạnh biểu diễn dưới dạng danh sách cạnh với trọng số.

Yêu cầu: Sử dụng thuật toán Kruskal, tìm cây khung có tổng trọng số của các cạnh thuộc cây nhỏ nhất (cây khung nhỏ nhất) trên G.  

Dữ liệu: Vào từ tệp CK.INP:

- Dòng đầu chứa hai số nguyên dương n và m, trong đó n là số đỉnh và m là số cạnh của G, với n £ 100, m £ n(n-1)/2.

- Trong m dòng tiếp theo, mỗi dòng thứ i (1 £ i £ m) chứa ba số nguyên dương ui, vi và wi tương ứng là đỉnh đầu, đỉnh cuối và trọng số của cạnh ei, với ui < vi £ n, wi £ 50.

Kết quả: Ghi ra tệp CK.OUT:

- Nếu tìm được cây khung nhỏ nhất thì dòng đầu ghi giá trị là tổng trọng số của các cạnh thuộc cây khung đó. Nếu không tìm được cây khung nhỏ nhất thì dòng đầu ghi giá trị 0.

- Trong trường hợp tìm được cây khung nhỏ nhất, trong n-1 dòng tiếp theo,  mỗi dòng thứ i (1 £ i £ n-1) ghi ba số ui, vi và wi là đỉnh đầu, đỉnh cuối và trọng số của cạnh ei thuộc cây khung đó. Các cạnh của cây khung nhỏ nhất được ghi ra theo thứ tự được xác định bởi thuật toán Kruskal.

## 🚀 TRR5001 - 5.1 Đường đi ngắn nhất

Cho trước đồ thị có trọng số G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận trọng số không âm.

Yêu cầu: Tìm đường đi ngắn nhất trên G từ đỉnh s đến đỉnh t sử dụng thuật toán Dijkstra.

Dữ liệu: Vào từ tệp DN.INP:

- Dòng đầu chứa ba số nguyên dương n, s, t, trong đó n là số đỉnh, s và t là hai đỉnh của G, với 1 £ s, t £ n £ 100 và s ¹ t.

- Trong n dòng tiếp theo, mỗi dòng thứ i chứa n số tự nhiên c[i][j] mô tả ma trận trọng số của G. Trong đó, với hai đỉnh i, j (i khác j) có cạnh nối thì 0 < c[i][j] £ 50, nếu không có cạnh nối thì c[i][j] = 10000 và c[i][i] = 0.

Kết quả: Ghi ra tệp DN.OUT:

- Nếu có đường đi từ s đến t thì ghi ra theo quy cách:

+ Dòng đầu ghi độ dài đường đi ngắn nhất;

+ Dòng sau ghi dãy các đỉnh trên đường đi từ s đến t.

- Nếu không có đường đi thì ghi giá trị 0.

## 🚀 TRR5007 - 5.7 Đường đi ngắn nhất

Cho trước đồ thị có trọng số G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận trọng số.

Yêu cầu: Tìm đường đi ngắn nhất trên G từ đỉnh s đến đỉnh t sử dụng thuật toán Bellman-Ford.

Dữ liệu: Vào từ tệp BN.INP:

- Dòng đầu chứa ba số nguyên dương n, s, t, trong đó n là số đỉnh, s và t là hai đỉnh của G, với 1 £ s, t £ n £ 100 và s ¹ t.

- Trong n dòng tiếp theo, mỗi dòng thứ i chứa n số nguyên c[i][j] mô tả ma trận trọng số của G. Trong đó, với hai đỉnh i, j (i khác j) có cạnh nối thì 0 < |c[i][j]| £ 50, nếu không có cạnh nối thì c[i][j] = 10000 và c[i][i] = 0.

Kết quả: Ghi ra tệp BN.OUT:

- Nếu G chứa chu trình âm thì ghi giá trị -1.

- Nếu không có đường đi thì ghi giá trị 0.

- Nếu có đường đi từ s đến t thì ghi ra theo quy cách:

+ Dòng đầu ghi độ dài đường đi ngắn nhất ;

+ Dòng sau ghi dãy các đỉnh trên đường đi.

## 🚀 TRR5016 - 5.16 Đường đi ngắn nhất

Cho trước đồ thị có trọng số G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận trọng số không âm.

Yêu cầu: Sử dụng thuật toán Floyd, tìm cặp đỉnh (u, v) sao cho đường đi ngắn nhất trên G từ u đến v có giá trị lớn nhất.

Dữ liệu: Vào từ tệp DN.INP:

- Dòng đầu chứa số nguyên dương n là số đỉnh của G, với n £ 100.

- Trong n dòng tiếp theo, mỗi dòng thứ i (1 £ i £ n) chứa n số tự nhiên c[i][j] mô tả ma trận trọng số của G. Trong đó, với hai đỉnh i, j (i khác j) có cạnh nối thì 0 < c[i][j] £ 50, nếu không có cạnh nối thì c[i][j] = 10000 và c[i][i] = 0.

Kết quả: Ghi ra tệp DN.OUT:

- Nếu tìm được cặp đỉnh (u, v) thì ghi ra theo quy cách:

+ Dòng đầu ghi các đỉnh u, v và độ dài đường đi ngắn nhất từ u đến v. Nếu có nhiều cặp (u, v) thỏa mãn điều kiện thì chọn cặp có số thứ tự nhỏ nhất theo thứ tự từ điển.

+ Dòng sau ghi dãy các đỉnh trên đường đi từ u đến v.

- Nếu không tìm được cặp đỉnh (u, v) thì ghi giá trị 0.
