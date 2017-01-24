---
title: "&#39;&lt;nometipo&gt;&#39; non pu&#242; essere usato come attributo perch&#233; &#232; dichiarato come &#39;MustInherit&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc31506"
  - "bc31506"
helpviewer_keywords: 
  - "BC31506"
ms.assetid: ea2baf3d-b8e8-4738-9b6d-53409fc4d282
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;nometipo&gt;&#39; non pu&#242; essere usato come attributo perch&#233; &#232; dichiarato come &#39;MustInherit&#39;
Le classi Attribute personalizzate non possono essere dichiarate come `MustInherit`.  
  
 **ID errore:** BC31506  
  
### Per correggere l'errore  
  
-   Rimuovere il modificatore `MustInherit` dagli attributi personalizzati.  
  
## Vedere anche  
 <xref:System.AttributeUsageAttribute>   
 [NOT IN BUILD: Attributi personalizzati in Visual Basic](http://msdn.microsoft.com/it-it/d72d8a5c-8f64-4614-b15b-cad66845d047)