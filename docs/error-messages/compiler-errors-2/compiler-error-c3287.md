---
title: Errore del compilatore C3287 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3287
dev_langs:
- C++
helpviewer_keywords:
- C3287
ms.assetid: c1fa73d2-2c82-4136-a7da-0e75e3b420ad
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
translationtype: Machine Translation
ms.sourcegitcommit: 0d9cbb01d1ad0f2ea65d59334cb88140ef18fce0
ms.openlocfilehash: 9ebc689db4ede54ec8ae33e2f9bc0a90afe31c69
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-error-c3287"></a>Errore del compilatore C3287
il tipo 'type' (tipo restituito di GetEnumerator) deve avere una funzione membro MoveNext pubblica adatta e una proprietà Current pubblica  
  
 Le classi di raccolta definite dall'utente devono contenere le definizioni per `MoveNext` e `Current`.  
  
 Vedere [come: Iterate Over a User-Defined insieme per ogni](../../dotnet/how-to-iterate-over-a-user-defined-collection-with-for-each.md) per ulteriori informazioni.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3287.  
  
```  
// C3287.cpp  
// compile with: /clr  
using namespace System;  
  
ref struct R {  
   bool MoveNext() {  
      return true;  
   }  
   property Object^ Current {  
      Object^ get() {  
         Object ^ o = gcnew Object;  
         return o;  
      }  
   }  
};  
  
ref struct R2 {  
   R ^GetEnumerator() {  
      R^ r = gcnew R;  
      return r;  
   }  
};  
  
ref struct T {};  
  
ref struct T2 {  
   T ^GetEnumerator() {  
      T^ t = gcnew T;  
      return t;  
   }  
};  
  
int main() {  
   for each (int i in gcnew T2) {}   // C3287  
   for each (int i in gcnew R2) {}   // OK  
}  
```
