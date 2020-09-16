---
title: Errore degli strumenti del linker LNK2020
ms.date: 11/04/2016
f1_keywords:
- LNK2020
helpviewer_keywords:
- LNK2020
ms.assetid: 4dd017d0-5e83-471b-ac8a-538ac1ed6870
ms.openlocfilehash: 6fd4859e4f8cad657de57e8039bd647e5e2b99a9
ms.sourcegitcommit: c1fd917a8c06c6504f66f66315ff352d0c046700
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/16/2020
ms.locfileid: "90684638"
---
# <a name="linker-tools-error-lnk2020"></a>Errore degli strumenti del linker LNK2020

token ' token ' non risolto

Simile a un errore esterno non definito, ad eccezione del fatto che il riferimento è tramite metadati. Nei metadati è necessario definire tutte le funzioni e i dati.

Per risolvere il problema:

- Definire la funzione o i dati mancanti, oppure

- Includere il file oggetto o la libreria in cui la funzione o i dati mancanti sono già definiti.

## <a name="examples"></a>Esempi

L'esempio seguente genera l'LNK2020.

```cpp
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

LNK2020 si verificherà anche se si crea una variabile di un tipo di modello gestito, ma non si crea anche un'istanza del tipo.

L'esempio seguente genera l'LNK2020.

```cpp
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
