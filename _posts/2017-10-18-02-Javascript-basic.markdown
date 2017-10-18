---
layout: post
title: "Javascript"
subtitle: "Javascript는 어떻게 기술되는가?"
categories: language
tags: html
comments: true
---

>Javascript

## Javascript code

>A. Description in HTML tag

```html
<!DOCTYPE html>
<html>
<head>
<title>onmouse</title>
</head>
<body>
<h3>Drag your mouse over the image</h3>
<hr>
<img src="summer.png" alt="summer"
	onmouseover="this.src='winter.png'"
	onmouseout="this.src='summer.png'">
</body>
</html>
```

>B. Description in &#60;script&#62;

```html
<!DOCTYPE html>
<html>
<head>
<title>onmouse</title>
<script>
function over(obj){
	obj.src="winter.png";
}
function out(obj){
	obj.src="summer.png";
}
</script>
</head>
<body>
<h3>Drag your mouse over the image</h3>
<hr>
<img src="summer.png" alt="summer"
	onmouseover="over(this)"
	onmouseout="out(this)">
</body>
</html>
```

>C. Import from lib.js code

```js
function over(obj){
	obj.src="winter.png";
}
function out(obj){
	obj.src="summer.png";
}
```

```html
<!DOCTYPE html>
<html>
<head>
<title>onmouse</title>
<script src="lib.js">
</script>
</head>
<body>
<h3>Drag your mouse over the image</h3>
<hr>
<img src="summer.png" alt="summer"
	onmouseover="over(this)"
	onmouseout="out(this)">
</body>
</html>
```

>D. Execution by URL

```html
<!DOCTYPE html>
<html>
<head>
<title>alert</title>
<style>
h3 {
	text-align: center;
}

a {
	text-align: center;
}
</style>
</head>
<body>
<h3>Click the link below!</h3>
<hr>
<a href="javascript:alert('Warning! Don't click again')">Click Here!</a> 
</body>
</html>
```

>E. Description in &#60;body &#62;

```html

<!DOCTYPE html>
<html>
<head>
<title>docuemnt.write()</title>
</head>
<body>
<h3>document.write()</h3>
<hr>
<script>
	document.write("Hello world!\n");
	document.write("This is written by document.write()\n");
</script>
</body>
</html>
```

## 자바스크립트 변수

>var score; score = 98;
>var season = "winter";
>var year = 2017;
>var real = 7.97;

## 지역변수와 전역변수

지역변수는 함수내에서 선언되는 변수이고, 전역변수는 함수 밖에서 선언되는 변수이다.
그 특성은 C언어의 변수와 동일하게 전역변수는 &#60;script&#60; 전역에서, 지역변수는 선언되는 함수 내에서 사용가능하다.

## this와 변수

함수내의 지역변수와 전역변수의 이름이 같을 때, 함수내에서 전역변수를 사용하고자 하면 어떻게 해야할까? this를 이용해 접근 가능하다.

```js
var x;
function f(){
	var x;
	x = 1;
	this.x = 100;
}
```

```html
<!DOCTYPE html>
<html>
<head>
<title>Javascript variables</title>
</head>
<body>
<h3>Javascript variables</h3>
<hr>
<script>
var x = 100;
function f() {
	var x = 10;
	document.write("local x = " + x + "<br>");
	document.write("global x = " + this.x + "<br>");
}

f();
</script>
</body>
</html>
```

## 문자열과 변수연산

Javascript 변수의 연산에 조금 유의할 것은 bool 변수 true, false가 있다는 점이다. 이때 대소문자를 유의해야 한다. 
이 bool 변수는 출력시 문자열로 true, false가 반환되며, 비교연산의 결과로써 반환되기도 한다. 또한 이 변수는 논리연산도 가능한데,
C언어와 동일하게 연산자 &&(and), ||(or), !(not)이 적용된다.

```html
<!DOCTYPE html>
<html>
<head>
<title>literal</title>
</head>
<body>
<h3>LITERAL IN LITERAL</h3>
<hr>
<script>
	var hex = 0x11;
	var condition = true;
	var x = 5;
	var y = 7;
	var z = 3;	
	var result = (x + y * z)/2;
	document.write("hex number: " + hex + "<br>");
	document.write("condition: " + condition + "<br>");
	document.write('Single quotes' + "<br>");
	document.write("\"Is any body here?\" I said" + "<br>");
	document.write("Calculation result: " + result + "<br>");
</script>
</body>
</html>
```

## 비트 쉬프트 연산

>&#60;&#60;, &#62;&#62; 산술 쉬프트 연산(부호 유지)
>
>&#60;&#60;&#60;;, &#62;&#62;&#62; 논리 쉬프트 연산(부호 유지x)

## 문자열 연산

>"abc" + "ddc" : "abcddc"
>
>12 + 31 + "bbq" : "43bbq"
>
>"abc" < "bbq" : true

## 조건문

```html
<!DOCTYPE html>
<html>
<head>
<title>Conditional Statements</title>
</head>
<body>
<h3>Score selector</h3>
<hr>
<script>
	var grade;
	var score = prompt("ENTER your scores, 100);
	score = parseInt(score);
	if(score >= 90)
		grade = "A";
	else if(score >= 80)
		grade = "B";
	else if(score >= 70)
		grade = "C";
	else if(score >= 60)
		grade = "D";
	else
		grade = "F";
	document.write(score + "is " + grade "<br>");
</script>
</body>
</html>
```

## 여러 조건문

if 문을 보면 c언어 문법과 완벽하게 동일하다는 것을 알 수 있다. 이는 if 이외의 조건문도 마찬가지이다.
switch-case, for, while, do-while, break, continue 등 모두 c언어의 용법과 동일하다.
단, case 문의 경우에는 c언어와 조금 다르게 비교되는 입력변수가 문자열이어도 상관 없다.


## 함수

Javascript에서 기본으로 제공하는 대표적인 함수에는 eval(), parseInt(), isNaN() 이 있다.

>eval(): 문자열 연산을 수행, 결과값(숫자)를 반환
>
>parseInt(): 문자열로 표현된 숫자를 입력받아 숫자를 반환
>
>isNaN(): 입력된 변수가 숫자인자 판단. 아니면 false, 맞으면 true 를 반환

```html
<!DOCTYPE html>
<html>
<head>
<title>Built-in function</title>
</head>
<body
<h3>Built-in function Test</h3>
<hr>
<script>
</script>
</body>
</html>

```


&#60;&#62;
&#60;&#62;



















