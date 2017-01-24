---
title: "Impossibile applicare &#39;System.Runtime.InteropServices.DllImportAttribute&#39; a &#39;Declare&#39; | Microsoft Docs"
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
  - "bc31523"
  - "vbc31523"
helpviewer_keywords: 
  - "BC31523"
ms.assetid: 04c8a14f-9286-4f9a-aad5-a0555e5f09f4
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Impossibile applicare &#39;System.Runtime.InteropServices.DllImportAttribute&#39; a &#39;Declare&#39;
L'attributo `DllImportAttribute` è stato applicato a una funzione `Declare`. Questo attributo può essere usato solo con un oggetto `Function` o `Sub` vuoto.  
  
 **ID errore:** BC31523  
  
### Per correggere l'errore  
  
1.  Rimuovere l'attributo `DllImportAttribute` dall'istruzione `Declare`.  
  
## Vedere anche  
 <xref:System.Runtime.InteropServices.DllImportAttribute>   
 [Declare Statement](../Topic/Declare%20Statement.md)