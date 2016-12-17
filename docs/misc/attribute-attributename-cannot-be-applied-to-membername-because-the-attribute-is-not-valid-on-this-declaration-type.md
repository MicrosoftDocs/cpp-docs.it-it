---
title: "Non &#232; possibile applicare l&#39;attributo &#39;&lt;nomeattributo&gt;&#39; a &#39;&lt;nomemembro&gt;&#39;. L&#39;attributo non &#232; valido per questo tipo di dichiarazione | Microsoft Docs"
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
  - "vbc30662"
  - "bc30662"
helpviewer_keywords: 
  - "BC30662"
ms.assetid: 5cd07950-37d0-45e9-8770-3eaac54ff7d9
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile applicare l&#39;attributo &#39;&lt;nomeattributo&gt;&#39; a &#39;&lt;nomemembro&gt;&#39;. L&#39;attributo non &#232; valido per questo tipo di dichiarazione
L'attributo usato non è appropriato per l'elemento in uso.  
  
 **ID errore:** BC30662  
  
### Per correggere l'errore  
  
1.  Scegliere un attributo destinato all'elemento in uso. Se ad esempio si usa un metodo, scegliere un attributo progettato per l'uso con i metodi.  
  
2.  Se si usano attributi personalizzati, modificare l'attributo `AttributeUsage` in base al tipo di elemento in uso.  
  
## Vedere anche  
 <xref:System.AttributeUsageAttribute>   
 [NOT IN BUILD: Attributi in Visual Basic](http://msdn.microsoft.com/it-it/620bfc0e-4582-4c8b-8432-ebc5c3dccc22)   
 [NOT IN BUILD: Attributi personalizzati in Visual Basic](http://msdn.microsoft.com/it-it/d72d8a5c-8f64-4614-b15b-cad66845d047)