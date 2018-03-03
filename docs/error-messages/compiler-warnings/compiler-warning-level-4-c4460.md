---
title: Compilatore avviso (livello 4) C4460 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4460
dev_langs:
- C++
helpviewer_keywords:
- C4460
ms.assetid: c97ac1c9-598d-479e-bfff-c993690c4f3d
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: aa925e8d0ef7779f21485cb154b9b9209ce2388e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-4-c4460"></a>Avviso del compilatore (livello 4) C4460
l'operatore WinRT o CLR 'operator' contiene un parametro passato per riferimento. La semantica dell'operatore WinRT o CLR 'operator' è diversa da quella dell'operatore C++ 'operator'. Si intendeva passare il parametro per valore?  
  
 Si è passato un valore per riferimento a un operatore Windows Runtime o CLR definito dall'utente. Se il valore viene modificato nella funzione, si noti che al valore restituito dopo la chiamata alla funzione verrà assegnato il valore restituito della funzione. In C++ standard, il valore modificato viene applicato dopo la chiamata alla funzione.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4460 e mostra come risolverlo.  
  
```  
// C4460.cpp  
// compile with: /W4 /clr   
#include <stdio.h>  
  
public value struct V {  
   static V operator ++(V& me) {   // C4460  
   // try the following line instead  
   // static V operator ++(V me) {  
  
      printf_s(__FUNCSIG__ " called\n");  
      V tmp = me;  
      me.m_i++;  
      return tmp;  
   }  
   int m_i;  
};  
  
int main() {  
   V v;  
   v.m_i = 0;  
  
   printf_s("%d\n", v.m_i);   // Should print 0  
   v++;   // Translates to "v = V::operator ++(v)"  
   printf_s("%d\n", v.m_i);   // will print 0, hence the warning  
}  
```