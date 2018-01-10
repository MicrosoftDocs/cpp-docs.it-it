---
title: Punti di sequenza C | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: sequence points
ms.assetid: c84885a5-4336-4eba-a643-058df4249903
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 5a9c874c0093b55c44f900e7eab06019d75cb930
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="c-sequence-points"></a>Punti di sequenza C
Il valore di un oggetto può essere modificato una sola volta da un'espressione tra "punti di sequenza" consecutivi. Il linguaggio C definisce i seguenti punti di sequenza:  
  
-   L'operando sinistro dell'operatore logico AND (**&&**). L'operando sinistro dell'operatore logico AND viene valutato completamente e tutti gli effetti collaterali vengono completati prima di continuare. Se il secondo operando risulta essere false (0), l'altro operando non viene valutato.  
  
-   L'operando sinistro dell'operatore logico OR (`||`). L'operando sinistro dell'operatore logico OR viene valutato completamente e tutti gli effetti collaterali vengono completati prima di continuare. Se il secondo operando risulta essere true (diverso da zero), l'altro operando non viene valutato.  
  
-   L'operando sinistro dell'operatore virgola. L'operando sinistro dell'operatore virgola viene valutato completamente e tutti gli effetti collaterali vengono completati prima di continuare. Entrambi gli operandi dell'operatore virgola vengono sempre valutati. Si noti che l'operatore virgola in una chiamata di funzione non garantisce un ordine di valutazione.  
  
-   Operatore chiamata di funzione. Tutti gli argomenti a una funzione vengono valutati e tutti gli effetti collaterali vengono completati prima dell'accesso alla funzione. Nessun ordine di valutazione tra gli argomenti è specificato.  
  
-   Primo operando dell'operatore condizionale. Il primo operando dell'operatore condizionale viene valutato completamente e tutti gli effetti collaterali vengono completati prima di continuare.  
  
-   La fine di un'espressione di inizializzazione completa ovvero un'espressione che non fa parte di un'altra espressione come, ad esempio, la fine di un'inizializzazione in un'istruzione di dichiarazione).  
  
-   Espressione in un'istruzione di espressione. Le istruzioni di espressione sono costituite da un'espressione facoltativa seguita da un punto e virgola (**;**). L'espressione viene valutata per i relativi effetti collaterali ed esiste un punto di sequenza che segue questa valutazione.  
  
-   L'espressione di controllo in un'istruzione di selezione (**if** o `switch`). L'espressione viene valutata completamente e tutti gli effetti collaterali vengono completati prima che venga eseguito il codice dipendente dalla selezione.  
  
-   L'espressione di controllo di un'istruzione `while` o **do**. L'espressione viene valutata completamente e tutti gli effetti collaterali vengono completati prima che vengano eseguite eventuali istruzioni presenti nell'iterazione successiva del ciclo `while` o **do**.  
  
-   Ognuna delle tre espressioni di un'istruzione **for**. Le espressioni vengono valutate completamente e tutti gli effetti collaterali vengono completati prima dell'esecuzione di eventuali istruzioni presenti nell'iterazione successiva del ciclo **for**.  
  
-   L'espressione in un'istruzione `return`. L'espressione viene valutata completamente e tutti gli effetti collaterali vengono completati prima che il controllo torni alla funzione chiamante.  
  
## <a name="see-also"></a>Vedere anche  
 [Valutazione dell'espressione](../c-language/expression-evaluation-c.md)