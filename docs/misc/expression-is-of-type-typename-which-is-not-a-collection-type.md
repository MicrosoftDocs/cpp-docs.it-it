---
title: "L&#39;espressione &#232; di tipo &#39;&lt;nometipo&gt;&#39;, che non &#232; un tipo raccolta | Microsoft Docs"
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
  - "bc32023"
  - "vbc32023"
helpviewer_keywords: 
  - "BC32023"
ms.assetid: d0f151be-6b65-498b-b571-03faf24df0d8
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;espressione &#232; di tipo &#39;&lt;nometipo&gt;&#39;, che non &#232; un tipo raccolta
La variabile di gruppo specificata in un'istruzione `For Each` non è un oggetto raccolta o una matrice e il relativo tipo non implementa l'interfaccia <xref:System.Collections.IEnumerable>. Il tipo deve supportare lo schema progettuale della raccolta di [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] o implementare <xref:System.Collections.IEnumerable>.  
  
 **ID errore:** BC32023  
  
### Per correggere l'errore  
  
-   Dichiarare la variabile di gruppo come tipo classe che supporta la progettazione raccolta di [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] o implementa <xref:System.Collections.IEnumerable>.  
  
## Vedere anche  
 <xref:System.Collections.IEnumerable>   
 [Istruzione For Each...Next](../Topic/For%20Each...Next%20Statement%20\(Visual%20Basic\).md)   
 [Classe Collection di Visual Basic](http://msdn.microsoft.com/it-it/0cb2d1ad-c58d-42c0-8e69-d81f5a15e532)