---
title: "&lt;dichiarazione1&gt; non pu&#242; eseguire l&#39;override di &#39;&lt;dichiarazione2&gt;&#39; perch&#233; hanno livelli di accesso diversi | Microsoft Docs"
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
  - "bc30266"
  - "vbc30266"
helpviewer_keywords: 
  - "BC30266"
ms.assetid: c9c5c14e-876c-430d-ab98-5087c19efae7
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &lt;dichiarazione1&gt; non pu&#242; eseguire l&#39;override di &#39;&lt;dichiarazione2&gt;&#39; perch&#233; hanno livelli di accesso diversi
Una dichiarazione di routine o proprietà tenta di eseguire l'override di un elemento ereditato con lo stesso nome, ma specifica un'accessibilità diversa rispetto all'elemento ereditato. L'accessibilità dell'elemento ereditato, ad esempio `Public` o `Private`, deve essere mantenuta nell'override.  
  
 **ID errore:** BC30266  
  
### Per correggere l'errore  
  
-   Modificare l'accessibilità dell'elemento che esegue l'override affinché corrisponda a quella dell'elemento ereditato.  
  
## Vedere anche  
 [NOT IN BUILD: Override di proprietà e metodi](http://msdn.microsoft.com/it-it/2167e8f5-1225-4b13-9ebd-02591ba90213)   
 [Access Levels in Visual Basic](../Topic/Access%20Levels%20in%20Visual%20Basic.md)