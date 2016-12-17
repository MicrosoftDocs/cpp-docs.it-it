---
title: "Errore di sintassi nell&#39;operatore di cast: sono necessari due argomenti separati da virgola | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc30944"
  - "bc30944"
helpviewer_keywords: 
  - "BC30944"
ms.assetid: 1f7ed4a1-6ff5-4836-8424-21618c68ff45
caps.latest.revision: 6
caps.handback.revision: 6
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Errore di sintassi nell&#39;operatore di cast: sono necessari due argomenti separati da virgola
Un'espressione usa la funzione di conversione `CType` o la parola chiave di conversione `DirectCast` o `TryCast`, ma fornisce un solo argomento.  
  
 `CType`, `DirectCast` e `TryCast` richiedono due argomenti. Il primo è l'espressione da convertire e il secondo il tipo di dati o il tipo di classe in cui convertirla.  
  
 **ID errore:** BC30944  
  
### Per correggere l'errore  
  
-   Fornire entrambi gli argomenti richiesti per la conversione.  
  
-   Per usare una delle specifiche `CString`, come [Type Conversion Functions](../Topic/Type%20Conversion%20Functions%20\(Visual%20Basic\).md), è necessario usare il nome della funzione anziché `CType`. In questo caso è richiesto un solo argomento.  
  
## Vedere anche  
 [Funzione CType](../Topic/CType%20Function%20\(Visual%20Basic\).md)   
 [DirectCast Operator](../Topic/DirectCast%20Operator%20\(Visual%20Basic\).md)   
 [TryCast Operator](../Topic/TryCast%20Operator%20\(Visual%20Basic\).md)   
 [Type Conversion Functions](../Topic/Type%20Conversion%20Functions%20\(Visual%20Basic\).md)