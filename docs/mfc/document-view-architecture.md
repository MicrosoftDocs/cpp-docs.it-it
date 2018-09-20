---
title: Architettura documento / visualizzazione | Microsoft Docs
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
ms.openlocfilehash: 42c56ddea19266251bb12c06f6423c278f14bd71
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46404555"
---
# <a name="documentview-architecture"></a>Architettura documento/visualizzazione

Per impostazione predefinita, la creazione guidata applicazione MFC crea uno scheletro di applicazione con una classe documento e una classe di visualizzazione. MFC consente di separare la gestione dei dati in queste due classi. Il documento archivia i dati e gestisce i dati di stampa e coordina l'aggiornamento di più visualizzazioni dei dati. La vista vengono visualizzati i dati e gestisce l'interazione dell'utente con esso, ad esempio la scelta e la modifica.

In questo modello, un oggetto documento MFC legge e scrive i dati nell'archivio permanente. Il documento viene inoltre fornita un'interfaccia ai dati ogni volta che si trova (ad esempio un database). Un oggetto di visualizzazione separato gestisce della visualizzazione dati, rendering dei dati in una finestra di selezione dell'utente e la modifica dei dati. La vista Ottiene Visualizza i dati dal documento e comunica con il documento delle modifiche dei dati.

Mentre è facilmente possibile eseguire l'override o ignorare la separazione di documento/visualizzazione, esistono buoni motivi per seguire questo modello nella maggior parte dei casi. Uno dei migliori è quando è necessario più viste dello stesso documento, ad esempio un foglio di calcolo sia una vista del grafico. Il modello documento/visualizzazione consente a un oggetto di visualizzazione separato rappresentano ogni visualizzazione dei dati, mentre il codice comune a tutte le visualizzazioni (ad esempio, un motore di calcolo) possono risiedere nel documento. L'attività di aggiornamento di tutte le visualizzazioni di ogni modifica dei dati acquisisce anche il documento.

L'architettura documento/visualizzazione MFC semplifica supportare più viste, più tipi di documenti, finestre con separatore e altre funzionalità importanti dell'interfaccia utente.

Le parti del framework MFC più visibile all'utente e all'utente, il programmatore, sono il documento e visualizzazione. La maggior parte del lavoro per lo sviluppo di un'applicazione con il framework passa a scrivere il documento e visualizzazione di classi. Questa serie di articoli descrive:

- Gli scopi dei documenti e visualizzazioni e come interagiscono nel framework.

- Cosa è necessario fare per implementarli.

Il fulcro di documenti/visualizzazioni sono quattro classi principali:

Il [CDocument](../mfc/reference/cdocument-class.md) (o [COleDocument](../mfc/reference/coledocument-class.md)) classe supporta gli oggetti usati per archiviare o dati del programma di controllo e fornisce la funzionalità di base per le classi documento definite dal programmatore. Un documento rappresenta l'unità di dati che l'utente in genere viene aperto con il comando Apri del menu File e salvato con il comando Salva dal menu File.

Il [CView](../mfc/reference/cview-class.md) (o una delle varie classi derivate) fornisce la funzionalità di base per classi di visualizzazione definiti dal programmatore. Una vista è associata a un documento e funge da intermediario tra il documento e l'utente: la visualizzazione esegue il rendering di un'immagine del documento sullo schermo e input dell'utente viene interpretato come operazioni al momento del documento. La visualizzazione esegue anche il rendering dell'immagine per l'anteprima di stampa sia stampa.

[CFrameWnd](../mfc/reference/cframewnd-class.md) (o una delle sue varianti) supporta gli oggetti che fornisce il frame intorno a una o più visualizzazioni di un documento.

[CDocTemplate](../mfc/reference/cdoctemplate-class.md) (o [CSingleDocTemplate](../mfc/reference/csingledoctemplate-class.md) oppure [CMultiDocTemplate](../mfc/reference/cmultidoctemplate-class.md)) supporta un oggetto che uno o più documenti esistenti di un determinato tipo coordina e gestisce la creazione corretta documento vista e oggetti della finestra cornice per quel tipo.

La figura seguente mostra la relazione tra un documento e la relativa visualizzazione.

![Visualizzazione è la parte del documento che viene visualizzato](../mfc/media/vc379n1.gif "vc379n1") documento e visualizzazione

L'implementazione di documenti/visualizzazioni nella libreria di classi consente di separare i dati stessi dalla relativa visualizzazione e da operazioni sui dati dell'utente. Tutte le modifiche apportate ai dati vengono gestite tramite la classe del documento. La visualizzazione chiamate di questa interfaccia per accedere e aggiornare i dati.

Documenti, le visualizzazioni associate e le finestre cornice intorno le viste vengono create da un modello di documento. Il modello di documento è responsabile della creazione e gestione di tutti i documenti di un tipo di documento.

## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Una descrizione dell'architettura documento/visualizzazione](../mfc/a-portrait-of-the-document-view-architecture.md)

- [Vantaggi dell'architettura documento/visualizzazione](../mfc/advantages-of-the-document-view-architecture.md)

- [Classi documento e visualizzazione create dalla procedura guidata dell'applicazione](../mfc/document-and-view-classes-created-by-the-mfc-application-wizard.md)

- [Alternative all'architettura documento/visualizzazione](../mfc/alternatives-to-the-document-view-architecture.md)

- [Aggiunta di più visualizzazioni a un singolo documento](../mfc/adding-multiple-views-to-a-single-document.md)

- [Uso di documenti](../mfc/using-documents.md)

- [Uso delle visualizzazioni](../mfc/using-views.md)

- [Tipi di documenti multipli, visualizzazioni e finestre cornice](../mfc/multiple-document-types-views-and-frame-windows.md)

- [Inizializzazione e pulizia di documenti e visualizzazioni](../mfc/initializing-and-cleaning-up-documents-and-views.md)

- [Inizializzazione delle aggiunte alle classi di visualizzazione & documento](../mfc/creating-new-documents-windows-and-views.md)

- [Uso di classi di database con documenti e visualizzazioni](../data/mfc-using-database-classes-with-documents-and-views.md)

- [Utilizzo di classi di database senza documenti e visualizzazioni](../data/mfc-using-database-classes-without-documents-and-views.md)

- [Esempi](../visual-cpp-samples.md)

## <a name="see-also"></a>Vedere anche

[Elementi dell'interfaccia utente](../mfc/user-interface-elements-mfc.md)<br/>
[Windows](../mfc/windows.md)<br/>
[Finestre cornice](../mfc/frame-windows.md)<br/>
[I modelli di documento e il processo di creazione documento/visualizzazione](../mfc/document-templates-and-the-document-view-creation-process.md)<br/>
[Creazione di documenti/visualizzazioni](../mfc/document-view-creation.md)<br/>
[Creazione di nuovi documenti, finestre e visualizzazioni](../mfc/creating-new-documents-windows-and-views.md)

