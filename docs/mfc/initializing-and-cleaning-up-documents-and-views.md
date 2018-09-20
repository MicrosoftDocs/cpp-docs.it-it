---
title: Inizializzazione e pulizia di documenti e visualizzazioni | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: cdc1efa9d2284a48e4f906a326efcd62dd6c61b9
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46412951"
---
# <a name="initializing-and-cleaning-up-documents-and-views"></a>Inizializzazione e pulizia di documenti e visualizzazioni

Usare le linee guida seguenti per l'inizializzazione e pulizia dopo i documenti e visualizzazioni:

- Consente di inizializzare il framework MFC documenti e visualizzazioni; è inizializzare tutti i dati che aggiungere ad essi.

- Il framework pulisce come documenti e visualizzazioni chiudere; è necessario deallocare la memoria è allocata nell'heap dall'interno delle funzioni membro di questi documenti e visualizzazioni.

> [!NOTE]
>  È importante ricordare che l'inizializzazione per l'intera applicazione è più adatto nell'override della [InitInstance](../mfc/reference/cwinapp-class.md#initinstance) funzione membro di classe `CWinApp`, e pulizia per l'intera applicazione è più adatto nell'override della `CWinApp`funzione membro [ExitInstance](../mfc/reference/cwinapp-class.md#exitinstance).

Ciclo di vita di un documento (e la finestra cornice e visualizzazione o viste) in un form MDI applicazione è come segue:

1. Durante la creazione dinamica, viene chiamato il costruttore di documento.

1. Per ogni nuovo, il documento del documento [OnNewDocument](../mfc/reference/cdocument-class.md#onnewdocument) oppure [OnOpenDocument](../mfc/reference/cdocument-class.md#onopendocument) viene chiamato.

1. L'utente interagisce con il documento tutta la sua durata. In genere ciò si verifica mentre l'utente Usa sui dati del documento tramite la vista, selezione e la modifica dei dati. La visualizzazione passa le modifiche apportate al documento per l'archiviazione e l'aggiornamento delle altre viste. Durante questo periodo il documento sia la vista può gestire i comandi.

1. Il framework chiama [DeleteContents](../mfc/reference/cdocument-class.md#deletecontents) per eliminare i dati specifici di un documento.

1. Viene chiamato il distruttore del documento.

In un'applicazione SDI, passaggio 1 viene eseguito una volta, quando viene creato il documento. Quindi i passaggi da 2 a 4 vengono eseguiti più volte ogni volta che viene aperto un nuovo documento. Il nuovo documento riusa l'oggetto documento esistente. Infine, il passaggio 5 viene eseguito quando l'applicazione viene chiusa.

## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Inizializzazione di documenti e visualizzazioni](../mfc/initializing-documents-and-views.md)

- [Pulizia di documenti e visualizzazioni](../mfc/cleaning-up-documents-and-views.md)

## <a name="see-also"></a>Vedere anche

[Architettura documento/visualizzazione](../mfc/document-view-architecture.md)

