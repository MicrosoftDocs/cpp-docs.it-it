---
title: Combinazione di eccezioni C (strutturate) e C++
ms.date: 08/14/2018
helpviewer_keywords:
- exceptions [C++], mixed C and C++
- C++ exception handling, mixed-language
- structured exception handling [C++], mixed C and C++
- catch keyword [C++], mixed
- try-catch keyword [C++], mixed-language
ms.assetid: a149154e-36dd-4d1a-980b-efde2a563a56
ms.openlocfilehash: 72ddde9bc284a005c77694d599a8e9a3908cb2d0
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87233691"
---
# <a name="mixing-c-structured-and-c-exceptions"></a>Combinazione di eccezioni C (strutturate) e C++

Se si desidera scrivere codice portabile, l'utilizzo della gestione delle eccezioni strutturate (SEH) in un programma C++ non è consigliato. Tuttavia, a volte può essere necessario eseguire la compilazione utilizzando [/EHA](../build/reference/eh-exception-handling-model.md) e combinare le eccezioni strutturate e il codice sorgente C++ e necessita di alcune funzionalità per la gestione di entrambi i tipi di eccezioni. Poiché un gestore di eccezioni strutturate non ha alcun concetto di oggetti o eccezioni tipizzate, non può gestire le eccezioni generate dal codice C++. Tuttavia, i **`catch`** gestori C++ possono gestire le eccezioni strutturate. La sintassi di gestione delle eccezioni C++ ( **`try`** , **`throw`** , **`catch`** ) non è accettata dal compilatore C, ma la sintassi di gestione delle eccezioni strutturata (**__try**, **`__except`** , **`__finally`** ) è supportata dal compilatore C++.

Per informazioni su come gestire le eccezioni strutturate come eccezioni C++, vedere [_set_se_translator](../c-runtime-library/reference/set-se-translator.md) .

Se si combinano eccezioni strutturate e C++, tenere presenti questi potenziali problemi:

- Le eccezioni C++ e le eccezioni strutturate non possono essere combinate all'interno della stessa funzione.

- I gestori di terminazione ( **`__finally`** blocchi) vengono sempre eseguiti anche durante la rimozione dopo che è stata generata un'eccezione.

- La gestione delle eccezioni C++ può rilevare e mantenere la semantica di rimozione in tutti i moduli compilati con le opzioni del compilatore [/eh](../build/reference/eh-exception-handling-model.md) , che abilitano la semantica di rimozione.

- In alcune circostanze, è possibile che le funzioni distruttore non vengano chiamate per tutti gli oggetti. Se, ad esempio, si verifica un'eccezione strutturata durante il tentativo di eseguire una chiamata di funzione tramite un puntatore a funzione non inizializzato e tale funzione accetta come parametri oggetti costruiti prima della chiamata, i distruttori di tali oggetti non vengono chiamati durante la rimozione dello stack.

## <a name="next-steps"></a>Passaggi successivi

- [Utilizzo di setjmp o longjmp nei programmi C++](../cpp/using-setjmp-longjmp.md)

  Per ulteriori informazioni sull'utilizzo di `setjmp` e `longjmp` nei programmi C++, vedere.

- [Gestire le eccezioni strutturate in C++](../cpp/exception-handling-differences.md)

  Vedere esempi dei modi in cui è possibile usare C++ per gestire le eccezioni strutturate.

## <a name="see-also"></a>Vedere anche

[Procedure consigliate per C++ moderne per le eccezioni e la gestione degli errori](../cpp/errors-and-exception-handling-modern-cpp.md)
