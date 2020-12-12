---
description: 'Altre informazioni su: creazione del controllo selezione data e ora'
title: Creazione del controllo selezione data e ora
ms.date: 11/04/2016
helpviewer_keywords:
- DateTimePicker control [MFC], creating
- CDateTimeCtrl class [MFC], creating
ms.assetid: 764ec2fb-98cd-478b-a5f2-d63f0bb12279
ms.openlocfilehash: 0ead228e98fdcbcfe707fee88c175453808e7047
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97309732"
---
# <a name="creating-the-date-and-time-picker-control"></a>Creazione del controllo selezione data e ora

La modalità di creazione del controllo selezione data e ora varia a seconda che il controllo venga utilizzato in una finestra di dialogo o in una finestra non di dialogo.

### <a name="to-use-cdatetimectrl-directly-in-a-dialog-box"></a>Per utilizzare CDateTimeCtrl direttamente in una finestra di dialogo

1. Nell'editor finestre aggiungere un controllo selezione data e ora alla risorsa del modello di finestra di dialogo. Specificare l'ID di controllo.

1. Specificare gli stili necessari, usando la finestra di dialogo Proprietà del controllo selezione data e ora.

1. Utilizzare la [procedura guidata Aggiungi variabile membro](../ide/adding-a-member-variable-visual-cpp.md) per aggiungere una variabile membro di tipo [CDateTimeCtrl](reference/cdatetimectrl-class.md) con la proprietà del controllo. È possibile utilizzare questo membro per chiamare le funzioni membro di `CDateTimeCtrl`.

1. Usare la [creazione guidata classe](reference/mfc-class-wizard.md) per eseguire il mapping delle funzioni del gestore nella classe della finestra di dialogo per tutti i messaggi di [notifica](processing-notification-messages-in-date-and-time-picker-controls.md) del controllo selezione data e ora che è necessario gestire (vedere [mapping di messaggi a funzioni](reference/mapping-messages-to-functions.md)).

1. In [OnInitDialog](reference/cdialog-class.md#oninitdialog)impostare gli stili aggiuntivi per l' `CDateTimeCtrl` oggetto.

### <a name="to-use-cdatetimectrl-in-a-nondialog-window"></a>Per usare CDateTimeCtrl in una finestra non di dialogo

1. Dichiarare il controllo nella visualizzazione o nella classe della finestra.

1. Chiamare la funzione membro [create](reference/ctabctrl-class.md#create) del controllo, possibilmente in [OnInitialUpdate](reference/cview-class.md#oninitialupdate), probabilmente all'inizio della funzione del gestore [OnCreate](reference/cwnd-class.md#oncreate) della finestra padre (se si sta eseguendo la sottoclasse del controllo). Impostare gli stili per il controllo.

## <a name="see-also"></a>Vedi anche

[Utilizzo di CDateTimeCtrl](using-cdatetimectrl.md)<br/>
[Controlli](controls-mfc.md)
