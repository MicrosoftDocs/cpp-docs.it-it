---
title: Elaborazione dei messaggi di notifica nei controlli List
ms.date: 11/04/2016
helpviewer_keywords:
- processing notifications [MFC]
- CListCtrl class [MFC], processing notifications
ms.assetid: 1f0e296e-d2a3-48fc-ae38-51d7fb096f51
ms.openlocfilehash: e93e91a3219f81bf4027549fc84f1c85c8defb5b
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69507862"
---
# <a name="processing-notification-messages-in-list-controls"></a>Elaborazione dei messaggi di notifica nei controlli List

Quando gli utenti fanno clic sulle intestazioni di colonna, trascinano le icone, modificano le etichette e così via, il controllo elenco ([CListCtrl](../mfc/reference/clistctrl-class.md)) Invia messaggi di notifica alla finestra padre. Se si desidera eseguire un'operazione in risposta, occorre gestire questi messaggi. Ad esempio, quando l'utente fa clic sull'intestazione di una colonna, è possibile che si desideri che le voci vengano ordinate in base al contenuto della colonna selezionata, come in Microsoft Outlook.

Elaborare i messaggi WM_NOTIFY dal controllo elenco nella visualizzazione o nella classe della finestra di dialogo. Usare il Finestra Proprietà per creare una funzione di gestione [OnChildNotify](../mfc/reference/cwnd-class.md#onchildnotify) con un'istruzione switch in base al messaggio di notifica gestito.

Per un elenco delle notifiche che un controllo elenco può inviare alla relativa finestra padre, vedere informazioni di [riferimento sul controllo visualizzazione elenco](/windows/win32/Controls/list-view-control-reference) nell'Windows SDK.

## <a name="see-also"></a>Vedere anche

[Uso di CListCtrl](../mfc/using-clistctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
