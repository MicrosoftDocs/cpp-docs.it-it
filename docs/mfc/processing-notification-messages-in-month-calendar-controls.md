---
title: Elaborazione dei messaggi di notifica nel controlli calendario mensile
ms.date: 11/04/2016
helpviewer_keywords:
- CMonthCalCtrl class [MFC], notifications
- CMonthCalCtrl class [MFC], day states
- month calendar controls [MFC], notification messages
- notifications [MFC], for CMonthCalCtrl
- notifications [MFC], month calendar control
ms.assetid: 607c3e90-0756-493b-9503-ce835a50c7ab
ms.openlocfilehash: 3dbf50080bea59c4df4a9c92a135a65b093f7674
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50511930"
---
# <a name="processing-notification-messages-in-month-calendar-controls"></a>Elaborazione dei messaggi di notifica nel controlli calendario mensile

Quando gli utenti interagiscono con il controllo calendario mensile (selezionare le date e/o visualizzare un mese diverso), il controllo (`CMonthCalCtrl`) invia i messaggi di notifica alla finestra padre, in genere un oggetto finestra di dialogo o visualizzazione. Se si desidera eseguire un'operazione in risposta, occorre gestire questi messaggi. Quando l'utente seleziona un nuovo mese da visualizzare, ad esempio, è possibile fornire un set di date che dovrebbe essere evidenziata.

Usare la finestra Proprietà per aggiungere la gestione della notifica alla classe padre per i messaggi da implementare.

Nell'elenco seguente descrive le diverse notifiche inviate dal controllo calendario mensile.

- MCN_GETDAYSTATE richiede informazioni su quali giorni dovrebbero essere visualizzati in grassetto. Per informazioni sulla gestione di questa notifica, vedere [impostazione dello stato giorno di un controllo calendario mensile](../mfc/setting-the-day-state-of-a-month-calendar-control.md).

- MCN_SELCHANGE notifica all'elemento padre, che è cambiata la data selezionata o un intervallo di date.

- MCN_SELECT Notifica all'elemento padre, che è stata effettuata una selezione data esplicita.

## <a name="see-also"></a>Vedere anche

[Uso di CMonthCalCtrl](../mfc/using-cmonthcalctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

