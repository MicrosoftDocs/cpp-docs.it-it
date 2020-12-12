---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4460'
title: Avviso del compilatore (livello 4) C4460
ms.date: 11/04/2016
f1_keywords:
- C4460
helpviewer_keywords:
- C4460
ms.assetid: c97ac1c9-598d-479e-bfff-c993690c4f3d
ms.openlocfilehash: 68f38ad1ad65b27f35b79495bb2edd930c25d732
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97334831"
---
# <a name="compiler-warning-level-4-c4460"></a>Avviso del compilatore (livello 4) C4460

l'operatore WinRT o CLR 'operator' contiene un parametro passato per riferimento. La semantica dell'operatore WinRT o CLR 'operator' è diversa da quella dell'operatore C++ 'operator'. Si intendeva passare il parametro per valore?

Si è passato un valore per riferimento a un operatore Windows Runtime o CLR definito dall'utente. Se il valore viene modificato nella funzione, si noti che al valore restituito dopo la chiamata alla funzione verrà assegnato il valore restituito della funzione. In C++ standard, il valore modificato viene applicato dopo la chiamata alla funzione.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4460 e mostra come risolverlo.

```cpp
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
