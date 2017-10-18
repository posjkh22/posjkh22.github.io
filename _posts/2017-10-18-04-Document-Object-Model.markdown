---
layout: post
title: "Document Object Model"
subtitle: "HTML 실제 어떻게 동작하는가?"
categories: language
tags: html
comments: true
---

>Document Ojbect Model(HTML DOM)

## HTML DOM

브라우저는 HTML를 로드하는 과정에서 각각의 HTML 태그를 객체로 바꾼다.
이 때, HTML의 모든 태그들은 기본적으로 문서(Document)를 구성하기 위해 작성되므로,
이렇게 HTML tag들이 객체화 된 것을 HTML Document Object Model 이라고 한다.

## DOM과 BOM

지금까지의 포스팅에서는 웹 페이지는 HTML 파일과 동일시 여겨왔었다. 
그러나, 실제 웹 페이지는 HTML-related 정보로만 생성되는 것이 아니라, Browser-related 정보도 포함된다. 
DOM 객체가 HTML tag를 통해 생성되는 객체라면, 브라우저와 관련된 정보로 생성된 객체를 Browser Object Model(BOM)이라고 한다.

## 왜 DOM 을 사용하는 것일까?

단순히 문자열의 나열이 아니라, 객체로 만들어서 '웹페이지 로딩단계'에서 해당 객체에 입력(CSS, img, contents)을 주면 동적으로 바꿀 수 있도록 하기 위함이다.

>해당 HTML 태그를 '웹 페이지 로딩 단계'에서 동적으로 제어하기 위함이다.

## DOM TREE

CSS와 마찬가지로, 자바스크립트 또한 웹 페이지 로딩단계에서 이루어진다. 
이 때 자바스크립트는 해당 HTML tag를 찾기위해 DOM TREE를 이용하는데, DOM TREE는 객체화된 tag가 어떻게 연결되어 있는지 트리구조(tree)로 구현한 것을 말한다.

>즉, 자바스크립트는 DOM TREE를 이용하여 해당 HTML tag Object에 접근하는 것이다. 

## DOM TREE Features

>DOM TREE 루트는 document 객체이다.
>
>태그의 포함관계에 따라 부모자식 관계가 형성된다.
>
>사용되는 tag만큼 HTML Object가 생성된다.

## DOM 객체 구성 요소

>프로퍼티(property)
>
>메소드(method)
>
>컬렉션(collection)
>
>이벤트 리스터(event listener)
>
>CSS3 스타일

```html
<!DOCTYPE html>
<html>
<head>
<title>HTML DOM</title>
</head>
<body>
<h3>How to create WEB</h3>
<hr>
<p id="identification"
   style="color: darkred; text-align: center; text-weight: bold;"
   onclick="this.style.color='aliceblue'">Click Here</p>
<script>
	var obj_p = document.getElementById("identification");
	var id = obj_.id;
	var color = obj_p.style.color;
	var text-align = obj_p.style.text-align;
	var text-weight = obj_p.style.text-weight;
	var message = obj_p.innerHTML;

	document.write("id: " + id + "<br>");
	document.write("color: " + color + "<br>");
	document.write("text-align: " + text-align + "<br>");
	document.write("text-weight: " + text-wegiht + "<br>");
	document.write("message: " + message + "<br>");
	
	alert(id);
</script>   	
</body>
</html>
```

```html
<!DOCTYPE html>
<html>
<head>
<title>CSS style with Javascript</title>
<script>
function change(){
	var span = document.getElementById("s1");
	span.style.color = "red";
	span.style.fontSize = "30px";
	span.style.display = "block";
	span.style.width = "10em";
}
</script>
</head>
<body>
<h3>CSS style configuration with Javascript</h3>
<hr>
<p style="color: blue"> Hello <span id="s1" style="color:blue">World!</span>
<input type="button" value="click here" onclick="change()">
</body>
</html>
```





















