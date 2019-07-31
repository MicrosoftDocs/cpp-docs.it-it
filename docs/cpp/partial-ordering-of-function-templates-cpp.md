---
title: Ordinamento parziale di modelli di funzione (C++)
ms.date: 07/30/2019
helpviewer_keywords:
- partial ordering of function templates
ms.assetid: 0c17347d-0e80-47ad-b5ac-046462d9dc73
ms.openlocfilehash: 0c4f11b4b3e02504c4786ea34441362b542959d6
ms.sourcegitcommit: 725e86dabe2901175ecc63261c3bf05802dddff4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/31/2019
ms.locfileid: "68682422"
---
# <a name="partial-ordering-of-function-templates-c"></a>Ordinamento parziale di modelli di funzione (C++)

Possono essere disponibili più modelli di funzioni corrispondente all'elenco di argomenti di una chiamata di funzione. In C++ viene definito un ordinamento parziale dei modelli di funzione per specificare la funzione che deve essere chiamata. L'ordinamento è parziale perché possono essere presenti alcuni modelli considerati ugualmente specializzati.

Il compilatore sceglie la funzione del modello più specializzato disponibile tra le possibili corrispondenze. Se, ad esempio, un modello di funzione accetta `T` un tipo e un altro modello `T*` di funzione che accetta `T*` è disponibile, la versione viene detta più specializzata. È preferibile rispetto alla `T` versione generica ogni volta che l'argomento è un tipo di puntatore, anche se entrambe le corrispondenze sono consentite.

Utilizzare la procedura seguente per determinare se un candidato di modello di funzione è più specializzato:

1. Considerare due modelli di funzione, T1 e T2.

1. Sostituire i parametri in T1 con un tipo univoco ipotetico X.

1. Con l'elenco di parametri in T1, vedere se T2 è un modello valido per tale elenco di parametri. Ignorare tutte le conversioni implicite.

1. Ripetere la stessa procedura con T1 e T2 all'inverso.

1. Se un modello è un elenco di argomenti di modello valido per l'altro modello, ma il contrario non è vero, il modello viene considerato meno specializzato rispetto all'altro modello. Se si usa il passaggio precedente, entrambi i modelli formano argomenti validi tra loro, quindi sono considerati ugualmente specializzati e viene generata una chiamata ambigua quando si tenta di usarli.

1. Utilizzare le regole seguenti:

   1. Una specializzazione di modello per un tipo specifico è più specializzata di una che accetta un argomento di tipo generico.

   1. Un modello che accetta `T*` solo è più specializzato di uno solo `T`, perché un tipo `X*` ipotetico è un argomento valido per `T` un argomento di modello `X` , ma non è un argomento valido per un `T*`argomento di modello.

   1. `const T`è più specializzato di `T`, perché `const X` è un argomento valido per un `T` argomento di modello, `X` ma non è un argomento valido per `const T` un argomento di modello.

   1. `const T*`è più specializzato di `T*`, perché `const X*` è un argomento valido per un `T*` argomento di modello, `X*` ma non è un argomento valido per `const T*` un argomento di modello.

## <a name="example"></a>Esempio

L'esempio seguente funziona come specificato nello standard:

```cpp
// partial_ordering_of_function_templates.cpp
// compile with: /EHsc
#include <iostream>

template <class T> void f(T) {
   printf_s("Less specialized function called\n");
}

template <class T> void f(T*) {
   printf_s("More specialized function called\n");
}

template <class T> void f(const T*) {
   printf_s("Even more specialized function for const T*\n");
}

int main() {
   int i =0;
   const int j = 0;
   int *pi = &i;
   const int *cpi = &j;

   f(i);   // Calls less specialized function.
   f(pi);  // Calls more specialized function.
   f(cpi); // Calls even more specialized function.
   // Without partial ordering, these calls would be ambiguous.
}
```

### <a name="output"></a>Output

```Output
Less specialized function called
More specialized function called
Even more specialized function for const T*
```

## <a name="see-also"></a>Vedere anche

[Modelli di funzioni](../cpp/function-templates.md)
