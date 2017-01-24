---
title: "L&#39;espressione non pu&#242; essere specificata all&#39;interno di un valore di attributo tra virgolette | Microsoft Docs"
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
  - "bc31155"
  - "vbc31155"
helpviewer_keywords: 
  - "BC31155"
ms.assetid: ed3e618e-de94-4e4e-afaf-72b11073fb1d
caps.latest.revision: 6
caps.handback.revision: 6
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;espressione non pu&#242; essere specificata all&#39;interno di un valore di attributo tra virgolette
L'espressione non può essere specificata all'interno di un valore di attributo tra virgolette. Provare a rimuovere le virgolette.  
  
 Un'espressione incorporata in un valore di attributo per un valore letterale XML è contenuta all'interno di virgolette.  
  
 **ID errore:** BC31155  
  
### Per correggere l'errore  
  
-   Rimuovere le virgolette di delimitazione dal valore di attributo. Di seguito è riportato un esempio:  
  
    ```vb#  
    ' Generates an error. Dim elem = <outer attr="<%= value %>" /> ' Does not generate an error. Dim elem = <outer attr=<%= value %> />  
    ```  
  
## Vedere anche  
 [Embedded Expressions in XML](../Topic/Embedded%20Expressions%20in%20XML%20\(Visual%20Basic\).md)   
 [XML Literals](../Topic/XML%20Literals%20\(Visual%20Basic\).md)   
 [XML](../Topic/XML%20in%20Visual%20Basic.md)