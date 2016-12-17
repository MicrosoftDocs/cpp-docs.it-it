---
title: "Creazione di finestre cornice del documento | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
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
  - "finestre cornice documento, creazione"
  - "modelli di documento, e finestre cornice documento"
  - "finestre cornice [C++], creazione"
  - "MFC [C++], finestre cornice"
  - "classe in fase di esecuzione, e creazione di finestre cornice di documento"
  - "runtime, informazioni sulle classi"
  - "finestre [C++], creazione"
ms.assetid: 8671e239-b76f-4dea-afa8-7024e6e58ff5
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Creazione di finestre cornice del documento
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

viene illustrato[Documenti\/creazione di visualizzazione](../mfc/document-view-creation.md) come oggetto di [CDocTemplate](../mfc/reference/cdoctemplate-class.md) orchestra creare la finestra cornice, il documento e la visualizzazione e connetterli tutti contemporaneamente.  Tre argomenti di [CRuntimeClass](../mfc/reference/cruntimeclass-structure.md) al costruttore di `CDocTemplate` specificano la finestra cornice, vengono registrati e visualizzazione di classi che il modello di documento viene creata in modo dinamico in risposta ai controlli dell'utente come nuovo comando nel menu File o il comando nuova finestra in una finestra MDI.  Il modello di documento archiviare queste informazioni per un utilizzo successivo quando viene creata una finestra cornice per una visualizzazione e un documento.  
  
 Affinché il meccanismo di [RUNTIME\_CLASS](../Topic/RUNTIME_CLASS.md) funzionino correttamente, le classi derivate della finestra cornice devono essere dichiarate con la macro di [DECLARE\_DYNCREATE](../Topic/DECLARE_DYNCREATE.md).  Ciò avviene perché il framework deve creare finestre le finestre cornice utilizzando il meccanismo dinamico della costruzione di classe `CObject`.  
  
 Quando l'utente sceglie un comando che crea un documento, il framework rivolge al modello di documento per creare l'oggetto documento, il punto di vista e la finestra cornice che visualizza la visualizzazione.  Quando si crea la finestra cornice di documento, il modello di documento crea un oggetto della classe appropriata \- classe derivata da [CFrameWnd](../mfc/reference/cframewnd-class.md) per un'applicazione SDI o da [CMDIChildWnd](../mfc/reference/cmdichildwnd-class.md) di un'applicazione MDI.  Il framework chiama quindi la funzione membro di [LoadFrame](../Topic/CFrameWnd::LoadFrame.md) dell'oggetto finestra cornice per ottenere informazioni sulla creazione delle risorse e creare la finestra di windows.  Il framework associa un handle di finestra all'oggetto finestra cornice.  Viene quindi creata la visualizzazione come finestra figlio della finestra cornice di documento.  
  
 Prestare attenzione nella scelta dell'[quando inizializzare](../mfc/when-to-initialize-cwnd-objects.md) il `CWnd`\- oggetto derivato.  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Derivando una classe da CObject \(il meccanismo dinamico di progettazione\)](../mfc/deriving-a-class-from-cobject.md)  
  
-   [Creazione documento\/visualizzazione \(modelli e creazione della finestra cornice\)](../mfc/document-view-creation.md)  
  
-   [Eliminazione permanente delle finestre](../mfc/destroying-frame-windows.md)  
  
## Vedere anche  
 [Utilizzo di finestre cornice](../mfc/using-frame-windows.md)