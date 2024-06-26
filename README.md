# Security_Priate_Algorithm_TIL

<div align=center>
    <img src="./Custom/Piracy.png" width=40%; height=40%>
</div>
<br />
<br />

# 알고리즘 및 코딩 테스트 문제 풀이 공부 📝
알고리즘 및 코테 문제 풀이 스터디입니다.

3개월씩 목표를 잡고 있으며, 프레임워크는 자율적으로 입니다.

예상 : C(1학년 1학기) → C++(1학년 2학기) → Java(2학년 1학기) → Python(2학년 2학기)

> 계획서 무조건 필독 📑

**[Notion](https://dog-particle-145.notion.site/Algorithm-Loadmap-aa086c44a4b44c52b4a95ed5a8b956fb)**

Tip. github에 대하여 무지하다면
- [github commands](https://inpa.tistory.com/entry/GIT-%E2%9A%A1%EF%B8%8F-%ED%95%B5%EC%8B%AC-%EB%AA%85%EB%A0%B9%EC%96%B4-%EC%9A%94%EC%95%BD-%F0%9F%9A%A9-%EC%B4%9D%EC%A0%95%EB%A6%AC)
- [github pr](https://inpa.tistory.com/entry/GIT-%E2%9A%A1%EF%B8%8F-%EA%B9%83%ED%97%99-PRPull-Request-%EB%B3%B4%EB%82%B4%EB%8A%94-%EB%B0%A9%EB%B2%95-folk-issue)
<br />
<br />

## ✅ 규칙
1. 이 저장소를 `fork` 한다.
2. 개인 기수 `branches` 를 요청 후 자신의 `branches` 에서 코드를 올린 후 요청한다.
3. 생성된 원격 저장소 먼저 개인 기수 `branches`에 접근 후 `Other/`폴더 내에 으로 기수 폴더에 자신이 푼 알고리즘 문제를 기제함
4. 자신의 폴더에서 `Other/Custom`과 `Source`로 폴더 구분하며, 주차별 개론 및 예시 문제 공부는 `Source` 개인 알고리즘 공부는 `Other/v1`에 올린다.
→ 문제가 꼅치는 문제가 발생할 시 이미 명시된 문제 파일로 접근하여 자신의 코드를 올림(모두 검토를 통해 더 개선된 코드를 제외한 나머지는 주석처리)
5. 생성된 폴더에 자신의 소스코드를 업로드 한다.
6. 이때 `commit 규칙`을 메뉴얼로 해당 방식대로 하는 것을 추천한다!!
7. 원본 저장소로 `Pull Request`를 한다. (~~매주 정해진 3문제 이상~~, 매주 **일요일**에 Merge예정)
8. 다른 사람들의 `PR`을 보고 자유롭게 코드리뷰를 한다.
9. ***주의!! 기존 폴더를 지우면 안됩니다!!*** 개인 폴더 내부만 수정해주세요 :)

<br />
<br />

## ✅ 소스코드 파일 이름 규칙
- __자유롭게 작성__ 
- 개인 기수 `branches`로 커밋할 경우 

>  Ex. v1이라면..
  ```github
 
  git branch [branch name] //creat branch
  git checkout [branch name] or git switch [branch name] //switch branch

  commit... logic use
  git push origin v1
  git branch -d [branch name]
  ```

<br />
<br />

## ✅ commit 규칙
- commit 메세지: [문제 플랫폼] 문제이름 / 난이도 / 걸린시간 
- description: 문제 주소 (option)

> 터미널에서 작성법: 
```
git commit -m "[BOJ] Hello World / 브론즈5 / 1분" -m "https://www.acmicpc.net/problem/2557"
```
- 플랫폼 작성법 통일: 
  * [BOJ] - 백준
  * [PGS] - 프로그래머스
  * [LTC] - 리트코드
  * [CFS] - 코드포스
  * [SEA] - 삼성SW Expert Academy
  * [ETC] - 그외

<br />
<br />

## ✅ PR 규칙
- PR 제목: 이름 / 주차 / 몇 문제
-  ```junSeong Choi / 5월 1주차 / 3문제 ```
-  comment는 자유이나 가능하다면, 풀었던 문제의 알고리즘 분류가 어떻게 되는지, <br> 어떤 문제가 어려웠는지 회고를 작성한다면 개인에게도 도움되고 다른 코드 리뷰어가 참고하기 좋을 것 같습니다 :)


<br />
<br />

## ✅ (option)코드리뷰 규칙
- PR에서 코드리뷰를 한다.
- 전체 코드 흐름을 파악한 뒤, 이 분이 어떻게 풀었을까 이해를 한 후 
- 의견제시
  -   잘했다고 생각하는 부분
  -   이렇게 하면 더 좋을 것 같다고 생각하는 부분
  -   왜 이렇게 풀었는지 궁금한 부분
  -   또 다른 풀이 방식 제시
- 코드의 일부분에다 코드리뷰를 해도 되고 전체 코드 밑 or PR 하나 밑에다 코멘트 작성으로 리뷰를 해도 됩니다.

<br />
<br />

## ✅ 참여자
<table><tr>         <td align="center"><a href="https://github.com/Jastes"><img src="https://avatars.githubusercontent.com/u/53941330?v=4 s=100" width="100px;" alt=""/>         <br /><sub><b>Jastes</b><br></sub></a><br />

<td align="center"><a href="https://github.com/RUNMUNG"><img src="https://avatars.githubusercontent.com/u/160616830?v=4 s=100" width="100px;" alt=""/>         <br /><sub><b>RUNMUNG</b><br></sub></a><br />

<td align="center"><a href="https://github.com/kimseoungg"><img src="https://avatars.githubusercontent.com/u/118477163?v=4 s=100" width="100px;" alt=""/>         <br /><sub><b>kimseoungg</b><br></sub></a><br />

<td align="center"><a href="https://github.com/YeongGwang8239"><img src="https://avatars.githubusercontent.com/u/94180449?v=4 s=100" width="100px;" alt=""/>         <br /><sub><b>YeongGwang</b><br></sub></a><br />

<td align="center"><a href="https://github.com/kakao106"><img src="https://avatars.githubusercontent.com/u/169136634?v=4 s=100" width="100px;" alt=""/>         <br /><sub><b>kakao106</b><br></sub></a><br />

<td align="center"><a href="https://github.com/mgh0913"><img src="https://avatars.githubusercontent.com/u/164339349?v=4 s=100" width="100px;" alt=""/>         <br /><sub><b>mgh</b><br></sub></a><br />


  </tr><tr>         
  
  

  <td align="center"><a href="https://github.com/soiltoad"><img src="https://avatars.githubusercontent.com/u/160489777?v=4 s=100" width="100px;" alt=""/>         <br /><sub><b>soiltoad</b><br></sub></a><br />
  
   </tr>
  
  </td>
</table><br />

<!--
### 🎉 챌린지 달성 🎉
<table><tr>         <td align="center"><a href="깃헙 링크"><img src="https://avatars.githubusercontent.com/u/53941330?v=4 s=100" width="100px;" alt=""/>         <br /><sub><b>Jastes</b><br><img src="https://us-central1-progress-markdown.cloudfunctions.net/progress/진행도 숫자로"/></sub></a><br />
  </tr><tr>         <td align="center">
  </td>
</table><br />

### 🔥 챌린지 도전 🔥
<table><tr>         <td align="center">

  </tr><tr>         <td align="center">
  </td>
</table><br />

### 💀 챌린지 포기 💀
<table><tr>         <td align="center">

  </tr><tr>         <td align="center">
  </td>
</table><br />