---
title: 'Trascinamento della selezione: implementazione di un obiettivo di rilascio | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- OLE drag and drop [MFC], implementing drop targets
- OLE drag and drop [MFC], drop target
- drag and drop [MFC], drop target
ms.assetid: 0689f1ec-5326-4008-b226-4b373c881358
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 414437f044869fef7ae48883a88688ad50c9ac5f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33344269"
---
# <a name="drag-and-drop-implementing-a-drop-target"></a>Trascinamento della selezione: implementazione di un obiettivo di rilascio
In questo articolo viene descritto come rendere l'applicazione di un obiettivo di rilascio. Implementazione di un obiettivo di rilascio leggermente più impegnativa rispetto all'implementazione di un'origine di rilascio, ma è comunque relativamente semplice. Queste tecniche si applicano anche alle applicazioni non OLE.  
  
#### <a name="to-implement-a-drop-target"></a>Per implementare un obiettivo di rilascio  
  
1.  Aggiungere una variabile membro per ogni visualizzazione dell'applicazione che si desidera essere una destinazione di rilascio. Questa variabile membro deve essere di tipo `COleDropTarget` o una classe derivata da esso.  
  
2.  Dalla funzione della classe di visualizzazione che gestisce il `WM_CREATE` messaggio (in genere `OnCreate`), chiamare la nuova variabile membro `Register` funzione membro. `Revoke` verrà chiamato automaticamente per l'utente quando viene eliminata la visualizzazione.  
  
3.  Sostituire le funzioni seguenti. Se si desidera lo stesso comportamento in tutta l'applicazione, eseguire l'override di queste funzioni nella classe di visualizzazione. Se si desidera modificare il comportamento in casi isolati o abilitare l'eliminazione nelle non`CView` windows, eseguire l'override di queste funzioni nel `COleDropTarget`-classe derivata.  
  
    |Sostituisci|Per consentire|  
    |--------------|--------------|  
    |`OnDragEnter`|Operazioni da eseguire nella finestra di trascinamento. Chiamato quando il cursore nella prima finestra.|  
    |`OnDragLeave`|Comportamento speciale quando l'operazione di trascinamento lascia la finestra specificata.|  
    |`OnDragOver`|Operazioni da eseguire nella finestra di trascinamento. Chiamato quando il cursore viene trascinato nella finestra.|  
    |`OnDrop`|Gestione dei dati da eliminare nella finestra specificata.|  
    |`OnScrollBy`|Comportamento speciale per quando è necessario lo scorrimento nella finestra di destinazione.|  
  
 Vedere il file MAINVIEW. File di CPP che è parte dell'esempio OLE MFC [OCLIENT](../visual-cpp-samples.md) per un esempio del funzionamento congiunto queste funzioni.  
  
 Per altre informazioni, vedere:  
  
-   [Implementazione di un'origine di rilascio](../mfc/drag-and-drop-implementing-a-drop-source.md)  
  
-   [Creazione e distruzione di oggetti dati e origini dati](../mfc/data-objects-and-data-sources-creation-and-destruction.md)  
  
-   [La modifica di oggetti dati e origini dati](../mfc/data-objects-and-data-sources-manipulation.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Trascinamento della selezione (OLE)](../mfc/drag-and-drop-ole.md)   
 [Classe COleDropTarget](../mfc/reference/coledroptarget-class.md)
