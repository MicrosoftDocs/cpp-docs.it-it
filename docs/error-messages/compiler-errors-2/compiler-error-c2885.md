---
title: Errore del compilatore C2885 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2885
dev_langs:
- C++
helpviewer_keywords:
- C2885
ms.assetid: 7743e5f3-a034-44b4-9ee8-5a6254c27f8c
caps.latest.revision: 14
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: a19f209d53d7d0b37cddbf559fa3dc02ee50db7e
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c2885"></a>Errore del compilatore C2885
'identificatore': dichiarazione using non valida nell'ambito di classe non  
  
 È stato utilizzato un [utilizzando](../../cpp/using-declaration.md) dichiarazione in modo non corretto.  
  
## <a name="example"></a>Esempio  
 Questo errore può essere generato come risultato delle operazioni di conformità del compilatore eseguite per Visual C++ 2005: non è più valido per un `using` dichiarazione per un tipo annidato, è necessario qualificare in modo esplicito ogni apportate per il tipo annidato, inserire il tipo in un nome di riferimento spazio o creare un typedef.  
  
 L'esempio seguente genera l'errore C2885.  
  
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
  
## <a name="example"></a>Esempio  
 Se si utilizza il `using` (parola chiave) con un membro di classe C++ è necessario definire tale membro all'interno di un'altra classe (una classe derivata).  
  
 L'esempio seguente genera l'errore C2885.  
  
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
