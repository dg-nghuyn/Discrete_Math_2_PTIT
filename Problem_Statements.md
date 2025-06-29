# 📄Problem Statements

This document contains all problem descriptions in Vietnamese for the exercises included in the Discrete Mathematics 2 course at PTIT.  
These problems are listed for academic reference, practice, and exam preparation.

> 📌 All content remains in Vietnamese to preserve original structure and clarity for PTIT students.

---

## CT001 - Chu trình Euler 01  
(Tệp chương trình: CT.CPP; Thời gian chạy chương trình ≤ 1 giây)

Cho trước đồ thị vô hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng danh sách cạnh. Yêu cầu:

(1) Kiểm tra G có phải là đồ thị Euler, nửa Euler hay không?
(2) Tìm một chu trình Euler bắt đầu tại đỉnh u của G là đồ thị Euler.
Dữ liệu: Vào từ tệp CT.INP:

Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.
Nếu t = 1 thì dòng thứ 2 chứa hai số nguyên dương n là số đỉnh và m là số cạnh của G, với n <= 100, m <= n(n-1)/2. Nếu t = 2 thì dòng thứ 2 chứa ba số nguyên dương n, m và u, trong đó n là số đỉnh, m là số cạnh và u là một đỉnh của G, với 1 <= u <= n <= 100, m <= n(n-1)/2.
Trong m dòng tiếp theo, mỗi dòng thứi (1 <= i <=m) chứa chứa hai số nguyên ui,vi là đỉnh đầu và đỉnh cuối của cạnh ei, với 1 <= ui < vi <= n. Trong trường hợp t = 2 thì G là đồ thị Euler.
Kết quả: Ghi ra tệp CT.OUT:

Nếu t = 1 thì ghi ra giá trị 1 nếu G là Euler, giá trị 2 nếu G là nửa Euler và giá trị 0 nếu G không phải là Euler và nửa Euler.
Nếu t = 2 thì ghi ra trên một dòng gồm dãy các đỉnh mô tả chu trình Euler bắt đầu tại đỉnh u.

## CT002 - Chu trình Euler 02  
(Tệp chương trình: CT.CPP; Thời gian chạy chương trình ≤ 1 giây)

Cho trước đồ thị vô hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng ma trận kề.

Yêu cầu:

(1) Kiểm tra G có phải là đồ thị Euler, nửa Euler hay không?

(2) Tìm một chu trình Euler bắt đầu tại đỉnh u của G là đồ thị Euler.

Dữ liệu: Vào từ tệp CT.INP:

Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.
Nếu t = 1 thì dòng thứ hai chứa số nguyên dương n là số đỉnh của G, n  100. Nếu t = 2 thì dòng thứ 2 chứa hai số nguyên dương n và u, trong đó n là số đỉnh và u là một đỉnh của G, 1 <= u <= n <= 100.
Trong n dòng tiếp theo, mỗi dòng chứa n số 0 hoặc 1 mô tả ma trận kề của G. Trong trường hợp t = 2 thì G là đồ thị Euler.
Kết quả: Ghi ra tệp CT.OUT:

Nếu t = 1 thì ghi ra giá trị 1 nếu G là Euler, giá trị 2 nếu G là nửa Euler và giá trị 0 nếu G không phải là Euler và nửa Euler.
Nếu t = 2 thì ghi ra trên một dòng gồm dãy các đỉnh mô tả chu trình Euler bắt đầu tại đỉnh u.

## CT003 - Chu trình Euler 03  
(Tệp chương trình: CT.CPP; Thời gian chạy chương trình ≤ 1 giây)

Cho trước đồ thị có hướng G = (V, E) gồm n đỉnh biểu diễn dưới dạng danh sách kề.
Yêu cầu:
(1) Kiểm tra G có phải là đồ thị Euler, nửa Euler hay không?

(2) Tìm một chu trình Euler bắt đầu tại đỉnh u của G là đồ thị Euler.
Dữ liệu: Vào từ tệp CT.INP:

Dòng đầu chứa số nguyên dương t nhận giá trị 1 hoặc 2.
Nếu t = 1 thì dòng thứ hai chứa số nguyên dương n là số đỉnh của G, n <= 100. Nếu t = 2 thì dòng thứ 2 chứa hai số nguyên dương n và u, trong đó n là số đỉnh và u là một đỉnh của G, 1 <= u <= n <= 100.
Trong n dòng tiếp theo, mỗi dòng thứ i (1 <= i <= n) chứa số tự nhiên k là số lương đỉnh kề với đỉnh i và k số tự nhiên theo thứ tự tăng v1, ..., vk là số hiệu các đỉnh kề tương ứng. Trong trường hợp t = 2 thì G là đồ thị Euler.
Kết quả: Ghi ra tệp CT.OUT:

Nếu t = 1 thì ghi ra giá trị 1 nếu G là Euler, giá trị 2 nếu G là nửa Euler và giá trị 0 nếu G không phải là Euler và nửa Euler.
Nếu t = 2 thì ghi ra trên một dòng gồm dãy các đỉnh mô tả chu trình Euler bắt đầu tại đỉnh u.

