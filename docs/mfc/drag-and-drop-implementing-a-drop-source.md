---
title: "Trascinamento della selezione: implementazione di un'origine di rilascio | Documenti Microsoft"
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- OLE drag and drop [MFC], initiating drag operations
- drag and drop [MFC], calling DoDragDrop
- OLE drag and drop [MFC], drop source
- OLE drag and drop [MFC], calling DoDragDrop
- drag and drop [MFC], initiating drag operations
- drag and drop [MFC], drop source
ms.assetid: 0ed2fda0-63fa-4b1e-b398-f1f142f40035
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9e77119ac5b662165fd965047ae60fc2d5818cc1
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36928980"
---
# <a name="drag-and-drop-implementing-a-drop-source"></a>Trascinamento della sezione: implementazione di un'origine di rilascio
In questo articolo viene illustrato come ottenere l'applicazione per fornire dati a un'operazione di trascinamento e rilascio.  
  
 Implementazione di base di un'origine di rilascio è relativamente semplice. Il primo passaggio consiste nel determinare quali eventi inizia un'operazione di trascinamento. Consiglia di linee guida sull'interfaccia utente definiscono l'inizio di un'operazione di trascinamento della selezione di dati e un **WM_LBUTTONDOWN** evento che si verifica in un punto all'interno dei dati selezionati. Gli esempi OLE MFC [OCLIENT](../visual-cpp-samples.md) e [HIERSVR](../visual-cpp-samples.md) seguire queste linee guida.  
  
 Se l'applicazione è un contenitore e i dati selezionati sono collegato o un oggetto del tipo incorporato `COleClientItem`, chiamare il relativo `DoDragDrop` funzione membro. In caso contrario, creare una `COleDataSource` dell'oggetto, inizializzarlo con la selezione e chiamare l'oggetto origine dati `DoDragDrop` funzione membro. Se l'applicazione è un server, utilizzare `COleServerItem::DoDragDrop`. Per informazioni sulla personalizzazione del comportamento di trascinamento e rilascio standard, vedere l'articolo [trascinamento della selezione: personalizzazione](../mfc/drag-and-drop-customizing.md).  
  
 Se `DoDragDrop` restituisce **DROPEFFECT_MOVE**, eliminare immediatamente i dati di origine dal documento di origine. Nessun altro valore restituito da `DoDragDrop` avrà effetto su un'origine di rilascio.  
  
 Per altre informazioni, vedere:  
  
-   [Implementazione di un obiettivo di rilascio](../mfc/drag-and-drop-implementing-a-drop-target.md)  
  
-   [Trascinamento della personalizzazione](../mfc/drag-and-drop-customizing.md)  
  
-   [Creazione e distruzione di oggetti dati e origini dati](../mfc/data-objects-and-data-sources-creation-and-destruction.md)  
  
-   [La modifica di oggetti dati e origini dati](../mfc/data-objects-and-data-sources-manipulation.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Trascinamento della selezione (OLE)](../mfc/drag-and-drop-ole.md)   
 [COleDataSource:: DoDragDrop](../mfc/reference/coledatasource-class.md#dodragdrop)   
 [COleClientItem::DoDragDrop](../mfc/reference/coleclientitem-class.md#dodragdrop)   
 [CView::OnDragLeave](../mfc/reference/cview-class.md#ondragleave)

