---
title: Errore degli strumenti del linker LNK2020
ms.date: 11/04/2016
f1_keywords:
- LNK2020
helpviewer_keywords:
- LNK2020
ms.assetid: 4dd017d0-5e83-471b-ac8a-538ac1ed6870
ms.openlocfilehash: 7290a90dfd92d84c4632e7f9dd38d36eccd4ac27
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50499854"
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