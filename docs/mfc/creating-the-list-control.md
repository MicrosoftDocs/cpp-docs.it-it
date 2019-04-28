---
title: Creazione del controllo List
ms.date: 11/04/2016
helpviewer_keywords:
- CListCtrl class [MFC], creating control
- list controls [MFC]
ms.assetid: a4cb1729-31b6-4d2b-a44b-367474848a39
ms.openlocfilehash: 7b2cb47699339dd413dc1bfae7623069da56e7a4
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62242250"
---
# <a name="creating-the-list-control"></a>Creazione del controllo List

Come controllare l'elenco ([CListCtrl](../mfc/reference/clistctrl-class.md)) viene creato varia a seconda che si sta usando il controllo direttamente o tramite classi [CListView](../mfc/reference/clistview-class.md) invece. Se si usa `CListView`, il framework crea la visualizzazione come parte della relativa sequenza di creazione documento/visualizzazione. Creazione della visualizzazione elenco consente di creare il controllo elenco anche (i due sono la stessa operazione). Viene creato il controllo della visualizzazione [OnCreate](../mfc/reference/cwnd-class.md#oncreate) funzione del gestore. In questo caso, il controllo è pronto per l'aggiunta di elementi, tramite una chiamata a [GetListCtrl](../mfc/reference/clistview-class.md#getlistctrl).

### <a name="to-use-clistctrl-directly-in-a-dialog-box"></a>Usare CListCtrl direttamente in una finestra di dialogo

1. Nell'editor finestre, aggiungere un controllo elenco per la risorsa modello di finestra di dialogo. Specificare l'ID di controllo.

1. Usare la [Aggiunta guidata variabile membro](../ide/adding-a-member-variable-visual-cpp.md) per aggiungere una variabile membro di tipo `CListCtrl` con la proprietà del controllo. È possibile utilizzare questo membro per chiamare le funzioni membro di `CListCtrl`.

1. Utilizzare la finestra proprietà per eseguire il mapping di funzioni del gestore nella classe di finestra di dialogo per qualsiasi notifica del controllo elenco messaggi è necessario gestire (vedere [Mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md)).

1. Nelle [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog), impostare gli stili per il `CListCtrl`. Visualizzare [modifica degli stili del controllo elenco](../mfc/changing-list-control-styles.md). Ciò determina il tipo di "view" è visualizzato nel controllo, sebbene sia possibile modificare la visualizzazione in un secondo momento.

### <a name="to-use-clistctrl-in-a-nondialog-window"></a>Per usare CListCtrl in una finestra non di dialogo

1. Definire il controllo nella classe di visualizzazione o della finestra.

1. Il controllo delle chiamate [Create](../mfc/reference/clistctrl-class.md#create) funzione di membro, possibilmente in [OnInitialUpdate](../mfc/reference/cview-class.md#oninitialupdate), possibilmente fin della finestra padre [OnCreate](../mfc/reference/cwnd-class.md#oncreate) funzione del gestore (se si è creazione di una sottoclasse del controllo). Impostare gli stili per il controllo.

## <a name="see-also"></a>Vedere anche

[Uso di CListCtrl](../mfc/using-clistctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
