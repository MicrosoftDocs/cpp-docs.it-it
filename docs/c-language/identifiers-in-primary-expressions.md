---
title: "Identificatori in espressioni primarie | Microsoft Docs"
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
  - "identificatori, definizione di oggetti"
ms.assetid: d4602fe6-e7e6-40cc-9823-3b1ebf5d3d38
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Identificatori in espressioni primarie
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Gli identificatori possono presentare integrale, **float**, `enum`, `struct`, **union**, matrice, puntatore o tipo di funzione.  Un identificatore è un'espressione primaria purché sia stato dichiarato come definente un oggetto \(nel qual caso si tratta di un l\-value\) o come funzione \(nel qual caso si tratta di un indicatore di funzione\).  Per una definizione di un l\-value, vedere [Espressioni r\-value e l\-value](../c-language/l-value-and-r-value-expressions.md).  
  
 Il valore di puntatore rappresentato da un identificatore di matrice non è una variabile, quindi un identificatore di matrice non può formare l'operando sinistro di un'operazione di assegnazione e pertanto non è un l\-value modificabile.  
  
 Un identificatore dichiarato come funzione rappresenta un puntatore il cui valore è l'indirizzo della funzione.  Il puntatore fa riferimento a una funzione che restituisce un valore di un tipo specificato.  Pertanto, gli identificatori di funzione non possono anche essere l\-value nelle operazioni di assegnazione.  Per ulteriori informazioni, vedere [Identificatori](../c-language/c-identifiers.md).  
  
## Vedere anche  
 [Espressioni primarie C](../c-language/c-primary-expressions.md)