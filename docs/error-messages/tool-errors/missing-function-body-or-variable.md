---
title: Codice di funzione o variabile mancante
ms.date: 11/04/2016
helpviewer_keywords:
- function body
- variables, missing
ms.assetid: 1a88d809-b14f-46a4-97c4-3e48beb418f2
ms.openlocfilehash: 6d2ef22b90009d320485fb6fe3f7e308ae05c442
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80173621"
---
# <a name="missing-function-body-or-variable"></a>Codice di funzione o variabile mancante

Con un prototipo di funzione, il compilatore può continuare senza errori, ma il linker non è in grado di risolvere una chiamata a un indirizzo perché non esiste alcun codice di funzione o spazio variabile riservato. Questo errore non verrà visualizzato fino a quando non si crea una chiamata alla funzione che deve essere risolta dal linker.

## <a name="example"></a>Esempio

La chiamata di funzione in Main provocherà LNK2019 poiché il prototipo consente al compilatore di ritenere che la funzione esista.  Il linker rileva che non lo è.

```cpp
// LNK2019_MFBV.cpp
// LNK2019 expected
void DoSomething(void);
int main() {
   DoSomething();
}
```

## <a name="example"></a>Esempio

In C++, assicurarsi di includere l'implementazione di una funzione specifica per una classe e non solo di un prototipo nella definizione della classe. Se si definisce la classe all'esterno del file di intestazione, assicurarsi di includere il nome della classe prima della funzione (`Classname::memberfunction`).

```cpp
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
