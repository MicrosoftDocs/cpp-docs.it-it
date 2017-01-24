---
title: "Non &#232; possibile usare il prefisso &#39;xmlns&#39; nei nomi di elemento | Microsoft Docs"
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
  - "vbc31189"
  - "bc31189"
helpviewer_keywords: 
  - "BC31189"
ms.assetid: 88716bb5-6766-4180-b2ed-1d1bee0ff7a6
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile usare il prefisso &#39;xmlns&#39; nei nomi di elemento
È stato specificato un valore letterale elemento XML con un prefisso dello spazio dei nomi XML di `xmlns`. Ad esempio:  
  
```vb#  
Dim elem = <xmlns:ElementName>  
```  
  
 La specifica XML 1.0 identifica `xmlns` come una parola riservata.  
  
 **ID errore:** BC31189  
  
### Per correggere l'errore  
  
-   Modificare il prefisso dello spazio dei nomi XML con un valore valido o rimuovere il prefisso.  
  
## Vedere anche  
 [XML Literals](../Topic/XML%20Literals%20\(Visual%20Basic\).md)   
 [Imports Statement \(XML Namespace\)](../Topic/Imports%20Statement%20\(XML%20Namespace\).md)   
 [XML](../Topic/XML%20in%20Visual%20Basic.md)