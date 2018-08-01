---
title: Combinazione di eccezioni di C++ e C (strutturate) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
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
ms.openlocfilehash: 6e632faddb3b4f59733710a915ed121a12f4e0c6
ms.sourcegitcommit: 2b9e8af9b7138f502ffcba64e2721f7ef52af23b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/01/2018
ms.locfileid: "39404863"
---
# <a name="mixing-c-structured-and-c-exceptions"></a>Combinazione di eccezioni C (strutturate) e C++
Se si desidera scrivere codice più portabile, non è consigliabile utilizzare la gestione delle eccezioni strutturata nei programmi C++. Tuttavia, talvolta si potrebbero eseguire la compilazione con **/EHa** e combinare le eccezioni strutturate e codice sorgente C++ e necessarie alcune funzionalità per gestire entrambi i tipi di eccezioni. Poiché un gestore di eccezioni strutturate non prevede il concetto di oggetti o eccezioni tipizzate, non può gestire le eccezioni generate da codice C++; Tuttavia, C++ **catch** gestori possono gestire le eccezioni strutturate. Come tale, la sintassi di gestione delle eccezioni C++ (**provare**, **throw**, **catch**) non viene accettata dal compilatore C, ma la sintassi di gestione delle eccezioni strutturata (**try** , **except**, **finally**) è supportato dal compilatore C++.  
  
 Visualizzare [set_se_translator](../c-runtime-library/reference/set-se-translator.md) per informazioni sulla gestione delle eccezioni strutturate come eccezioni C++.  
  
 Se si combinano eccezioni C++ e strutturate, tenere presente quanto segue:  
  
1.  Le eccezioni C++ e le eccezioni strutturate non possono essere combinate all'interno della stessa funzione.  
  
2.  Gestori di terminazione (**finally** blocchi) vengono sempre eseguiti, anche durante la rimozione dopo che viene generata un'eccezione.  
  
3.  Gestione delle eccezioni C++ può intercettare e preserve semantica di rimozione in tutti i moduli compilati con il [/EH](../build/reference/eh-exception-handling-model.md) opzione del compilatore (questa opzione Abilita la semantica di rimozione).  
  
4.  In alcune circostanze, è possibile che le funzioni distruttore non vengano chiamate per tutti gli oggetti. Ad esempio, se si verifica un'eccezione strutturata quando si tenta di effettuare una chiamata di funzione tramite un puntatore di funzione non inizializzato, e la stessa funzione accetta come parametri oggetti creati prima della chiamata, per questi oggetti non vengono chiamati i distruttori, durante la rimozione dello stack.  
  
## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Utilizzo di setjmp o longjmp nei programmi C++](../cpp/using-setjmp-longjmp.md)  
  
-   [Differenze tra SEH ed EH di C++](../cpp/exception-handling-differences.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione delle eccezioni C++](../cpp/cpp-exception-handling.md)