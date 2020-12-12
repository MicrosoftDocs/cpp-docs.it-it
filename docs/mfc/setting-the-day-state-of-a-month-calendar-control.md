---
description: 'Altre informazioni su: impostazione dello stato del giorno di un controllo calendario mensile'
title: Impostazione dello stato giorno di un controllo calendario mensile
ms.date: 11/04/2016
f1_keywords:
- MCN_GETDAYSTATE
helpviewer_keywords:
- CMonthCalCtrl class [MFC], setting day state info
- MCN_GETDAYSTATE notification [MFC]
- month calendar controls [MFC], day state info
ms.assetid: 435d1b11-ec0e-4121-9e25-aaa6af812a3c
ms.openlocfilehash: e7fc06516877c54aadaef715c33abd128bbd6994
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97217211"
---
# <a name="setting-the-day-state-of-a-month-calendar-control"></a>Impostazione dello stato giorno di un controllo calendario mensile

Uno degli attributi di un controllo calendario mensile è la possibilità di archiviare le informazioni, denominate lo stato del giorno del controllo, per ogni giorno del mese. Queste informazioni vengono usate per evidenziare determinate date per il mese attualmente visualizzato.

> [!NOTE]
> `CMonthCalCtrl`Per visualizzare le informazioni sullo stato del giorno, l'oggetto deve avere lo stile MCS_DAYSTATE.

Le informazioni sullo stato del giorno sono espresse come tipo di dati a 32 bit, **MONTHDAYSTATE**. Ogni bit in un campo di bit **MONTHDAYSTATE** (da 1 a 31) rappresenta lo stato di un giorno in un mese. Se un bit è acceso, il giorno corrispondente verrà visualizzato in grassetto. in caso contrario, verrà visualizzato senza enfasi.

Esistono due metodi per impostare lo stato del giorno del controllo calendario mensile: in modo esplicito con una chiamata a [CMonthCalCtrl:: SetDayState](../mfc/reference/cmonthcalctrl-class.md#setdaystate) o gestendo il messaggio di notifica MCN_GETDAYSTATE.

## <a name="handling-the-mcn_getdaystate-notification-message"></a>Gestione del messaggio di notifica MCN_GETDAYSTATE

Il messaggio MCN_GETDAYSTATE viene inviato dal controllo per determinare la modalità di visualizzazione dei giorni entro i mesi visibili.

> [!NOTE]
> Poiché il controllo memorizza nella cache i mesi precedenti e successivi rispetto al mese visibile, la notifica verrà inviata ogni volta che viene scelto un nuovo mese.

Per gestire correttamente questo messaggio, è necessario determinare il numero di mesi per cui vengono richieste informazioni sullo stato del giorno, inizializzare una matrice di strutture **MONTHDAYSTATE** con i valori appropriati e inizializzare il membro della struttura correlato con le nuove informazioni. La procedura seguente, che illustra in dettaglio i passaggi necessari, presuppone che sia presente un `CMonthCalCtrl` oggetto denominato *m_monthcal* e una matrice di oggetti **MONTHDAYSTATE** , *mdState*.

#### <a name="to-handle-the-mcn_getdaystate-notification-message"></a>Per gestire il messaggio di notifica MCN_GETDAYSTATE

1. Utilizzando la [creazione guidata classe](reference/mfc-class-wizard.md), aggiungere un gestore notifiche per il messaggio di MCN_GETDAYSTATE all'oggetto *M_monthcal* (vedere [mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md)).

1. Nel corpo del gestore aggiungere il codice seguente:

   [!code-cpp[NVC_MFCControlLadenDialog#26](../mfc/codesnippet/cpp/setting-the-day-state-of-a-month-calendar-control_1.cpp)]

   Nell'esempio viene convertito il puntatore *pNMHDR* nel tipo appropriato, quindi viene determinato il numero di mesi di informazioni richiesti ( `pDayState->cDayState` ). Per ogni mese, il bit corrente ( `pDayState->prgDayState[i]` ) viene inizializzato su zero e quindi vengono impostate le date necessarie, in questo caso il 15 di ogni mese.

## <a name="see-also"></a>Vedi anche

[Utilizzo di CMonthCalCtrl](../mfc/using-cmonthcalctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
