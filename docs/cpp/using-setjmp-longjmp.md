---
title: Uso di setjmp-longjmp | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
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
ms.openlocfilehash: 2073729fc5445fc36e3d8a6f52c4f69b079c8b47
ms.sourcegitcommit: 51f804005b8d921468775a0316de52ad39b77c3e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/02/2018
ms.locfileid: "39462131"
---
# <a name="using-setjmplongjmp"></a>Utilizzo di setjmp/longjmp
Quando [setjmp](../c-runtime-library/reference/setjmp.md) e [longjmp](../c-runtime-library/reference/longjmp.md) vengono usati insieme, offrono un modo per eseguire un non-local **goto**. In genere vengono utilizzate per passare il controllo di esecuzione alla gestione degli errori o al codice di ripristino in una routine chiamata in precedenza senza utilizzare le convenzioni standard di chiamata o restituzione.  
  
> [!CAUTION]
>  Tuttavia, poiché **setjmp** e **longjmp** non supportano la semantica degli oggetti C++, e poiché che potrebbero compromettere le prestazioni impedendo l'ottimizzazione delle variabili locali, è consigliabile non utilizzare li nei programmi C++. È consigliabile usare **provare**/**catch** invece il costruttore.  
  
 Se si decide di usare **setjmp**/**longjmp** in un programma C++, includere anche \<setjmp. h > o \<setjmpex > per garantire la corretta interazione tra il le funzioni e la gestione delle eccezioni C++. Se si usa [/EH](../build/reference/eh-exception-handling-model.md) per compilare, i distruttori per gli oggetti locali vengono chiamati durante la rimozione dello stack. Se si usa **/EHs** per compilare ed eseguire una delle funzioni chiama una funzione che usa [nothrow](../cpp/nothrow-cpp.md) e la funzione che usa **nothrow** chiamate **longjmp**, quindi la rimozione del distruttore potrebbe non avvenire, a seconda della query optimizer.  
  
 Nel codice portabile, quando non in locale **goto** che chiama **longjmp** viene eseguita, corretta distruzione corretta oggetti basati su frame può rivelarsi inaffidabile.  
  
## <a name="see-also"></a>Vedere anche  
 [Combinazione di eccezioni C (strutturate) e C++](../cpp/mixing-c-structured-and-cpp-exceptions.md)