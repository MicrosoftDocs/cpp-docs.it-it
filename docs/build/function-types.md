---
title: "Tipi di funzioni | Microsoft Docs"
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
ms.assetid: 7e33d5f4-dabb-406d-afb3-13777b995028
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Tipi di funzioni
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Esistono sostanzialmente due tipi di funzioni.  Una funzione che richiede uno stack frame è denominata funzione frame.  Una funzione che non richiede uno stack frame è denominata funzione foglia.  
  
 Una funzione frame può allocare spazio dello stack, chiamare altre funzioni, salvare il contenuto dei registri non volatili o utilizzare la gestione delle eccezioni.  Richiede inoltre una voce nella tabella delle funzioni.  Una funzione frame richiede un prologo e un epilogo,  può allocare dinamicamente spazio dello stack nonché utilizzare un puntatore ai frame.  Dispone inoltre di tutte le funzionalità del chiamante disponibili al momento della relativa eliminazione.  
  
 Se una funzione frame non chiama un'altra funzione, non è necessario che esegua l'allineamento dello stack \(vedere la sezione [Allocazione nello stack](../build/stack-allocation.md)\).  
  
 Una funzione foglia non richiede una voce nella tabella delle funzioni,  non può chiamare altre funzioni, allocare spazio né salvare i registri non volatili.  Inoltre, può lasciare lo stack non allineato durante l'esecuzione.  
  
## Vedere anche  
 [Utilizzo dello stack](../build/stack-usage.md)