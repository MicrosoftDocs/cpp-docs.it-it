---
title: Inizializzazione e pulizia di documenti e visualizzazioni
ms.date: 11/04/2016
helpviewer_keywords:
- initializing documents [MFC]
- views [MFC], cleaning up
- documents [MFC], initializing
- documents [MFC], cleaning up
- views [MFC], initializing
- initializing objects [MFC], document objects
- document objects [MFC], life cycle of
- initializing views [MFC]
ms.assetid: 95d6f09b-a047-4079-856a-ae7d0548e9d2
ms.openlocfilehash: 3c92d60941cd6542bd0d6c27e8a879dc85e3a3d6
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81377208"
---
# <a name="initializing-and-cleaning-up-documents-and-views"></a>Inizializzazione e pulizia di documenti e visualizzazioni

Utilizzare le seguenti linee guida per l'inizializzazione e la pulizia dopo i documenti e le visualizzazioni:

- Il framework MFC inizializza documenti e visualizzazioni; inizializzare tutti i dati aggiunti.

- Il framework pulisce man mano che i documenti e le visualizzazioni si chiudono; è necessario deallocare la memoria allocata nell'heap dall'interno delle funzioni membro di tali documenti e visualizzazioni.

> [!NOTE]
> Tenere presente che l'inizializzazione per l'intera applicazione viene eseguita nell'override della funzione membro [InitInstance](../mfc/reference/cwinapp-class.md#initinstance) della classe `CWinApp`e la pulitura per l'intera applicazione è consigliabile nell'override della funzione `CWinApp` membro [ExitInstance](../mfc/reference/cwinapp-class.md#exitinstance).

Il ciclo di vita di un documento (e la relativa finestra cornice e visualizzazione o visualizzazioni) in un'applicazione MDI è il seguente:

1. Durante la creazione dinamica, viene chiamato il costruttore del documento.

1. Per ogni nuovo documento, viene chiamato [OnNewDocument](../mfc/reference/cdocument-class.md#onnewdocument) o [OnOpenDocument](../mfc/reference/cdocument-class.md#onopendocument) del documento.

1. L'utente interagisce con il documento per tutta la sua durata. In genere questo accade quando l'utente lavora sui dati del documento attraverso la visualizzazione, la selezione e la modifica dei dati. La visualizzazione passa le modifiche al documento per l'archiviazione e l'aggiornamento di altre viste. Durante questo periodo sia il documento che la visualizzazione potrebbero gestire i comandi.

1. Il framework chiama [DeleteContents](../mfc/reference/cdocument-class.md#deletecontents) per eliminare i dati specifici di un documento.

1. Viene chiamato il distruttore del documento.

In un'applicazione SDI, il passaggio 1 viene eseguito una sola volta, quando il documento viene creato per la prima volta. Quindi i passaggi da 2 a 4 vengono eseguiti ripetutamente ogni volta che viene aperto un nuovo documento. Il nuovo documento riutilizza l'oggetto documento esistente. Infine, il passaggio 5 viene eseguito al termine dell'applicazione.

## <a name="what-do-you-want-to-know-more-about"></a>Cosa vuoi sapere di più su

- [Inizializzazione di documenti e visualizzazioni](../mfc/initializing-documents-and-views.md)

- [Pulizia di documenti e visualizzazioni](../mfc/cleaning-up-documents-and-views.md)

## <a name="see-also"></a>Vedere anche

[Architettura documento/visualizzazione](../mfc/document-view-architecture.md)
