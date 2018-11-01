---
title: 'Trascinamento della selezione: implementazione di un obiettivo di rilascio'
ms.date: 11/04/2016
helpviewer_keywords:
- OLE drag and drop [MFC], implementing drop targets
- OLE drag and drop [MFC], drop target
- drag and drop [MFC], drop target
ms.assetid: 0689f1ec-5326-4008-b226-4b373c881358
ms.openlocfilehash: 55c8bbe9484a71ee95d43609b29a055b4177914b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50599875"
---
# <a name="drag-and-drop-implementing-a-drop-target"></a>Trascinamento della selezione: implementazione di un obiettivo di rilascio

Questo articolo illustra come rendere l'applicazione di un obiettivo di rilascio. Implementazione di un obiettivo di rilascio leggermente più impegnativa rispetto all'implementazione di un'origine di rilascio, ma è ancora relativamente semplice. Queste tecniche si applicano anche alle applicazioni non OLE.

#### <a name="to-implement-a-drop-target"></a>Per implementare un obiettivo di rilascio

1. Aggiungere una variabile membro per ogni visualizzazione dell'applicazione che si vuole essere un obiettivo di rilascio. Questa variabile membro deve essere di tipo `COleDropTarget` o una classe derivata da esso.

1. Funzione della classe di visualizzazione che gestisce il **WM_CREATE** messaggio (in genere `OnCreate`), chiamare la nuova variabile membro `Register` funzione membro. `Revoke` verrà chiamato automaticamente per l'utente quando viene eliminata la visualizzazione.

1. Sostituire le funzioni seguenti. Se si desidera lo stesso comportamento in tutta l'applicazione, eseguire l'override di queste funzioni nella classe di visualizzazione. Se si desidera modificare il comportamento in casi isolati il supporto o si desidera abilitare l'eliminazione sul non -`CView` windows, eseguire l'override di queste funzioni nel `COleDropTarget`-classe derivata.

    |Sostituisci|Per consentire|
    |--------------|--------------|
    |`OnDragEnter`|Operazioni da eseguire nella finestra di trascinamento. Chiamato quando il cursore viene posizionato prima di tutto la finestra.|
    |`OnDragLeave`|Comportamento speciale quando l'operazione di trascinamento lascia la finestra specificata.|
    |`OnDragOver`|Operazioni da eseguire nella finestra di trascinamento. Chiamato quando il cursore viene trascinato tra la finestra.|
    |`OnDrop`|Gestione dei dati rilasciati nella finestra specificata.|
    |`OnScrollBy`|Comportamento speciale quando lo scorrimento è necessario nella finestra di destinazione.|

Vedere il file MAINVIEW. File di CPP che è parte dell'esempio OLE MFC [OCLIENT](../visual-cpp-samples.md) per un esempio del funzionamento congiunto queste funzioni.

Per altre informazioni, vedere:

- [Implementazione di un'origine di rilascio](../mfc/drag-and-drop-implementing-a-drop-source.md)

- [Creazione ed eliminazione di oggetti dati e origini dati](../mfc/data-objects-and-data-sources-creation-and-destruction.md)

- [La modifica di oggetti dati e origini dati](../mfc/data-objects-and-data-sources-manipulation.md)

## <a name="see-also"></a>Vedere anche

[Trascinamento della selezione (OLE)](../mfc/drag-and-drop-ole.md)<br/>
[Classe COleDropTarget](../mfc/reference/coledroptarget-class.md)
