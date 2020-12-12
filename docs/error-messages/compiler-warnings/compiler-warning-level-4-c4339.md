---
description: 'Altre informazioni su: avviso del compilatore (livello 4) C4339'
title: Avviso del compilatore (livello 4) C4339
ms.date: 11/04/2016
f1_keywords:
- C4339
helpviewer_keywords:
- C4339
ms.assetid: 5b83353d-7777-4afb-8476-3c368349028c
ms.openlocfilehash: e05a7a73ac0cbbf056e5e30db0989e7fe933d01e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97294522"
---
# <a name="compiler-warning-level-4-c4339"></a>Avviso del compilatore (livello 4) C4339

'type': rilevato l'utilizzo di un tipo non definito nei metadati WinRT o CLR; l'uso di questo tipo può causare un'eccezione della fase di esecuzione

Un tipo non è stato definito nel codice compilato per Windows Runtime o Common Language Runtime. Definire il tipo per evitare una possibile eccezione in fase di esecuzione.

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .

L'esempio seguente genera l'errore C4339 e mostra come risolverlo:

```cpp
// C4339.cpp
// compile with: /W4 /clr /c
// C4339 expected
#pragma warning(default : 4339)

// Delete the following line to resolve.
class A;

// Uncomment the following line to resolve.
// class A{};

class X {
public:
   X() {}

   virtual A *mf() {
      return 0;
   }
};

X * f() {
   return new X();
}
```
