---
title: "&#39;#End Region&#39; deve essere preceduto da un &#39;#Region&#39; corrispondente | Microsoft Docs"
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
  - "vbc30680"
  - "bc30680"
helpviewer_keywords: 
  - "BC30680"
ms.assetid: 1ea60620-c8dc-4957-8cf4-07b25d20da3b
caps.latest.revision: 14
caps.handback.revision: 14
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;#End Region&#39; deve essere preceduto da un &#39;#Region&#39; corrispondente
Con `#Region` è possibile specificare un blocco di codice da espandere o comprimere durante l'uso della funzionalità di struttura dell'editor di codice di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)]. L'inizio e la fine delle istruzioni `#Region` devono essere nello stesso blocco di codice.  
  
 **ID errore:** BC30680  
  
### Per correggere l'errore  
  
-   Inserire `#Region` nella posizione appropriata prima dell'istruzione `#End` `Region` corrispondente.  
  
## Vedere anche  
 [\#Region Directive](../Topic/%23Region%20Directive.md)