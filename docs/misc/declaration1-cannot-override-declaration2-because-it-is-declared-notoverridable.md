---
title: "&#39;&lt;dichiarazione1&gt;&#39; non pu&#242; eseguire l&#39;override di &#39;&lt;dichiarazione2&gt;&#39; perch&#233; &#232; dichiarato come &#39;NotOverridable&#39; | Microsoft Docs"
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
  - "bc30267"
  - "vbc30267"
helpviewer_keywords: 
  - "BC30267"
ms.assetid: fb1f6797-4e49-442e-a660-59d602132631
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;dichiarazione1&gt;&#39; non pu&#242; eseguire l&#39;override di &#39;&lt;dichiarazione2&gt;&#39; perch&#233; &#232; dichiarato come &#39;NotOverridable&#39;
Una dichiarazione di proprietà o routine tenta di eseguire l'override di un elemento ereditato con lo stesso nome, ma quest'ultimo è specificato come `NotOverridable`.  
  
 **ID errore:** BC30267  
  
### Per correggere l'errore  
  
-   Rimuovere la parola chiave `NotOverridable` dalla dichiarazione dell'elemento ereditato oppure rimuovere la dichiarazione di override.  
  
## Vedere anche  
 [NOT IN BUILD: Override di proprietà e metodi](http://msdn.microsoft.com/it-it/2167e8f5-1225-4b13-9ebd-02591ba90213)