---
title: "Avviso del compilatore (livello 3) C4243 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4243"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4243"
ms.assetid: ca72f9ad-ce0b-43a9-a68c-106e1f8b90ef
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Avviso del compilatore (livello 3) C4243
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

conversione 'tipo conversione' da 'tipo1' a 'tipo2' esistente ma inaccessibile  
  
 Un puntatore a una classe derivata viene convertito in un puntatore a una classe base, ma la classe derivata eredita la classe base con accesso privato o protetto.  
  
 Il seguente codice di esempio genera l'errore C4243:  
  
```  
// C4243.cpp  
// compile with: /W3  
// C4243 expected  
struct B {  
   int f() {  
      return 0;  
   };  
};  
  
struct D : private B {};  
struct E : public B {};  
  
int main() {  
   // Delete the following 2 lines to resolve.  
   int (D::* d)() = (int(D::*)()) &B::f;   
   d;  
  
   int (E::* e)() = (int(E::*)()) &B::f; // OK  
   e;  
}  
```