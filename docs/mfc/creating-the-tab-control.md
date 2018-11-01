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
ms.openlocfilehash: c444c938c88c2e8bf079f0f3eba80776c54af5ca
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50573407"
---
# <a name="creating-the-tab-control"></a>Creazione del controllo Tab

Modalità di creazione del controllo tab varia a seconda che si utilizzi il controllo in una finestra di dialogo o crearlo in una finestra non di dialogo.

### <a name="to-use-ctabctrl-directly-in-a-dialog-box"></a>Usare CTabCtrl direttamente in una finestra di dialogo

1. Nell'editor finestre, aggiungere un controllo struttura a schede per la risorsa modello di finestra di dialogo. Specificare l'ID di controllo.

1. Usare la [Aggiunta guidata variabile membro](../ide/adding-a-member-variable-visual-cpp.md) per aggiungere una variabile membro di tipo [CTabCtrl](../mfc/reference/ctabctrl-class.md) con la proprietà del controllo. È possibile utilizzare questo membro per chiamare le funzioni membro di `CTabCtrl`.

1. Eseguire il mapping di funzioni del gestore della classe di finestra di dialogo per eventuali messaggi di notifica controllo scheda, che è necessario gestire. Per altre informazioni, vedere [Mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md).

1. Nelle [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog), impostare gli stili per il `CTabCtrl`.

### <a name="to-use-ctabctrl-in-a-nondialog-window"></a>Per usare CTabCtrl in una finestra non di dialogo

1. Definire il controllo nella classe di visualizzazione o della finestra.

1. Il controllo delle chiamate [Create](../mfc/reference/ctabctrl-class.md#create) funzione di membro, possibilmente in [OnInitialUpdate](../mfc/reference/cview-class.md#oninitialupdate), possibilmente fin della finestra padre [OnCreate](../mfc/reference/cwnd-class.md#oncreate) funzione del gestore (se si è creazione di una sottoclasse del controllo). Impostare gli stili per il controllo.

Dopo il `CTabCtrl` oggetto è stato creato, è possibile selezionare o deselezionare i seguenti stili estesi:

- **TCS_EX_FLATSEPARATORS** il controllo scheda verrà disegnato un separatore tra gli elementi della scheda. Stile questo esteso solo influisce su scheda i controlli che hanno le **TCS_BUTTONS** e **TCS_FLATBUTTONS** stili. Per impostazione predefinita, la creazione del controllo scheda con la **TCS_FLATBUTTONS** stile imposta questo stile esteso.

- **TCS_EX_REGISTERDROP** controllo struttura a schede genera **TCN_GETOBJECT** i messaggi di notifica per richiedere un obiettivo di rilascio dell'oggetto quando un oggetto viene trascinato su elementi della scheda del controllo.

    > [!NOTE]
    >  Per ricevere il **TCN_GETOBJECT** notifica, è necessario inizializzare le librerie OLE con una chiamata a [AfxOleInit](../mfc/reference/ole-initialization.md#afxoleinit).

Questi stili possono essere recuperati e impostati, dopo aver creato il controllo, con le rispettive chiamate per il [GetExtendedStyle](../mfc/reference/ctabctrl-class.md#getextendedstyle) e [SetExtendedStyle](../mfc/reference/ctabctrl-class.md#setextendedstyle) funzioni membro.

Ad esempio, impostare il **TCS_EX_FLATSEPARATORS** stile con le righe di codice seguenti:

[!code-cpp[NVC_MFCControlLadenDialog#33](../mfc/codesnippet/cpp/creating-the-tab-control_1.cpp)]

Cancella il **TCS_EX_FLATSEPARATORS** lo stile da un `CTabCtrl` oggetto con le righe di codice seguenti:

[!code-cpp[NVC_MFCControlLadenDialog#34](../mfc/codesnippet/cpp/creating-the-tab-control_2.cpp)]

Questa operazione rimuoverà i separatori che vengono visualizzati tra i pulsanti del `CTabCtrl` oggetto.

## <a name="see-also"></a>Vedere anche

[Uso di CTabCtrl](../mfc/using-ctabctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

