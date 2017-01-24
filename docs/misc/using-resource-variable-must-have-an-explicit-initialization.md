---
title: "La variabile di risorsa &#39;Using&#39; deve avere un&#39;inizializzazione esplicita | Microsoft Docs"
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
  - "vbc36011"
  - "bc36011"
helpviewer_keywords: 
  - "BC36011"
ms.assetid: 5db996a6-0802-4b67-91f1-4aa9c3dd6b09
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# La variabile di risorsa &#39;Using&#39; deve avere un&#39;inizializzazione esplicita
Un'istruzione `Using` specifica almeno una risorsa che non viene inizializzata con la clausola `New`.  
  
 Se la risorsa non è ancora stata acquisita prima di passare il controllo al blocco `Using`, deve essere acquisita mediante l'istruzione `Using`. A questo scopo è necessario creare un oggetto dalla classe specificata, il che richiede una clausola `New`.  
  
 **ID errore:** BC36011  
  
### Per correggere l'errore  
  
-   Se la risorsa è già stata acquisita, usare una variabile di riferimento o un'espressione nell'istruzione `Using` che restituisce la risorsa acquisita.  
  
     `Dim newFont As New System.Drawing.Font`  
  
     `Using newFont`  
  
-   Se la risorsa non è ancora stata acquisita, aggiungere una clausola `New` all'istruzione `Using`.  
  
     `Using newFont as`   `New`   `System.Drawing.Font`  
  
## Vedere anche  
 [Using Statement](../Topic/Using%20Statement%20\(Visual%20Basic\).md)   
 [New Operator](../Topic/New%20Operator%20\(Visual%20Basic\).md)   
 [How to: Dispose of a System Resource](../Topic/How%20to:%20Dispose%20of%20a%20System%20Resource%20\(Visual%20Basic\).md)