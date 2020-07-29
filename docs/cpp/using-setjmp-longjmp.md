---
title: Uso di setjmp e longjmp
ms.date: 08/14/2018
f1_keywords:
- longjmp_cpp
- setjmp_cpp
helpviewer_keywords:
- C++ exception handling, setjmp/longjmp functions
- setjmpex.h
- longjmp function in C++ programs
- setjmp.h
- setjmp function
- setjmp function, C++ programs
ms.assetid: 96be8816-f6f4-4567-9a9c-0c3c720e37c5
ms.openlocfilehash: 6adbe22eb684c9a1dda080f6d35a99c55d6c3d30
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87226997"
---
# <a name="using-setjmp-and-longjmp"></a>Uso di setjmp e longjmp

Quando [setjmp](../c-runtime-library/reference/setjmp.md) e [longjmp](../c-runtime-library/reference/longjmp.md) vengono usati insieme, consentono di eseguire un metodo non locale **`goto`** . Vengono in genere usati nel codice C per passare il controllo di esecuzione alla gestione degli errori o al codice di ripristino in una routine chiamata in precedenza senza utilizzare le convenzioni standard di chiamata o di restituzione.

> [!CAUTION]
> Poiché `setjmp` e `longjmp` non supportano la distruzione corretta degli oggetti stack frame portabili tra i compilatori c++ e, poiché potrebbero compromettere le prestazioni impedendo l'ottimizzazione sulle variabili locali, non è consigliabile usarle nei programmi c++. È consigliabile usare **`try`** invece i **`catch`** costrutti e.

Se si decide di utilizzare `setjmp` e `longjmp` in un programma c++, includere anche \<setjmp.h> o \<setjmpex.h> per garantire la corretta interazione tra le funzioni e la gestione delle eccezioni strutturata (SEH) o la gestione delle eccezioni C++.

**Specifico di Microsoft**

Se si usa un'opzione [/eh](../build/reference/eh-exception-handling-model.md) per compilare il codice C++, i distruttori per gli oggetti locali vengono chiamati durante la rimozione dello stack. Tuttavia, se si usa **/EHS** o **/EHsc** per la compilazione e una delle funzioni che usano [noexcept](../cpp/noexcept-cpp.md) chiama `longjmp` , la rimozione del distruttore per tale funzione potrebbe non verificarsi, a seconda dello stato dell'utilità di ottimizzazione.

Nel codice portabile, quando `longjmp` viene eseguita una chiamata, la distruzione corretta degli oggetti basati su frame non è garantita in modo esplicito dallo standard e potrebbe non essere supportata da altri compilatori. Per comunicare, al livello di avviso 4, una chiamata a `setjmp` genera l'avviso C4611: l'interazione tra' _setjmp ' e la distruzione di oggetti C++ non è portabile.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Combinazione di eccezioni C (strutturate) e C++](../cpp/mixing-c-structured-and-cpp-exceptions.md)
