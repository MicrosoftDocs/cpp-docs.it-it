---
title: Funzioni inline | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- fast code
- inline functions, __inline keyword
- functions [C++], inline functions
ms.assetid: 00f4b2ff-8ad0-4165-9f4c-2ef157d03f31
caps.latest.revision: 10
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
ms.translationtype: Human Translation
ms.sourcegitcommit: a937c9d083a7e4331af63323a19fb207142604a0
ms.openlocfilehash: cdcf109b76725855aeb6daae1628bbc6a57e6e32
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="inline-functions"></a>Funzioni inline
**Sezione specifica Microsoft**  
  
 La parola chiave `__inline` indica al compilatore di sostituire il codice nella definizione di funzione per ogni istanza di una chiamata di funzione. La sostituzione, tuttavia, viene eseguita solo a discrezione del compilatore. Il compilatore ad esempio non rende inline una funzione se ne viene acquisito l'indirizzo o se la funzione è di dimensioni troppo elevate.  
  
 Affinché una funzione venga considerata candidata per essere resa inline, è necessario utilizzare la definizione di funzione in nuovo stile.  
  
 Utilizzare questo formato per specificare una funzione inline:  
  
 `__inline` *type*opz*function-definition*`;`  
  
 L'utilizzo delle funzioni inline genera codice più veloce e può talvolta generare codice minore rispetto a quello generato dalla chiamata di funzione equivalente per i seguenti motivi:  
  
-   Risparmio del tempo necessario per eseguire chiamate di funzione.  
  
-   Le funzioni inline di dimensioni minori, costituite da tre righe o meno, creano meno codice rispetto alla chiamata di funzione equivalente in quanto il compilatore non genera codice per gestire gli argomenti e un valore restituito.  
  
-   Le funzioni generate come funzioni inline sono soggette alle ottimizzazioni di codice non disponibili per le funzioni normali perché il compilatore non esegue ottimizzazioni tra procedure.  
  
 Le funzioni che utilizzano `__inline` non devono essere confuse con il codice assembler inline. Per altre informazioni, vedere [Assembler inline](../c-language/inline-assembler-c.md).  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [inline, __inline, \__forceinline](../cpp/inline-functions-cpp.md)


