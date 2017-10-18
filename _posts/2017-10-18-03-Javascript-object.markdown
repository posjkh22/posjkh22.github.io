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


