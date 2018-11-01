---
title: Utilizzo delle visualizzazioni
ms.date: 11/04/2016
helpviewer_keywords:
- interacting with users and role of view class [MFC]
- drawing [MFC], data
- rendering data
- view classes [MFC], role in managing user interaction
- CView class [MFC], view architecture
- MFC, views
- views [MFC], using
- painting data
- user input [MFC], interpreting through view class [MFC]
- view classes [MFC], role in displaying application data
ms.assetid: dc3de6ad-5c64-4317-8f10-8bdcc38cdbd5
ms.openlocfilehash: 2038f2669d3aa8b5c4bf91b0ba0b38fbec9a1fc8
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50605699"
---
# <a name="using-views"></a>Utilizzo delle visualizzazioni

Le responsabilità della visualizzazione sono per visualizzare graficamente i dati del documento per l'utente e per accettare e l'interpretazione dell'input dell'utente come operazioni sul documento. Le attività nella scrittura di classe di visualizzazione sono:

- Scrivere la classe di visualizzazione [OnDraw](../mfc/reference/cview-class.md#ondraw) funzione membro, che esegue il rendering dei dati del documento.

- Connettere i messaggi di Windows appropriati e oggetti dell'interfaccia utente, ad esempio voci di menu per le funzioni membro di gestore di messaggi nella classe di visualizzazione.

- Implementare i gestori per l'interpretazione dell'input dell'utente.

Inoltre, potrebbe essere necessario eseguire l'override di altri `CView` funzioni membro nella classe vista derivata. In particolare, è possibile eseguire l'override [OnInitialUpdate](../mfc/reference/cview-class.md#oninitialupdate) per eseguire un'inizializzazione speciale per la visualizzazione e [OnUpdate](../mfc/reference/cview-class.md#onupdate) eseguire qualsiasi elaborazione speciale necessari appena prima che la vista viene ridisegnato. Per i documenti con più pagine, è anche necessario eseguire l'override [OnPreparePrinting](../mfc/reference/cview-class.md#onprepareprinting) per inizializzare la finestra di dialogo di stampa con il numero di pagine da stampare e altre informazioni. Per altre informazioni sull'override `CView` funzioni membro, vedere la classe [CView](../mfc/reference/cview-class.md) nel *riferimenti alla libreria MFC*.

## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Classi visualizzazione derivate disponibili in MFC](../mfc/derived-view-classes-available-in-mfc.md)

- [Disegno in una visualizzazione](../mfc/drawing-in-a-view.md)

- [Interpretazione dell'input utente attraverso una visualizzazione](../mfc/interpreting-user-input-through-a-view.md)

- [Il ruolo della visualizzazione nella stampa](../mfc/role-of-the-view-in-printing.md)

- [Lo scorrimento e ridimensionamento di visualizzazioni](../mfc/scrolling-and-scaling-views.md)

- [Inizializzazione e pulizia di documenti e visualizzazioni](../mfc/initializing-and-cleaning-up-documents-and-views.md)

## <a name="see-also"></a>Vedere anche

[Architettura documento/visualizzazione](../mfc/document-view-architecture.md)<br/>
[Classe CFormView](../mfc/reference/cformview-class.md)<br/>
[Visualizzazioni di record (accesso ai dati MFC)](../data/record-views-mfc-data-access.md)<br/>
[Esclusione del meccanismo di serializzazione](../mfc/bypassing-the-serialization-mechanism.md)

