---
title: Creazione del controllo selezione data e ora
ms.date: 11/04/2016
helpviewer_keywords:
- DateTimePicker control [MFC], creating
- CDateTimeCtrl class [MFC], creating
ms.assetid: 764ec2fb-98cd-478b-a5f2-d63f0bb12279
ms.openlocfilehash: 27a3a654a73300b7dd667d422fe84c73de524f3c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50456124"
---
# <a name="creating-the-date-and-time-picker-control"></a>Creazione del controllo selezione data e ora

Modo in cui viene creato il controllo di selezione data e ora dipende se si utilizza il controllo in una finestra di dialogo o crearlo in una finestra non di dialogo.

### <a name="to-use-cdatetimectrl-directly-in-a-dialog-box"></a>Usare CDateTimeCtrl direttamente in una finestra di dialogo

1. Nell'editor finestre, aggiungere un controllo data e ora selezione alla risorsa modello di finestra di dialogo. Specificare l'ID di controllo.

1. Specificare tutti gli stili necessari, utilizzando la finestra di dialogo delle proprietà del controllo selezione data e ora.

1. Usare la [Aggiunta guidata variabile membro](../ide/adding-a-member-variable-visual-cpp.md) per aggiungere una variabile membro di tipo [CDateTimeCtrl](../mfc/reference/cdatetimectrl-class.md) con la proprietà del controllo. È possibile utilizzare questo membro per chiamare le funzioni membro di `CDateTimeCtrl`.

1. Utilizzare la finestra proprietà per eseguire il mapping di funzioni del gestore della classe di finestra di dialogo per qualsiasi controllo date time picker [notification](../mfc/processing-notification-messages-in-date-and-time-picker-controls.md) messaggi necessari per gestire (vedere [Mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md)).

1. Nelle [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog), impostare tutti gli stili aggiuntivi per il `CDateTimeCtrl` oggetto.

### <a name="to-use-cdatetimectrl-in-a-nondialog-window"></a>Per usare CDateTimeCtrl in una finestra non di dialogo

1. Dichiarare il controllo nella classe di finestra o una vista.

1. Il controllo delle chiamate [Create](../mfc/reference/ctabctrl-class.md#create) funzione di membro, possibilmente in [OnInitialUpdate](../mfc/reference/cview-class.md#oninitialupdate), possibilmente fin della finestra padre [OnCreate](../mfc/reference/cwnd-class.md#oncreate) funzione del gestore (se si è creazione di una sottoclasse del controllo). Impostare gli stili per il controllo.

## <a name="see-also"></a>Vedere anche

[Uso di CDateTimeCtrl](../mfc/using-cdatetimectrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

