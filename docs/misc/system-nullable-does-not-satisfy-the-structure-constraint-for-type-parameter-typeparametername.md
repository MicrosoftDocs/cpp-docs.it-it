---
title: "&#39;System.Nullable&#39; non soddisfa il vincolo &#39;Structure&#39; per il parametro di tipo &#39;&lt;nomeparametrotipo&gt;&#39; | Microsoft Docs"
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
  - "bc32115"
  - "vbc32115"
helpviewer_keywords: 
  - "BC32115"
ms.assetid: 98053645-fa76-4826-a7c1-f1bdf3511863
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;System.Nullable&#39; non soddisfa il vincolo &#39;Structure&#39; per il parametro di tipo &#39;&lt;nomeparametrotipo&gt;&#39;
Un tipo generico viene richiamato passando un argomento di tipo di <xref:System.Nullable%601> a un parametro di tipo con un vincolo `Structure`.  
  
 Common Language Runtime non consente la struttura <xref:System.Nullable%601> come argomento di tipo di se stessa. Anche se si tratta di una struttura e soddisferebbe altrimenti un vincolo `Nullable(Of Nullable(Of Nullable))`, il suo uso ricorsivo potrebbe portare alla creazione di costruzioni complesse come `Structure`.  
  
 **ID errore:** BC32115  
  
### Per correggere l'errore  
  
-   Rimuovere il vincolo `Structure` dal parametro di tipo o modificare l'argomento di tipo in un tipo valore diverso da <xref:System.Nullable%601>.  
  
## Vedere anche  
 <xref:System.Nullable%601>   
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [Structure \(Visual Basic\)](http://msdn.microsoft.com/it-it/263ce115-ac36-4c05-8cb7-0e0eead5c6d0)