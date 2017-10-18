---
layout: post
title: "Javascript object"
subtitle: "Javascript object는 어떻게 사용하는가?"
categories: language
tags: html
comments: true
---

>Javascript Core Object

## Obejct-Oriented Language: Javascript 

자바스크립트는 C++, Java와 마찬가지로 객체지향 언어이다.
자바스크립트의 객체는 CORE OBJECT, HTML DOM OBJECT, BROWSER OBJECT MODEL(BOM)으로 구성된다.

## Javascript Core Object

코어 오브젝트랑 자바스크립트 언어가 실행되는 어디에서나 사용 가능한 객체를 의미한다.

>Array, Data, String, Math

## 코어 객체 생성

new 키워드를 통해 해당 객체에 대한 referece variable을 생성할 수 있다.

>var today = new Data();
>
>var msg = new String("Hello world!");
>
>var time = today.toGMTString();
>
>var leng = msg.lengnth;

## 배열

배열은 일반 변수를 통해서 생성하는 배열과 코어 객체(Array)를 통해 생성하는 배열로 나뉜다.
객체를 통한 배열 생성시, 배열의 크기를 지정하지 않으면 원소를 넣을 때마다 그 크기가 증가한다.

>var week1 = ["Mon", "Tues", "Wed", "Thur", "Fri", "Sat", "Sun"];
>
>var week2 = new Array("Mon", "Tues", "Wed", "Thur", "Fri", "Sat", "Sun");
>
>var week3 = new Array(7);
>
>week3[0] = "Mon"; week3[1] = "Tues"; ...
>
>var week4 = new Array();
>
>week4[0] = "Mon";

## 배열의 주요 Method

>concat, join, reverse, slice, sort, toString

## Date

Datae는 시간과 관련된 정보를 담는 객체이다.

>var date1 = new Date(); 			// 현재 날짜와 시간값으로 초기화
>
>var data2 = new Date(year, month, date);	// 입력 날짜로 초기화
>
>var data3 = new Date(y, m, d, hour, min, sec);	// 입력 날짜 및 시간으로 초기화
>
>var date = data1.getDate();
>
>var hour = data1.getHours();


## String

Javascpript 문자열을 코어객체(String)을 사용하여 생성할 수 있다.
이 때, String 객체는 일단 생성되면 문자열 수정이 불가능하다.

>var msg = new String("Hello world!");

## String Method

String 메서드는 가지고 있는 사용되는 객체 레퍼런스의 값이 변하는 것이 아니라, 새로 레퍼런스를 생성하여 반환하는 것이다.
다시 말하면, var msg2 = msg.concat("Nice to see you!"); 을 실행하여도 msg이 가지는 문자열의 값은 변하지 않는다.

>concat, indexOf, replace, slice, split, toUpperCase, toLowerCase();


## Math

Math 객체는 수학 계산을 위해 메소드를 제공하는데, 다른 코어 객체와는 조금 다르게 레퍼런스 변수를 생성하지 않고
바로 객체에 대한 메서드를 사용한다. 즉, 객체에 대한 레퍼런스는 만들지 않는다. (new 키워드를 사용하지 않는다.)

>var root = Math.sqrt(4);
> 
>var area = Math.PI * 2 * 5;
>
>var random = Math.random();
>
>var floor = Math.floor(3.14159265);

## Math Method

>abs(x), sin(x), exp(x), pow(x,y), random(), floor(x), round(x), sqrt(x), E(Eular constant), PI 


## 프로토타입

자바스크립트에서 제공하는 코어 객체 이외에 프로그래머가 직접 만들어 사용하는 객체를 프로토타입(prototype)이라고 부른다.
프로토타입은 new Object()를 통해 생성할 수 있고. 이 때 생성되는 객체는 변수(property)와 함수(Method) 없이 비어 있는 객체이다.

```js
var food = new Object();
food.name = "pizza";
food.price = 10;
food.volume = 3;

function evaluation(){
	return this.volume * this.price;
}
``` 
>var pizza_evaluation = food.evaluation();





















