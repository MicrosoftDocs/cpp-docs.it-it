---
title: "At least one startup service is missing the &#39;attribute&#39; attribute | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.tasklisterror.projfile_missing_ss_attrib"
ms.assetid: 987c42dc-4394-4b07-b7fa-a8e7afc6fdfb
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# At least one startup service is missing the &#39;attribute&#39; attribute
Un servizio di avvio richiede l'attributo ID, non trovato in un elemento `<Service>`.  Di seguito è riportato un esempio:  
  
```  
<Service ID="{0000-0000-0000-00000000-000000000000}"/>  
```  
  
 Questo errore indica che il file di progetto è danneggiato.  
  
 L'errore è solitamente dovuto alla modifica manuale del file di progetto.  
  
 **Per correggere l'errore**  
  
-   Salvare il file di progetto.  
  
     La sezione danneggiata non verrà scritta e l'errore non si verificherà alla successiva apertura del progetto.  
  
## Vedere anche  
 [NIB: Project Properties \(Visual Studio\)](http://msdn.microsoft.com/it-it/eb4c97ed-f667-4850-98d0-6e2a4d21bbca)