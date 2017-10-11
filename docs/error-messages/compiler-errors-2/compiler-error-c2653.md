---
title: Errore del compilatore C2653 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2653
dev_langs:
- C++
helpviewer_keywords:
- C2653
ms.assetid: 3f49e731-affd-43a0-a8d0-181db7650bc3
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: cc7990614283a20e9d07f52187258dbccad7c075
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c2653"></a>Errore del compilatore C2653
'identifier': non è un nome di classe o spazio dei nomi  
  
Sintassi richiede una classe, struttura, unione o spazio dei nomi.  
  
L'esempio seguente genera l'errore C2653:  
  
```cpp  
// C2653.cpp  
// compile with: /c  
class yy {  
   void func1(int i);  
};  
  
void xx::func1(int m) {}   // C2653  
void yy::func1(int m) {}   // OK  
```  
  
C2653 è anche possibile se si tenta di definire un *dello spazio dei nomi composto*, uno spazio dei nomi che contiene uno o più nomi dello spazio dei nomi con ambito annidato, quando si utilizza una versione di Visual C++ prima di Visual Studio 2015 Update 3. Composta dello spazio dei nomi definizioni non sono consentite in C++ prima di C++ 17. A partire da Visual C++ 2015 Update 3, il compilatore supporta le definizioni di spazi dei nomi composti quando il [/std:c + + più recente](../../build/reference/std-specify-language-standard-version.md) è specificata l'opzione del compilatore:  
```cpp  
// C2653b.cpp  
namespace a::b {int i;}   // C2653 prior to Visual C++ 2015 Update 3,  
                          // C2429 thereafter. Use /std:c++latest to fix.
namespace a {  
   namespace b {  
      int i;  
   }  
}  
  
int main() {  
   a::b::i = 2;  
}  
```  
