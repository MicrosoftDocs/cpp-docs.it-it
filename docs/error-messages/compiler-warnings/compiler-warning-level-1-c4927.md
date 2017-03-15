---
title: "Avviso del compilatore (livello 1) C4927 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4927"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4927"
ms.assetid: 7009e740-a2ef-4130-96ba-482e092f717a
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Avviso del compilatore (livello 1) C4927
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

conversione non valida; sono state implicitamente applicate più conversioni definite dall'utente  
  
 Più conversioni definite dall'utente sono applicate implicitamente a un unico valore. Non è stata trovata una conversione esplicita ma è stata trovata una conversione, la quale è stata utilizzata.  
  
 Il seguente codice di esempio genera l'errore C4927:  
  
```  
// C4927.cpp  
// compile with: /W1  
struct B  
{  
   operator int ()  
   {  
      return 0;  
   }  
};  
  
struct A  
{  
   A(int i)  
   {  
   }  
  
   /*  
   // uncomment this constructor to resolve  
   A(B b)  
   {  
   }  
   */  
};  
  
A f1( B& b)  
{  
   return A(b);  
}  
  
B& f2( B& b)  
{  
   return b;  
}  
  
A f()  
{  
   B b;  
   return A(b);   // ok  
   return f1(b);  // ok  
   return b;      // C4927  
   return B(b);   // C4927  
   return f2(b);  // C4927  
}  
  
int main()  
{  
   B b;  
   A a = b;  
   A a2(b);  
}  
```