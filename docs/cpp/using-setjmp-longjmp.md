---
title: Utilizzo di setjmp longjmp | Documenti Microsoft
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
ms.openlocfilehash: dee79d5b81e968e89e8072fb545c86f33be9bcce
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32422605"
---
# <a name="using-setjmplongjmp"></a>Utilizzo di setjmp/longjmp
Quando [setjmp](../c-runtime-library/reference/setjmp.md) e [longjmp](../c-runtime-library/reference/longjmp.md) vengono utilizzati insieme, forniscono un modo per eseguire un non locali `goto`. In genere vengono utilizzate per passare il controllo di esecuzione alla gestione degli errori o al codice di ripristino in una routine chiamata in precedenza senza utilizzare le convenzioni standard di chiamata o restituzione.  
  
> [!CAUTION]
>  Tuttavia, poiché `setjmp` e `longjmp` non supportano la semantica degli oggetti C++, e dato che potrebbero compromettere le prestazioni impedendo l'ottimizzazione delle variabili locali, si consiglia di non utilizzarle nei programmi C++. È consigliabile utilizzare `try` / `catch` invece il costruttore.  
  
 Se si decide di utilizzare `setjmp` / `longjmp` in un programma C++, includere anche \<setjmp > o \<setjmpex > per garantire la corretta interazione tra le funzioni e la gestione delle eccezioni C++. Se si utilizza [/EH](../build/reference/eh-exception-handling-model.md) per compilare, i distruttori per gli oggetti locali vengono chiamati durante la rimozione dello stack. Se si utilizza **/EHs** per compilare ed eseguire una delle funzioni chiama una funzione che utilizza [nothrow](../cpp/nothrow-cpp.md) e la funzione che utilizza `nothrow` chiamate `longjmp`, quindi la rimozione del distruttore potrebbe non avvenire, in base a query optimizer.  
  
 Nel codice portabile, quando viene eseguito `goto` non locale che chiama `longjmp`, la corretta distruzione corretta oggetti basati su frame può rivelarsi inaffidabile.  
  
## <a name="see-also"></a>Vedere anche  
 [Combinazione di eccezioni C (strutturate) e C++](../cpp/mixing-c-structured-and-cpp-exceptions.md)