---
title: Creazione di un controllo elenco | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- CListCtrl class [MFC], creating control
- list controls [MFC]
ms.assetid: a4cb1729-31b6-4d2b-a44b-367474848a39
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 42457e223bb7e12da64be54d757e05d0bac3a028
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33342046"
---
# <a name="creating-the-list-control"></a>Creazione del controllo List
Modalità di controllo elenco ([CListCtrl](../mfc/reference/clistctrl-class.md)) viene creato varia a seconda se si sta utilizzando il controllo direttamente o tramite una classe [CListView](../mfc/reference/clistview-class.md) invece. Se si utilizza `CListView`, il framework crea la visualizzazione come parte della relativa sequenza di creazione documento/visualizzazione. Creazione della visualizzazione elenco consente di creare il controllo elenco nonché (vi è la stessa operazione). Viene creato il controllo della visualizzazione [OnCreate](../mfc/reference/cwnd-class.md#oncreate) funzione del gestore. In questo caso, il controllo è pronto per l'aggiunta di elementi mediante una chiamata a [GetListCtrl](../mfc/reference/clistview-class.md#getlistctrl).  
  
### <a name="to-use-clistctrl-directly-in-a-dialog-box"></a>Per utilizzare CListCtrl direttamente in una finestra di dialogo  
  
1.  Nell'editor finestre, aggiungere un controllo elenco alla risorsa modello di finestra di dialogo. Specificare l'ID di controllo.  
  
2.  Utilizzare il [Aggiunta guidata variabile membro](../ide/adding-a-member-variable-visual-cpp.md) per aggiungere una variabile membro di tipo `CListCtrl` con la proprietà del controllo. È possibile utilizzare questo membro per chiamare le funzioni membro di `CListCtrl`.  
  
3.  Utilizzare la finestra proprietà per eseguire il mapping di funzioni del gestore della classe di finestra di dialogo per la notifica di qualsiasi controllo nell'elenco dei messaggi è necessario gestire (vedere [Mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md)).  
  
4.  In [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog), impostare gli stili per il `CListCtrl`. Vedere [la modifica degli stili del controllo List](../mfc/changing-list-control-styles.md). Questo determina il tipo di "" tipo di visualizzazione nel controllo, sebbene sia possibile modificare la visualizzazione in un secondo momento.  
  
### <a name="to-use-clistctrl-in-a-nondialog-window"></a>Per utilizzare CListCtrl in una finestra non di dialogo  
  
1.  Definire il controllo nella classe di visualizzazione o della finestra.  
  
2.  Chiamare il controllo [crea](../mfc/reference/clistctrl-class.md#create) funzione membro, possibilmente in [OnInitialUpdate](../mfc/reference/cview-class.md#oninitialupdate)e possibilmente fin della finestra padre [OnCreate](../mfc/reference/cwnd-class.md#oncreate) (se la funzione del gestore creazione di una sottoclasse del controllo). Impostare gli stili per il controllo.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CListCtrl](../mfc/using-clistctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

