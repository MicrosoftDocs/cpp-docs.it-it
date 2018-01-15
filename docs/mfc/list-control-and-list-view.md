---
title: Controllo List e visualizzazione elenco | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- CListView class [MFC], and CListCtrl
- views [MFC], list and list control
- CListCtrl class [MFC], and CListView
- list views [MFC]
- list controls [MFC], List view
ms.assetid: 7aee1c48-b158-4399-be0b-be366993665e
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 46c9d559d642b6edf926b9feb49332ef7ec2924a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="list-control-and-list-view"></a>Controllo List e visualizzazione elenco
Per praticità, MFC incapsula il controllo elenco in due modi. È possibile utilizzare i controlli elenco:  
  
-   Direttamente, incorporando un [CListCtrl](../mfc/reference/clistctrl-class.md) oggetto in una classe di finestra di dialogo.  
  
-   Indirettamente, mediante classe [CListView](../mfc/reference/clistview-class.md).  
  
 `CListView`semplifica l'integrazione di un controllo elenco con l'architettura documento/visualizzazione MFC, che incapsula il controllo in modo analogo a [CEditView](../mfc/reference/ceditview-class.md) incapsula un controllo di modifica: il controllo occupa l'intera area della superficie di visualizzazione MFC. (La visualizzazione *è* il controllo, eseguire il cast a `CListView`.)  
  
 Oggetto `CListView` oggetto eredita da [CCtrlView](../mfc/reference/cctrlview-class.md) e relative classi base e aggiunge una funzione membro per recuperare il controllo elenco sottostante. Utilizzare i membri di visualizzazione con la vista come vista. Utilizzare il [GetListCtrl](../mfc/reference/clistview-class.md#getlistctrl) funzione membro per accedere alle funzioni membro del controllo elenco. Utilizzare questi membri:  
  
-   Aggiungere, eliminare o modificare gli "elementi" nell'elenco.  
  
-   Impostare o ottenere attributi del controllo elenco.  
  
 Per ottenere un riferimento al `CListCtrl` sottostante un `CListView`, chiamare `GetListCtrl` dalla classe di visualizzazione elenco:  
  
 [!code-cpp[NVC_MFCListView#4](../atl/reference/codesnippet/cpp/list-control-and-list-view_1.cpp)]  
  
 Questo argomento descrive entrambe le modalità di utilizzo del controllo elenco.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CListCtrl](../mfc/using-clistctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

