---
title: Una descrizione dell'architettura documento / visualizzazione
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
ms.openlocfilehash: 51f963acf5aacdfe4050a076d3bb0e651a92d021
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62392974"
---
# <a name="a-portrait-of-the-documentview-architecture"></a>Descrizione dell'architettura documento/visualizzazione

Documenti e visualizzazioni vengono abbinate in una tipica applicazione MFC. Dati vengono archiviati nel documento, ma la vista dispone di accesso con privilegi ai dati. La separazione di documento dalla vista separa l'archiviazione e la manutenzione dei dati dalla relativa visualizzazione.

## <a name="gaining-access-to-document-data-from-the-view"></a>Ottenere l'accesso ai dati dalla visualizzazione del documento

Visualizzazione l'accesso ai dati del documento con il [GetDocument](../mfc/reference/cview-class.md#getdocument) funzionare, che restituisce un puntatore al documento o rendendo la visualizzazione di classe C++ `friend` della classe di documenti. La vista utilizza quindi l'accesso ai dati per ottenere i dati quando si è pronto per creare o modificare in altro modo.

Ad esempio, da della vista [OnDraw](../mfc/reference/cview-class.md#ondraw) funzione di membro, la vista utilizza `GetDocument` per ottenere un puntatore di documento. Quindi, viene utilizzato tale puntatore per accedere a un `CString` membro dati del documento. La visualizzazione passa la stringa per il `TextOut` (funzione). Per visualizzare il codice per questo esempio, vedere [disegno in una visualizzazione](../mfc/drawing-in-a-view.md).

## <a name="user-input-to-the-view"></a>Input dell'utente alla visualizzazione

La visualizzazione può anche interpretare un clic del mouse all'interno di se stesso come selezione o la modifica dei dati. Analogamente, potrebbe interpreta le sequenze di tasti come inserimento di dati o la modifica. Si supponga che l'utente digita una stringa in una vista che consente di gestire testo. La vista recupera un puntatore al documento e utilizza il puntatore del mouse per passare i nuovi dati per il documento in cui viene memorizzato in una struttura di dati.

## <a name="updating-multiple-views-of-the-same-document"></a>Aggiornamento di più visualizzazioni dello stesso documento

In un'applicazione con più viste dello stesso documento, ad esempio una finestra con separatore in un editor di testo, ovvero la visualizzazione passa prima di tutto i nuovi dati al documento. Viene quindi chiamato il documento [UpdateAllViews](../mfc/reference/cdocument-class.md#updateallviews) funzione membro, che indica tutte le visualizzazioni del documento da aggiornare autonomamente, che riflette i nuovi dati. Ciò consente di sincronizzare le visualizzazioni.

### <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Vantaggi dell'architettura documento/visualizzazione](../mfc/advantages-of-the-document-view-architecture.md)

- [Alternative all'architettura documento/visualizzazione](../mfc/alternatives-to-the-document-view-architecture.md)

## <a name="see-also"></a>Vedere anche

[Architettura documento/visualizzazione](../mfc/document-view-architecture.md)
