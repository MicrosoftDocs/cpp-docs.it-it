---
title: "Conflitto tra la propriet&#224; predefinita e l&#39;elemento &#39;DefaultMemberAttribute&#39; definito in &#39;|1&#39; | Microsoft Docs"
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
  - "vbc32304"
  - "bc32304"
helpviewer_keywords: 
  - "BC32304"
ms.assetid: 42803d13-ff1d-40ed-a4a8-269e2fb4aa01
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Conflitto tra la propriet&#224; predefinita e l&#39;elemento &#39;DefaultMemberAttribute&#39; definito in &#39;|1&#39;
Una classe, una struttura o un'interfaccia dichiara una proprietà predefinita con la parola chiave [Default](../Topic/Default%20\(Visual%20Basic\).md), ma applica anche l'attributo <xref:System.Reflection.DefaultMemberAttribute> per indicare che il membro predefinito è un altro.  
  
 Un tipo può avere al massimo un membro predefinito. Quando si dichiara una proprietà predefinita, Visual Basic applica automaticamente l'attributo <xref:System.Reflection.DefaultMemberAttribute> alla classe, alla struttura o all'interfaccia che indica quella proprietà.  
  
 **ID errore:** BC32304  
  
### Per correggere l'errore  
  
1.  Definire quale membro debba essere quello predefinito per la classe, la struttura o l'interfaccia.  
  
2.  Rimuovere la dichiarazione che determina il conflitto, ossia la parola chiave `Default` o l'attributo <xref:System.Reflection.DefaultMemberAttribute>.  
  
## Vedere anche  
 <xref:System.Reflection.DefaultMemberAttribute>   
 [Default](../Topic/Default%20\(Visual%20Basic\).md)   
 [NOT IN BUILD: Proprietà predefinite](http://msdn.microsoft.com/it-it/a70f2a27-8176-4858-935e-f25afdd43ab5)   
 [How to: Declare and Call a Default Property in Visual Basic](../Topic/How%20to:%20Declare%20and%20Call%20a%20Default%20Property%20in%20Visual%20Basic.md)