---
title: "At least one reference is missing the &#39;Name&#39; attribute | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.tasklisterror.refmissingname"
ms.assetid: 0703dc20-9cdd-4632-93a0-57a4ccea2fce
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# At least one reference is missing the &#39;Name&#39; attribute
È necessario associare a ciascun riferimento una proprietà **Name**, come indicato di seguito:  
  
```  
<Reference  
   Name = "System.XML"  
   AssemblyName = "System.Xml"  
/>  
```  
  
 Questo errore indica che non è stata trovata la proprietà **Name** per almeno un riferimento.  
  
 L'errore è solitamente dovuto alla modifica manuale del file di progetto.  
  
 **Per correggere l'errore**  
  
-   Aggiungere nuovamente il riferimento.  
  
     Tutti i riferimenti interessati non verranno aggiunti al progetto.  
  
## Vedere anche  
 [NIB How to: Add or Remove References By Using the Add Reference Dialog Box](http://msdn.microsoft.com/it-it/3bd75d61-f00c-47c0-86a2-dd1f20e231c9)   
 [Gestione dei riferimenti in un progetto](../Topic/Managing%20references%20in%20a%20project.md)