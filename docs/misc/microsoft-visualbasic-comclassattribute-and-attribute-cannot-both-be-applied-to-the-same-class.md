---
title: "Non &#232; possibile applicare sia &#39;Microsoft.VisualBasic.ComClassAttribute&#39; che &#39;&lt;attributo&gt;&#39; alla stessa classe | Microsoft Docs"
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
  - "vbc32501"
  - "bc32501"
helpviewer_keywords: 
  - "BC32501"
ms.assetid: dc1bf4f1-f030-4df3-aae8-524af9c2fda7
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile applicare sia &#39;Microsoft.VisualBasic.ComClassAttribute&#39; che &#39;&lt;attributo&gt;&#39; alla stessa classe
Un blocco di attributi `COMClassAttribute` viene usato in combinazione con un attributo che non si applica a oggetti COM. Una possibile causa è la combinazione di [!INCLUDE[dnprdnshort](../error-messages/tool-errors/includes/dnprdnshort_md.md)] e degli attributi COM.  
  
 **ID errore:** BC32501  
  
### Per correggere l'errore  
  
-   Rimuovere il blocco di attributi `COMClassAttribute` o l'attributo che non si applica a COM.  
  
## Vedere anche  
 [NOT IN BUILD: Attributi usati in Visual Basic](http://msdn.microsoft.com/it-it/22231318-8a40-49af-9245-e0aab723563b)   
 [NOT IN BUILD: Applicazione di attributi](http://msdn.microsoft.com/it-it/2b1703ed-4437-49b3-bc0b-568094324f47)   
 [Classe ComClassAttribute](http://msdn.microsoft.com/it-it/5c2f0835-9210-47dc-bc59-5c1769953574)