---
title: Errore del compilatore C2784 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2784
dev_langs:
- C++
helpviewer_keywords:
- C2784
ms.assetid: 3d761fe2-881c-48bd-afae-e2e714e20473
caps.latest.revision: 12
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: c65b03e098b1e0917e554052ee3c8ebfa7181193
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c2784"></a>Errore del compilatore C2784
'declaration': impossibile dedurre un argomento modello per 'type' da 'type'  
  
 Il compilatore non può determinare un argomento modello dagli argomenti della funzione forniti.  
  
 L'esempio seguente genera l'errore C2784 e mostra come risolverlo:  
  
```  
// C2784.cpp  
template<class T> class X {};  
template<class T> void f(X<T>) {}  
  
int main() {  
   X<int> x;  
   f(1);   // C2784  
  
   // To fix it, try the following line instead  
   f(x);  
}  
```
