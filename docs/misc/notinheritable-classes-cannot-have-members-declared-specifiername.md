---
title: "Le classi &#39;NotInheritable&#39; non possono avere membri dichiarati come &#39;&lt;nomeidentificatore&gt;&#39; | Microsoft Docs"
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
  - "vbc30607"
  - "bc30607"
helpviewer_keywords: 
  - "BC30607"
ms.assetid: c800e24e-d055-402f-b378-6d2f4041ff16
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Le classi &#39;NotInheritable&#39; non possono avere membri dichiarati come &#39;&lt;nomeidentificatore&gt;&#39;
Non è possibile usare gli identificatori di override con classi `NotInheritable` perché non è possibile eseguire l'override dei membri corrispondenti.  
  
 **ID errore:** BC30607  
  
### Per correggere l'errore  
  
-   Rimuovere gli identificatori di override, come `Overridable`, `NotOverridable` o `MustOverride`, dalla definizione della classe.  
  
## Vedere anche  
 [Overridable](../Topic/Overridable%20\(Visual%20Basic\).md)   
 [NotOverridable](../Topic/NotOverridable%20\(Visual%20Basic\).md)   
 [MustOverride](../Topic/MustOverride%20\(Visual%20Basic\).md)   
 [NOT IN BUILD: Override di proprietà e metodi](http://msdn.microsoft.com/it-it/2167e8f5-1225-4b13-9ebd-02591ba90213)