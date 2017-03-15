---
title: Errore del compilatore C3145 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3145
dev_langs:
- C++
helpviewer_keywords:
- C3145
ms.assetid: f165c874-0f51-45c7-85e8-ebe321cbc168
caps.latest.revision: 13
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
ms.openlocfilehash: 7eddd90984fd17d83327bfbadb12ee943e71fccf
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-error-c3145"></a>Errore del compilatore C3145
'object': una variabile globale o statica non può avere il tipo gestito o WinRT 'type'  
  
 È possibile definire solo oggetti CLR o WinRT nell'ambito della funzione.  
  
 L'esempio seguente genera l'errore C3145 e mostra come risolverlo:  
  
```  
// C3145.cpp  
// compile with: /clr  
using namespace System;   
ref class G {};   
  
G ^ ptr;   // C3145  
G ^ ptr2 = gcnew G;   // C3145  
  
ref class GlobalObjects {  
public:  
   static G ^ ptr;   // OK  
   static G ^ ptr2 = gcnew G;   // OK   
};   
  
int main() {  
   G ^ ptr;   // OK  
   G ^ ptr2 = gcnew G;   // OK  
}  
```  
  
 L'esempio seguente genera l'errore C3145:  
  
```  
// C3145b.cpp  
// compile with: /clr  
ref class MyClass {  
public:  
   static int data;  
};  
  
interior_ptr<int> p = &(MyClass::data);   // C3145  
  
void Test(interior_ptr<int> x) {}  
  
int main() {  
   MyClass ^ h_MyClass = gcnew MyClass;  
   interior_ptr<int> p = &(h_MyClass->data);  
}  
```  

