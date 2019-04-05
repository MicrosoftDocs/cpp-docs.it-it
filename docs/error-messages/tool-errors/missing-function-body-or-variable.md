---
title: Codice di funzione o variabile mancante
ms.date: 11/04/2016
helpviewer_keywords:
- function body
- variables, missing
ms.assetid: 1a88d809-b14f-46a4-97c4-3e48beb418f2
ms.openlocfilehash: c287d804df3222475d7cf32c6eb025f642dfb913
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59031858"
---
# <a name="missing-function-body-or-variable"></a>Codice di funzione o variabile mancante

Con solo un prototipo di funzione, il compilatore può continuare senza errori, ma il linker non è possibile risolvere una chiamata a un indirizzo poiché non esiste alcun codice di funzione o variabile spazio riservato. Questo errore non verrà visualizzato fino a quando non si crea una chiamata alla funzione che il linker deve essere risolto.

## <a name="example"></a>Esempio

La chiamata di funzione principale causerà l'errore LNK2019 perché il prototipo consente al compilatore di considerare che la funzione esiste.  Il linker rileva che non ne.

```
// LNK2019_MFBV.cpp
// LNK2019 expected
void DoSomething(void);
int main() {
   DoSomething();
}
```

## <a name="example"></a>Esempio

In C++, assicurarsi di includere l'implementazione di una funzione specifica per una classe e non solo un prototipo nella definizione della classe. Se si definisce la classe all'esterno del file di intestazione, assicurarsi di includere il nome della classe prima della funzione (`Classname::memberfunction`).

```
// LNK2019_MFBV_2.cpp
// LNK2019 expected
struct A {
   static void Test();
};

// Should be void A::Test() {}
void Test() {}

int main() {
   A AObject;
   AObject.Test();
}
```

## <a name="see-also"></a>Vedere anche

[Errore degli strumenti del linker LNK2019](../../error-messages/tool-errors/linker-tools-error-lnk2019.md)