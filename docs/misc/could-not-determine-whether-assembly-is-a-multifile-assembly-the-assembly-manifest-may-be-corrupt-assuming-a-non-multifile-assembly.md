---
title: "Impossibile determinare se &#39;assembly&#39; sia un assembly su pi&#249; file. Il manifesto dell&#39;assembly potrebbe essere danneggiato. L&#39;assembly non verr&#224; considerato su pi&#249; file. | Microsoft Docs"
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
  - "vs.tasklisterror.unknownscatterstatusforcopy"
ms.assetid: be49d3f2-b091-488c-8579-e27ef09d9c80
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Impossibile determinare se &#39;assembly&#39; sia un assembly su pi&#249; file. Il manifesto dell&#39;assembly potrebbe essere danneggiato. L&#39;assembly non verr&#224; considerato su pi&#249; file.
Il sistema del progetto non è riuscito a leggere un assembly a cui fa riferimento il progetto, quindi non è possibile determinare se si sta facendo riferimento a un assembly su più file. L'assembly potrebbe pertanto non essere copiato correttamente nella directory di output.  
  
 **Per correggere l'errore**  
  
-   Reinstallare [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] \(se l'assembly è stato fornito con [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] o .NET Framework\).  
  
     \-oppure\-  
  
-   Reinstallare il controllo di terze parti appropriato.  
  
     Questo errore non impedirà la compilazione del progetto. È tuttavia possibile che si verifichi un errore di runtime.  
  
## Vedere anche  
 [Risoluzione dei problemi relativi ai riferimenti interrotti](../Topic/Troubleshooting%20Broken%20References.md)   
 [NIB Procedura: Aggiungere o rimuovere riferimenti utilizzando la finestra di dialogo Aggiungi riferimento](http://msdn.microsoft.com/it-it/3bd75d61-f00c-47c0-86a2-dd1f20e231c9)   
 [Assemblies in the Common Language Runtime](http://msdn.microsoft.com/it-it/33a0bc6a-6bb3-44c7-ada7-4a046e8c0945)