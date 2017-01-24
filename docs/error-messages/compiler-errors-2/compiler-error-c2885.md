---
title: "Errore del compilatore C2885 | Microsoft Docs"
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
  - "C2885"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2885"
ms.assetid: 7743e5f3-a034-44b4-9ee8-5a6254c27f8c
caps.latest.revision: 14
caps.handback.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2885
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'classe::identificatore': dichiarazione using non valida nell'ambito di tipo non classe  
  
 È stata utilizzata una dichiarazione [using](../../cpp/using-declaration.md) in modo non corretto.  
  
## Esempio  
 Questo errore può essere generato in seguito alle operazioni di conformità eseguite per Visual C\+\+ 2005: non è più consentito utilizzare una dichiarazione `using` per un tipo annidato. È invece necessario qualificare in modo esplicito ogni riferimento al tipo annidato, inserire il tipo in uno spazio dei nomi o creare un typedef.  
  
 Nell'esempio seguente viene generato l'errore C2885:  
  
```  
// C2885.cpp  
namespace MyNamespace {  
   class X1 {};  
}  
  
struct MyStruct {  
   struct X1 {  
      int i;  
   };  
};  
  
int main () {  
   using MyStruct::X1;   // C2885  
  
   // OK  
   using MyNamespace::X1;  
   X1 myX1;  
  
   MyStruct::X1 X12;  
  
   typedef MyStruct::X1 abc;  
   abc X13;  
   X13.i = 9;  
}  
```  
  
## Esempio  
 Se si utilizza la parola chiave `using` con un membro di classe, in C\+\+ questo membro dovrà essere definito all'interno di un'altra classe, ovvero una classe derivata.  
  
 Nell'esempio seguente viene generato l'errore C2885:  
  
```  
// C2885_b.cpp  
// compile with: /c  
class A {  
public:  
   int i;  
};  
  
void z() {  
   using A::i;   // C2885 not in a class  
}  
  
class B : public A {  
public:  
   using A::i;  
};  
```