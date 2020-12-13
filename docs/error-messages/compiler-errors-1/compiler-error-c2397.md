---
description: 'Altre informazioni su: errore del compilatore C2397'
title: Errore del compilatore C2397
ms.date: 11/04/2016
f1_keywords:
- C2397
ms.assetid: b418cf5a-d50d-4a6c-98a7-994ae35046d1
ms.openlocfilehash: 8e5f000b8d0881fd6a57bb4895afbdef0e7c598a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97145379"
---
# <a name="compiler-error-c2397"></a>Errore del compilatore C2397

la conversione da' type_1' a' type_2' richiede una conversione verso un tipo di caratteri più piccolo

È stata rilevata una conversione implicita verso un tipo di restringimento

Il linguaggio C consente le conversioni implicite verso un tipo di caratteri più piccolo nelle assegnazioni e nell'inizializzazione, mentre C++ segue la tuta, anche se la riduzione imprevista è causa di molti errori di codice. Per rendere il codice più sicuro, lo standard C++ richiede un messaggio di diagnostica quando si verifica una conversione verso un tipo di dati più piccolo in un elenco di inizializzazione In Visual C++, la diagnostica è un errore del compilatore C2397 quando si usa la sintassi di inizializzazione uniforme supportata a partire da Visual Studio 2015. Il compilatore genera un [Avviso del compilatore (livello 1) C4838](../../error-messages/compiler-warnings/compiler-warning-level-1-c4838.md) quando si usa la sintassi di inizializzazione dell'elenco o dell'aggregazione supportata da Visual Studio 2013.

Una conversione verso un tipo di caratteri più piccolo può essere corretta quando si conosce la possibile gamma di valori convertiti che possono essere inseriti nella destinazione. In questo caso, si è a conoscenza di più del compilatore. Se si esegue una conversione verso un tipo di caratteri più piccolo intenzionalmente, rendere esplicite le intenzioni usando un cast statico. In caso contrario, questo messaggio di errore indica quasi sempre che nel codice è presente un bug. È possibile risolvere il problema verificando che gli oggetti inizializzati dispongano di tipi sufficientemente grandi da gestire gli input.

L'esempio seguente genera C2397 e Mostra un modo per risolverlo:

```
// C2397.cpp -- C++ narrowing conversion diagnostics
// Compile by using: cl /EHsc C2397.cpp
#include <vector>

struct S1 {
    int m1;
    double m2, m3;
};

void function_C2397(double d1) {
    char c1 { 127 };          // OK
    char c2 { 513 };          // error C2397

    std::vector<S1> vS1;
    vS1.push_back({ d1, 2, 3 }); // error C2397

    // Possible fix if you know d1 always fits in an int
    vS1.push_back({ static_cast<int>(d1), 2, 3 });
}
```
