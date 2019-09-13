---
title: Creazione del controllo calendario mensile
ms.date: 11/04/2016
helpviewer_keywords:
- CMonthCalCtrl class [MFC], creating
- month calendar controls [MFC], creating
- month calendar controls [MFC]
ms.assetid: 185cc642-85e9-4365-8a4c-d90b75b010f7
ms.openlocfilehash: 9e430a86c2ac08bde0f031a4c91b9ae5c6f570f3
ms.sourcegitcommit: 3caf5261b3ea80d9cf14038c116ba981d655cd13
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/11/2019
ms.locfileid: "70907497"
---
# <a name="creating-the-month-calendar-control"></a>Creazione del controllo calendario mensile

La modalità di creazione del controllo calendario mensile varia a seconda che il controllo venga utilizzato in una finestra di dialogo o che venga creato in una finestra non di dialogo.

### <a name="to-use-cmonthcalctrl-directly-in-a-dialog-box"></a>Per utilizzare CMonthCalCtrl direttamente in una finestra di dialogo

1. Nell'editor finestre aggiungere un controllo calendario mensile alla risorsa modello di finestra di dialogo. Specificare l'ID di controllo.

1. Specificare tutti gli stili necessari, utilizzando la finestra di dialogo Proprietà del controllo calendario mensile.

1. Utilizzare la [procedura guidata Aggiungi variabile membro](../ide/adding-a-member-variable-visual-cpp.md) per aggiungere una variabile membro di tipo [CMonthCalCtrl](../mfc/reference/cmonthcalctrl-class.md) con la proprietà del controllo. È possibile utilizzare questo membro per chiamare le funzioni membro di `CMonthCalCtrl`.

1. Usare la [creazione guidata classe](reference/mfc-class-wizard.md) per eseguire il mapping delle funzioni del gestore nella classe della finestra di dialogo per i messaggi di notifica del controllo calendario mensile che è necessario gestire (vedere [mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md)).

1. In [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog)impostare gli stili aggiuntivi per l' `CMonthCalCtrl` oggetto.

### <a name="to-use-cmonthcalctrl-in-a-nondialog-window"></a>Per utilizzare CMonthCalCtrl in una finestra non di dialogo

1. Definire il controllo nella classe di visualizzazione o della finestra.

1. Chiamare la funzione membro [create](../mfc/reference/cmonthcalctrl-class.md#create) del controllo, possibilmente in [OnInitialUpdate](../mfc/reference/cview-class.md#oninitialupdate), probabilmente all'inizio della funzione del gestore [OnCreate](../mfc/reference/cwnd-class.md#oncreate) della finestra padre (se si sta eseguendo la sottoclasse del controllo). Impostare gli stili per il controllo.

## <a name="see-also"></a>Vedere anche

[Uso di CMonthCalCtrl](../mfc/using-cmonthcalctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
