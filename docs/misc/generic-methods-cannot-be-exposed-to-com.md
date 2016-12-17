---
title: "I metodi generici non possono essere esposti a COM | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc30943"
  - "bc30943"
helpviewer_keywords: 
  - "BC30943"
ms.assetid: 0e3bff62-f187-4864-8520-70f6be22e869
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# I metodi generici non possono essere esposti a COM
Un componente [!INCLUDE[dnprdnshort](../error-messages/tool-errors/includes/dnprdnshort_md.md)] contenente una o più routine generiche viene esportato in un componente COM.  
  
 Il modello COM \(Component Object Model\) non supporta tipi generici e non può interagire con essi.  
  
 **ID errore:** BC30943  
  
### Per correggere l'errore  
  
-   Rimuovere la routine o le routine generiche dal componente [!INCLUDE[dnprdnshort](../error-messages/tool-errors/includes/dnprdnshort_md.md)] oppure non usarle per l'interoperabilità COM.  
  
## Vedere anche  
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [COM Interop](../Topic/COM%20Interop%20\(Visual%20Basic\).md)