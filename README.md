## 2024-basic-sockprogramming
IoT 개발자 과정 TCP/IP 소켓 프로그래밍 학습 리포지토리



### DAY 01

- IP
    - 외부에서 해당 컴퓨터를 찾아올 때 필요한 주소
    - IPv4와 IPv6의 차이 → 버전 차이
        - IPv4 : 4개의 Byte, ex : 192.168.5.2
        - IPv6 : v4 주소가 할당이 다 되면 이후에 사용하기 위해 준비된 주소
    - 서브넷마스크

- 전송방식 TCP / UDP
    - TCP : 정확한 데이터 전송
    - UDP : 한두개 정도  데이터가 유실돼도 괜찮은 것
        - ex : 압축 파일, 미디어 전송(영화, 영상)

- 네트워크 프로세스
    - 소 : 소켓(socket) → 휴대폰
    - 말 : 바인더(bind) → 전화번호 할당
    - 리 : 리슨(listen) → 개통
    - 아 : 엑셉트(accept) → 통화기능



### DAY 02

- 



### DAY 03

- 



### DAY 04

- 



### DAY 05

- 



### DAY 06

- 



### DAY 07

- 수업 마무리 평가
    - 다음과 같은 webpage 배열을 전송하는 웹서버를 구현하시오.
        → 클라이언트 인터넷 브라우저로 서버 접속 → HTTP request 형식의 메세지로 서버에 전달 → GET/POST 요청 방식에 따른 서버 동작
    ```c
    char webpage[] = "HTTP/1.1 200 OK\r\n"
                     "Server:Linux Web Server\r\n"
                     "Content-Type: text/html; charset=UTF-8\r\n\r\n"
                     "<!DOCTYPE html>\r\n"
                     "<html><head><title> My Web Page </title>\r\n"
                     "<link rel=\"icon\" href=\"data:,\">\r\n"
                     "<style>body {background-color: #D9EFCC }</style></head>\r\n"
                     "<body><center><h1>Hello world!!</h1><br>\r\n"
                     "<img src=\"image.jpg\"></center></body></html>\r\n";
    ```

    - 완성!
    ![MyWebPage](https://raw.githubusercontent.com/y7pWuXAq/2024-basic-sockprogramming/main/images/MyWebPage.png)