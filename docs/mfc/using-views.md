---
description: 'Altre informazioni su: uso delle visualizzazioni'
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
ms.openlocfilehash: f17855c1389da44630a21830033c4457db6e3703
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97236646"
---
# <a name="using-views"></a>Utilizzo delle visualizzazioni

Le responsabilità della visualizzazione consentono di visualizzare graficamente i dati del documento all'utente e di accettare e interpretare l'input dell'utente come operazioni nel documento. Le attività in scrittura della classe di visualizzazione sono:

- Scrivere la funzione membro [ondisegnare](../mfc/reference/cview-class.md#ondraw) della classe di visualizzazione che esegue il rendering dei dati del documento.

- Connettere i messaggi Windows appropriati e gli oggetti dell'interfaccia utente, ad esempio le voci di menu, alle funzioni membro del gestore di messaggi nella classe di visualizzazione.

- Implementare tali gestori per interpretare l'input dell'utente.

Inoltre, potrebbe essere necessario eseguire l'override di altre `CView` funzioni membro nella classe di visualizzazione derivata. In particolare, è possibile eseguire l'override di [OnInitialUpdate](../mfc/reference/cview-class.md#oninitialupdate) per eseguire un'inizializzazione speciale per la vista e [OnUpdate](../mfc/reference/cview-class.md#onupdate) per eseguire qualsiasi elaborazione speciale necessaria immediatamente prima che la visualizzazione venga ridisegnata. Per i documenti multipagina, è inoltre necessario eseguire l'override di [OnPreparePrinting](../mfc/reference/cview-class.md#onprepareprinting) per inizializzare la finestra di dialogo Stampa con il numero di pagine da stampare e altre informazioni. Per ulteriori informazioni sull'override delle `CView` funzioni membro, vedere la classe [CView](../mfc/reference/cview-class.md) in *riferimenti a MFC*.

## <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Classi visualizzazione derivate disponibili in MFC](../mfc/derived-view-classes-available-in-mfc.md)

- [Disegno in una visualizzazione](../mfc/drawing-in-a-view.md)

- [Interpretazione dell'input utente tramite una visualizzazione](../mfc/interpreting-user-input-through-a-view.md)

- [Ruolo della visualizzazione nella stampa](../mfc/role-of-the-view-in-printing.md)

- [Scorrimento e ridimensionamento di visualizzazioni](../mfc/scrolling-and-scaling-views.md)

- [Inizializzazione e pulizia di documenti e visualizzazioni](../mfc/initializing-and-cleaning-up-documents-and-views.md)

## <a name="see-also"></a>Vedi anche

[Architettura documento/visualizzazione](../mfc/document-view-architecture.md)<br/>
[Classe CFormView](../mfc/reference/cformview-class.md)<br/>
[Visualizzazioni di record (accesso ai dati MFC)](../data/record-views-mfc-data-access.md)<br/>
[Esclusione del meccanismo di serializzazione](../mfc/bypassing-the-serialization-mechanism.md)
