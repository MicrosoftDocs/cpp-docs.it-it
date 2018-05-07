---
title: Controllo List e visualizzazione elenco | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- CListView class [MFC], and CListCtrl
- views [MFC], list and list control
- CListCtrl class [MFC], and CListView
- list views [MFC]
- list controls [MFC], List view
ms.assetid: 7aee1c48-b158-4399-be0b-be366993665e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a3279ae5edc02ec52ded065c4a45d18e3236802f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="list-control-and-list-view"></a>Controllo List e visualizzazione elenco
Per praticità, MFC incapsula il controllo elenco in due modi. È possibile utilizzare i controlli elenco:  
  
-   Direttamente, incorporando un [CListCtrl](../mfc/reference/clistctrl-class.md) oggetto in una classe di finestra di dialogo.  
  
-   Indirettamente, mediante classe [CListView](../mfc/reference/clistview-class.md).  
  
 `CListView` semplifica l'integrazione di un controllo elenco con l'architettura documento/visualizzazione MFC, che incapsula il controllo in modo analogo a [CEditView](../mfc/reference/ceditview-class.md) incapsula un controllo di modifica: il controllo occupa l'intera superficie di attacco di visualizzazione MFC. (La visualizzazione *è* il controllo, eseguire il cast a `CListView`.)  
  
 Oggetto `CListView` oggetto eredita da [CCtrlView](../mfc/reference/cctrlview-class.md) e relative classi base e aggiunge una funzione membro per recuperare il controllo elenco sottostante. Utilizzare i membri di visualizzazione con la vista come vista. Utilizzare il [GetListCtrl](../mfc/reference/clistview-class.md#getlistctrl) funzione membro per accedere alle funzioni membro del controllo elenco. Utilizzare questi membri:  
  
-   Aggiungere, eliminare o modificare gli "elementi" nell'elenco.  
  
-   Impostare o ottenere attributi del controllo elenco.  
  
 Per ottenere un riferimento al `CListCtrl` sottostante un `CListView`, chiamare `GetListCtrl` dalla classe di visualizzazione elenco:  
  
 [!code-cpp[NVC_MFCListView#4](../atl/reference/codesnippet/cpp/list-control-and-list-view_1.cpp)]  
  
 Questo argomento descrive entrambe le modalità di utilizzo del controllo elenco.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CListCtrl](../mfc/using-clistctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

