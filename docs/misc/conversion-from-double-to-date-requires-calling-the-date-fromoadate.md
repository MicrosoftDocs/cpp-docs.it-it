---
title: "La conversione da &#39;Double&#39; a &#39;Date&#39; richiede la chiamata di &#39;Date.FromOADate&#39; | Microsoft Docs"
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
  - "vbc30533"
  - "bc30533"
helpviewer_keywords: 
  - "BC30533"
ms.assetid: afcfd115-4614-4b0b-ad09-76af8dba2ed5
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# La conversione da &#39;Double&#39; a &#39;Date&#39; richiede la chiamata di &#39;Date.FromOADate&#39;
Si è provato a eseguire il cast di un valore `Date` a un valore `Double`, operazione che non può essere eseguita senza usare il metodo <xref:System.DateTime.FromOADate%2A?displayProperty=fullName>.  
  
 **ID errore:** BC30533  
  
### Per correggere l'errore  
  
-   Usare il metodo <xref:System.DateTime.FromOADate%2A> per convertire il valore.  
  
## Vedere anche  
 [Type Conversions in Visual Basic](../Topic/Type%20Conversions%20in%20Visual%20Basic.md)