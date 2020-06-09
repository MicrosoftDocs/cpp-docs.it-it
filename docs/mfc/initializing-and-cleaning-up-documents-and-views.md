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
ms.openlocfilehash: c5beed5618d4fa991160ad1688a5a686aeaa842f
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84626360"
---
# <a name="initializing-and-cleaning-up-documents-and-views"></a>Inizializzazione e pulizia di documenti e visualizzazioni

Usare le linee guida seguenti per l'inizializzazione e la pulizia dopo i documenti e le visualizzazioni:

- Il framework MFC Inizializza i documenti e le visualizzazioni; si inizializzano i dati aggiunti.

- Il Framework si pulisce come documenti e viste chiuse; è necessario deallocare la memoria allocata nell'heap dalle funzioni membro di tali documenti e visualizzazioni.

> [!NOTE]
> Si ricordi che l'inizializzazione per l'intera applicazione viene eseguita in modo ottimale nell'override della funzione membro [InitInstance](reference/cwinapp-class.md#initinstance) della classe `CWinApp` e la pulizia per l'intera applicazione viene eseguita in modo ottimale nell'override della `CWinApp` funzione membro [ExitInstance](reference/cwinapp-class.md#exitinstance).

Il ciclo di vita di un documento (e della finestra cornice e della visualizzazione o delle visualizzazioni) in un'applicazione MDI è il seguente:

1. Durante la creazione dinamica, viene chiamato il costruttore del documento.

1. Per ogni nuovo documento viene chiamato il [OnNewDocument](reference/cdocument-class.md#onnewdocument) o [OnOpenDocument](reference/cdocument-class.md#onopendocument) del documento.

1. L'utente interagisce con il documento per tutta la sua durata. Questa situazione si verifica in genere quando l'utente lavora sui dati del documento attraverso la visualizzazione, selezionando e modificando i dati. La visualizzazione passa le modifiche al documento per l'archiviazione e l'aggiornamento di altre visualizzazioni. Durante questo periodo, sia il documento che la visualizzazione possono gestire i comandi.

1. Il Framework chiama [DeleteContents](reference/cdocument-class.md#deletecontents) per eliminare i dati specifici di un documento.

1. Viene chiamato il distruttore del documento.

In un'applicazione SDI, il passaggio 1 viene eseguito una volta, quando il documento viene creato per la prima volta. I passaggi da 2 a 4 vengono eseguiti ripetutamente ogni volta che viene aperto un nuovo documento. Il nuovo documento riutilizza l'oggetto documento esistente. Infine, il passaggio 5 viene eseguito al termine dell'applicazione.

## <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Inizializzazione di documenti e visualizzazioni](initializing-documents-and-views.md)

- [Pulizia di documenti e visualizzazioni](cleaning-up-documents-and-views.md)

## <a name="see-also"></a>Vedere anche

[Architettura documento/visualizzazione](document-view-architecture.md)
