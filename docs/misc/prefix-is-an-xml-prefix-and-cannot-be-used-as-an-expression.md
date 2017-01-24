---
title: "&#39;prefix&#39; &#232; un prefisso XML e non pu&#242; essere utilizzato come espressione | Microsoft Docs"
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
  - "bc30114"
  - "vbc30114"
helpviewer_keywords: 
  - "BC30114"
ms.assetid: 5cb7c89e-c61b-483a-9369-5285b7cbcf45
caps.latest.revision: 4
caps.handback.revision: 4
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;prefix&#39; &#232; un prefisso XML e non pu&#242; essere utilizzato come espressione
'prefix' è un prefisso XML e non può essere utilizzato come espressione. Per creare un oggetto spazio dei nomi, utilizzare l'operatore GetXmlNamespace.  
  
 Il prefisso per uno spazio dei nomi XML importato usando l'istruzione `Imports` non può essere usato al di fuori di un valore letterale XML.  
  
 **ID errore:** BC30114  
  
### Per correggere l'errore  
  
-   Se è necessario fare riferimento a una parte dello spazio dei nomi XML importato, usare l'operatore `GetXmlNamespace` per recuperare un oggetto <xref:System.Xml.Linq.XNamespace>. Usare tale oggetto anziché il prefisso dello spazio dei nomi XML.  
  
-   Se si sta usando il prefisso dello spazio dei nomi XML per qualificare un valore letterale XML, assicurarsi di impiegare la sintassi appropriata per il valore letterale XML.  
  
## Vedere anche  
 [XML Literals](../Topic/XML%20Literals%20\(Visual%20Basic\).md)   
 [Imports Statement \(XML Namespace\)](../Topic/Imports%20Statement%20\(XML%20Namespace\).md)   
 [GetXmlNamespace Operator](../Topic/GetXmlNamespace%20Operator%20\(Visual%20Basic\).md)   
 [XML](../Topic/XML%20in%20Visual%20Basic.md)   
 [Introduction to LINQ in Visual Basic](../Topic/Introduction%20to%20LINQ%20in%20Visual%20Basic.md)