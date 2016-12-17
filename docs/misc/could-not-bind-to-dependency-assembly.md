---
title: "Could not bind to dependency &#39;assembly&#39; | Microsoft Docs"
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
  - "vs.tasklisterror.cantbinddependency"
ms.assetid: 0f76190d-d57e-4e0e-bec4-532aec978d08
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Could not bind to dependency &#39;assembly&#39;
Uno dei riferimenti del progetto contiene un riferimento a un assembly \(dipendenza\) che è stato individuato ma che non è un assembly valido.  L'errore non impedirà la compilazione del progetto.  È comunque possibile che venga generato un errore di runtime.  
  
 Questa situazione implica che si sono verificate le tre condizioni seguenti:  
  
-   Sul disco sono presenti più file con lo stesso nome.  
  
-   Uno dei file non è un assembly.  
  
-   Mediante il percorso dei riferimenti viene dapprima eseguita una ricerca nella directory contenente il file che non è un assembly.  
  
 **Per correggere l'errore**  
  
-   Modificare l'ordine in cui viene eseguita la ricerca dei riferimenti nelle directory.  Per ulteriori informazioni, vedere [NIB: Reference Paths Dialog Box \(Visual Basic\)](http://msdn.microsoft.com/it-it/8e549b39-7256-456a-8fd7-089b23facf9c).  
  
## Vedere anche  
 [Risoluzione dei problemi relativi ai riferimenti interrotti](../Topic/Troubleshooting%20Broken%20References.md)   
 [Procedura: aggiungere o rimuovere riferimenti utilizzando la finestra di dialogo Aggiungi riferimento](http://msdn.microsoft.com/it-it/3bd75d61-f00c-47c0-86a2-dd1f20e231c9)   
 [Assemblies in the Common Language Runtime](http://msdn.microsoft.com/it-it/33a0bc6a-6bb3-44c7-ada7-4a046e8c0945)