---
title: Errore del compilatore C3240 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3240
dev_langs:
- C++
helpviewer_keywords:
- C3240
ms.assetid: 1a8dc213-b80c-47ae-ada0-e9554b635d1e
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 073ad8436a9ea1471e501c9996db74d58f8f7e0e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c3240"></a>Errore del compilatore C3240
'function': deve essere una funzione membro astratta non in overload di 'type'  
  
 Un tipo di base contiene una funzione che è stata definita. Funzione deve essere virtuale.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3240.  
  
```  
// C3240.cpp  
// compile with: /c  
__interface I {  
   void f();  
};  
  
struct A1 : I {   
   void f() {}  
};  
  
struct A2 : I {   
   void f() = 0;  
};  
  
template <class T>   
struct A3 : T {  
   void T::f() {}  
};  
  
template <class T>   
struct A4 : T {  
   void T::f() {}  
};  
  
A3<A1> x;   // C3240  
A3<I> x2;  
A4<A2> x3;  
```