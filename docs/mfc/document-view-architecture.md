---
title: Architettura documento-visualizzazione
ms.date: 11/19/2018
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
ms.openlocfilehash: a74aeba651d385cf3a5386e94ec20e4e56b7cd57
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84624780"
---
# <a name="documentview-architecture"></a>Architettura documento/visualizzazione

Per impostazione predefinita, la creazione guidata applicazione MFC crea una struttura dell'applicazione con una classe di documento e una classe di visualizzazione. MFC separa la gestione dei dati in queste due classi. Il documento archivia i dati e gestisce la stampa dei dati e coordina l'aggiornamento di più visualizzazioni dei dati. La vista consente di visualizzare i dati e di gestirne l'interazione con l'utente, incluse la selezione e la modifica.

In questo modello un oggetto documento MFC legge e scrive i dati nell'archivio permanente. Il documento può inoltre fornire un'interfaccia ai dati ovunque si trovino, ad esempio in un database. Un oggetto visualizzazione separato gestisce la visualizzazione dei dati, dal rendering dei dati in una finestra alla selezione e alla modifica dei dati da parte dell'utente. La vista ottiene i dati visualizzati dal documento e comunica al documento che vengono apportate modifiche ai dati.

Sebbene sia possibile eseguire facilmente l'override o ignorare la separazione di documenti/visualizzazioni, nella maggior parte dei casi ci sono motivi interessanti per seguire questo modello. Uno dei migliori è quando sono necessarie più visualizzazioni dello stesso documento, ad esempio un foglio di calcolo e una visualizzazione del grafico. Il modello documento/visualizzazione consente a un oggetto visualizzazione separato di rappresentare ogni visualizzazione dei dati, mentre il codice comune a tutte le visualizzazioni, ad esempio un motore di calcolo, può risiedere nel documento. Il documento accetta anche l'aggiornamento di tutte le visualizzazioni ogni volta che i dati vengono modificati.

L'architettura documento/visualizzazione MFC consente di semplificare il supporto di più visualizzazioni, più tipi di documenti, finestre con separatore e altre importanti funzionalità dell'interfaccia utente.

Le parti del framework MFC più visibili sia all'utente che al programmatore sono il documento e la visualizzazione. Per la maggior parte del lavoro di sviluppo di un'applicazione con il Framework, viene illustrata la scrittura di classi di documenti e visualizzazioni. Questa famiglia di articoli descrive:

- Finalità dei documenti e delle visualizzazioni e del modo in cui interagiscono nel Framework.

- Cosa è necessario fare per implementarli.

Il nucleo del documento/visualizzazione è costituito da quattro classi principali:

La classe [CDocument](reference/cdocument-class.md) (o [COleDocument](reference/coledocument-class.md)) supporta oggetti utilizzati per archiviare o controllare i dati del programma e fornisce la funzionalità di base per le classi di documento definite dal programmatore. Un documento rappresenta l'unità di dati che l'utente apre in genere con il comando Apri nel menu file e Salva con il comando Salva nel menu file.

[CView](reference/cview-class.md) (o una delle sue numerose classi derivate) fornisce la funzionalità di base per le classi di visualizzazione definite dal programmatore. Una vista è associata a un documento e funge da intermediario tra il documento e l'utente: la visualizzazione esegue il rendering di un'immagine del documento sullo schermo e interpreta l'input dell'utente come operazioni sul documento. La vista esegue anche il rendering dell'immagine per la stampa e l'anteprima di stampa.

[CFrameWnd](reference/cframewnd-class.md) (o una delle sue varianti) supporta oggetti che forniscono il frame intorno a una o più visualizzazioni di un documento.

[CDocTemplate](reference/cdoctemplate-class.md) (o [CSingleDocTemplate](reference/csingledoctemplate-class.md) o [CMultiDocTemplate](reference/cmultidoctemplate-class.md)) supporta un oggetto che coordina uno o più documenti esistenti di un determinato tipo e gestisce la creazione degli oggetti di documento, visualizzazione e finestra cornice corretti per quel tipo.

Nella figura seguente viene illustrata la relazione tra un documento e la relativa visualizzazione.

![La visualizzazione è la parte del documento visualizzata](../mfc/media/vc379n1.gif "La visualizzazione è la parte del documento visualizzata") <br/>
Documento e visualizzazione

L'implementazione documento/visualizzazione nella libreria di classi separa i dati dalla relativa visualizzazione e dalle operazioni utente sui dati. Tutte le modifiche apportate ai dati vengono gestite tramite la classe Document. La vista chiama questa interfaccia per accedere ai dati e aggiornarli.

I documenti, le visualizzazioni associate e le finestre cornice che incorniciano le visualizzazioni vengono create da un modello di documento. Il modello di documento è responsabile della creazione e della gestione di tutti i documenti di un tipo di documento.

## <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Un ritratto dell'architettura documento/visualizzazione](a-portrait-of-the-document-view-architecture.md)

- [Vantaggi dell'architettura documento/visualizzazione](advantages-of-the-document-view-architecture.md)

- [Classi di documento e visualizzazione create dalla creazione guidata applicazione](document-and-view-classes-created-by-the-mfc-application-wizard.md)

- [Alternative all'architettura documento/visualizzazione](alternatives-to-the-document-view-architecture.md)

- [Aggiunta di più visualizzazioni a un singolo documento](adding-multiple-views-to-a-single-document.md)

- [Utilizzo di documenti](using-documents.md)

- [Utilizzo delle visualizzazioni](using-views.md)

- [Tipi di documenti multipli, visualizzazioni e finestre cornice](multiple-document-types-views-and-frame-windows.md)

- [Inizializzazione e pulizia di documenti e visualizzazioni](initializing-and-cleaning-up-documents-and-views.md)

- [Inizializza le tue aggiunte per le classi di visualizzazione & documento](creating-new-documents-windows-and-views.md)

- [Uso di classi di database con documenti e viste](../data/mfc-using-database-classes-with-documents-and-views.md)

- [Uso di classi di database senza documenti e viste](../data/mfc-using-database-classes-without-documents-and-views.md)

- [Esempi](../overview/visual-cpp-samples.md)

## <a name="see-also"></a>Vedere anche

[Elementi dell'interfaccia utente](user-interface-elements-mfc.md)<br/>
[Windows](windows.md)<br/>
[Finestre cornice](frame-windows.md)<br/>
[Modelli di documenti e processo di creazione documento/visualizzazione](document-templates-and-the-document-view-creation-process.md)<br/>
[Creazione di documenti/visualizzazioni](document-view-creation.md)<br/>
[Creazione di nuovi documenti, finestre e visualizzazioni](creating-new-documents-windows-and-views.md)
