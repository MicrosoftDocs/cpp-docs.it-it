---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4669'
title: Avviso del compilatore (livello 1) C4669
ms.date: 11/04/2016
f1_keywords:
- C4669
helpviewer_keywords:
- C4669
ms.assetid: 97730679-e3dc-44d4-b2a8-aa65badc17f2
ms.openlocfilehash: 590c013aed522544462141346ed9b58991d26ed3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97164315"
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
