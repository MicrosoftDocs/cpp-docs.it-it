---
title: Elaborazione dei messaggi di notifica dei controlli Tab
ms.date: 11/04/2016
helpviewer_keywords:
- notifications [MFC], tab controls
- CTabCtrl class [MFC], processing notifications
- notifications [MFC], processing in CTabCtrl
- processing notifications [MFC]
- tab controls [MFC], processing notifications
ms.assetid: 758ccb7a-9e73-48f8-9073-23f7cb09918c
ms.openlocfilehash: 97abde8285a3baf307df79fd97d4f9a379c8f58f
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69507838"
---
# <a name="processing-tab-control-notification-messages"></a>Elaborazione dei messaggi di notifica dei controlli Tab

Quando gli utenti fanno clic su schede o pulsanti, il controllo struttura a schede ([CTabCtrl](../mfc/reference/ctabctrl-class.md)) Invia messaggi di notifica alla finestra padre. Se si desidera eseguire un'operazione in risposta, occorre gestire questi messaggi. Ad esempio, quando l'utente fa clic su una scheda, è possibile impostare i dati di controllo nella pagina prima di visualizzarli.

Elaborare i messaggi WM_NOTIFY dal controllo struttura a schede nella visualizzazione o nella classe della finestra di dialogo. Usare il Finestra Proprietà per creare una funzione di gestione [OnChildNotify](../mfc/reference/cwnd-class.md#onchildnotify) con un'istruzione switch in base al messaggio di notifica gestito. Per un elenco delle notifiche che un controllo scheda può inviare alla relativa finestra padre, vedere la sezione **notifiche** di [riferimento al controllo Tab](/windows/win32/controls/tab-control-reference) nel Windows SDK.

## <a name="see-also"></a>Vedere anche

[Uso di CTabCtrl](../mfc/using-ctabctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
