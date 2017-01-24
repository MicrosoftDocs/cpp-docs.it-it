---
title: "Addizione (+) | Microsoft Docs"
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
  - "puntatori, aggiunta di integer"
ms.assetid: b9014fee-825d-46ef-91db-5d46807081fc
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Addizione (+)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'operatore di addizione \(**\+**\) consente ai propri due operandi di essere aggiunti.  Entrambi gli operandi possono essere sia tipi integrali che a virgola mobile, oppure un operando può essere un puntatore e l'altro un Integer.  
  
 Quando un intero viene aggiunto a un puntatore, l'Integer \(*i*\) viene convertito moltiplicandolo per la dimensione del valore a cui fa riferimento il puntatore.  In seguito alla conversione, l'Integer rappresenta le posizioni di memoria *i*, dove ogni posizione ha la lunghezza specificata dal tipo di puntatore.  Quando l'Integer convertito verrà aggiunto al valore del puntatore, il risultato è un nuovo valore del puntatore che rappresenta i percorsi dell'indirizzo *i* rispetto all'indirizzo originale.  Il nuovo valore del puntatore fa riferimento a un valore dello stesso tipo del valore del puntatore originale e pertanto equivale all'indicizzazione di matrice \(vedere [Matrici unidimensionali](../c-language/one-dimensional-arrays.md) e [Matrici multidimensionali](../c-language/multidimensional-arrays-c.md)\).  Se il puntatore della somma punta al di fuori della matrice, tranne che alla prima posizione oltre la parte superiore, il risultato sarà indefinito.  Per ulteriori informazioni, vedere [Aritmetica puntatore](../c-language/pointer-arithmetic.md).  
  
## Vedere anche  
 [Operatori di addizione C](../c-language/c-additive-operators.md)