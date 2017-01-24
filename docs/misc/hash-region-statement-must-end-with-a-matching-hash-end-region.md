---
title: "L&#39;istruzione &#39;#Region&#39; deve terminare con un &#39;#End Region&#39; corrispondente | Microsoft Docs"
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
  - "bc30681"
  - "vbc30681"
helpviewer_keywords: 
  - "BC30681"
ms.assetid: 05a0402b-da68-4ab8-b6d6-940379bc5973
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;istruzione &#39;#Region&#39; deve terminare con un &#39;#End Region&#39; corrispondente
Usare la direttiva `#Region` per specificare un blocco di codice da espandere o comprimere durante l'uso della funzionalità di struttura dell'editor di codice di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)]. L'inizio e la fine delle istruzioni `#Region` devono essere nello stesso blocco di codice.  
  
 **ID errore:** BC30681  
  
### Per correggere l'errore  
  
1.  Inserire `#End Region` nella posizione appropriata nel codice dopo l'istruzione `#Region`.  
  
## Vedere anche  
 [\#Region Directive](../Topic/%23Region%20Directive.md)