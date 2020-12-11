---
description: 'Altre informazioni su: corpo della funzione o variabile mancante'
title: Codice di funzione o variabile mancante
ms.date: 11/04/2016
helpviewer_keywords:
- function body
- variables, missing
ms.assetid: 1a88d809-b14f-46a4-97c4-3e48beb418f2
ms.openlocfilehash: 6a4349c380fc0f573adc8e372f9e4d2fc3f83873
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97155163"
---
# <a name="missing-function-body-or-variable"></a>Codice di funzione o variabile mancante

Con un prototipo di funzione, il compilatore può continuare senza errori, ma il linker non è in grado di risolvere una chiamata a un indirizzo perché non esiste alcun codice di funzione o spazio variabile riservato. Questo errore non verrà visualizzato fino a quando non si crea una chiamata alla funzione che deve essere risolta dal linker.

## <a name="example-call-to-an-undefined-function"></a>Esempio: chiamata a una funzione non definita

La chiamata di funzione in Main provocherà LNK2019 poiché il prototipo consente al compilatore di ritenere che la funzione esista.  Il linker rileva che non lo è.

```cpp
// LNK2019_MFBV.cpp
// LNK2019 expected
void DoSomething(void);
int main() {
   DoSomething();
}
```

## <a name="example-call-to-an-implemented-function"></a>Esempio: chiamata a una funzione implementata

In C++, assicurarsi di includere l'implementazione di una funzione specifica per una classe e non solo di un prototipo nella definizione della classe. Se si definisce la classe all'esterno del file di intestazione, assicurarsi di includere il nome della classe prima della funzione ( `Classname::memberfunction` ).

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

## <a name="see-also"></a>Vedi anche

[Errore degli strumenti del linker LNK2019](../../error-messages/tool-errors/linker-tools-error-lnk2019.md)
