

invite collaboration 클릭







2.27.0 버전 다운로드 및 실행






제어판->자격증명관리자->(나중에 다시 확인)
https://git-scm.com/ 접속





window->preferences

team->git->configuration
내 아이디가 아닌 것들은 지우고 하면 좋음..
















key user 다음에 .을 두개 찍어야함

value + 원하는 값



cmd창에서

cd\ 입력
cd  Mtest
cd  Mtest  zoom

다시 
cd\ 입력하면 처음으로 돌아감

mkdir : 디렉토리(폴더)생성
-> mkdir coffee : 커피 폴더 생성

cls : 클리어명령

C:\Mtest
   |-zoom
      |- 일반파일 blue.txt, 그림파일, 폴더 다양한종류파일존재

C:\Mtest\zoom> git remote  rm origin  ===> 다른사람껏오리진삭제
C:\Mtest\zoom> git --version  ===> 버젼확인
C:\Mtest\zoom> git            ===> 깃명령어
C:\Mtest\zoom> cls
C:\Mtest\zoom> dir
C:\Mtest\zoom> git init       ===> 숨겨진폴더생성 .git
C:\Mtest\zoom> dir
C:\Mtest\zoom> git status     ===> red색으로 표시 

C:\Mtest\zoom> git add blue.txt     
C:\Mtest\zoom> git status     ===> red색 사라짐

C:\Mtest\zoom> git commit  -m  "설명~"   ===>로컬저장소로 이동
C:\Mtest\zoom> git remote      ===> 아무런표시없음

실습금지 
C:\Mtest\zoom> git remote add origin "여러분의깃주소레파지토리확인"

C:\Mtest\zoom> git remote add origin "https://github.com/posasi2000/sp.git"
C:\Mtest\zoom> git remote      ===> origin표시
C:\Mtest\zoom> git push origin master    ===> 진짜git올라가요
C:\Mtest\zoom> git push origin master입력하면
                 |- id입력,pwd입력 대화상자

C:\Mtest\zoom> git push origin master   ===> 에러발생하면 
C:\Mtest\zoom> git pull origin master   ===> 먼저 pull땡겨오고 push하세요

*****깃허브에서 원격/로컬저장소 공통분모가 없을때 에러발생하면 아래명령어
C:\Mtest\zoom> git pull origin master --allow-unrelate-histories
C:\Mtest\zoom> git push origin master   
C:\Mtest\zoom> git add two.txt     
C:\Mtest\zoom> git status     ===> red색 사라짐
C:\Mtest\zoom> git commit  -m  "설명~"   ===>로컬저장소로 이동

아래명령어 처음 한번만 기술하면 되니까 기술생략
C:\Mtest\zoom> git remote add origin "깃주소~si2000/sp.git"
C:\Mtest\zoom> git remote      ===> origin표시
C:\Mtest\zoom> git push origin master   ===> 에러발생하면 

혹시 본인컴퓨터에 누가 origin사용하고 있으면 자격증명관리자에서 삭제 
제어판 ==> 자격증명관리자
 일반자격증명
  git:https://github.com 수정날짜 오늘
  |-편집클릭 사용자및암호를 본인꺼 


*정리

C:\Mtest\zoom> git init   : 숨겨진폴더생성 .git
C:\Mtest\zoom> git add blue.txt   :  파일 add
C:\Mtest\zoom> git add coffee\  :  coffee 폴더 add
C:\Mtest\zoom> git commit  -m  “commit message"  
C:\Mtest\zoom> git remote add origin "내 url"
C:\Mtest\zoom> git push origin master
                 |- id입력,pwd입력 대화상자
리눅스
cat guest.txt : 텍스트 캡쳐(확인)
more guest.txt : 텍스트를 조금씩 더 볼 수 있게 나타남
아두이노 다운로드

https://www.arduino.cc/

다운로드







아두이노 키트





코드
// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(13, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(5, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, HIGH);   
  digitalWrite(8, LOW);   
  digitalWrite(5, LOW);   
  delay(1000);              
  
  digitalWrite(13, LOW);   
  digitalWrite(8, HIGH);   
  digitalWrite(5, LOW);   
  delay(1000);          
  
  digitalWrite(13, LOW);   
  digitalWrite(8, LOW);   
  digitalWrite(5, HIGH);   
  delay(1000);        
}
