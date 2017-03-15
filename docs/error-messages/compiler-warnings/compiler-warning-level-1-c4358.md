---
title: "Avviso del compilatore (livello 1) C4358 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4358"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4358"
ms.assetid: a9848f84-14b3-405e-81bf-ee3e91a51511
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Avviso del compilatore (livello 1) C4358
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'operatore': il tipo restituito di delegati combinati non è 'void'; il valore restituito è indefinito  
  
 Due delegati sono stati combinati e il valore restituito non è void.  Se vengono combinati due delegati con valori restituiti non void, il compilatore non sarà in grado di eseguire un'assegnazione corretta se viene utilizzato il valore restituito del delegato.  
  
 Il seguente codice di esempio genera l'errore C4358:  
  
```  
// C4358.cpp  
// compile with: /clr /W1  
delegate int D();  
delegate void E();  
  
ref class X {  
   int i;  
public:  
   X(int ii) : i(ii) {}  
   int f() {  
      return i;  
   }  
};  
  
ref class Y {  
   int i;  
public:  
   Y() {}  
   void g() {}  
};  
  
int main() {  
   D^ d = gcnew D(gcnew X(1), &X::f);  
   D^ d2 = gcnew D(gcnew X(2), &X::f);  
  
   d += d2;   // C4358  
   int j = d();   // return value indeterminate  
  
   E^ e = gcnew E(gcnew Y, &Y::g);  
   E^ e2 = gcnew E(gcnew Y, &Y::g);  
   e += e2;   // OK  
}  
```