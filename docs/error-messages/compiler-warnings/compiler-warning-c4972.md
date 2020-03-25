---
title: Avviso del compilatore C4972
ms.date: 11/04/2016
f1_keywords:
- C4972
helpviewer_keywords:
- C4972
ms.assetid: d18e8e65-b2ef-4d75-a207-fbd0c17c9060
ms.openlocfilehash: ca80e847174bbe225acaf8631c646d8c6a94c50a
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80164833"
---
# <a name="compiler-warning-c4972"></a>Avviso del compilatore C4972

La modifica o il trattamento diretto del risultato di una operazione di unboxing come lvalue non è verificabile

La dereferenziazione di un handle a un tipo valore, anche nota come unboxing, e la sua successiva assegnazione non è verificabile.

Per ulteriori informazioni, vedi [Boxing](../../extensions/boxing-cpp-component-extensions.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4972.

```cpp
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
