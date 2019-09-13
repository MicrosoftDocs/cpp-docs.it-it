---
title: Creazione del controllo List
ms.date: 11/04/2016
helpviewer_keywords:
- CListCtrl class [MFC], creating control
- list controls [MFC]
ms.assetid: a4cb1729-31b6-4d2b-a44b-367474848a39
ms.openlocfilehash: f1c5d8db93421e1d3ae0e39aec82bdf0f5529f1f
ms.sourcegitcommit: 3caf5261b3ea80d9cf14038c116ba981d655cd13
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/11/2019
ms.locfileid: "70907920"
---
# <a name="creating-the-list-control"></a>Creazione del controllo List

Il modo in cui viene creato il controllo elenco ([CListCtrl](../mfc/reference/clistctrl-class.md)) dipende dal fatto che si stia usando direttamente il controllo o usando la classe [CListView](../mfc/reference/clistview-class.md) . Se si usa `CListView`, il Framework costruisce la vista come parte della sequenza di creazione di documenti/visualizzazioni. La creazione della visualizzazione elenco Crea anche il controllo elenco (i due sono uguali). Il controllo viene creato nella funzione del gestore [OnCreate](../mfc/reference/cwnd-class.md#oncreate) della visualizzazione. In questo caso, il controllo è pronto per l'aggiunta di elementi tramite una chiamata a [GetListCtrl](../mfc/reference/clistview-class.md#getlistctrl).

### <a name="to-use-clistctrl-directly-in-a-dialog-box"></a>Per utilizzare CListCtrl direttamente in una finestra di dialogo

1. Nell'editor finestre aggiungere un controllo elenco alla risorsa del modello di finestra di dialogo. Specificare l'ID di controllo.

1. Utilizzare la [procedura guidata Aggiungi variabile membro](../ide/adding-a-member-variable-visual-cpp.md) per aggiungere una variabile membro di `CListCtrl` tipo con la proprietà del controllo. È possibile utilizzare questo membro per chiamare le funzioni membro di `CListCtrl`.

1. Usare la [creazione guidata classe](reference/mfc-class-wizard.md) per eseguire il mapping delle funzioni del gestore nella classe della finestra di dialogo per tutti i messaggi di notifica del controllo elenco che è necessario gestire (vedere [mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md)).

1. In [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog)impostare gli stili per l'oggetto `CListCtrl`. Vedere [modifica degli stili del controllo elenco](../mfc/changing-list-control-styles.md). Questo determina il tipo di "visualizzazione" visualizzato nel controllo, sebbene sia possibile modificare la visualizzazione in un secondo momento.

### <a name="to-use-clistctrl-in-a-nondialog-window"></a>Per utilizzare CListCtrl in una finestra non di dialogo

1. Definire il controllo nella classe di visualizzazione o della finestra.

1. Chiamare la funzione membro [create](../mfc/reference/clistctrl-class.md#create) del controllo, possibilmente in [OnInitialUpdate](../mfc/reference/cview-class.md#oninitialupdate), probabilmente all'inizio della funzione del gestore [OnCreate](../mfc/reference/cwnd-class.md#oncreate) della finestra padre (se si sta eseguendo la sottoclasse del controllo). Impostare gli stili per il controllo.

## <a name="see-also"></a>Vedere anche

[Uso di CListCtrl](../mfc/using-clistctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
