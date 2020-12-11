---
description: 'Altre informazioni su: elaborazione dei messaggi di notifica nei controlli calendario mensile'
title: Elaborazione dei messaggi di notifica nel controlli calendario mensile
ms.date: 11/04/2016
helpviewer_keywords:
- CMonthCalCtrl class [MFC], notifications
- CMonthCalCtrl class [MFC], day states
- month calendar controls [MFC], notification messages
- notifications [MFC], for CMonthCalCtrl
- notifications [MFC], month calendar control
ms.assetid: 607c3e90-0756-493b-9503-ce835a50c7ab
ms.openlocfilehash: 4c527bd2c950277d36164ec14c7c714d82d2c812
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97154786"
---
# <a name="processing-notification-messages-in-month-calendar-controls"></a>Elaborazione dei messaggi di notifica nel controlli calendario mensile

Quando gli utenti interagiscono con il controllo calendario mensile (selezionando date e/o visualizzando un mese diverso), il controllo ( `CMonthCalCtrl` ) Invia messaggi di notifica alla finestra padre, in genere un oggetto visualizzazione o finestra di dialogo. Se si desidera eseguire un'operazione in risposta, occorre gestire questi messaggi. Ad esempio, quando l'utente seleziona un nuovo mese da visualizzare, è possibile fornire un set di date da evidenziare.

Utilizzare la [creazione guidata classe](reference/mfc-class-wizard.md) per aggiungere gestori di notifiche alla classe padre per i messaggi che si desidera implementare.

Nell'elenco seguente vengono descritte le diverse notifiche inviate dal controllo di calendario mensile.

- MCN_GETDAYSTATE richiede informazioni sui giorni da visualizzare in grassetto. Per informazioni sulla gestione di questa notifica, vedere [impostazione dello stato giorno di un controllo calendario mensile](../mfc/setting-the-day-state-of-a-month-calendar-control.md).

- MCN_SELCHANGE notifica all'elemento padre che la data o l'intervallo selezionato della data è stato modificato.

- MCN_SELECT notifica all'elemento padre che è stata effettuata una selezione esplicita della data.

## <a name="see-also"></a>Vedi anche

[Utilizzo di CMonthCalCtrl](../mfc/using-cmonthcalctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
