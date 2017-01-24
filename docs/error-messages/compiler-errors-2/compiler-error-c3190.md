---
title: "Errore del compilatore C3190 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3190"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3190"
ms.assetid: 7c701afa-85a7-4f7a-8881-0662436ac244
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3190
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'creazione istanza' con gli argomenti di template forniti non è la creazione esplicita di un'istanza di alcuna funzione membro di 'tipo'  
  
 È stato rilevato un tentativo di effettuare una creazione di istanza di funzione esplicita, tuttavia gli argomenti di tipo forniti non corrispondono ad alcuna delle funzioni possibili.  
  
 Il seguente codice di esempio genera l'errore C3190:  
  
```  
// C3190.cpp  
// compile with: /LD  
template<class T>  
struct A {  
   A(int x = 0) {  
   }  
   A(int x, int y) {  
   }  
};  
  
template A<float>::A();   // C3190  
// try the following line instead  
// template A<int>::A(int);  
  
struct Y {  
   template<class T> void f(T);  
};  
  
template<class T> void Y::f(T) { }  
  
template void Y::f(int,int);   // C3190  
  
template<class OT> class X {  
   template<class T> void f2(T,OT);  
};  
  
template<class OT> template<class T> void X<OT>::f2(T,OT) {}  
  
template void X<float>::f2<int>(int,char);   // C3190  
// try one of the following lines instead  
// template void X<char>::f2(int, char);  
// template void X<char>::f2<int>(int,char);  
// template void X<char>::f2<>(int,char);  
```