---
title: "Per la conversione da &#39;Double&#39; a &#39;Date&#39; &#232; necessario chiamare il metodo &#39;Date.ToOADate&#39; | Microsoft Docs"
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
  - "bc30532"
  - "vbc30532"
helpviewer_keywords: 
  - "BC30532"
ms.assetid: 8171ce21-e4f6-4e75-b7e8-32baf78a40eb
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Per la conversione da &#39;Double&#39; a &#39;Date&#39; &#232; necessario chiamare il metodo &#39;Date.ToOADate&#39;
Si è provato a eseguire il cast di un valore `Date` a un valore `Double`, operazione che non può essere eseguita senza usare il metodo <xref:System.DateTime.ToOADate%2A?displayProperty=fullName>.  
  
 **ID errore:** BC30532  
  
### Per correggere l'errore  
  
-   Usare il metodo <xref:System.DateTime.ToOADate%2A?displayProperty=fullName> per convertire il valore.  
  
## Vedere anche  
 [Type Conversions in Visual Basic](../Topic/Type%20Conversions%20in%20Visual%20Basic.md)