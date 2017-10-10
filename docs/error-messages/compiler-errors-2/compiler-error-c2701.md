---
title: Errore del compilatore C2701 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2701
dev_langs:
- C++
helpviewer_keywords:
- C2701
ms.assetid: 31cf2ab7-ced9-4f75-aa51-e169e20407fb
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 9aff17907695e48661af7d6e9a6538af4f22ba4c
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c2701"></a>Errore del compilatore C2701
'function': un modello di funzione non può essere un elemento friend di una classe locale  
  
 Una classe locale non può avere una funzione di modello come una funzione friend.  
  
 L'esempio seguente genera l'errore C2701:  
  
```  
// C2701.cpp  
// compile with: /c  
template<typename T>   // OK  
void f1(const T &);  
  
void MyFunction() {  
   class MyClass {  
      template<typename T> friend void f2(const T &);   // C2701  
   };  
}  
```
