---
title: Impostazione dello stato giorno di un controllo calendario mensile
ms.date: 11/04/2016
f1_keywords:
- MCN_GETDAYSTATE
helpviewer_keywords:
- CMonthCalCtrl class [MFC], setting day state info
- MCN_GETDAYSTATE notification [MFC]
- month calendar controls [MFC], day state info
ms.assetid: 435d1b11-ec0e-4121-9e25-aaa6af812a3c
ms.openlocfilehash: 9892f2d853687787dd76428fc9bc95f3a4f74565
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81365433"
---
# <a name="setting-the-day-state-of-a-month-calendar-control"></a>Impostazione dello stato giorno di un controllo calendario mensile

Uno degli attributi di un controllo calendario mensile è la possibilità di archiviare informazioni, denominate stato del giorno del controllo, per ogni giorno del mese. Queste informazioni vengono utilizzate per enfatizzare determinate date per il mese attualmente visualizzato.

> [!NOTE]
> L'oggetto `CMonthCalCtrl` deve avere lo stile MCS_DAYSTATE per visualizzare le informazioni sullo stato del giorno.

Le informazioni sullo stato del giorno sono espresse come tipo di dati a 32 bit, **MONTHDAYSTATE**. Ogni bit in un campo di bit **MONTHDAYSTATE** (da 1 a 31) rappresenta lo stato di un giorno in un mese. Se un bit è attivato, il giorno corrispondente verrà visualizzato in grassetto; in caso contrario verrà visualizzato senza enfasi.

Esistono due metodi per impostare lo stato del giorno del controllo calendario mensile: in modo esplicito con una chiamata a [CMonthCalCtrl::SetDayState](../mfc/reference/cmonthcalctrl-class.md#setdaystate) o gestendo il messaggio di notifica MCN_GETDAYSTATE.

## <a name="handling-the-mcn_getdaystate-notification-message"></a>Gestione del messaggio di notifica MCN_GETDAYSTATE

Il messaggio MCN_GETDAYSTATE viene inviato dal controllo per determinare la modalità di visualizzazione dei giorni all'interno dei mesi visibili.

> [!NOTE]
> Poiché il controllo memorizza nella cache i mesi precedenti e successivi, rispetto al mese visibile, si riceverà questa notifica ogni volta che viene scelto un nuovo mese.

Per gestire correttamente questo messaggio, è necessario determinare per quanti mesi vengono richieste le informazioni sullo stato dei giorni, inizializzare una matrice di strutture **MONTHDAYSTATE** con i valori appropriati e inizializzare il membro della struttura correlata con le nuove informazioni. Nella procedura riportata di seguito, in cui `CMonthCalCtrl` vengono descritti in dettaglio i passaggi necessari, si presuppone che si disponga di un oggetto denominato *m_monthcal* e di una matrice di oggetti **MONTHDAYSTATE** , *mdState*.

#### <a name="to-handle-the-mcn_getdaystate-notification-message"></a>Per gestire il messaggio di notifica MCN_GETDAYSTATE

1. Utilizzando la [Creazione guidata classe](reference/mfc-class-wizard.md), aggiungere un gestore di notifica per il messaggio MCN_GETDAYSTATE all'oggetto *m_monthcal* (vedere Mapping di messaggi [a funzioni](../mfc/reference/mapping-messages-to-functions.md)).

1. Nel corpo del gestore aggiungere il codice seguente:

   [!code-cpp[NVC_MFCControlLadenDialog#26](../mfc/codesnippet/cpp/setting-the-day-state-of-a-month-calendar-control_1.cpp)]

   Nell'esempio il puntatore *pNMHDR* viene convertito nel tipo corretto, quindi`pDayState->cDayState`viene regolato il numero di mesi di informazioni richieste ( ). Per ogni mese, il`pDayState->prgDayState[i]`campo di bit corrente ( ) viene inizializzato su zero e quindi vengono impostate le date necessarie (in questo caso, il 15 di ogni mese).

## <a name="see-also"></a>Vedere anche

[Uso di CMonthCalCtrl](../mfc/using-cmonthcalctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
