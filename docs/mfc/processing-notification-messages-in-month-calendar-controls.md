---
title: Elaborazione dei messaggi di notifica nel mese di calendario controlli | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- CMonthCalCtrl class [MFC], notifications
- CMonthCalCtrl class [MFC], day states
- month calendar controls [MFC], notification messages
- notifications [MFC], for CMonthCalCtrl
- notifications [MFC], month calendar control
ms.assetid: 607c3e90-0756-493b-9503-ce835a50c7ab
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5bbdb3728009cdee978bb08ef8df8817f1ef5e41
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46378176"
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

