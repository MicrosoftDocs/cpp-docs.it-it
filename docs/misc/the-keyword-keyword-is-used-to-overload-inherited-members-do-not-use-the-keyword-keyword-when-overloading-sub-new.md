---
title: "La parola chiave &#39;&lt;parola chiave&gt;&#39; viene utilizzata per eseguire l&#39;overload dei membri ereditati. Non utilizzare la parola chiave &#39;&lt;parola chiave&gt;&#39; per l&#39;overload di &#39;Sub New&#39; | Microsoft Docs"
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
  - "vbc32040"
  - "bc32040"
helpviewer_keywords: 
  - "BC32040"
ms.assetid: 39e6ee0d-b8a0-498e-bdaf-a4ceb13892fe
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# La parola chiave &#39;&lt;parola chiave&gt;&#39; viene utilizzata per eseguire l&#39;overload dei membri ereditati. Non utilizzare la parola chiave &#39;&lt;parola chiave&gt;&#39; per l&#39;overload di &#39;Sub New&#39;
Un costruttore è dichiarato con la parola chiave `Overloads`.  
  
 Visual Basic non supporta costruttori con funzione di eredità o di overload.  
  
 **ID errore:** BC32040  
  
### Per correggere l'errore  
  
-   Rimuovere la parola chiave `Overloads` da tutte le dichiarazioni di costruttore.  
  
## Vedere anche  
 [Overloads](../Topic/Overloads%20\(Visual%20Basic\).md)   
 [NOT IN BUILD: Utilizzo di costruttori e distruttori](http://msdn.microsoft.com/it-it/548eebe1-86c4-4377-b2f5-447cb8be3d90)