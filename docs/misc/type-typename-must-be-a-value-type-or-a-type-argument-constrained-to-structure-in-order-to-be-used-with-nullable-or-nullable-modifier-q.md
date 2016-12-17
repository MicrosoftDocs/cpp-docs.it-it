---
title: "Il tipo &#39;&lt;nometipo&gt;&#39; deve essere un tipo valore o un argomento di tipo vincolato a &#39;Structure&#39; per poter essere usato con &#39;Nullable&#39; o con il modificatore nullable &#39;?&#39; | Microsoft Docs"
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
  - "vbc33101"
  - "bc33101"
helpviewer_keywords: 
  - "BC33101"
ms.assetid: b3e0e4e4-87b8-4a38-a450-15233497acaa
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il tipo &#39;&lt;nometipo&gt;&#39; deve essere un tipo valore o un argomento di tipo vincolato a &#39;Structure&#39; per poter essere usato con &#39;Nullable&#39; o con il modificatore nullable &#39;?&#39;
Solo i tipi valore, incluse le strutture, possono essere dichiarati nullable.  
  
```vb#  
' Valid. Dim n? As Integer Dim m As Integer? ' Not valid. ' Dim p? As Object ' Dim q As Nullable(Of Object)  
```  
  
 **ID errore:** BC33101  
  
### Per correggere l'errore  
  
-   Rimuovere '?' o `Nullable`.  
  
-   Usare un tipo di dati valore.  
  
## Vedere anche  
 [Nullable Value Types](../Topic/Nullable%20Value%20Types%20\(Visual%20Basic\).md)