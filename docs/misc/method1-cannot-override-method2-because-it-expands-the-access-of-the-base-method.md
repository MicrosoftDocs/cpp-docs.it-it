---
title: "&#39;&lt;metodo1&gt;&#39; non pu&#242; eseguire l&#39;override di &#39;&lt;metodo2&gt;&#39; perch&#233; espande l&#39;accesso del metodo base | Microsoft Docs"
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
  - "vbc32203"
  - "bc32203"
helpviewer_keywords: 
  - "BC32203"
ms.assetid: ef7816a4-5f57-4346-80fc-9311bc150b6b
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;metodo1&gt;&#39; non pu&#242; eseguire l&#39;override di &#39;&lt;metodo2&gt;&#39; perch&#233; espande l&#39;accesso del metodo base
Una routine specifica `Overrides`, ma dichiara un'accessibilità meno restrittiva di quella del metodo da sottoporre a override. Non è possibile espandere l'accessibilità, in altre parole non è possibile rendere il metodo di override più accessibile rispetto al metodo sottoposto a override. Ad esempio, se il metodo della classe base è `Protected`, è possibile eseguirne l'override con un metodo `Public`.  
  
 **ID errore:** BC32203  
  
### Per correggere l'errore  
  
-   Rimuovere la parola chiave `Overrides` o modificare l'accessibilità in modo che sia restrittiva almeno quanto quella del metodo della classe base.  
  
## Vedere anche  
 [NOT IN BUILD: Override di proprietà e metodi](http://msdn.microsoft.com/it-it/2167e8f5-1225-4b13-9ebd-02591ba90213)   
 [Access Levels in Visual Basic](../Topic/Access%20Levels%20in%20Visual%20Basic.md)   
 [Shadowing in Visual Basic](../Topic/Shadowing%20in%20Visual%20Basic.md)