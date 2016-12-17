---
title: "Trascinamento della sezione: implementazione di una destinazione di rilascio | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "trascinamento della selezione, destinazione di rilascio"
  - "trascinamento della selezione OLE, destinazione di rilascio"
  - "trascinamento della selezione OLE, implementazione delle destinazioni di rilascio"
ms.assetid: 0689f1ec-5326-4008-b226-4b373c881358
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Trascinamento della sezione: implementazione di una destinazione di rilascio
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questo articolo delinea come rendere l'applicazione una destinazione di rilascio.  Implementare una destinazione di rilascio richiede poco più lavoro che implementare un'origine di trascinamento, ma è ancora relativamente semplice.  Queste tecniche si applicano anche ad applicazioni non OLE.  
  
#### Per implementare una destinazione di rilascio  
  
1.  Aggiungere una variabile membro a ciascuna visualizzazione nell'applicazione che si desidera rendere destinazione di rilascio.  Questa variabile membro deve essere di tipo `COleDropTarget` o una classe derivata da esso.  
  
2.  Dalla funzione della classe di visualizzazione che gestisce il messaggio `WM_CREATE` \(in genere `OnCreate`\), chiamare il nuovo membro `Register` della variabile.  `Revoke` verrà chiamato automaticamente quando la visualizzazione viene distrutta.  
  
3.  Eseguire l'override delle funzioni seguenti.  Se si vuole lo stesso comportamento in tutta l'applicazione, eseguire l'override di queste funzioni nella classe di visualizzazione.  Se si desidera modificare il comportamento in casi isolati o si desidera abilitare il rilascio sulle finestre non\-`CView`, eseguire l'override di queste funzioni nella classe derivata `COleDropTarget`.  
  
    |Override|Per concedere|  
    |--------------|-------------------|  
    |`OnDragEnter`|Il verificarsi di operazioni di rilascio nella finestra.  Chiamata quando il cursore entra per la prima volta nella finestra.|  
    |`OnDragLeave`|Comportamento speciale quando l'operazione di trascinamento lascia la finestra specificata.|  
    |`OnDragOver`|Verificarsi di operazioni di rilascio nella finestra.  Chiamato quando il cursore viene trascinato attraverso la finestra.|  
    |`OnDrop`|Gestione dei dati che vengono rilasciati nella finestra specificata.|  
    |`OnScrollBy`|Comportamento speciale per quando lo scorrimento è necessario nella finestra di destinazione.|  
  
 Vedere il file MAINVIEW.CPP che è parte dell'esempio MFC OLE [OCLIENT](../top/visual-cpp-samples.md) per un esempio di come queste funzioni interagiscono.  
  
 Per ulteriori informazioni, vedere:  
  
-   [Implementazione di un origine di rilascio](../mfc/drag-and-drop-implementing-a-drop-source.md)  
  
-   [Creazione ed eliminazione degli oggetti dati OLE e origini dati](../mfc/data-objects-and-data-sources-creation-and-destruction.md)  
  
-   [Modifica di oggetti dati e origini dati OLE](../mfc/data-objects-and-data-sources-manipulation.md)  
  
## Vedere anche  
 [Trascinamento \(OLE\)](../mfc/drag-and-drop-ole.md)   
 [COleDropTarget Class](../mfc/reference/coledroptarget-class.md)