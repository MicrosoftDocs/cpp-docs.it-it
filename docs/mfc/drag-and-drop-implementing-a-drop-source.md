---
title: "Trascinamento della sezione: implementazione di un&#39;origine di rilascio | Microsoft Docs"
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
  - "trascinamento della selezione, chiamata a DoDragDrop"
  - "trascinamento della selezione, origine di rilascio"
  - "trascinamento della selezione, avvio delle operazioni di trascinamento"
  - "trascinamento della selezione OLE, chiamata a DoDragDrop"
  - "trascinamento della selezione OLE, origine di rilascio"
  - "trascinamento della selezione OLE, avvio delle operazioni di trascinamento"
ms.assetid: 0ed2fda0-63fa-4b1e-b398-f1f142f40035
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Trascinamento della sezione: implementazione di un&#39;origine di rilascio
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo viene illustrato come permettere ad un'applicazione di fornire dati per un'operazione di trascinamento della selezione.  
  
 L'implementazione di base di un'origine di trascinamento è relativamente semplice.  Il primo passaggio consiste nel determinare quali eventi devono dare inizio ad un'operazione di trascinamento.  Le linee guida consigliate dell'interfaccia utente definiscono l'inizio di un'operazione di trascinamento della selezione come la selezione dei dati e di un evento `WM_LBUTTONDOWN` che si deve verificare in un punto interno ai dati selezionati.  Gli esempi OLE MFC [OCLIENT](../top/visual-cpp-samples.md) e [HIERSVR](../top/visual-cpp-samples.md) seguono queste linee guida.  
  
 Se l'applicazione è un contenitore e i dati selezionati sono un oggetto collegato o un oggetto incorporato di tipo `COleClientItem`, chiamare la funzione membro `DoDragDrop`.  In caso contrario, creare un oggetto `COleDataSource`, inizializzarlo con la selezione e chiamare la funzione membro `DoDragDrop` dell'oggetto origine dati.  Se l'applicazione è un server, utilizzare `COleServerItem::DoDragDrop`.  Per informazioni sulla personalizzazione del comportamento di trascinamento della selezione standard, vedere l'articolo [Trascinamento della selezione: personalizzazione](../mfc/drag-and-drop-customizing.md).  
  
 Se `DoDragDrop` restituisce `DROPEFFECT_MOVE`, eliminare immediatamente i dati di origine dal documento di origine.  Nessun altro valore restituito da `DoDragDrop` ha un qualche effetto su un'origine di trascinamento.  
  
 Per ulteriori informazioni, vedere:  
  
-   [Implementazione delle destinazioni di rilascio](../mfc/drag-and-drop-implementing-a-drop-target.md)  
  
-   [Personalizzazione del trascinamento della selezione](../mfc/drag-and-drop-customizing.md)  
  
-   [Creazione ed eliminazione degli oggetti dati OLE e origini dati](../mfc/data-objects-and-data-sources-creation-and-destruction.md)  
  
-   [Modifica degli oggetti dati OLE e origini dati](../mfc/data-objects-and-data-sources-manipulation.md)  
  
## Vedere anche  
 [Trascinamento \(OLE\)](../mfc/drag-and-drop-ole.md)   
 [COleDataSource::DoDragDrop](../Topic/COleDataSource::DoDragDrop.md)   
 [COleClientItem::DoDragDrop](../Topic/COleClientItem::DoDragDrop.md)   
 [CView::OnDragLeave](../Topic/CView::OnDragLeave.md)