---
title: Avviso del compilatore (livello 4) C4339
ms.date: 11/04/2016
f1_keywords:
- C4339
helpviewer_keywords:
- C4339
ms.assetid: 5b83353d-7777-4afb-8476-3c368349028c
ms.openlocfilehash: bc9d335b3a09f7953a12b388d5bb40cc4d433969
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62400825"
---
# <a name="compiler-warning-level-4-c4339"></a>Avviso del compilatore (livello 4) C4339

'type': rilevato l'utilizzo di un tipo non definito nei metadati WinRT o CLR; l'uso di questo tipo può causare un'eccezione della fase di esecuzione

Un tipo non è stato definito nel codice compilato per Windows Runtime o Common Language Runtime. Definire il tipo per evitare una possibile eccezione in fase di esecuzione.

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .

L'esempio seguente genera l'errore C4339 e mostra come risolverlo:

```
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