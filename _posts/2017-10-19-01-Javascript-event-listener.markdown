---
layout: post
title: "Javascript Event Listener"
subtitle: "반응형 WEB은 어떻게 만드는 것일까?"
categories: language
tags: html
comments: true
---

>Javascript Event Listener

## Event Listener

HTML tag는 웹 페이지 로딩단계에서 DOM 객체로 바뀌고, DOM 객체에 대해 Javascript 가 동작한다.
Evenet Listener는 Javascript가 동작하게 하는 trigger 역할을 한다.

>onkeydown
>
>onkeypress
>
>onkeyup
>
>ondbclick
>
>onmousedown
>
>onmouseenter
>
>onmouseleave
>
>onmousemove
>
>onmouseover
>
>onmouseout
>
>onwheel
>
>onaboart
>
>onerror
>
>onload
>
>onresize
>
>onunload
>
>onfocus
>
>onblur
>
>onchange
>
>onreset
>
>onsearch
>
>onselect
>
>onsubmit

## 이벤트 리스너 만들기

>this는 p 객체를 의미한다.
>
>DOM property에는 'on + [event listener name]'으로 property name이 되어 있다.
>
>DOM method에는 [event listener name]으로 event listener 입력변수를 받는다.

>A. HTML tag event listener

```html
<!DOCTYPE html>
<html>
<head>
<title>HTML Evenet Listener</title>
</head>
<body>
<h3>Event Listener</h3>
<hr>
<p onmouseover="this.style.backgroundColor='aliceblue'"
   onmouseout="this.style.backgroundColor='white'">
   How to describe event listener</p>
</body>
</html>
```

>B. DOM Object event listener property

```html
<!DOCTYPE html>
<html>
<head>
<title>HTML Event Listener</title>
<script>
var p;
function init{
	p = document.getElementById("p");
	p.onmouseover = over_handler;
	p.onmouseout  = out_handler;
}
function over_handler(){
	p.style.backgroundColor="aliceblue";
}
function out_handler(){
	p.style.backgroundColor="white";
}
</script>
</head>
<body onload="init()">
<h3>Event Listener</h3>
<hr>
<p id="p">How to describe event listener</p>
</body>
</html>
```

>C. DOM Object event listener method

```html
<!DOCTYPE html>
<html>
<head>
<title>HTML Event Listener</title>
<script>
var p;
function init{
	p = document.getElementById("p");
	p.addEventListener("mouseover", over_handler);
	p.addEventListener("mouseout", out_handler);
}
function over_handler(){
	p.style.backgroundColor="aliceblue";
}
function out_handler(){
	p.style.backgroundColor="white";
}
</script>
</head>
<body onload="init()">
<h3>Event Listener</h3>
<hr>
<p id="p">How to describe event listener</p>
</body>
</html>
```






























