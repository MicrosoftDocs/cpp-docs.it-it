---
title: Combinazione di eccezioni di C++ e C (strutturati) | Microsoft Docs
ms.custom: ''
ms.date: 08/14/2018
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- exceptions [C++], mixed C and C++
- C++ exception handling, mixed-language
- structured exception handling [C++], mixed C and C++
- catch keyword [C++], mixed
- try-catch keyword [C++], mixed-language
ms.assetid: a149154e-36dd-4d1a-980b-efde2a563a56
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1edd35ac9f32a28a19c4ea54b7e9fba2820d6095
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46031626"
---
# <a name="mixing-c-structured-and-c-exceptions"></a>Combinazione di eccezioni di C++ e C (strutturato)

Se si desidera scrivere codice portabile, non è consigliato l'uso di structured exception handling (SEH) in un programma C++. Tuttavia, può a volte si desidera la compilazione con [/EHa](../build/reference/eh-exception-handling-model.md) e combinare le eccezioni strutturate e codice sorgente C++ e necessarie alcune funzionalità per gestire entrambi i tipi di eccezioni. Poiché un gestore di eccezioni strutturate non prevede il concetto di oggetti o eccezioni tipizzate, non può gestire le eccezioni generate da codice C++. Tuttavia, C++ **catch** gestori possono gestire le eccezioni strutturate. Sintassi di gestione delle eccezioni C++ (**provare**, **throw**, **catch**) non viene accettato dal compilatore C, ma la sintassi di gestione delle eccezioni strutturata (**try**, **except**, **finally**) è supportato dal compilatore C++.

Visualizzare [set_se_translator](../c-runtime-library/reference/set-se-translator.md) per informazioni su come gestire le eccezioni strutturate come eccezioni C++.

Se si combinano strutturato e delle eccezioni C++, tenere presenti questi possibili problemi:

- Le eccezioni C++ e le eccezioni strutturate non possono essere combinate all'interno della stessa funzione.

- Gestori di terminazione (**finally** blocchi) vengono sempre eseguiti, anche durante la rimozione dopo che viene generata un'eccezione.

- Gestione delle eccezioni C++ può intercettare e preserve semantica di rimozione in tutti i moduli compilati con il [/EH](../build/reference/eh-exception-handling-model.md) opzioni del compilatore, che abilita la semantica di rimozione.

- In alcune circostanze, è possibile che le funzioni distruttore non vengano chiamate per tutti gli oggetti. Ad esempio, se si verifica un'eccezione strutturata durante il tentativo di eseguire una funzione chiamata tramite un puntatore a funzione non inizializzato e tale funzione accetta come parametri oggetti creati prima della chiamata, i distruttori di tutti gli oggetti non vengono chiamati durante lo svuotamento dello stack.

## <a name="next-steps"></a>Passaggi successivi

- [Utilizzo di setjmp o longjmp nei programmi C++](../cpp/using-setjmp-longjmp.md)

  Vedere altre informazioni sull'uso delle `setjmp` e `longjmp` nei programmi C++.

- [Gestire le eccezioni strutturate in C++](../cpp/exception-handling-differences.md)

  Vedere gli esempi dei modi che è possibile usare C++ per la gestione strutturata delle eccezioni.

## <a name="see-also"></a>Vedere anche

[Gestione delle eccezioni C++](../cpp/cpp-exception-handling.md)
