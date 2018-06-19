---
title: Architettura documento / visualizzazione | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- CView class [MFC], view architecture
- CDocument class [MFC]
- MFC, views
- views [MFC], MFC document/view model
- document objects [MFC]
- document objects [MFC], MFC document/view model
- MFC, documents
- documents [MFC], MFC document/view model
- document objects [MFC], document/view architecture
ms.assetid: 6127768a-553f-462a-b01b-a5ee6068c81e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c9554af9443bbd6a6394789343294630104c96f1
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33350055"
---
# <a name="documentview-architecture"></a>Architettura documento/visualizzazione
Per impostazione predefinita, la creazione guidata applicazione MFC crea uno scheletro di applicazione con una classe di documento e una classe di visualizzazione. MFC separa la gestione dei dati in queste due classi. Il documento archivia i dati e gestisce i dati di stampa e coordina l'aggiornamento di più visualizzazioni dei dati. La vista vengono visualizzati i dati e gestisce l'interazione dell'utente con esso, ad esempio la scelta e la modifica.  
  
 In questo modello, un oggetto documento MFC legge e scrive i dati in un archivio permanente. Il documento può anche fornire un'interfaccia per i dati presenti in qualsiasi posizione (ad esempio un database). Un oggetto visualizzazione separato gestisce la visualizzazione dei dati, il rendering dei dati in una finestra di selezione dell'utente e la modifica dei dati. La visualizzazione Ottiene i dati di visualizzazione del documento e comunica con il documento di modifiche dei dati.  
  
 Mentre è possibile eseguire l'override o ignorare la separazione di documento/visualizzazione, esistono ragioni per seguire questo modello nella maggior parte dei casi. Uno dei migliori è quando è necessario più viste dello stesso documento, ad esempio un foglio di calcolo sia una vista del grafico. Il modello di documento/visualizzazione consente a un oggetto visualizzazione separato rappresentano ogni visualizzazione dei dati, mentre il codice comune a tutte le visualizzazioni (ad esempio un motore di calcolo) possono risiedere nel documento. L'attività di aggiornamento di tutte le visualizzazioni ogni volta che i dati vengono modificati anche assume il documento.  
  
 L'architettura documento/visualizzazione MFC semplifica supportare più viste, più tipi di documenti, finestre con separatore e altre funzionalità importanti dell'interfaccia utente.  
  
 Le parti del framework MFC più visibile all'utente e all'utente, il programmatore, sono il documento e la visualizzazione. Maggior parte dei casi, lo sviluppo di un'applicazione con il framework passa a scrivere il documento e visualizzazione classi. La famiglia di questo articolo descrive:  
  
-   Gli scopi di documenti e visualizzazioni e come interagiscono in framework.  
  
-   Le operazioni da eseguire per implementarli.  
  
 Il fulcro di documento/visualizzazione sono quattro classi principali:  
  
 Il [CDocument](../mfc/reference/cdocument-class.md) (o [COleDocument](../mfc/reference/coledocument-class.md)) supporta gli oggetti utilizzati per memorizzare o controllare i dati del programma di classe e fornisce la funzionalità di base per le classi documento definita dal programmatore. Un documento rappresenta l'unità di dati che l'utente in genere viene aperto con il comando Apri del menu File e salvato con il comando Salva dal menu File.  
  
 Il [CView](../mfc/reference/cview-class.md) (o una delle numerose classi derivate) fornisce la funzionalità di base per le classi di visualizzazione definiti dal programmatore. Una vista è associata a un documento e funge da intermediario tra il documento e l'utente: la visualizzazione esegue il rendering di un'immagine del documento sullo schermo e interpreta l'input dell'utente come operazioni sul documento. La vista anche il rendering dell'immagine per sia stampa e anteprima di stampa.  
  
 [CFrameWnd](../mfc/reference/cframewnd-class.md) (o una delle sue varianti) supporta gli oggetti che fornisce il frame intorno a uno o più viste di un documento.  
  
 [CDocTemplate](../mfc/reference/cdoctemplate-class.md) (o [CSingleDocTemplate](../mfc/reference/csingledoctemplate-class.md) o [CMultiDocTemplate](../mfc/reference/cmultidoctemplate-class.md)) supporta un oggetto che coordina uno o più documenti esistenti di un determinato tipo e gestisce la creazione corretta documento, visualizzazione e oggetti delle finestre frame per quel tipo.  
  
 Nella figura seguente viene illustrata la relazione tra un documento e la relativa visualizzazione.  
  
 ![Visualizzazione è la parte del documento che viene visualizzato](../mfc/media/vc379n1.gif "vc379n1")  
Documento e visualizzazione  
  
 L'implementazione di documento/visualizzazione nella libreria di classi separa i dati dalla relativa visualizzazione e di operazioni sui dati dell'utente. Tutte le modifiche ai dati vengono gestite tramite la classe di documento. La visualizzazione chiama questa interfaccia per accedere e aggiornare i dati.  
  
 Documenti, le visualizzazioni associate e le finestre cornice intorno alle visualizzazioni vengono create da un modello di documento. Il modello di documento è responsabile della creazione e gestione di tutti i documenti di un tipo di documento.  
  
## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Una descrizione dell'architettura documento/visualizzazione](../mfc/a-portrait-of-the-document-view-architecture.md)  
  
-   [Vantaggi dell'architettura documento/visualizzazione](../mfc/advantages-of-the-document-view-architecture.md)  
  
-   [Classi documento e visualizzazione create dalla creazione guidata applicazione](../mfc/document-and-view-classes-created-by-the-mfc-application-wizard.md)  
  
-   [Alternative all'architettura documento/visualizzazione](../mfc/alternatives-to-the-document-view-architecture.md)  
  
-   [Aggiunta di più visualizzazioni a un singolo documento](../mfc/adding-multiple-views-to-a-single-document.md)  
  
-   [Uso di documenti](../mfc/using-documents.md)  
  
-   [Uso delle visualizzazioni](../mfc/using-views.md)  
  
-   [Tipi di documenti multipli, visualizzazioni e finestre cornice](../mfc/multiple-document-types-views-and-frame-windows.md)  
  
-   [Inizializzazione e pulizia di documenti e visualizzazioni](../mfc/initializing-and-cleaning-up-documents-and-views.md)  
  
-   [Inizializzazione delle aggiunte alle classi documento e visualizzazione](../mfc/creating-new-documents-windows-and-views.md)  
  
-   [Utilizzo di classi di database con documenti e visualizzazioni](../data/mfc-using-database-classes-with-documents-and-views.md)  
  
-   [Utilizzo di classi di database senza documenti e visualizzazioni](../data/mfc-using-database-classes-without-documents-and-views.md)  
  
-   [Esempi](../visual-cpp-samples.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Elementi dell'interfaccia utente](../mfc/user-interface-elements-mfc.md)   
 [Windows](../mfc/windows.md)   
 [Finestre cornice](../mfc/frame-windows.md)   
 [Modelli di documento e il processo di creazione documento/visualizzazione](../mfc/document-templates-and-the-document-view-creation-process.md)   
 [Creazione di documenti/visualizzazioni](../mfc/document-view-creation.md)   
 [Creazione di nuovi documenti, finestre e visualizzazioni](../mfc/creating-new-documents-windows-and-views.md)

