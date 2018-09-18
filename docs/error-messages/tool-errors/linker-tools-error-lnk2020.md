---
title: Strumenti del linker LNK2020 errore | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK2020
dev_langs:
- C++
helpviewer_keywords:
- LNK2020
ms.assetid: 4dd017d0-5e83-471b-ac8a-538ac1ed6870
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 90088d311bac7ee4ce59797d5dcbe148a24963f6
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46034967"
---
# <a name="linker-tools-error-lnk2020"></a>Errore degli strumenti del linker LNK2020

token non risolto 'token'

Simile a un errore indefinito esterno, ad eccezione del fatto che il riferimento è tramite i metadati. Nei metadati, tutte le funzioni e i dati devono essere definiti.

Per risolvere:

- Definire i dati, o la funzione mancante o

- Includere il file oggetto o una raccolta in cui la funzione o i dati mancanti sono già definiti.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore LNK2020.

```
// LNK2020.cpp
// compile with: /clr /LD
ref struct A {
   A(int x);   // LNK2020
   static int f();   // LNK2020
};

// OK
ref struct B {
   B(int x) {}
   static int f() { return 0; }
};
```

## <a name="example"></a>Esempio

LNK2020 verificherà anche se si crea una variabile di un tipo di modello gestito, ma non anche creare un'istanza di tipo.

L'esempio seguente genera l'errore LNK2020.

```
// LNK2020_b.cpp
// compile with: /clr

template <typename T>
ref struct Base {
   virtual void f1() {};
};

template <typename T>
ref struct Base2 {
   virtual void f1() {};
};

int main() {
   Base<int>^ p;   // LNK2020
   Base2<int>^ p2 = gcnew Base2<int>();   // OK
};
```