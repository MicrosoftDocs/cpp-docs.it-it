---
title: "&#39;System.Runtime.InteropServices.DllImportAttribute&#39; non pu&#242; essere applicato a &#39;Get&#39; o &#39;Set&#39; | Microsoft Docs"
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
  - "vbc31524"
  - "bc31524"
helpviewer_keywords: 
  - "BC31524"
ms.assetid: 3603e33a-a80b-448d-83e0-e5dbc9af4dcf
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;System.Runtime.InteropServices.DllImportAttribute&#39; non pu&#242; essere applicato a &#39;Get&#39; o &#39;Set&#39;
L'attributo `DllImportAttribute` è stato applicato a una routine della proprietà `Get` o `Set`.  
  
 **ID errore:** BC31524  
  
### Per correggere l'errore  
  
1.  Rimuovere `DllImportAttribute` dalle routine della proprietà `Get` e `Set`.  
  
## Vedere anche  
 <xref:System.Runtime.InteropServices.DllImportAttribute>   
 [Routine Property](../Topic/Property%20Procedures%20\(Visual%20Basic\).md)