---
title: "Combinazione di eccezioni C (strutturate) ed eccezioni C++ | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "gestione delle eccezioni di C++, linguaggio misto"
  - "catch (parola chiave) [C++], misto"
  - "eccezioni, misto C e C++"
  - "gestione eccezioni strutturata, misto C e C++"
  - "try-catch (parola chiave) [C++], linguaggio misto"
ms.assetid: a149154e-36dd-4d1a-980b-efde2a563a56
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Combinazione di eccezioni C (strutturate) ed eccezioni C++
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Se si desidera scrivere codice più portabile, non è consigliabile utilizzare la gestione delle eccezioni strutturata nei programmi C\+\+.  Talvolta, però, può essere opportuno eseguire la compilazione con **\/EHa** e combinare le eccezioni strutturate con il codice C\+\+ sorgente; in questo caso, sono necessarie alcune funzionalità per gestire entrambi i tipi di eccezioni.  Poiché un gestore delle eccezioni strutturato non riconosce gli oggetti e le eccezioni tipizzate, non può gestire le eccezioni generate da codice C\+\+; tuttavia, i gestori C\+\+ **catch** possono gestire le eccezioni strutturate.  Di conseguenza, la sintassi di gestione delle eccezioni C\+\+ \(**try**, `throw`, **catch**\) non viene accettata dal compilatore C, ma la sintassi di gestione delle eccezioni strutturate \(`__try`, `__except`, `__finally`\) è supportata dal compilatore C\+\+.  
  
 Per informazioni sulla gestione delle eccezioni strutturate come eccezioni C\+\+, vedere [\_set\_se\_translator](../c-runtime-library/reference/set-se-translator.md).  
  
 Se si combinano eccezioni C\+\+ e strutturate, tenere presente quanto segue:  
  
1.  Le eccezioni C\+\+ e le eccezioni strutturate non possono essere combinate all'interno della stessa funzione.  
  
2.  I gestori di terminazione \(blocchi`__finally`\) vengono sempre eseguiti, anche durante la rimozione successiva alla generazione di un'eccezione.  
  
3.  La gestione delle eccezioni C\+\+ può intercettare e salvare la semantica di rimozione in tutti i moduli compilati con l'opzione del compilatore [\/EH](../build/reference/eh-exception-handling-model.md) \(questa opzione abilita la semantica di rimozione\).  
  
4.  In alcune circostanze, è possibile che le funzioni distruttore non vengano chiamate per tutti gli oggetti.  Ad esempio, se si verifica un'eccezione strutturata quando si tenta di effettuare una chiamata di funzione tramite un puntatore di funzione non inizializzato, e la stessa funzione accetta come parametri oggetti creati prima della chiamata, per questi oggetti non vengono chiamati i distruttori, durante la rimozione dello stack.  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Utilizzo di setjmp o longjmp nei programmi C\+\+](../cpp/using-setjmp-longjmp.md)  
  
-   [Differenze tra SEH e EH di C\+\+](../cpp/exception-handling-differences.md)  
  
## Vedere anche  
 [Gestione delle eccezioni C\+\+](../cpp/cpp-exception-handling.md)