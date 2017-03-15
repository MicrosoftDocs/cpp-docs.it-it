---
title: Errore del compilatore C2843 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2843
dev_langs:
- C++
helpviewer_keywords:
- C2843
ms.assetid: 9d3f2ac4-eea5-4fed-abeb-e752f442bfcc
caps.latest.revision: 12
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
ms.sourcegitcommit: c243063a9770542f137d5950e8a269f771960f74
ms.openlocfilehash: e65fe26a7f6eae2ccadf902945ca1b322593689b
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-error-c2843"></a>Errore del compilatore C2843
'member%$S': impossibile accettare l'indirizzo di un membro dati non statico oppure di un metodo di un tipo gestito o WinRT  
  
 È necessaria un'istanza per accettare l'indirizzo di membri dati non statici di una classe o interfaccia gestita o WinRT.  
  
 L'esempio seguente genera l'errore C2843 e mostra come risolverlo:  
  
```  
// C2843_2.cpp  
// compile with: /clr  
public ref class C {  
public:  
   int m_i;  
};  
  
ref struct MyStruct {  
   static void sf() {}  
   void f() {}  
};  
  
int main() {  
   MyStruct ^ps = gcnew MyStruct;  
   void (__clrcall MyStruct::*F1)() = & MyStruct::f;   // C2843  
   void (__clrcall MyStruct::*F2)() = & ps->f;   // C2843  
   void (__clrcall MyStruct::*F3)();   // C2843  
  
   void (__clrcall *F5)() = MyStruct::sf;   // OK  
   void (__clrcall *F6)() = & ps->sf;   // OK  
  
   interior_ptr<int> i = &C::m_i; // C2843  
   C ^x = gcnew C();  
   interior_ptr<int> ii = &x->m_i;  
}  
```  

