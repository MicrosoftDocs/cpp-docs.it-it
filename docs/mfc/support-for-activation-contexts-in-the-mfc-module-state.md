---
title: "Supporto per contesti di attivazione nello stato del modulo MFC | Microsoft Docs"
ms.custom: ""
ms.date: "12/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "contesti di attivazione [C++]"
  - "contesti di attivazione [C++], supporto MFC"
ms.assetid: 1e49eea9-3620-46dd-bc5f-d664749567c7
caps.latest.revision: 14
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Supporto per contesti di attivazione nello stato del modulo MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

MFC crea un contesto di attivazione utilizzando una risorsa manifesto fornita dal modulo dell'utente.  Per ulteriori informazioni su come vengono creati i contesti di attivazione, vedere i seguenti argomenti:  
  
-   [Activation Contexts](http://msdn.microsoft.com/library/aa374153)  
  
-   [Application Manifests](http://msdn.microsoft.com/library/aa374191)  
  
-   [Assembly Manifests](http://msdn.microsoft.com/library/aa374219)  
  
## Osservazioni  
 Durante la lettura di questi argomenti [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)], si noti che il meccanismo di contesto di attivazione MFC è simile al contesto di attivazione [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)] ma MFC non utilizza il contesto di attivazione API [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
 Il contesto di attivazione lavora nei seguenti modi con le applicazioni MFC. le DLL dell'utente e le DLL estese:  
  
-   Le applicazioni MFC utilizzano gli ID di risorsa 1 per la risorsa manifesto.  In questo caso, MFC non crea il proprio contesto di attivazione, ma utilizza il contesto di applicazione predefinito.  
  
-   Le DLL dell'utente MFC utilizzano gli ID di risorsa 2 per la risorsa manifesto.  In questo caso, MFC crea un contesto di attivazione per ogni DLL dell'utente, in modo differente le DLL dell'utente possono utilizzare versioni diverse delle stesse librerie \(come ad esempio, la libreria dei controlli comuni\).  
  
-   Le DLL di estensione MFC si basano sulle applicazioni host o DLL dell'utente per stabilire il relativo contesto di attivazione.  
  
 Sebbene lo stato del contesto di attivazione possa essere modificato utilizzando i processi descritti in [Using the Activation Context API](http://msdn.microsoft.com/library/aa376620), utilizzare il meccanismo di contesto di attivazione MFC può essere utile quando si creano le architetture plug\-in basate sulle DLL in cui non è facile \(o non è possibile\) commutare manualmente lo stato di attivazione prima e dopo le chiamate individuali ai collegamenti esterni.  
  
 Il contesto di attivazione viene creato in [AfxWinInit](../Topic/AfxWinInit.md).  Viene eliminato nel distruttore `AFX_MODULE_STATE`.  Il punto di controllo del contesto di attivazione viene conservato in `AFX_MODULE_STATE`. \(`AFX_MODULE_STATE` è descritto in [AfxGetStaticModuleState](../Topic/AfxGetStaticModuleState.md).\)  
  
 La macro [AFX\_MANAGE\_STATE](../Topic/AFX_MANAGE_STATE.md) attiva e disattiva il contesto di attivazione.  `AFX_MANAGE_STATE` è abilitata per le librerie MFC statiche nonché le DLL MFC, per consentire al codice MFC di eseguire nel proprio contesto di attivazione selezionato dalle DLL dell'utente.  
  
## Vedere anche  
 [Activation Contexts](http://msdn.microsoft.com/library/aa374153)   
 [Application Manifests](http://msdn.microsoft.com/library/aa374191)   
 [Assembly Manifests](http://msdn.microsoft.com/library/aa374219)   
 [AfxWinInit](../Topic/AfxWinInit.md)   
 [AfxGetStaticModuleState](../Topic/AfxGetStaticModuleState.md)   
 [AFX\_MANAGE\_STATE](../Topic/AFX_MANAGE_STATE.md)