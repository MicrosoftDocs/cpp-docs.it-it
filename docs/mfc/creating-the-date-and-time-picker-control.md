---
title: Creazione del controllo selezione data e ora
ms.date: 11/04/2016
helpviewer_keywords:
- DateTimePicker control [MFC], creating
- CDateTimeCtrl class [MFC], creating
ms.assetid: 764ec2fb-98cd-478b-a5f2-d63f0bb12279
ms.openlocfilehash: de9baf63577d163b82da1c5977a6ccba6539c73a
ms.sourcegitcommit: 3caf5261b3ea80d9cf14038c116ba981d655cd13
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/11/2019
ms.locfileid: "70907595"
---
# <a name="creating-the-date-and-time-picker-control"></a>Creazione del controllo selezione data e ora

La modalità di creazione del controllo selezione data e ora varia a seconda che il controllo venga utilizzato in una finestra di dialogo o in una finestra non di dialogo.

### <a name="to-use-cdatetimectrl-directly-in-a-dialog-box"></a>Per utilizzare CDateTimeCtrl direttamente in una finestra di dialogo

1. Nell'editor finestre aggiungere un controllo selezione data e ora alla risorsa del modello di finestra di dialogo. Specificare l'ID di controllo.

1. Specificare gli stili necessari, usando la finestra di dialogo Proprietà del controllo selezione data e ora.

1. Utilizzare la [procedura guidata Aggiungi variabile membro](../ide/adding-a-member-variable-visual-cpp.md) per aggiungere una variabile membro di tipo [CDateTimeCtrl](../mfc/reference/cdatetimectrl-class.md) con la proprietà del controllo. È possibile utilizzare questo membro per chiamare le funzioni membro di `CDateTimeCtrl`.

1. Usare la [creazione guidata classe](reference/mfc-class-wizard.md) per eseguire il mapping delle funzioni del gestore nella classe della finestra di dialogo per tutti i messaggi di [notifica](../mfc/processing-notification-messages-in-date-and-time-picker-controls.md) del controllo selezione data e ora che è necessario gestire (vedere [mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md)).

1. In [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog)impostare gli stili aggiuntivi per l' `CDateTimeCtrl` oggetto.

### <a name="to-use-cdatetimectrl-in-a-nondialog-window"></a>Per usare CDateTimeCtrl in una finestra non di dialogo

1. Dichiarare il controllo nella visualizzazione o nella classe della finestra.

1. Chiamare la funzione membro [create](../mfc/reference/ctabctrl-class.md#create) del controllo, possibilmente in [OnInitialUpdate](../mfc/reference/cview-class.md#oninitialupdate), probabilmente all'inizio della funzione del gestore [OnCreate](../mfc/reference/cwnd-class.md#oncreate) della finestra padre (se si sta eseguendo la sottoclasse del controllo). Impostare gli stili per il controllo.

## <a name="see-also"></a>Vedere anche

[Uso di CDateTimeCtrl](../mfc/using-cdatetimectrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
