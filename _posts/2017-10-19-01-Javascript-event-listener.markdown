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

>onkeydown	onkeypress	onkeyup
>
>ondbclick	onmousedown	onmouseenter
>
>onmouseleave	onmousemove	onmouseover
>
>onmouseout	onwheel		onaboart
>
>onerror	onload		onresize
>
>onunload	onfocus		onblur
>
>onchange	onreset		onsearch
>
>onselect	onsubmit

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

>D. DOM Object event listener with anonymous function

```html
<!DOCTYPE html>
<html>
<head>
<title>HTML Event Listener</title>
<script>
var p;
function init{
	p = document.getElementById("p");
	p.onmouseover = function() {
		p.style.backgroundColor="aliceblue";
	};

	p.addEventListener("mouseout", 
		function(){
			p.style.backgroundColor="white";
		}	
	);
</script>
</head>
<body onload="init()">
<h3>Event Listener</h3>
<hr>
<p id="p">How to describe event listener</p>
</body>
</html>
```

## 이벤트 객체

이벤트가 발생하면, 브라우저는 발생한 이벤트의 내용을 담은 이벤트 객체(event object)를 만들어 이벤트 리스터(event listener)에게 전달한다.
이 때, 이벤트 객체가 담고 있는 내용은 마우스 클릭, 커서의 위치, 키보드 입력 키 등이 될 수 있다. 이러한 이벤트 객체는 해당 이벤트가 처리되고 나면 소멸된다.
브라우저는 다중 이벤트에 대해 순차적으로 하나씩 이벤트를 처리하기 때문에, 이벤트 리스너의 실행 중에는 오직 하나의 이벤트 객체만이 존재한다.

## 이벤트 객체 property

>type: 이벤트 종류
>
>target: 이벤트가 발생된 객체
>
>currentTarget: 현재 이벤트 리스터를 싱행하고 있는 객체
>
>defaultPrevented: 이벤트의 디폴트 동작이 취소되었는지를 나타내는 객체

## 이벤트 객체 method

>preventDefault(): 이벤트의 디폴트 행동을 취소시키는 method

## 이벤트 객체 전달

객체 property를 통해 event listener를 생성하는 경우, 따로 이벤트 객체를 입력으로 명시하지 않아도 암묵적으로 첫번째 입력변수로 들어간다. 
따라서, 이벤트에 등록된 함수가 이벤트 객체에 대한 정보를 얻기 위해서는 첫번째 매개변수로 함수 선언에 명시를 해야한다. 이는 익명함수의 경우도 동일하다.

>A. Object Property

```js
function f(event){

}
ojb.onclick = f;
```

```js
obj.onclick = function(event){

}
```



그러나, HTML tag를 사용하여 event listener를 넣을 때는 등록되는 함수에 이벤트 객체를 명시해야한다.
이 때, 이벤트 객체의 이름은 'event' 이다.

>B. HTML tag

```html
<!DOCTYPE html>
<html>
<head>
<title>Event Object</title>
</head>
<body>
<h3>Event Object</h3>
<button onclick="f(event)">Click!</button>
<script>
function f(e){
	alert(e.type);
}
document.getElementById("h3").onmouseover = f;
</script>
</body>
</html>
```


## 이벤트 디폴트 행동 취소

HTML tag 중에서는 event listener를 attribute로 주지 않더라도 event를 발생시킨다.
예를들어, &#60;p&#62;, &#60;input&#62; 등이 있다. 이런 동작을 Default 동작라 부르고,
default event가 발생하지 않도록 하는 것이 디폴트 동작 취소이다.

```html

<a href="https://posjkh22.github.io" onclick="return false">Prevent default</a>

<input type=checkbox onclick="return false">

<a href="https://posjkh22.github.io" onclick="event.preventDefault()">Prevent default</a>
```

```html
<!DOCTYPE html>
<html>
<head>
<title>Event default action prevention</title>
<script>
function query(){
	var ret = confirm("Move to the link?");
	return ret;
}
function noAction(e){
	e.preventDefault();
}
</script>
</head>
<body>
<h3>Event default action prevention</h3>
<hr>
<a href="https://posjkh22.github.io"
   onclick="return query()">
   link to posjkh22.github.io</a>
<hr>
<form>
	<input type="checkbox" onclick="noAction(event)">PIZZA<br>
	<input type="checkbox">CHICKEN<br>
</form>
</body>
</html>
```

## Event propagation

발생한 이벤트는 window 객체로부터 DOM TREE를 타고 중간 DOM 객체들을 거쳐 타겟 객체로 흘러가고, 다시 반대로 방향으로 이동하여 window 객체에 도달한 후 없어진다.

>A. Capturing phase

window에서 타겟 객체까지 이벤트 객체가 전달되는 과정. window 객체와 타겟 객체 사이 모두 순차적으로 이벤트 객체가 전달된다. 이 사이의 객체 중 이벤트 리스너를 가지고 있는 경우, 이벤트는 실행된다. 
여기서 언급되는 이벤트 리스너는 'Capture event listener'이다. 즉, Capture phase에서 동작하는 이벤트 리스너이다.

>B. Bubbling phase

타겟 객체에서 다시 window 객체로 전달되는 과정. 생소한 개념이지만 이 과저에서도 동작하는 이벤트 리스너가 있다. 이를 'Bubble listener'라고 한다.


## Capture Listener & Bubble Listener

하나의 DOM 객체는 캡처 리스너와 버블 리스너를 모두 가질 수 있으므로, 이벤트 리스너를 등록시 이를 명시하여 구분해야 한다.

>addEventListener() 의 세번째 매개변수가 true이면 '캡쳐 리스너', false이면 '버블 리스너'로 등록된다.
>
>addEventListener() 이외의 방식으로 리스너를 등록하는 경우, 모두 '버블 리스너'로 등록 된다.

```html
<!DOCTYPE html>
<html>
<head>
<title>Event Propagation</title>
</head>
<body>
<p style="color:red">Event
<span style="color:blue" id="span">Propagation</span>
</p>
<hr>
<form>
	<input type="text" name="s">
	<input type="button" value="Test" id="button">
	<hr>
</form> 
<div id="div" sytle="color:green"></div>
<script>
var div = document.getElementById("div");
var button = document.getElementById("button");

document.body.addEventListener("click", capture, true);
botton.addEventListener("click", bubble, false);
document.body.addEventListener("click",bubble, false);

function capture(e){
	var obj = e.currentTarget;
	var tagName = obj.tagName;
	div.innerHTML += "<br>capture phase : " + tagName + " tag " + e.type + " event ";
}

function bubble(e){
	var obj = e.currentTarget;
	var tagName = obj.tagName;
	div.innerHTML += "<br>bubble pahse : " + tagName + " tag " + e.type + " event ";
}
</script>
</body>
<html>






```













