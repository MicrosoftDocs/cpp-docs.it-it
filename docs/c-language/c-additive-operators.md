---
title: "Operatori di addizione C | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "+ (operatore), operatori di addizione"
  - "operatori di addizione"
  - "operatori aritmetici [C++], operatori di addizione"
  - "operatori [C], addizione"
  - "conversioni aritmetiche comuni"
ms.assetid: bb8ac205-b061-41fc-8dd4-dab87c8b900c
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Operatori di addizione C
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Gli operatori additivi eseguono l'aggiunta \(**\+**\) e la sottrazione \(**–**\).  
  
## Sintassi  
 *additive\-expression*:  
 *multiplicative\-expression*  
  
 *additive\-expression*  **\+**  *multiplicative\-expression*  
  
 *additive\-expression*  **–**  *multiplicative\-expression*  
  
> [!NOTE]
>  Sebbene la sintassi per *additive\-expression* includa *multiplicative\-expression*, ciò non implica che siano richieste le espressioni che utilizzano la moltiplicazione.  Vedere la sintassi in [Riepilogo della sintassi del linguaggio C](../c-language/c-language-syntax-summary.md) per *multiplicative\-expression*, *cast\-expression* e *unary\-expression*.  
  
 Gli operandi possono essere valori integrali o a virgola mobile.  Alcune operazioni additive possono essere eseguite sui valori di puntatore, come descritto nella discussione di ciascun operatore.  
  
 Gli operatori additivi eseguono conversioni aritmetiche consuete su operandi di tipo integrale e a virgola mobile.  Il tipo del risultato è il tipo degli operandi in seguito alla conversione.  Poiché le conversioni eseguite dagli operatori additivi non consentono condizioni di overflow o di underflow, è possibile che le informazioni vengano perse se il risultato di un'operazione additiva non può essere rappresentato nel tipo degli operandi dopo la conversione.  
  
## Vedere anche  
 [Operatori di addizione: \+ e \-](../cpp/additive-operators-plus-and.md)