---
title: Creazione del controllo calendario mensile
ms.date: 11/04/2016
helpviewer_keywords:
- CMonthCalCtrl class [MFC], creating
- month calendar controls [MFC], creating
- month calendar controls [MFC]
ms.assetid: 185cc642-85e9-4365-8a4c-d90b75b010f7
ms.openlocfilehash: 809bc9fdf6b4477363d0a43d007a2884bb43a049
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62242187"
---
# <a name="creating-the-month-calendar-control"></a>Creazione del controllo calendario mensile

La modalità di creazione del controllo calendario mensile varia a seconda che il controllo venga utilizzato in una finestra di dialogo o che venga creato in una finestra non di dialogo.

### <a name="to-use-cmonthcalctrl-directly-in-a-dialog-box"></a>Per utilizzare CMonthCalCtrl direttamente in una finestra di dialogo

1. Nell'editor finestre aggiungere un controllo calendario mensile alla risorsa modello di finestra di dialogo. Specificare l'ID di controllo.

1. Specificare tutti gli stili necessari, utilizzando la finestra di dialogo Proprietà del controllo calendario mensile.

1. Usare la [Aggiunta guidata variabile membro](../ide/adding-a-member-variable-visual-cpp.md) per aggiungere una variabile membro di tipo [CMonthCalCtrl](../mfc/reference/cmonthcalctrl-class.md) con la proprietà del controllo. È possibile utilizzare questo membro per chiamare le funzioni membro di `CMonthCalCtrl`.

1. Utilizzare la finestra proprietà per eseguire il mapping di funzioni del gestore nella classe di finestra di dialogo per i messaggi di notifica del controllo calendario qualsiasi mese è necessario gestire (vedere [Mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md)).

1. Nelle [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog), impostare tutti gli stili aggiuntivi per il `CMonthCalCtrl` oggetto.

### <a name="to-use-cmonthcalctrl-in-a-nondialog-window"></a>Per utilizzare CMonthCalCtrl in una finestra non di dialogo

1. Definire il controllo nella classe di visualizzazione o della finestra.

1. Il controllo delle chiamate [Create](../mfc/reference/cmonthcalctrl-class.md#create) funzione di membro, possibilmente in [OnInitialUpdate](../mfc/reference/cview-class.md#oninitialupdate), possibilmente fin della finestra padre [OnCreate](../mfc/reference/cwnd-class.md#oncreate) funzione del gestore (se si è creazione di una sottoclasse del controllo). Impostare gli stili per il controllo.

## <a name="see-also"></a>Vedere anche

[Uso di CMonthCalCtrl](../mfc/using-cmonthcalctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
