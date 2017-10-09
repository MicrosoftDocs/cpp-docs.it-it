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
ms.translationtype: HT
ms.sourcegitcommit: 16d1bf59dfd4b3ef5f037aed9c0f6febfdf1a2e8
ms.openlocfilehash: 1ef83efdde0a8227ce1a5aa76f2b38816bc96023
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

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


