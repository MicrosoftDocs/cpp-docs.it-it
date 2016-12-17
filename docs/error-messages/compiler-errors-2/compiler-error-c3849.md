---
title: "Errore del compilatore C3849 | Microsoft Docs"
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
  - "C3849"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3849"
ms.assetid: 5347140e-1a81-4841-98c0-b63d98264b64
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3849
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

una chiamata di tipo funzione su di un'espressione di tipo 'tipo' comporterebbe la perdita dei qualificatori costanti e\/o volatili per tutti i numero overload di operatore disponibili  
  
 Una variabile con un tipo const\-volatile specificato può chiamare solo funzioni membro definite con qualificazioni const\-volatile uguali o maggiori.  
  
 Per correggere questo errore, specificare una funzione membro appropriata.  Non è possibile eseguire una conversione su un oggetto qualificato const o volatile se questa operazione causa una perdita di qualificazione.  In una conversione è possibile ottenere qualificatori, ma non perderli.  
  
 Negli esempi seguenti viene generato l'errore C3849:  
  
```  
// C3849.cpp  
void glbFunc3(int i, char c)  
{  
   i;  
}  
typedef void (* pFunc3)(int, char);  
  
void glbFunc2(int i)  
{  
   i;  
}  
  
typedef void (* pFunc2)(int);  
  
void glbFunc1()  
{  
}  
typedef void (* pFunc1)();  
  
struct S4  
{  
   operator ()(int i)  
   {  
      i;  
   }  
  
   operator pFunc1() const  
   {  
      return &glbFunc1;  
   }  
  
   operator pFunc2() volatile  
   {  
      return &glbFunc2;  
   }  
  
   operator pFunc3()  
   {  
      return &glbFunc3;  
   }  
  
   // operator pFunc1() const volatile  
   // {  
   //    return &glbFunc1;  
   // }  
};  
  
int main()  
{  
   // Cannot call any of the 4 overloads of "operator ()(.....)" and   
   // "operator pFunc()" because none is declared as "const volatile"  
   const volatile S4 s4;  // can only call cv member functions of S4  
   s4();   // C3849 to resolve, uncomment member function  
}  
```