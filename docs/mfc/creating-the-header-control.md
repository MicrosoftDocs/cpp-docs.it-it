---
title: Creazione del controllo Header
ms.date: 11/04/2016
helpviewer_keywords:
- CHeaderCtrl class [MFC], creating
- header controls [MFC], creating
ms.assetid: 7864d9d2-4a2c-4622-b58b-7b110a1e28d2
ms.openlocfilehash: b08dd4d3f12c70ae495b20b936d44f6a695d1ae1
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84616239"
---
# <a name="creating-the-header-control"></a>Creazione del controllo Header

Il controllo intestazione non è direttamente disponibile nell'editor finestre (anche se è possibile aggiungere un controllo elenco, che include un controllo Header).

### <a name="to-put-a-header-control-in-a-dialog-box"></a>Per inserire un controllo intestazione in una finestra di dialogo

1. Incorporare manualmente una variabile membro di tipo [CHeaderCtrl](reference/cheaderctrl-class.md) nella classe della finestra di dialogo.

1. In [OnInitDialog](reference/cdialog-class.md#oninitdialog)creare e impostare gli stili per `CHeaderCtrl` , posizionarlo e visualizzarlo.

1. Aggiungere elementi al controllo intestazione.

1. Usare la [creazione guidata classe](reference/mfc-class-wizard.md) per eseguire il mapping delle funzioni del gestore nella classe della finestra di dialogo per tutti i messaggi di notifica del controllo intestazione che è necessario gestire (vedere [mapping di messaggi a funzioni](reference/mapping-messages-to-functions.md)).

### <a name="to-put-a-header-control-in-a-view-not-a-clistview"></a>Per inserire un controllo intestazione in una visualizzazione (non un CListView)

1. Incorporare un oggetto [CHeaderCtrl](reference/cheaderctrl-class.md) nella classe di visualizzazione.

1. Stile, posizione e visualizzazione della finestra di controllo dell'intestazione nella funzione membro [OnInitialUpdate](reference/cview-class.md#oninitialupdate) della visualizzazione.

1. Aggiungere elementi al controllo intestazione.

1. Usare la [creazione guidata classe](reference/mfc-class-wizard.md) per eseguire il mapping delle funzioni del gestore nella classe di visualizzazione per tutti i messaggi di notifica del controllo intestazione che è necessario gestire (vedere [mapping di messaggi a funzioni](reference/mapping-messages-to-functions.md)).

In entrambi i casi, l'oggetto controllo incorporato viene creato quando viene creata la vista o l'oggetto finestra di dialogo. È quindi necessario chiamare [CHeaderCtrl:: create](reference/cheaderctrl-class.md#create) per creare la finestra del controllo. Per posizionare il controllo, chiamare [CHeaderCtrl:: layout](reference/cheaderctrl-class.md#layout) per determinare le dimensioni e la posizione iniziali del controllo e [SetWindowPos](reference/cwnd-class.md#setwindowpos) per impostare la posizione desiderata. Aggiungere quindi elementi come descritto in [aggiunta di elementi al controllo intestazione](adding-items-to-the-header-control.md).

Per ulteriori informazioni, vedere [creazione di un controllo intestazione](/windows/win32/Controls/header-controls) nel Windows SDK.

## <a name="see-also"></a>Vedere anche

[Uso di CHeaderCtrl](using-cheaderctrl.md)<br/>
[Controlli](controls-mfc.md)
