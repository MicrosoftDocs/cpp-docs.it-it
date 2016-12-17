---
title: "Sottrazione (–) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "operatori [C], sottrazione"
  - "sottrazione (operatore), sintassi"
ms.assetid: 9cacba7d-20b3-4372-8a63-ba5d8ee64177
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Sottrazione (–)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L’operatore di sottrazione \(**–**\) sottrae il secondo operando dal primo.  Entrambi gli operandi possono essere sia tipi integrali che a virgola mobile, oppure un operando può essere un puntatore e l'altro un Integer.  
  
 Quando vengono sottratti due puntatori, la differenza viene convertita in un valore integrale con segno, dividendo la differenza per la dimensione di un valore del tipo a cui sono indirizzati i puntatori.  La dimensione del valore integrale viene definita dal tipo **ptrdiff\_t** nel file di inclusione standard STDDEF.H.  Il risultato rappresenta il numero di posizioni di memoria di tale tipo presenti tra i due indirizzi.  Solo nel caso di due elementi della stessa matrice, si può essere certi che il risultato sia significativo, come illustrato in [L'aritmetica dei puntatori](../c-language/pointer-arithmetic.md).  
  
 Quando un Integer viene sottratto da un valore di puntatore, l'operazione di sottrazione converte l'Integer \(*i*\), moltiplicandolo per la dimensione del valore a cui è indirizzato il puntatore.  In seguito alla conversione, l'Integer rappresenta le posizioni di memoria *i*, dove ogni posizione ha la lunghezza specificata dal tipo di puntatore.  Quando l'Integer convertito viene sottratto dal valore di puntatore, il risultato è l'indirizzo di memoria delle posizioni *i* precedenti all'indirizzo originale.  Il nuovo puntatore punta a un valore del tipo a cui è indirizzato il valore di puntatore originale.  
  
## Vedere anche  
 [Operatori di addizione C](../c-language/c-additive-operators.md)