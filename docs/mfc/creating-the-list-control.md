---
title: Creazione di un controllo elenco | Microsoft Docs
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
ms.openlocfilehash: c0586b28d2a772456d7efc8068b171bf37c9ba41
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46420777"
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

