---
title: Combinazione di C (strutturata C++ ) ed eccezioni
ms.date: 08/14/2018
helpviewer_keywords:
- exceptions [C++], mixed C and C++
- C++ exception handling, mixed-language
- structured exception handling [C++], mixed C and C++
- catch keyword [C++], mixed
- try-catch keyword [C++], mixed-language
ms.assetid: a149154e-36dd-4d1a-980b-efde2a563a56
ms.openlocfilehash: e49731f1c81057002eaae2bef16cda4a5cf86f8d
ms.sourcegitcommit: 654aecaeb5d3e3fe6bc926bafd6d5ace0d20a80e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/20/2019
ms.locfileid: "74246452"
---
# <a name="mixing-c-structured-and-c-exceptions"></a>Combinazione di C (strutturata C++ ) ed eccezioni

Se si desidera scrivere codice portabile, non è consigliabile utilizzare la gestione delle eccezioni strutturate ( C++ SEH) in un programma. Tuttavia, a volte può essere opportuno eseguire la compilazione usando [/EHA](../build/reference/eh-exception-handling-model.md) e combinare eccezioni C++ strutturate e codice sorgente e avere bisogno di alcune funzionalità per la gestione di entrambi i tipi di eccezioni. Poiché un gestore di eccezioni strutturate non ha alcun concetto di oggetti o eccezioni tipizzate, non può C++ gestire le eccezioni generate dal codice. Tuttavia, C++ i gestori **catch** possono gestire le eccezioni strutturate. C++la sintassi di gestione delle eccezioni (**try**, **throw**, **catch**) non è accettata dal compilatore C, ma la C++ sintassi di gestione delle eccezioni strutturata ( **__try**, **__except**, **__finally**) è supportata dal compilatore.

Per informazioni su come gestire le eccezioni strutturate come eccezioni C++, vedere [_set_se_translator](../c-runtime-library/reference/set-se-translator.md).

Se si combinano strutture C++ ed eccezioni, tenere presenti questi potenziali problemi:

- Le eccezioni C++ e le eccezioni strutturate non possono essere combinate all'interno della stessa funzione.

- I gestori di terminazione (blocchi **__finally** ) vengono sempre eseguiti, anche durante la rimozione dopo che è stata generata un'eccezione.

- C++la gestione delle eccezioni può rilevare e mantenere la semantica di rimozione in tutti i moduli compilati con le opzioni del compilatore [/eh](../build/reference/eh-exception-handling-model.md) , che abilitano la semantica di rimozione.

- In alcune circostanze, è possibile che le funzioni distruttore non vengano chiamate per tutti gli oggetti. Se, ad esempio, si verifica un'eccezione strutturata durante il tentativo di eseguire una chiamata di funzione tramite un puntatore a funzione non inizializzato e tale funzione accetta come parametri oggetti costruiti prima della chiamata, i distruttori di tali oggetti non vengono chiamati durante la rimozione dello stack.

## <a name="next-steps"></a>Passaggi successivi

- [Uso di setjmp o longjmp C++ nei programmi](../cpp/using-setjmp-longjmp.md)

  Per ulteriori informazioni sull'utilizzo di `setjmp` e `longjmp` nei C++ programmi, vedere.

- [Gestire le eccezioni strutturate in C++](../cpp/exception-handling-differences.md)

  Vedere esempi dei modi in cui è possibile C++ usare per gestire le eccezioni strutturate.

## <a name="see-also"></a>Vedere anche

[Procedure C++ consigliate moderne per le eccezioni e la gestione degli errori](../cpp/errors-and-exception-handling-modern-cpp.md)
