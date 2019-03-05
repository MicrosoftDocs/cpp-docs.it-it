---
title: "Trascinamento della selezione: Implementazione di un'origine di rilascio"
ms.date: 11/04/2016
helpviewer_keywords:
- OLE drag and drop [MFC], initiating drag operations
- drag and drop [MFC], calling DoDragDrop
- OLE drag and drop [MFC], drop source
- OLE drag and drop [MFC], calling DoDragDrop
- drag and drop [MFC], initiating drag operations
- drag and drop [MFC], drop source
ms.assetid: 0ed2fda0-63fa-4b1e-b398-f1f142f40035
ms.openlocfilehash: cceed8517c7b63588c7b1b90e3306d90f0921b78
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57300748"
---
# <a name="drag-and-drop-implementing-a-drop-source"></a>Trascinamento della selezione: Implementazione di un'origine di rilascio

Questo articolo illustra come ottenere l'applicazione per fornire dati a un'operazione di trascinamento e rilascio.

Implementazione di base di un'origine di trascinamento è relativamente semplice. Il primo passaggio è determinare quali eventi inizia un'operazione di trascinamento. Consiglia di linee guida dell'interfaccia utente definiscono l'inizio di un'operazione di trascinamento della selezione dei dati e un **WM_LBUTTONDOWN** evento che si verificano in un punto all'interno dei dati selezionati. Gli esempi OLE MFC [OCLIENT](../visual-cpp-samples.md) e [HIERSVR](../visual-cpp-samples.md) seguire queste linee guida.

Se l'applicazione è un contenitore e i dati selezionati sono collegato o un oggetto di tipo incorporato `COleClientItem`, chiamare il `DoDragDrop` funzione membro. In caso contrario, creare un `COleDataSource` dell'oggetto, inizializzarlo con la selezione e chiamare l'oggetto origine dati `DoDragDrop` funzione membro. Se l'applicazione è un server, usare `COleServerItem::DoDragDrop`. Per informazioni sulla personalizzazione del comportamento di trascinamento e rilascio standard, vedere l'articolo [trascinamento della selezione: Personalizzazione](../mfc/drag-and-drop-customizing.md).

Se `DoDragDrop` restituisce **DROPEFFECT_MOVE**, eliminare immediatamente i dati di origine dal documento di origine. Nessun altro valore restituito da `DoDragDrop` avrà effetto su un'origine di trascinamento.

Per altre informazioni, vedere:

- [Implementazione di un obiettivo di rilascio](../mfc/drag-and-drop-implementing-a-drop-target.md)

- [Selezione e trascinamento personalizzazione](../mfc/drag-and-drop-customizing.md)

- [Creazione ed eliminazione di oggetti dati e origini dati](../mfc/data-objects-and-data-sources-creation-and-destruction.md)

- [La modifica di oggetti dati e origini dati](../mfc/data-objects-and-data-sources-manipulation.md)

## <a name="see-also"></a>Vedere anche

[Trascinamento della selezione (OLE)](../mfc/drag-and-drop-ole.md)<br/>
[COleDataSource:: DoDragDrop](../mfc/reference/coledatasource-class.md#dodragdrop)<br/>
[COleClientItem::DoDragDrop](../mfc/reference/coleclientitem-class.md#dodragdrop)<br/>
[CView::OnDragLeave](../mfc/reference/cview-class.md#ondragleave)
