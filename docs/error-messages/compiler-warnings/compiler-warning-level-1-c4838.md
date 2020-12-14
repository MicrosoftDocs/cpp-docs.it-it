---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4838'
title: Avviso del compilatore (livello 1) C4838
ms.date: 11/04/2016
f1_keywords:
- C4838
helpviewer_keywords:
- C4838
ms.assetid: fea07924-5feb-4ed4-99b5-1a8c41d28db6
ms.openlocfilehash: 2676ef05934ee3c5e6afbf6df8d6d7a306db68ae
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97197960"
---
# <a name="compiler-warning-level-1-c4838"></a>Avviso del compilatore (livello 1) C4838

la conversione da' type_1' a' type_2' richiede una conversione verso un tipo di caratteri più piccolo

È stata trovata una conversione implicita verso un tipo di caratteri più piccolo quando si utilizza l'inizializzazione aggregata

Il linguaggio C consente le conversioni implicite verso un tipo di caratteri più piccolo nelle assegnazioni e nell'inizializzazione, mentre C++ segue la tuta, anche se la riduzione imprevista è causa di molti errori di codice. Per rendere il codice più sicuro, lo standard C++ richiede un messaggio di diagnostica quando si verifica una conversione verso un tipo di dati più piccolo in un elenco di inizializzazione In Visual C++, la diagnostica è un [errore del compilatore C2397](../../error-messages/compiler-errors-1/compiler-error-c2397.md) quando si usa la sintassi di inizializzazione uniforme supportata a partire da Visual Studio 2015. Il compilatore genera un avviso C4838 quando si usa la sintassi di inizializzazione dell'elenco o dell'aggregazione supportata da Visual Studio 2013.

Una conversione verso un tipo di caratteri più piccolo può essere corretta quando si conosce la possibile gamma di valori convertiti che possono essere inseriti nella destinazione. In questo caso, si è a conoscenza di più del compilatore. Se si esegue una conversione verso un tipo di caratteri più piccolo intenzionalmente, rendere esplicite le intenzioni usando un cast statico. In caso contrario, questo messaggio di avviso quasi sempre indica che è presente un bug nel codice. È possibile risolvere il problema verificando che gli oggetti inizializzati dispongano di tipi sufficientemente grandi da gestire gli input.

L'esempio seguente genera C4838 e Mostra un modo per risolverlo:

```cpp
// C4838.cpp -- C++ narrowing conversion diagnostics
// Compile by using: cl /EHsc C4838.cpp

struct S1 {
    int m1;
    double m2, m3;
};

void function_C4838(double d1) {
    double ad[] = { 1, d1 }; // OK
    int ai[] = { 1, d1 };    // warning C4838
    S1 s11 = { 1, 2, d1 };   // OK
    S1 s12 { d1, 2, 3 };     // warning C4838
    S1 s13 { static_cast<int>(d1), 2, 3 }; // possible fix for C4838
}
```
