---
title: Errore del compilatore C2952 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2952
dev_langs:
- C++
helpviewer_keywords:
- C2952
ms.assetid: a40e18a2-d02c-4511-854f-6c6fd6789a1a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5916c9a3bf814e6066098b525bbcc8c654676909
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33243908"
---
# <a name="compiler-error-c2952"></a>Errore del compilatore C2952
'declaration': la dichiarazione di tipo non contiene un elenco di parametri di modello  
  
 Una dichiarazione di modello non è stata creata nel formato corretto.  
  
 L'esempio seguente genera l'errore C2952:  
  
```  
// C2952.cpp  
// compile with: /c  
template <class T>  
struct S {  
   template <class T1>  
   struct S1 {  
      void f();  
   };  
};  
  
template <class T> void S<T>::S1<T>::f() {}   // C2952  
  
// OK  
template <class T>  
template <class T1>  
void S<T>::S1<T1>::f() {}  
```  
  
 C2952 può verificarsi anche quando si usano i generics:  
  
```  
// C2952b.cpp  
// compile with: /clr /c  
generic <class T>   
ref struct GC {  
   generic <class T1>   
   ref struct GC1 {  
      void f();  
   };  
};  
  
generic <class T> void GC<T>::GC1<T>::f() {}   // C2952  
  
// OK  
generic <class T>  
generic <class T1>  
void GC<T>::GC1<T1>::f() {}  
```