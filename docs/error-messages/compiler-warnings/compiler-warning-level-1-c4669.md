---
title: Avviso del compilatore (livello 1) C4669
ms.date: 11/04/2016
f1_keywords:
- C4669
helpviewer_keywords:
- C4669
ms.assetid: 97730679-e3dc-44d4-b2a8-aa65badc17f2
ms.openlocfilehash: f4d0b87c91649c5f2f6b5823fea82d2ce355d11a
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50518638"
---
# <a name="compiler-warning-level-1-c4669"></a>Avviso del compilatore (livello 1) C4669

'cast': conversione non affidabile: 'class' è un oggetto di tipo gestito o WinRT

Un cast contiene un tipo Windows Runtime o gestito. Il compilatore completa il cast eseguendo una copia bit per bit di un puntatore all'altro, ma non fornisce altri controlli. Per risolvere il problema, non eseguire il cast di classi contenenti membri gestiti o tipi Windows Runtime.

L'esempio seguente genera l'errore C4669 e mostra come risolverlo:

```
// C4669.cpp
// compile with: /clr /W1
ref struct A {
   int i;
   Object ^ pObj;   // remove the managed member to fix the warning
};

ref struct B {
   int j;
};

int main() {
   A ^ a = gcnew A;
   B ^ b = reinterpret_cast<B ^>(a);   // C4669
}
```