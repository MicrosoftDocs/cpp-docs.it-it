---
title: Errore del compilatore C2397 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.topic: error-reference
f1_keywords:
- C2397
dev_langs:
- C++
ms.assetid: b418cf5a-d50d-4a6c-98a7-994ae35046d1
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e3e76384ca2509663398fd7abd7badfd4057e8c3
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46115099"
---
# <a name="compiler-error-c2397"></a>Errore del compilatore C2397

conversione da 'type_1' a 'type_2' richiede una conversione di narrowing

È stata trovata una conversione di narrowing implicita quando si utilizza l'inizializzazione uniforme.

Il linguaggio C consente le conversioni di narrowing implicite nell'assegnazione e inizializzazione e C++ segue seme, anche se narrowing imprevisto è delle cause di molti errori di codice. Per rendere più sicuro il codice, lo standard C++ richiede un messaggio di diagnostica quando si verifica una conversione di narrowing in un elenco di inizializzazione. In Visual C++, la diagnostica è Errore del compilatore C2397 quando si usa l'inizio della sintassi supportata inizializzazione uniforme in Visual Studio 2015. Il compilatore genera [avviso del compilatore (livello 1) C4838](../../error-messages/compiler-warnings/compiler-warning-level-1-c4838.md) quando si usa la sintassi di inizializzazione aggregata supportata da Visual Studio 2013 o nell'elenco.

Una conversione di narrowing può essere corretta quando si conosce che l'intervallo di valori convertiti possibili può essere contenuti nel database di destinazione. In questo caso, saperne di più rispetto al compilatore. Se si apporta una conversione di narrowing intenzionalmente, esplicitare le proprie intenzioni usando un cast statico. Questo messaggio di errore indica in caso contrario, quasi sempre che è sia un bug nel codice. È possibile correggerlo, garantendo che gli oggetti che è inizializzare hanno tipi di dimensioni siano sufficienti per gestire l'input.

L'esempio seguente genera l'errore C2397 e viene illustrato un modo per risolvere il problema:

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