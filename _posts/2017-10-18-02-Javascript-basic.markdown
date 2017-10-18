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



