---
title: Errore del compilatore C3192 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3192
dev_langs:
- C++
helpviewer_keywords:
- C3192
ms.assetid: 8b0083d4-706f-46f6-858a-e1d9af464cf8
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 0f4b1dabfa305bc7d25daab60270ef07579bcf17
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3192"></a>Errore del compilatore C3192
Errore di sintassi: ' ^' non è un operatore prefisso (si intendeva ' *'?)  
  
 Un handle non può essere utilizzato come operatore di dereferenziazione.  
  
 L'esempio seguente genera l'errore C3192:  
  
```  
// C3192.cpp  
// compile with: /clr  
using namespace System;  
  
ref class MyClass {  
public:  
   MyClass () {}  
   MyClass(MyClass%) {}  
};  
  
int main() {  
   MyClass ^ s = gcnew MyClass;   
   MyClass b = ^s;   // C3192  
  
   // OK  
   MyClass b2 = *s;  
}  
```
