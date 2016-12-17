---
title: "Il metodo &#39;&lt;nomemetodo&gt;&#39; non ha la stessa firma del delegato &#39;&lt;nomedelegato&gt;&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc30408"
  - "vbc30408"
helpviewer_keywords: 
  - "BC30408"
ms.assetid: 845f6686-388f-4253-b635-146e517015a1
caps.latest.revision: 11
caps.handback.revision: 11
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il metodo &#39;&lt;nomemetodo&gt;&#39; non ha la stessa firma del delegato &#39;&lt;nomedelegato&gt;&#39;
Le firme del metodo e del delegato che si sta cercando di usare non corrispondono. L'istruzione `Delegate` definisce i tipi di parametro e i tipi restituiti di una classe delegata. Qualsiasi routine con parametri, tipi e tipi restituiti corrispondenti può essere usata per creare un'istanza di questo tipo di delegato. Ogni classe delegata definisce un costruttore a cui viene passata la specifica di un metodo dell'oggetto.  
  
 **ID errore:** BC30408  
  
### Per correggere l'errore  
  
-   Verificare le firme per trovare la mancata corrispondenza e correggere l'errore.  
  
## Vedere anche  
 [Delegate Statement](../Topic/Delegate%20Statement.md)