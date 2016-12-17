---
title: "&#39;&lt;metodo&gt;&#39; non &#232; accessibile in questo contesto perch&#233; &#232; &#39;&lt;modificatore&gt;&#39; | Microsoft Docs"
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
  - "vbc30389"
  - "bc30389"
helpviewer_keywords: 
  - "BC30389"
ms.assetid: fae58a68-df91-4741-a8c9-f1bb10e166e2
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;metodo&gt;&#39; non &#232; accessibile in questo contesto perch&#233; &#232; &#39;&lt;modificatore&gt;&#39;
Si è provato ad accedere a un metodo che non è accessibile in questo contesto perché è stato dichiarato `Private`. L'errore può essere una conseguenza del fatto che il compilatore [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] importa tutti i membri di una classe e non distingue tra maiuscole e minuscole, per cui è possibile che si verifichi un conflitto tra i nomi solo sulla base della combinazione di maiuscole e minuscole.  
  
 **ID errore:** BC30389  
  
### Per correggere l'errore  
  
-   È consigliabile dichiarare il metodo `Public`.  
  
-   Se l'errore è causato da un conflitto di nomi, differenziare i nomi interessati non solo in termini di maiuscole e minuscole.  
  
## Vedere anche  
 [Private](../Topic/Private%20\(Visual%20Basic\).md)