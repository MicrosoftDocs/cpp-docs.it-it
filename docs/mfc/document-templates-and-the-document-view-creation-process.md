---
title: "Modelli di documenti e processo di creazione documento/visualizzazione | Microsoft Docs"
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
  - "CDocTemplate (classe)"
  - "modelli di documento, e visualizzazioni"
  - "architettura documento/visualizzazione, creazione di documenti/visualizzazione"
  - "icone, per modelli di documento multipli"
  - "MFC, modelli di documento"
  - "modelli di documento multipli"
  - "modelli documento singoli"
  - "modelli, modelli di documento"
ms.assetid: 311ce4cd-fbdf-4ea1-a51b-5bb043abbcee
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Modelli di documenti e processo di creazione documento/visualizzazione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per gestire il processo complesso di creare documenti con le relative finestre e cornici windows associate, il framework utilizza due classi modello di documento: [CSingleDocTemplate](../mfc/reference/csingledoctemplate-class.md) per le applicazioni SDI e [CMultiDocTemplate](../mfc/reference/cmultidoctemplate-class.md) per le applicazioni MDI.  Un `CSingleDocTemplate` può creare e archiviare un documento di un tipo alla volta.  Un `CMultiDocTemplate` gestisce un elenco dei documenti aperti di un tipo.  
  
 Alcune applicazioni che supportano più tipi di documenti.  Ad esempio, un'applicazione potrebbe supportare documenti di testo e documenti grafici.  In tale applicazione, quando l'utente sceglie il comando Nuovo dal menu File, una finestra di dialogo mostra un elenco di tipi possibili del nuovo documento da aprire.  Per ogni tipo di documento supportato, l'applicazione utilizza un oggetto modello di documento distinto.  Di seguito viene illustrata la configurazione di un'applicazione MDI che supporta due tipi di documento e mostra diversi documenti aperti.  
  
 ![Applicazione MDI con due tipi di documento](../mfc/media/vc387h1.png "vc387H1")  
Applicazione MDI con due tipi di documento  
  
 I modelli di documento vengono creati e gestiti dall'oggetto dell'applicazione.  Una delle attività principali eseguite durante la funzione `InitInstance` dell'applicazione consiste nel creare uno o più modelli di documento del tipo appropriato.  Questa funzionalità viene descritta in [Creazione di modelli di documento](../mfc/document-template-creation.md).  L'oggetto dell'applicazione include un puntatore ad ogni modello di documento nell'elenco dei modelli e fornisce un'interfaccia per l'aggiunta dei modelli di documento.  
  
 Se è necessario supportare due o più tipi di documenti, è necessario aggiungere una chiamata a [AddDocTemplate](../Topic/CWinApp::AddDocTemplate.md) aggiuntiva per ogni tipo di documento.  
  
 Un'icona viene registrata per ogni modello di documento in base alla posizione nell'elenco dei modelli di documento dell'applicazione.  L'ordine dei modelli di documento è determinato dall'ordine in cui sono stati aggiunti tramite le chiamate a `AddDocTemplate`.  MFC presuppone che la prima risorsa Icona nell'applicazione sia l'icona dell'applicazione, la risorsa Icona successiva è la prima icona del documento, e così via.  
  
 Ad esempio, un modello di documento è il terzo di tre per l'applicazione.  Se esiste una risorsa icona nell'applicazione all'indice 3, tale icona viene utilizzata per il modello di documento.  In caso contrario, l'icona dell'indice 0 viene utilizzata come predefinita.  
  
## Vedere anche  
 [Argomenti MFC generali](../mfc/general-mfc-topics.md)   
 [Creazione di modelli di documento](../mfc/document-template-creation.md)   
 [Creazione di documenti\/visualizzazioni](../mfc/document-view-creation.md)   
 [Relazioni tra oggetti MFC](../mfc/relationships-among-mfc-objects.md)   
 [Creazione di nuovi documenti, finestre e visualizzazioni](../mfc/creating-new-documents-windows-and-views.md)