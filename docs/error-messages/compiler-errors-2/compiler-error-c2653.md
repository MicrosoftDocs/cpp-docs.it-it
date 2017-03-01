---
title: Errore del compilatore C2653 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
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
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: eb0c1bf407d1478451c246cf615d031ef6c45bf9
ms.openlocfilehash: 2203cf8a09dbb05f6145ed238ab9fc03e458aaa5
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-error-c2653"></a>Errore del compilatore C2653
'identificatore': non è un nome di classe o spazio dei nomi  
  
Sintassi richiede una classe, struttura, unione o lo spazio dei nomi.  
  
Nell'esempio seguente viene generato l'errore C2653:  
  
```cpp  
// C2653.cpp  
// compile with: /c  
class yy {  
   void func1(int i);  
};  
  
void xx::func1(int m) {}   // C2653  
void yy::func1(int m) {}   // OK  
```  
  
C2653 è anche possibile se si tenta di definire un *spazi dei nomi composti*, uno spazio dei nomi che contiene uno o più nomi di ambito annidato dello spazio dei nomi, quando si utilizza una versione di Visual C++ precedenti a Visual Studio 2015 Update 3. Composta dello spazio dei nomi non sono consentite definizioni in C++ prima C++&17;. A partire da Visual C++ 2015 Update 3, il compilatore supporta le definizioni di spazi dei nomi composti quando il [/std:c + + più recente](../../build/reference/std-specify-language-standard-version.md) è specificata l'opzione del compilatore:  
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
