---
description: 'Altre informazioni su: elaborazione dei messaggi di notifica del controllo scheda'
title: Elaborazione dei messaggi di notifica dei controlli Tab
ms.date: 11/04/2016
helpviewer_keywords:
- notifications [MFC], tab controls
- CTabCtrl class [MFC], processing notifications
- notifications [MFC], processing in CTabCtrl
- processing notifications [MFC]
- tab controls [MFC], processing notifications
ms.assetid: 758ccb7a-9e73-48f8-9073-23f7cb09918c
ms.openlocfilehash: f5d81437b566143e2fc7cb1e0f275c0f9e9993de
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97154721"
---
# <a name="processing-tab-control-notification-messages"></a>Elaborazione dei messaggi di notifica dei controlli Tab

Quando gli utenti fanno clic su schede o pulsanti, il controllo struttura a schede ([CTabCtrl](../mfc/reference/ctabctrl-class.md)) Invia messaggi di notifica alla finestra padre. Se si desidera eseguire un'operazione in risposta, occorre gestire questi messaggi. Ad esempio, quando l'utente fa clic su una scheda, è possibile impostare i dati di controllo nella pagina prima di visualizzarli.

Elaborare WM_NOTIFY messaggi dal controllo struttura a schede nella visualizzazione o nella classe della finestra di dialogo. Utilizzare la [creazione guidata classe](reference/mfc-class-wizard.md) per creare una funzione di gestione [OnChildNotify](../mfc/reference/cwnd-class.md#onchildnotify) con un'istruzione switch in base al messaggio di notifica gestito. Per un elenco delle notifiche che un controllo scheda può inviare alla relativa finestra padre, vedere la sezione **notifiche** di [riferimento al controllo Tab](/windows/win32/controls/tab-control-reference) nel Windows SDK.

## <a name="see-also"></a>Vedi anche

[Utilizzo di CTabCtrl](../mfc/using-ctabctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
