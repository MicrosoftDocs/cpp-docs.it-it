---
title: Elaborazione dei messaggi di notifica nei controlli List
ms.date: 11/04/2016
helpviewer_keywords:
- processing notifications [MFC]
- CListCtrl class [MFC], processing notifications
ms.assetid: 1f0e296e-d2a3-48fc-ae38-51d7fb096f51
ms.openlocfilehash: 2a7899c74bfcddcdc8d54f7d9eb894553115ad66
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62160185"
---
# <a name="processing-notification-messages-in-list-controls"></a>Elaborazione dei messaggi di notifica nei controlli List

Come gli utenti fanno clic le intestazioni di colonna, trascinano le icone, modificare le etichette e così via, il controllo elenco ([CListCtrl](../mfc/reference/clistctrl-class.md)) invia i messaggi di notifica alla finestra padre. Se si desidera eseguire un'operazione in risposta, occorre gestire questi messaggi. Ad esempio, quando l'utente fa clic sull'intestazione di una colonna, è possibile che si desideri che le voci vengano ordinate in base al contenuto della colonna selezionata, come in Microsoft Outlook.

Elaborare i messaggi WM_NOTIFY dal controllo elenco nella classe di finestra di dialogo o visualizzazione. Utilizzare la finestra proprietà per creare un [OnChildNotify](../mfc/reference/cwnd-class.md#onchildnotify) funzione del gestore con un'istruzione switch basata sul messaggio di notifica che viene gestito.

Per un elenco delle notifiche di un controllo elenco può inviare alla finestra padre, vedere [riferimento del controllo visualizzazione elenco](/windows/desktop/Controls/list-view-control-reference) nel SDK di Windows.

## <a name="see-also"></a>Vedere anche

[Uso di CListCtrl](../mfc/using-clistctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
