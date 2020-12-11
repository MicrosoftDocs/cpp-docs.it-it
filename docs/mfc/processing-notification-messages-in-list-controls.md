---
description: 'Altre informazioni su: elaborazione dei messaggi di notifica nei controlli elenco'
title: Elaborazione dei messaggi di notifica nei controlli List
ms.date: 11/04/2016
helpviewer_keywords:
- processing notifications [MFC]
- CListCtrl class [MFC], processing notifications
ms.assetid: 1f0e296e-d2a3-48fc-ae38-51d7fb096f51
ms.openlocfilehash: b761f5213a73ce31484a7a252b9b441da2fe154d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97154799"
---
# <a name="processing-notification-messages-in-list-controls"></a>Elaborazione dei messaggi di notifica nei controlli List

Quando gli utenti fanno clic sulle intestazioni di colonna, trascinano le icone, modificano le etichette e così via, il controllo elenco ([CListCtrl](../mfc/reference/clistctrl-class.md)) Invia messaggi di notifica alla finestra padre. Se si desidera eseguire un'operazione in risposta, occorre gestire questi messaggi. Ad esempio, quando l'utente fa clic sull'intestazione di una colonna, è possibile che si desideri che le voci vengano ordinate in base al contenuto della colonna selezionata, come in Microsoft Outlook.

È possibile elaborare i messaggi WM_NOTIFY dal controllo elenco nella classe di visualizzazione o della finestra di dialogo. Utilizzare la [creazione guidata classe](reference/mfc-class-wizard.md) per creare una funzione di gestione [OnChildNotify](../mfc/reference/cwnd-class.md#onchildnotify) con un'istruzione switch in base al messaggio di notifica gestito.

Per un elenco delle notifiche che un controllo elenco può inviare alla relativa finestra padre, vedere informazioni di [riferimento sul controllo visualizzazione elenco](/windows/win32/Controls/list-view-control-reference) nell'Windows SDK.

## <a name="see-also"></a>Vedi anche

[Utilizzo di CListCtrl](../mfc/using-clistctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
