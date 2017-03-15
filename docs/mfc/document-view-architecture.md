---
title: "Architettura documento/visualizzazione | Microsoft Docs"
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
  - "CDocument (classe)"
  - "CView (classe), architettura visualizzazione"
  - "oggetti documento"
  - "oggetti documento, architettura documento/visualizzazione"
  - "oggetti documento, modello di documento/visualizzazione MFC"
  - "documenti, modello di documento/visualizzazione MFC"
  - "MFC, documenti"
  - "MFC, visualizzazioni"
  - "visualizzazioni, modello di documento/visualizzazione MFC"
ms.assetid: 6127768a-553f-462a-b01b-a5ee6068c81e
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Architettura documento/visualizzazione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per impostazione predefinita, la Creazione guidata applicazione MFC crea una struttura dell'applicazione con una classe del documento e una classe di visualizzazione.  MFC consente di separare la gestione dei dati in queste due classi.  Gli archivi dati e gestisce la stampa i dati e delle coordinate che aggiornano più visualizzazioni dei dati.  La visualizzazione visualizzare i dati e gestisce l'interazione con, inclusa la selezione e la modifica.  
  
 In questo modello, un oggetto document MFC legge e scrive i dati in un archivio permanente.  Il documento può inoltre fornire un'interfaccia ai dati in qualsiasi punto si trovi \(come in un database.  Un oggetto visualizzazione separato gestisce il pannello dati, da eseguire il rendering dei dati in una finestra della selezione utente e la modifica dei dati.  La visualizzazione ottiene i dati recuperati dal documento e comunica al documento tutte le modifiche di dati.  
  
 Mentre è possibile eseguire l'override o ignorare la separazione documento\/visualizzazione, esistono ragioni valide per nel seguire questo modello nella maggior parte dei casi.  Uno del meglio è quando sono necessarie più visualizzazioni dello stesso documento, sia come un foglio di calcolo che una visualizzazione foglio di calcolo.  Il modello documento\/visualizzazione consente a un oggetto visualizzazione separato rappresentare ogni visualizzazione dei dati, mentre il comune di codice a qualsiasi visualizza \(ad esempio un motore di calcolo\) può risiedere nel documento.  Il documento anche intraprende l'attività di aggiornare tutte le visualizzazioni ogni modifica di dati.  
  
 L'architettura documento\/visualizzazione MFC semplifica il supporto per più visualizzazioni, i tipi di documenti multipli, le finestre con separatore e altre funzionalità dell'interfaccia utente importanti.  
  
 Parti del framework MFC più visibile all'utente che per l'utente, il programmatore, sono il documento e la visualizzazione.  La maggior parte del lavoro nello sviluppare un'applicazione tramite il framework immette scrittura delle classi visualizzazione e documento.  La famiglia dell'articolo descrive:  
  
-   Scopi di documenti e visualizzazioni e come interagiscono nel framework.  
  
-   Cosa è necessario eseguire per implementarle.  
  
 Al centro del documento\/visualizzazione sono quattro classi principali:  
  
 La classe [COleDocument](../mfc/reference/coledocument-class.md)\(o di [CDocument](../mfc/reference/cdocument-class.md) \) supporta gli oggetti utilizzati per archiviare o estrarre i dati del programma e fornisce la funzionalità di base per le classi definite dal programmatore del documento.  Un documento rappresenta l'unità dei dati immessi dall'utente viene in genere visualizzato con il comando apri dal menu File e salva con il comando salva dal menu File.  
  
 [CView](../mfc/reference/cview-class.md) \(o una delle numerose classi derivate\) fornisce la funzionalità di base per le classi visualizzazione programmatore definite.  Una visualizzazione è associata a un documento e funge da intermediario tra il documento e l'utente: la visualizzazione esegue il rendering di un'immagine del documento sullo schermo e interpreta l'input dell'utente come operazioni sul documento.  La visualizzazione esegue anche il rendering dell'immagine sia per stampa dell'anteprima di stampa.  
  
 [CFrameWnd](../mfc/reference/cframewnd-class.md) \(o una delle variazioni\) supporta gli oggetti che fornisce il frame intorno a uno o più visualizzazioni di un documento.  
  
 [CDocTemplate](../mfc/reference/cdoctemplate-class.md) \(o [CSingleDocTemplate](../mfc/reference/csingledoctemplate-class.md) o [CMultiDocTemplate](../mfc/reference/cmultidoctemplate-class.md)\) supporta un oggetto che coordina uno o più documenti esistenti di un tipo specificato e gestisce creare il documento, la visualizzazione e gli oggetti corretti della finestra cornice per quel tipo.  
  
 Nella figura seguente è illustrata la relazione tra un documento e la visualizzazione corrispondente.  
  
 ![La visualizzazione è la parte del documento visualizzata](../mfc/media/vc379n1.png "vc379N1")  
Documento e visualizzazione  
  
 L'implementazione documento\/visualizzazione nella libreria di classi con i dati stessi dalla visualizzazione e dalle operazioni utente sui dati.  Tutte le modifiche ai dati vengono gestite attraverso la classe document.  La visualizzazione chiama questa interfaccia per accedere e aggiornare i dati.  
  
 I documenti, i punti di vista collegati e le finestre delle incorniciano le visualizzazioni viene creato da un modello di documento.  Il modello di documento è responsabile della creazione e di gestire tutti i documenti di un tipo di documento.  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Un ritratto architettura documento\/visualizzazione](../mfc/a-portrait-of-the-document-view-architecture.md)  
  
-   [Vantaggi dell'architettura documento\/visualizzazione](../mfc/advantages-of-the-document-view-architecture.md)  
  
-   [Documenti e visualizzare le classi create dalla creazione guidata applicazione](../mfc/document-and-view-classes-created-by-the-mfc-application-wizard.md)  
  
-   [Alternative all'architettura documento\/visualizzazione](../mfc/alternatives-to-the-document-view-architecture.md)  
  
-   [Visualizzazioni multiple add a un singolo documento](../mfc/adding-multiple-views-to-a-single-document.md)  
  
-   [L'utilizzo di documenti](../mfc/using-documents.md)  
  
-   [Utilizzo delle visualizzazioni](../mfc/using-views.md)  
  
-   [Tipi di documenti multipli, visualizzazioni e le finestre](../mfc/multiple-document-types-views-and-frame-windows.md)  
  
-   [Inizializzazione e pulizia di documento e visualizzazioni](../mfc/initializing-and-cleaning-up-documents-and-views.md)  
  
-   [Inizializzare le proprie aggiunte per documentare & le classi visualizzazione](../mfc/creating-new-documents-windows-and-views.md)  
  
-   [Utilizzo di classi di database con documenti e visualizzazioni](../data/mfc-using-database-classes-with-documents-and-views.md)  
  
-   [Utilizzo di classi di database senza documenti e visualizzazioni](../data/mfc-using-database-classes-without-documents-and-views.md)  
  
-   [Esempi](../top/visual-cpp-samples.md)  
  
## Vedere anche  
 [Elementi dell'interfaccia utente](../mfc/user-interface-elements-mfc.md)   
 [Windows](../mfc/windows.md)   
 [Finestre cornice](../mfc/frame-windows.md)   
 [Modelli di documenti e processo di creazione documento\/visualizzazione](../mfc/document-templates-and-the-document-view-creation-process.md)   
 [Creazione di documenti\/visualizzazioni](../mfc/document-view-creation.md)   
 [Creazione di nuovi documenti, finestre e visualizzazioni](../mfc/creating-new-documents-windows-and-views.md)