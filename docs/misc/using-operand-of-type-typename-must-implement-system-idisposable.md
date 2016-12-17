---
title: "L&#39;operando &#39;Using&#39; di tipo &#39;&lt;nometipo&gt;&#39; deve implementare &#39;System.IDisposable&#39; | Microsoft Docs"
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
  - "vbc36010"
  - "bc36010"
helpviewer_keywords: 
  - "BC36010"
ms.assetid: ae9ed5d5-68ba-4950-bb7a-61327fa0e7d5
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;operando &#39;Using&#39; di tipo &#39;&lt;nometipo&gt;&#39; deve implementare &#39;System.IDisposable&#39;
Un'istruzione `Using` specifica una risorsa di un tipo che implementa l'interfaccia <xref:System.IDisposable>.  
  
 Lo scopo di un blocco `Using` è quello di garantire l'eliminazione di una risorsa di sistema all'uscita dal blocco. A questo scopo, è necessario che la risorsa esponga il metodo <xref:System.IDisposable.Dispose%2A> implementato da <xref:System.IDisposable>.  
  
 **ID errore:** BC36010  
  
### Per correggere l'errore  
  
-   Rimuovere la risorsa dall'elenco di risorse dell'istruzione `Using` o sostituirla con una risorsa che implementa <xref:System.IDisposable>.  
  
## Vedere anche  
 <xref:System.IDisposable>   
 [Using Statement](../Topic/Using%20Statement%20\(Visual%20Basic\).md)   
 [How to: Dispose of a System Resource](../Topic/How%20to:%20Dispose%20of%20a%20System%20Resource%20\(Visual%20Basic\).md)