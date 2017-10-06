---
title: Combinazione di eccezioni di C++ e C (strutturate) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
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
caps.latest.revision: 7
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
ms.openlocfilehash: 074ff13ed281d30caeede227cdab2cff090fab1e
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="mixing-c-structured-and-c-exceptions"></a>Combinazione di eccezioni C (strutturate) e C++
Se si desidera scrivere codice più portabile, non è consigliabile utilizzare la gestione delle eccezioni strutturata nei programmi C++. Tuttavia, talvolta si potrebbero eseguire la compilazione con **/EHa** e combinare le eccezioni strutturate e codice sorgente C++ e necessarie alcune funzionalità per gestire entrambi i tipi di eccezioni. Poiché un gestore eccezioni strutturate non ha alcun concetto di oggetti o eccezioni tipizzate, non è possibile gestire le eccezioni generate da codice C++; Tuttavia, C++ **catch** gestori possono gestire le eccezioni strutturate. Come nel caso, la sintassi di gestione delle eccezioni C++ (**provare**, `throw`, **catch**) non è accettata dal compilatore C, ma la sintassi di gestione delle eccezioni strutturata (`__try`, `__except`, `__finally`) è supportato dal compilatore C++.  
  
 Vedere [set_se_translator](../c-runtime-library/reference/set-se-translator.md) per informazioni sulla gestione delle eccezioni strutturate come eccezioni di C++.  
  
 Se si combinano eccezioni C++ e strutturate, tenere presente quanto segue:  
  
1.  Le eccezioni C++ e le eccezioni strutturate non possono essere combinate all'interno della stessa funzione.  
  
2.  I gestori di terminazione (blocchi`__finally`) vengono sempre eseguiti, anche durante la rimozione successiva alla generazione di un'eccezione.  
  
3.  Gestione delle eccezioni C++ può intercettare e mantenere semantica di rimozione in tutti i moduli compilati con il [/EH](../build/reference/eh-exception-handling-model.md) l'opzione del compilatore (questa opzione Abilita la semantica di rimozione).  
  
4.  In alcune circostanze, è possibile che le funzioni distruttore non vengano chiamate per tutti gli oggetti. Ad esempio, se si verifica un'eccezione strutturata quando si tenta di effettuare una chiamata di funzione tramite un puntatore di funzione non inizializzato, e la stessa funzione accetta come parametri oggetti creati prima della chiamata, per questi oggetti non vengono chiamati i distruttori, durante la rimozione dello stack.  
  
## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Utilizzo di setjmp o longjmp nei programmi C++](../cpp/using-setjmp-longjmp.md)  
  
-   [Differenze tra SEH ed EH di C++](../cpp/exception-handling-differences.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione delle eccezioni C++](../cpp/cpp-exception-handling.md)
