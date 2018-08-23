---
title: Uso di setjmp e longjmp | Microsoft Docs
ms.custom: ''
ms.date: 08/14/2018
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- longjmp_cpp
- setjmp_cpp
dev_langs:
- C++
helpviewer_keywords:
- C++ exception handling, setjmp/longjmp functions
- setjmpex.h
- longjmp function in C++ programs
- setjmp.h
- setjmp function
- setjmp function, C++ programs
ms.assetid: 96be8816-f6f4-4567-9a9c-0c3c720e37c5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a83253fb98506bb586af2b52ef3321bada7ca01f
ms.sourcegitcommit: b92ca0b74f0b00372709e81333885750ba91f90e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/16/2018
ms.locfileid: "42573067"
---
# <a name="using-setjmp-and-longjmp"></a>Uso di setjmp e longjmp

Quando [setjmp](../c-runtime-library/reference/setjmp.md) e [longjmp](../c-runtime-library/reference/longjmp.md) vengono usati insieme, offrono un modo per eseguire un non-local **goto**. In genere vengono utilizzate nel codice C per passare il controllo dell'esecuzione al codice di gestione degli errori o di ripristino in una routine chiamata in precedenza senza utilizzare la chiamata standard o convenzioni di restituzione.

> [!CAUTION]
> In quanto `setjmp` e `longjmp` non supportano la corretta distruzione corretta oggetti frame dello stack in modo portabile tra i compilatori C++ e perché che potrebbero compromettere le prestazioni impedendo l'ottimizzazione delle variabili locali, non è consigliabile l'uso in C++ programmi. Si consiglia di usare **provare** e **catch** invece il costruttore.

Se si decide di usare `setjmp` e `longjmp` in un programma C++, includere anche \<setjmp. h > o \<setjmpex > per garantire la corretta interazione tra le funzioni e la gestione di eccezioni strutturate (SEH) o C++ l'eccezione gestione.

**Sezione specifica Microsoft**

Se si usa un' [/EH](../build/reference/eh-exception-handling-model.md) seleziona l'opzione per compilare codice C++, i distruttori per gli oggetti locali vengono chiamati durante la rimozione dello stack. Tuttavia, se si usa **/EHs** oppure **/EHsc** a compilazione e una delle funzioni che usa [noexcept](../cpp/noexcept-cpp.md) chiamate `longjmp`, quindi il distruttore di rimozione per la funzione potrebbe non avvenire, a seconda dello stato di query optimizer.

Nel codice portabile, quando un `longjmp` chiamata viene eseguita, corretta distruzione corretta oggetti basati su frame in modo esplicito non è garantita dallo standard e potrebbe non essere supportata da altri compilatori. Per essere informati, a livello di avviso 4, una chiamata a `setjmp` Genera avviso C4611: l'interazione tra setjmp' e l'eliminazione degli oggetti C++ non è portabile.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Combinazione di eccezioni C (strutturate) e C++](../cpp/mixing-c-structured-and-cpp-exceptions.md)  
