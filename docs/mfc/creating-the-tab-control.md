---
title: Creazione del controllo Tab
ms.date: 11/04/2016
f1_keywords:
- TCS_EX_REGISTERDROP
- TCS_EX_FLATSEPARATORS
helpviewer_keywords:
- TCS_EX_REGISTERDROP extended style [MFC]
- tab controls [MFC], creating
- CTabCtrl class [MFC], creating
- TCS_EX_FLATSEPARATORS extended style
ms.assetid: 3a9c2d64-f5f4-41ea-84ab-fceb73c3dbdc
ms.openlocfilehash: 6d5aa6873966ecb4c845f1c503b24c07b6c0c7a3
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84619617"
---
# <a name="creating-the-tab-control"></a>Creazione del controllo Tab

La modalità di creazione del controllo struttura a schede varia a seconda che il controllo venga utilizzato in una finestra di dialogo o in una finestra non di dialogo.

### <a name="to-use-ctabctrl-directly-in-a-dialog-box"></a>Per utilizzare CTabCtrl direttamente in una finestra di dialogo

1. Nell'editor finestre aggiungere un controllo Tab alla risorsa del modello di finestra di dialogo. Specificare l'ID di controllo.

1. Utilizzare la [procedura guidata Aggiungi variabile membro](../ide/adding-a-member-variable-visual-cpp.md) per aggiungere una variabile membro di tipo [CTabCtrl](reference/ctabctrl-class.md) con la proprietà del controllo. È possibile utilizzare questo membro per chiamare le funzioni membro di `CTabCtrl`.

1. Funzioni del gestore della mappa nella classe della finestra di dialogo per tutti i messaggi di notifica del controllo scheda che è necessario gestire. Per altre informazioni, vedere [mapping di messaggi a funzioni](reference/mapping-messages-to-functions.md).

1. In [OnInitDialog](reference/cdialog-class.md#oninitdialog)impostare gli stili per l'oggetto `CTabCtrl` .

### <a name="to-use-ctabctrl-in-a-nondialog-window"></a>Per usare CTabCtrl in una finestra non di dialogo

1. Definire il controllo nella classe di visualizzazione o della finestra.

1. Chiamare la funzione membro [create](reference/ctabctrl-class.md#create) del controllo, possibilmente in [OnInitialUpdate](reference/cview-class.md#oninitialupdate), probabilmente all'inizio della funzione del gestore [OnCreate](reference/cwnd-class.md#oncreate) della finestra padre (se si sta eseguendo la sottoclasse del controllo). Impostare gli stili per il controllo.

Dopo aver `CTabCtrl` creato l'oggetto, è possibile impostare o deselezionare gli stili estesi seguenti:

- **TCS_EX_FLATSEPARATORS** Il controllo struttura a schede trarrà separatori tra le voci di scheda. Questo stile esteso interessa solo i controlli struttura a schede con gli stili **TCS_BUTTONS** e **TCS_FLATBUTTONS** . Per impostazione predefinita, la creazione del controllo struttura a schede con lo stile **TCS_FLATBUTTONS** imposta lo stile esteso.

- **TCS_EX_REGISTERDROP** Il controllo struttura a schede genera **TCN_GETOBJECT** messaggi di notifica per richiedere un oggetto destinazione di rilascio quando un oggetto viene trascinato sugli elementi di tabulazione del controllo.

    > [!NOTE]
    >  Per ricevere la notifica di **TCN_GETOBJECT** , è necessario inizializzare le librerie OLE con una chiamata a [AfxOleInit](reference/ole-initialization.md#afxoleinit).

Questi stili possono essere recuperati e impostati, dopo la creazione del controllo, con le rispettive chiamate alle funzioni membro [GetExtendedStyle](reference/ctabctrl-class.md#getextendedstyle) e [SetExtendedStyle](reference/ctabctrl-class.md#setextendedstyle) .

Ad esempio, impostare lo stile **TCS_EX_FLATSEPARATORS** con le righe di codice seguenti:

[!code-cpp[NVC_MFCControlLadenDialog#33](codesnippet/cpp/creating-the-tab-control_1.cpp)]

Cancellare lo stile **TCS_EX_FLATSEPARATORS** da un `CTabCtrl` oggetto con le righe di codice seguenti:

[!code-cpp[NVC_MFCControlLadenDialog#34](codesnippet/cpp/creating-the-tab-control_2.cpp)]

Verranno rimossi i separatori visualizzati tra i pulsanti dell' `CTabCtrl` oggetto.

## <a name="see-also"></a>Vedere anche

[Utilizzo di CTabCtrl](using-ctabctrl.md)<br/>
[Controlli](controls-mfc.md)
