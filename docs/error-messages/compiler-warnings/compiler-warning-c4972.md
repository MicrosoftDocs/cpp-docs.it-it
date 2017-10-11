---
title: Avviso del compilatore C4972 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C4972
dev_langs:
- C++
helpviewer_keywords:
- C4972
ms.assetid: d18e8e65-b2ef-4d75-a207-fbd0c17c9060
caps.latest.revision: 4
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: a0ac41ed06c30600c4189dbcca3af4da3dfa595f
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-warning-c4972"></a>Avviso del compilatore C4972
La modifica o il trattamento diretto del risultato di una operazione di unboxing come lvalue non è verificabile  
  
 La dereferenziazione di un handle a un tipo valore, anche nota come unboxing, e la sua successiva assegnazione non è verificabile.  
  
 Per ulteriori informazioni, vedere [Boxing](../../windows/boxing-cpp-component-extensions.md).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4972.  
  
```  
// C4972.cpp  
// compile with: /clr:safe  
using namespace System;  
ref struct R {  
   int ^ p;   // a value type  
};  
  
int main() {  
   R ^ r = gcnew R;  
   *(r->p) = 10;   // C4972  
  
   // OK  
   r->p = 10;  
   Console::WriteLine( r->p );  
   Console::WriteLine( *(r->p) );  
}  
```
