---
title: Una descrizione dell'architettura documento / visualizzazione | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d366cf7c9aee6988d715edbe30e3938c30557e2a
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33329816"
---
# <a name="a-portrait-of-the-documentview-architecture"></a>Descrizione dell'architettura documento/visualizzazione
Documenti e visualizzazioni vengono combinate in una tipica applicazione MFC. Dati vengono archiviati nel documento, ma la vista dispone di accesso ai dati con privilegi. La separazione del documento dalla visualizzazione separa l'archiviazione e la manutenzione dei dati dalla relativa visualizzazione.  
  
## <a name="gaining-access-to-document-data-from-the-view"></a>Accesso a dati della visualizzazione del documento  
 Visualizzazione l'accesso ai dati del documento con il [GetDocument](../mfc/reference/cview-class.md#getdocument) funzione che restituisce un puntatore al documento o rendendo la visualizzazione di classe C++ `friend` della classe di documento. La vista utilizza quindi l'accesso ai dati per ottenere i dati quando è pronto per creare o modificare in altro modo.  
  
 Ad esempio, da della vista [OnDraw](../mfc/reference/cview-class.md#ondraw) funzione membro, la vista utilizza **GetDocument** per ottenere un puntatore al documento. Quindi, viene utilizzato tale puntatore per accedere a un `CString` membro dati nel documento. La visualizzazione passa la stringa per il `TextOut` (funzione). Per visualizzare il codice per questo esempio, vedere [disegno in una visualizzazione](../mfc/drawing-in-a-view.md).  
  
## <a name="user-input-to-the-view"></a>Input dell'utente per la visualizzazione  
 La visualizzazione potrebbe essere anche interpretare un clic del mouse all'interno di se stesso come selezione o la modifica dei dati. Analogamente l'interpretazione potrebbe essere sequenze di tasti come immissione di dati o la modifica. Si supponga che l'utente digita una stringa in una vista che gestisce il testo. La vista recupera un puntatore al documento e utilizza il puntatore del mouse per passare i dati di nuovo il documento in cui viene memorizzato in una struttura di dati.  
  
## <a name="updating-multiple-views-of-the-same-document"></a>Aggiornamento di più visualizzazioni dello stesso documento  
 In un'applicazione con più viste dello stesso documento, ad esempio una finestra con separatore in un editor di testo, la visualizzazione passa innanzitutto i nuovi dati al documento. Viene quindi chiamato il documento [UpdateAllViews](../mfc/reference/cdocument-class.md#updateallviews) funzione membro, che indica tutte le visualizzazioni del documento, eseguire l'aggiornamento, indicare i nuovi dati. Consente di sincronizzare le viste.  
  
### <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Vantaggi dell'architettura documento/visualizzazione](../mfc/advantages-of-the-document-view-architecture.md)  
  
-   [Alternative all'architettura documento/visualizzazione](../mfc/alternatives-to-the-document-view-architecture.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Architettura documento/visualizzazione](../mfc/document-view-architecture.md)

