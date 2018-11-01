---
title: Creazione del controllo Header
ms.date: 11/04/2016
helpviewer_keywords:
- CHeaderCtrl class [MFC], creating
- header controls [MFC], creating
ms.assetid: 7864d9d2-4a2c-4622-b58b-7b110a1e28d2
ms.openlocfilehash: fdb96eee243214d053a8f375f742cf69aa4e512d
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50568463"
---
# <a name="creating-the-header-control"></a>Creazione del controllo Header

Il controllo intestazione non è disponibile direttamente nell'editor finestre (sebbene sia possibile aggiungere un controllo elenco, che include un controllo header).

### <a name="to-put-a-header-control-in-a-dialog-box"></a>Per inserire un controllo di intestazione in una finestra di dialogo

1. Incorporare manualmente una variabile membro di tipo [CHeaderCtrl](../mfc/reference/cheaderctrl-class.md) nella classe della finestra.

1. Nelle [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog), creare e impostare gli stili per il `CHeaderCtrl`posizionarla e visualizzarlo.

1. Aggiungere elementi al controllo header.

1. Utilizzare la finestra proprietà per eseguire il mapping di funzioni del gestore nella classe di finestra di dialogo per i messaggi di qualsiasi notifica del controllo header è necessario gestire (vedere [Mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md)).

### <a name="to-put-a-header-control-in-a-view-not-a-clistview"></a>Per inserire un controllo di intestazione in una vista (non una classe CListView)

1. Incorpora un [CHeaderCtrl](../mfc/reference/cheaderctrl-class.md) oggetto nella classe di visualizzazione.

1. Applicare uno stile, posizione e visualizzare la finestra di controllo di intestazione della visualizzazione [OnInitialUpdate](../mfc/reference/cview-class.md#oninitialupdate) funzione membro.

1. Aggiungere elementi al controllo header.

1. Utilizzare la finestra proprietà per eseguire il mapping di funzioni del gestore nella classe di visualizzazione per i messaggi di qualsiasi notifica del controllo header è necessario gestire (vedere [Mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md)).

In entrambi i casi, l'oggetto controllo incorporato viene creato quando viene creato l'oggetto finestra di dialogo o visualizzazione. Sarà necessario chiamare [CHeaderCtrl:: Create](../mfc/reference/cheaderctrl-class.md#create) per creare la finestra di controllo. Per posizionare il controllo, chiamare [CHeaderCtrl:: layout](../mfc/reference/cheaderctrl-class.md#layout) per determinare le dimensioni iniziali e la posizione del controllo e [SetWindowPos](../mfc/reference/cwnd-class.md#setwindowpos) per impostare la posizione desiderata. Aggiungere quindi gli elementi come descritto in [aggiunta di elementi al controllo Header](../mfc/adding-items-to-the-header-control.md).

Per altre informazioni, vedere [creazione di un controllo intestazione](/windows/desktop/Controls/header-controls) nel SDK di Windows.

## <a name="see-also"></a>Vedere anche

[Uso di CHeaderCtrl](../mfc/using-cheaderctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

