# Kiến trúc RISC và SICS
#### RISC và SICS là 2 cách thiết kế bộ xử lý khác nhau

## Khái niệm cơ bản
### **1. CISC (Complex Instruction Set Architechture)**
- CISC giảm số lượng lệnh mà chương trình cần bằng cách sử dụng một tập hợp lớn các lệnh phức tạp, có độ dài thay đổi. Một lệnh có thể thực hiện nhiều thao tác (ví dụ: tải, tính toán và lưu trữ), việc này có thể mất nhiều chu kỳ xung nhịp.
-	Đặc điểm:
    - Lệnh phức tạp, do đó giải mã phức tạp
    - Lệnh có thể mất nhiều hơn một chu kỳ clock để thực thi
    - Số lượng các thanh ghi ít hơn
    - Các chế độ ghi địa chỉ phức tạp
### **2. RISC (Reduced Instruction Set Architecture)**
-	RISC đơn giản hóa việc thiết kế bộ xử lý bằng cách sử dụng một tập lệnh nhỏ và thống nhất. Mỗi lệnh thực hiện một thao tác cơ bản (ví dụ: tải, tính toán, lưu trữ) và được thiết kế để thực thi trong một chu kỳ xung nhịp duy nhất, cho phép tạo đường ống hiệu quả và phần cứng đơn giản hơn.
-	Đặc điểm:
    - Lệnh đơn giản, giải mã lệnh đơn giản.
    - Lệnh chỉ cần 1 chu kỳ clock để thực thi
    - Nhiều thanh ghi
    - Chế độ ghi địa chỉ đơn giản
    - Tối ưu hóa hệ thống do kích thước lệnh thống nhất và đơn giản

## Ưu và nhược điểm
### **1. CISC**
#### Ưu điểm:
-	**Nâng cao tốc độ xử lý**: Kiến trúc RISC cải thiện tốc độ của CPU bằng cách áp dụng lệnh đơn giản và cốt lõi, giảm thiểu thời gian xử lý.
-	**Tiết kiệm năng lượng**: CPU hoạt động hiệu quả hơn về mặt năng lượng do sự đơn giản của các lệnh, giảm lượng năng lượng cần thiết cho các hoạt động và tăng thời lượng sử dụng pin.
-	**Thiết kế và sản xuất dễ dàng hơn**: Kiến trúc RISC, với sự đơn giản của mình, cho phép việc thiết kế và sản xuất CPU trở nên dễ dàng hơn, làm giảm chi phí và tăng độ tin cậy.
-	**Tối ưu hóa dễ dàng**: Kiến trúc RISC, nhờ vào sự đơn giản của lệnh, cho phép việc tối ưu hóa và cải thiện hiệu suất CPU trở nên dễ dàng hơn.
-	**Mở rộng linh hoạt**: Kiến trúc RISC có khả năng mở rộng và tích hợp các tính năng mới một cách dễ dàng, tăng cường sự linh hoạt và đa dạng cho CPU.
#### Nhược điểm:
-	**Hạn chế về số lệnh**: Kiến trúc RISC có số lượng lệnh hạn chế, điều này có thể ảnh hưởng đến khả năng xử lý đa dạng các tác vụ phức tạp của CPU.
-	**Tăng chi phí sản xuất**: Yêu cầu về bộ nhớ và bộ đệm cao hơn trong thiết kế CPU RISC có thể dẫn đến việc tăng chi phí sản xuất.
-	**Thách thức trong lập trình**: Do bộ lệnh giới hạn, việc phát triển phần mềm trên kiến trúc RISC có thể trở nên khó khăn hơn so với trên kiến trúc CISC (Complex Instruction Set Computing).
-	**Hiệu suất đa nhiệm không lý tưởng**: Kiến trúc RISC có thể không hiệu quả trong các ứng dụng đa nhiệm, ảnh hưởng đến hiệu suất xử lý đồng thời nhiều tác vụ.

### **2. RISC**
#### Ưu điểm:
-	**Thuận tiện trong lập trình**: Với bộ lệnh phong phú, kiến trúc CISC làm cho quá trình lập trình và sử dụng trở nên thuận tiện hơn.
-	**Hiệu quả về bộ nhớ**: Kiến trúc CISC có khả năng chứa đựng thông tin đa dạng trong một lệnh, giúp giảm bớt nhu cầu về bộ nhớ và tăng tốc độ xử lý.
-	**Xử lý lệnh phức tạp**: Kiến trúc CISC hỗ trợ thực hiện các lệnh phức tạp, từ xử lý chuỗi đến các tính toán số thực, làm cho việc xử lý dữ liệu trở nên linh hoạt.
-	**Khả năng tương thích ngược**: Kiến trúc CISC có thể tương thích với các phiên bản trước, đảm bảo dễ dàng nâng cấp và bảo trì hệ thống.

#### Nhược điểm:
-	**Mức độ phức tạp cao**: Kiến trúc CISC chứa đựng lệnh đa dạng và phức tạp, làm tăng độ khó trong thiết kế, triển khai và bảo dưỡng phần cứng so với kiến trúc RISC.
-	**Tốc độ xử lý thấp hơn**: Do sự phức tạp của các lệnh, kiến trúc CISC thường xử lý chậm hơn so với kiến trúc RISC.
-	**Kém hiệu quả cho các ứng dụng đơn giản**: Vì được thiết kế để xử lý tác vụ phức tạp, kiến trúc CISC không thể hiện hiệu quả cao với các ứng dụng yêu cầu tính toán đơn giản.
-	**Hạn chế về khả năng mở rộng**: Kiến trúc CISC có giới hạn trong việc mở rộng và cập nhật, không thích hợp cho các ứng dụng cần đến sự linh hoạt và khả năng mở rộng cao.


## Bảng tóm tắt


| RISC | CISC |
| -------- | -------- |
| Tập lệnh nhỏ và đơn giản | Tập lệnh lớn và phức tạp |
| Lệnh có độ dài cố định | Lệnh có độ dài thay đổi |
| 1 chu kỳ cho mỗi lệnh | Nhiều chu kỳ cho mỗi lệnh |
| Nhiều thanh ghi | Ít thanh ghi |
| Chế độ ghi địa chỉ đơn giản | Chế độ ghi địa chỉ phức tạp |
| Size of code lớn | Size of code nhỏ |
| Phần cứng đơn giản | Phần cứng phức tạp |
| ARM, RISC-V | Intel |

## Quan điểm cá nhân về 2 cấu trúc
Trong bối cảnh phát triển hệ thống nhúng như hiện tại, cáu trúc RISC tối ưu hơn vì:
1. Hiệu suất cao với điện năng thấp
    - Hệ thống nhúng yêu cầu hoạt động liên tục, ổn định và tiết kiệm năng lượng.
    - RISC có tập lệnh đơn giản, giảm tiêu thụ điện năng, hiệu quả.
2. Thiết kế phần cứng gọn nhẹ, chi phí thấp
    - RISC có cấu trúc đơn giản, dễ mở rộng.
3. Phổ biến trong thực tế
    - Các vi điều khiển và vi xử lý như ARM Cortex, ESP32, STM32, đều dựa trên RISC.