---
title: "Errore del compilatore C2914 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2914"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2914"
ms.assetid: fc6a0592-f53e-4f5a-88cb-780bbed4acf2
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# Errore del compilatore C2914
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': impossibile dedurre l'argomento di tipo perché l'argomento di funzione è ambiguo  
  
 Non è possibile determinare le funzioni in overload da utilizzare per un argomento generico o di modello.  
  
 Il seguente codice di esempio genera l'errore C2914:  
  
```  
// C2914.cpp  
// compile with: /c  
void f(int);  
void f(double);  
template<class T> void g(void (*) (T));  
void h() { g(f); }   // C2914  
// try the following line instead  
// void h() { g<int>(f); }  
```  
  
 L'errore C2914 può verificarsi anche quando si utilizzano i generics.  Il seguente codice di esempio genera l'errore C2914:  
  
```  
// C2914b.cpp  
// compile with: /clr /c  
void f(int);  
void f(double);  
  
template<class T>   
void gf(void (*) (T));  
  
void h() { gf(f);}   // C2914  
// try the following line instead  
void h() { gf<int>(f); }  
```