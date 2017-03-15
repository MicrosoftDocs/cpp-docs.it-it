---
title: "Conversioni di tipi (C) | Microsoft Docs"
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
  - "conversioni, tipo"
  - "conversione di tipi"
  - "promozioni a intero"
  - "tipo (cast), durante l'esecuzione"
  - "tipo (conversione)"
ms.assetid: d130ee7c-03c3-48f4-af7b-1fdba0d3b086
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Conversioni di tipi (C)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le conversioni di tipo dipendono dall'operatore specificato e dal tipo dell'operando o degli operatori.  Le conversioni di tipo sono effettuate nei casi seguenti:  
  
-   Quando un valore di un tipo viene assegnato a una variabile di un tipo differente o quando un operatore converte il tipo del relativo operando o operandi prima di eseguire un'operazione  
  
-   Quando viene eseguito il cast esplicito di un valore di un tipo su un tipo diverso  
  
-   Quando un valore viene passato come argomento a una funzione o quando un tipo viene restituito da una funzione  
  
 Un carattere, uno short integer o un campo di bit intero, tutti signed o meno o un oggetto di tipo di enumerazione possono essere utilizzati in un'espressione ovunque un Integer possa essere utilizzato.  Se `int` può rappresentare tutti i valori del tipo originale, allora il valore viene convertito in `int`; in caso contrario, viene convertito in `unsigned int`.  Questo processo è noto come "promozione a intero". Le promozioni a intero mantengono il valore.  Ovvero il valore dopo la promozione è sempre garantito come uguale a prima della promozione.  Per ulteriori informazioni, vedere [Conversioni aritmetiche comuni](../c-language/usual-arithmetic-conversions.md).  
  
## Vedere anche  
 [Espressioni e assegnazioni](../c-language/expressions-and-assignments.md)