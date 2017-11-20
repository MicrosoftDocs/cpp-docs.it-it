---
title: Errore del compilatore C3860 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C3860
dev_langs: C++
helpviewer_keywords: C3860
ms.assetid: 1fb5110d-594e-4f1c-8773-888233af1313
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: c7f06878b5d7c364704cd028ae87a5b43bd0d738
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="compiler-error-c3860"></a>Errore del compilatore C3860
elenco di argomenti di tipo nome del tipo di classe seguito necessario elencare i parametri nell'ordine utilizzato nell'elenco di parametri di tipo  
  
 Un elenco di argomenti di modello o generica è corretto.  
  
 L'esempio seguente genera l'errore C3860:  
  
```  
// C3860.cpp  
// compile with: /LD  
template <class T1, class T2>  
struct A {  
   void f();  
};  
  
template <class T2, class T1>  
void A<T1, T2>::f() {}   // C3860  
```  
  
 Possibile soluzione:  
  
```  
// C3860b.cpp  
// compile with: /c  
template <class T1, class T2>  
struct A {  
   void f();  
};  
  
template <class T2, class T1>  
void A<T2, T1>::f() {}  
```  
  
 C3860 può verificarsi anche quando si usano i generics:  
  
```  
// C3860c.cpp  
// compile with: /clr  
generic<class T,class U>  
ref struct GC {  
   void f();  
};  
  
generic<class T, class U>  
void GC<T,T>::f() {}   // C3860  
```  
  
 Possibile soluzione:  
  
```  
// C3860d.cpp  
// compile with: /clr /c  
generic<class T,class U>  
ref struct GC {  
   void f();  
};  
  
generic<class T, class U>  
void GC<T,U>::f() {}  
```