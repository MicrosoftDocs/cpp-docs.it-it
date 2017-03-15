---
title: "Inizializzazione e pulizia di documenti e visualizzazioni | Microsoft Docs"
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
  - "oggetti documento, ciclo di vita di"
  - "documenti, pulizia"
  - "documenti, inizializzazione"
  - "inizializzazione di documenti"
  - "inizializzazione di oggetti, oggetti documento"
  - "inizializzazione di visualizzazioni"
  - "visualizzazioni, pulizia"
  - "visualizzazioni, inizializzazione"
ms.assetid: 95d6f09b-a047-4079-856a-ae7d0548e9d2
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Inizializzazione e pulizia di documenti e visualizzazioni
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Utilizzare le linee guida seguenti per inizializzare e pulire dopo i documenti e visualizzazioni:  
  
-   Il framework MFC inizializza documenti e visualizzazioni; inizializzare tutti i dati aggiunti a essi.  
  
-   Il framework pulisce ad esempio documenti e visualizzazioni vengono chiusi; è necessario rilasciare la memoria che è stato allocato nell'heap all'interno delle funzioni membro dei documenti e visualizzazioni.  
  
> [!NOTE]
>  Tenere presente che l'inizializzazione in tutta l'applicazione viene eseguita in modo ottimale nell'override della funzione membro [InitInstance](../Topic/CWinApp::InitInstance.md) della classe `CWinApp` e pulizia per l'intera applicazione viene eseguita in modo ottimale nell'override della funzione membro `CWinApp`[ExitInstance](../Topic/CWinApp::ExitInstance.md).  
  
 Il ciclo di vita di un documento \(e l'intera finestra cornice e punto di vista o visualizzazioni\) in un'applicazione MDI è la seguente:  
  
1.  Durante la creazione dinamica, il costruttore del documento viene chiamato.  
  
2.  Per ogni nuovo documento, [OnNewDocument](../Topic/CDocument::OnNewDocument.md) o [OnOpenDocument](../Topic/CDocument::OnOpenDocument.md) documento viene chiamato.  
  
3.  L'utente interagisce con il documento nel corso della durata.  In genere questo si verifica quali revisioni dell'utente di dati del documento tramite la visualizzazione, la selezione e la modifica dei dati.  La visualizzazione delle passa al documento per l'archiviazione e aggiornarne altre visualizzazioni.  In questo periodo sia il documento che la visualizzazione possono gestire i comandi.  
  
4.  Il framework chiama [DeleteContents](../Topic/CDocument::DeleteContents.md) per eliminare i dati specifici di un documento.  
  
5.  Il distruttore di documento viene chiamato.  
  
 In un'applicazione SDI, l'operazione 1 viene eseguita una volta, quando il documento viene inizialmente creato.  Quindi i passaggi da 2 a 4 vengono eseguite ripetutamente ogni volta che un nuovo documento.  Il nuovo documento riutilizza l'oggetto il documento esistente.  Infine, il passaggio 5 viene eseguita quando l'applicazione viene chiusa.  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Inizializzare i documenti e visualizzazioni](../mfc/initializing-documents-and-views.md)  
  
-   [Pulire i documenti e visualizzazioni](../mfc/cleaning-up-documents-and-views.md)  
  
## Vedere anche  
 [Architettura documento\/visualizzazione](../mfc/document-view-architecture.md)