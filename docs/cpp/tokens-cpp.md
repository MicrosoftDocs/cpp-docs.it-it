---
title: Token (C++) | Documenti Microsoft
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
- tokens [C++]
- parsing, C++ tokens
- translation units
- white space, in C++ tokens
ms.assetid: aa812fd0-6d47-4f3f-aee0-db002ee4d8b9
caps.latest.revision: 7
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 041750d86f12f82e0f905c65f0a75d6a32f37cdf
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="tokens-c"></a>Token (C++)
Un token è il più piccolo elemento di un programma C++ significativo per il compilatore. Il parser C++ riconosce questi tipi di token: identificatori, parole chiave, valori letterali, operatori, segni di punteggiatura e altri separatori. Un flusso di questi token costituisce un'unità di conversione.  
  
 I token vengono generalmente separati da *spazi*. Gli spazi possono essere più di uno:  
  
-   Spazi vuoti  
  
-   Tabulazioni orizzontali o verticali  
  
-   Nuove righe  
  
-   Avanzamenti carta  
  
-   Commenti  
  
 Il parser riconosce le parole chiave, gli identificatori, i valori letterali, gli operatori e i puntatori. Per informazioni su tipi di token specifici, vedere [Parole chiave](../cpp/keywords-cpp.md), [Identificatori](../cpp/identifiers-cpp.md), [Valori letterali numerici, booleani e puntatore](../cpp/numeric-boolean-and-pointer-literals-cpp.md), [Valori letterali stringa e carattere](../cpp/string-and-character-literals-cpp.md), [Valori letterali definiti dall'utente](../cpp/user-defined-literals-cpp.md), [Operatori C++ predefiniti, precedenza e associatività](../cpp/cpp-built-in-operators-precedence-and-associativity.md)e [Puntatori](../cpp/punctuators-cpp.md). Lo spazio viene ignorato, tranne se necessario per separare i token.  
  
 I token di pre-elaborazione vengono usati nelle fasi di pre-elaborazione per generare il flusso di token passato al compilatore. Le categorie del token di pre-elaborazione sono nomi di intestazione, identificatori, numeri di pre-elaborazione, valori letterali carattere, valori letterali stringa, operatori e puntatori di pre-elaborazione e singoli caratteri diversi da spazi che non corrispondono a una delle altre categorie. I valori letterali carattere e stringa possono essere valori letterali definiti dall'utente. I token di pre-elaborazione possono essere separati da spazi o commenti.  
  
 Il parser separa i token dal flusso di input creando il token più lungo possibile usando caratteri di input in una scansione da sinistra a destra. Si consideri il seguente frammento di codice:  
  
```  
a = i+++j;  
```  
  
 Il programmatore che ha scritto il codice potrebbe aver inteso una delle due istruzioni:  
  
```  
a = i + (++j)  
  
a = (i++) + j  
```  
  
 Dal momento che il parser crea il token più lungo possibile a partire dal flusso di input, sceglie la seconda interpretazione, evidenziando i token `i++`, `+`e `j`.  
  
## <a name="see-also"></a>Vedere anche  
 [Convenzioni lessicali](../cpp/lexical-conventions.md)
