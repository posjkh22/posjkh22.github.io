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

&#60;&#62;
&#60;&#62;



















