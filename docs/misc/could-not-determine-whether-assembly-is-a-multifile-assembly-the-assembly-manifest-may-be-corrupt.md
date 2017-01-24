---
title: "Impossibile determinare se &#39;assembly&#39; sia un assembly su pi&#249; file. Il manifesto dell&#39;assembly potrebbe essere danneggiato. | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.tasklisterror.cannotfindscatterinfo"
ms.assetid: 2d4af6ef-c2f8-4764-af8b-580d433bfbc9
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Impossibile determinare se &#39;assembly&#39; sia un assembly su pi&#249; file. Il manifesto dell&#39;assembly potrebbe essere danneggiato.
Il sistema del progetto non è riuscito a leggere un assembly a cui fa riferimento il progetto, quindi non è possibile determinare i file a cui l'assembly ha fatto riferimento.  
  
 **Per correggere l'errore**  
  
-   Reinstallare Visual Studio \(se l'assembly è stato fornito con [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] o [!INCLUDE[dnprdnshort](../error-messages/tool-errors/includes/dnprdnshort_md.md)]\).  
  
     \-oppure\-  
  
-   Reinstallare il controllo di terze parti appropriato.  
  
     Questo errore non impedirà la compilazione del progetto. È tuttavia possibile che si verifichi un errore di runtime.  
  
## Vedere anche  
 [Risoluzione dei problemi relativi ai riferimenti interrotti](../Topic/Troubleshooting%20Broken%20References.md)   
 [NIB Procedura: Aggiungere o rimuovere riferimenti utilizzando la finestra di dialogo Aggiungi riferimento](http://msdn.microsoft.com/it-it/3bd75d61-f00c-47c0-86a2-dd1f20e231c9)   
 [Assemblies in the Common Language Runtime](http://msdn.microsoft.com/it-it/33a0bc6a-6bb3-44c7-ada7-4a046e8c0945)