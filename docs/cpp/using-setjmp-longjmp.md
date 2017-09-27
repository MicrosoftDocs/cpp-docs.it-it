---
title: Utilizzo di setjmp longjmp | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- longjmp
- setjmp
dev_langs:
- C++
helpviewer_keywords:
- C++ exception handling, setjmp/longjmp functions
- SETJMPEX.H
- longjmp function in C++ programs
- SETJMP.H
- setjmp function
- setjmp function, C++ programs
ms.assetid: 96be8816-f6f4-4567-9a9c-0c3c720e37c5
caps.latest.revision: 9
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 356924c0a93f6d9d21bb417f84836385491b2144
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="using-setjmplongjmp"></a>Utilizzo di setjmp/longjmp
Quando [setjmp](../c-runtime-library/reference/setjmp.md) e [longjmp](../c-runtime-library/reference/longjmp.md) vengono utilizzati insieme, forniscono un modo per eseguire un non locali `goto`. In genere vengono utilizzate per passare il controllo di esecuzione alla gestione degli errori o al codice di ripristino in una routine chiamata in precedenza senza utilizzare le convenzioni standard di chiamata o restituzione.  
  
> [!CAUTION]
>  Tuttavia, poiché `setjmp` e `longjmp` non supportano la semantica degli oggetti C++, e dato che potrebbero compromettere le prestazioni impedendo l'ottimizzazione delle variabili locali, si consiglia di non utilizzarle nei programmi C++. È consigliabile utilizzare `try` / `catch` invece il costruttore.  
  
 Se si decide di utilizzare `setjmp` / `longjmp` in un programma C++, includere anche SETJMP. H o SETJMPEX. H per garantire la corretta interazione tra le funzioni e la gestione delle eccezioni C++. Se si utilizza [/EH](../build/reference/eh-exception-handling-model.md) per compilare, i distruttori per gli oggetti locali vengono chiamati durante la rimozione dello stack. Se si utilizza **/EHs** per compilare ed eseguire una delle funzioni chiama una funzione che utilizza [nothrow](../cpp/nothrow-cpp.md) e la funzione che utilizza `nothrow` chiamate `longjmp`, quindi la rimozione del distruttore potrebbe non avvenire, in base a query optimizer.  
  
 Nel codice portabile, quando viene eseguito `goto` non locale che chiama `longjmp`, la corretta distruzione corretta oggetti basati su frame può rivelarsi inaffidabile.  
  
## <a name="see-also"></a>Vedere anche  
 [Combinazione di eccezioni C (strutturate) e C++](../cpp/mixing-c-structured-and-cpp-exceptions.md)
