---
title: "Progettazione di una procedura guidata | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "creazioni guidate personalizzate [C++], progettazione per progetti"
  - "progetti [C++], creazioni guidate personalizzate"
  - "progetti Visual C++, creazioni guidate personalizzate"
  - "procedure guidate [C++], personalizzati"
ms.assetid: a7c0be7e-9297-4fed-83e3-5645c896d56b
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Progettazione di una procedura guidata
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Talvolta può essere necessario creare progetti con funzionalità standardizzate che differiscono dalle creazioni guidate di applicazioni fornite in Visual C\+\+.  Per rispondere a queste esigenze, in Visual C\+\+ è disponibile un'architettura per la realizzazione di procedure guidate appositamente progettata per facilitare l'estensione e la personalizzazione.  È possibile creare una procedura guidata utilizzando la [Creazione guidata personalizzata di Visual C\+\+](../ide/creating-a-custom-wizard.md).  Dopo aver creato la procedura guidata, sarà possibile configurarla per generare i file iniziali necessari per i progetti.  
  
 Le creazioni guidate di Visual C\+\+ sono controlli HTML e  utilizzano il modulo di gestione della procedura guidata di Visual C\+\+, <xref:Microsoft.VisualStudio.VsWizard.IVCWizCtlUI>, che fornisce servizi comuni quali <xref:Microsoft.VisualStudio.VsWizard.IVCWizCtlUI.NavigateToCommandHandler%2A>, <xref:Microsoft.VisualStudio.VsWizard.IVCWizCtlUI.OkCancelAlert%2A> e così via.  Utilizzano inoltre il modulo di gestione di script, che consente di utilizzare in una procedura guidata sia VBScript che [JScript .NET](http://msdn.microsoft.com/it-it/c7e636ee-c10f-45b1-85ec-fe2daca30bf5).  
  
 L'architettura della procedura guidata consente di accedere ai modelli a oggetti indicati di seguito direttamente nelle procedure guidate create dal programmatore e di chiamarne metodi, proprietà ed eventi dai file Jscript o HTML.  Per ulteriori informazioni, vedere gli esempi disponibili in [I file HTML](../ide/html-files.md) e [Il file JScript](../ide/jscript-file.md).  
  
-   [Modello a oggetti DTE \(Developer Tools Environment\)](../Topic/Extending%20the%20Visual%20Studio%20Environment.md)  
  
-   [Modello di codice Visual C\+\+](http://msdn.microsoft.com/it-it/dd6452c2-1054-44a1-b0eb-639a94a1216b)  
  
-   [Modello di progetto Visual C\+\+](http://msdn.microsoft.com/it-it/06c1bbd9-4c79-4f97-ad6d-2b1dea8ecd1f)  
  
-   [Modello di procedura guidata Visual C\+\+](http://msdn.microsoft.com/it-it/159395ac-33c7-47bf-ad42-4e1435ddc758)  
  
 Per una descrizione di ogni elemento di progettazione di una procedura guidata, vedere [File creati per la procedura guidata](../ide/files-created-for-your-wizard.md).  
  
## Vedere anche  
 [Creazione di una procedura guidata personalizzata](../ide/creating-a-custom-wizard.md)   
 [Operazioni di progettazione di una procedura guidata](../ide/steps-to-designing-a-wizard.md)   
 [Personalizzazione della procedura guidata](../ide/customizing-your-wizard.md)