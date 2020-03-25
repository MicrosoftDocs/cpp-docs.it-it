---
title: Avviso del compilatore (livello 1) C4669
ms.date: 11/04/2016
f1_keywords:
- C4669
helpviewer_keywords:
- C4669
ms.assetid: 97730679-e3dc-44d4-b2a8-aa65badc17f2
ms.openlocfilehash: b45490ec399249a721f2d2567ca0182d44667243
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80175559"
---
# <a name="compiler-warning-level-1-c4669"></a>Avviso del compilatore (livello 1) C4669

'cast': conversione non affidabile: 'class' è un oggetto di tipo gestito o WinRT

Un cast contiene un tipo Windows Runtime o gestito. Il compilatore completa il cast eseguendo una copia bit per bit di un puntatore all'altro, ma non fornisce altri controlli. Per risolvere il problema, non eseguire il cast di classi contenenti membri gestiti o tipi Windows Runtime.

L'esempio seguente genera l'errore C4669 e mostra come risolverlo:

```cpp
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
