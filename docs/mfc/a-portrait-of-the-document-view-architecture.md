---
title: Descrizione dell'architettura documento-visualizzazione
ms.date: 11/04/2016
helpviewer_keywords:
- documents [MFC], views
- multiple views [MFC], updating from document
- document/view architecture [MFC]
- views [MFC], and user input
- documents [MFC], accessing data from view
- views [MFC], updating
- input [MFC], view class
- documents [MFC], multiple views
- document/view architecture [MFC], accessing data from view
- document/view architecture [MFC], about document/view architecture
- views [MFC], accessing document data from
ms.assetid: 4e7f65dc-b166-45d8-bcd5-9bb0d399b946
ms.openlocfilehash: f0e71c42004b5409eeb6f5e2ddabd33296cf5f49
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84623444"
---
# <a name="a-portrait-of-the-documentview-architecture"></a>Descrizione dell'architettura documento/visualizzazione

I documenti e le visualizzazioni sono abbinati in una tipica applicazione MFC. I dati vengono archiviati nel documento, ma la vista ha accesso con privilegi ai dati. La separazione del documento dalla visualizzazione separa l'archiviazione e la manutenzione dei dati dal relativo schermo.

## <a name="gaining-access-to-document-data-from-the-view"></a>Ottenere l'accesso ai dati del documento dalla vista

La visualizzazione accede ai dati del documento tramite la funzione [GetDocument](reference/cview-class.md#getdocument) , che restituisce un puntatore al documento, oppure rendendo la classe di visualizzazione C++ `friend` della classe Document. La visualizzazione usa quindi l'accesso ai dati per ottenere i dati quando è pronto per l'estrazione o per modificarli in altro modo.

Dalla funzione membro [Onpare](reference/cview-class.md#ondraw) di visualizzazione, ad esempio, la vista USA `GetDocument` per ottenere un puntatore al documento. USA quindi tale puntatore per accedere a un `CString` membro dati nel documento. La visualizzazione passa la stringa alla `TextOut` funzione. Per visualizzare il codice per questo esempio, vedere [Drawing in a View](drawing-in-a-view.md).

## <a name="user-input-to-the-view"></a>Input dell'utente per la visualizzazione

La vista può anche interpretare un clic del mouse all'interno di se stesso, sia per la selezione che per la modifica dei dati. Analogamente, potrebbe interpretare le sequenze di tasti come immissione o modifica di dati. Si supponga che l'utente digita una stringa in una vista che gestisce il testo. La vista ottiene un puntatore al documento e usa il puntatore per passare i nuovi dati al documento, che li archivia in una struttura di dati.

## <a name="updating-multiple-views-of-the-same-document"></a>Aggiornamento di più visualizzazioni dello stesso documento

In un'applicazione con più visualizzazioni dello stesso documento, ad esempio una finestra con separatore in un editor di testo, la visualizzazione passa prima i nuovi dati al documento. Chiama quindi la funzione membro [UpdateAllViews](reference/cdocument-class.md#updateallviews) del documento, che indica a tutte le visualizzazioni del documento di aggiornarsi, riflettendo i nuovi dati. Questa operazione Sincronizza le visualizzazioni.

### <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Vantaggi dell'architettura documento/visualizzazione](advantages-of-the-document-view-architecture.md)

- [Alternative all'architettura documento/visualizzazione](alternatives-to-the-document-view-architecture.md)

## <a name="see-also"></a>Vedere anche

[Architettura documento/visualizzazione](document-view-architecture.md)
