---
title: Compilatore Warning (level 1) C4838
ms.date: 11/04/2016
f1_keywords:
- C4838
helpviewer_keywords:
- C4838
ms.assetid: fea07924-5feb-4ed4-99b5-1a8c41d28db6
ms.openlocfilehash: dcb7062c751320a9f9c612b42caf6d018047d8d2
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62380838"
---
# <a name="compiler-warning-level-1-c4838"></a>Compilatore Warning (level 1) C4838

conversione da 'type_1' a 'type_2' richiede una conversione di narrowing

È stata trovata una conversione di narrowing implicita quando si utilizza l'inizializzazione di aggregazione o un elenco.

Il linguaggio C consente le conversioni di narrowing implicite nell'assegnazione e inizializzazione e C++ segue seme, anche se narrowing imprevisto è delle cause di molti errori di codice. Per rendere più sicuro il codice, lo standard C++ richiede un messaggio di diagnostica quando si verifica una conversione di narrowing in un elenco di inizializzazione. In Visual C++, è lo strumento di diagnostica [errore del compilatore C2397](../../error-messages/compiler-errors-1/compiler-error-c2397.md) quando si usa la sintassi di inizializzazione uniforme supportata a partire da Visual Studio 2015. Il compilatore genera l'avviso C4838 quando si usa la sintassi di inizializzazione aggregata supportata da Visual Studio 2013 o nell'elenco.

Una conversione di narrowing può essere corretta quando si conosce che l'intervallo di valori convertiti possibili può essere contenuti nel database di destinazione. In questo caso, saperne di più rispetto al compilatore. Se si apporta una conversione di narrowing intenzionalmente, esplicitare le proprie intenzioni usando un cast statico. In caso contrario, questo messaggio di avviso quasi sempre indica la presenza di un bug nel codice. È possibile correggerlo, garantendo che gli oggetti che è inizializzare hanno tipi di dimensioni siano sufficienti per gestire l'input.

L'esempio seguente genera l'errore C4838 e viene illustrato un modo per risolvere il problema:

```
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