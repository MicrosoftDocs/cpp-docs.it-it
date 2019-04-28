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
ms.openlocfilehash: c75b560509738e071accdc3dba31dfdea35a14aa
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62307757"
---
# <a name="setting-the-day-state-of-a-month-calendar-control"></a>Impostazione dello stato giorno di un controllo calendario mensile

Uno degli attributi di un controllo calendario mensile è la possibilità di archiviare le informazioni, definite come il controllo dello stato del giorno per ogni giorno del mese. Queste informazioni consente di evidenziare determinate date per il mese attualmente visualizzato.

> [!NOTE]
>  Il `CMonthCalCtrl` oggetto deve avere lo stile MCS_DAYSTATE per visualizzare le informazioni di stato del giorno.

Le informazioni sullo stato di giorno sono espresso come un tipo di dati a 32 **MONTHDAYSTATE**. Ogni bit in un **MONTHDAYSTATE** campo di bit (da 1 a 31) rappresenta lo stato di un giorno al mese. Se un bit è attivo, il giorno corrispondente verrà visualizzato in grassetto. in caso contrario, verrà visualizzato con alcuna particolare attenzione.

Esistono due metodi per l'impostazione dello stato giorno di controllo calendario mensile: in modo esplicito con una chiamata a [SetDayState](../mfc/reference/cmonthcalctrl-class.md#setdaystate) o se si gestisce il messaggio di notifica MCN_GETDAYSTATE.

## <a name="handling-the-mcngetdaystate-notification-message"></a>Gestione del messaggio di notifica MCN_GETDAYSTATE

Il messaggio MCN_GETDAYSTATE viene inviato dal controllo per determinare come devono essere visualizzati i giorni entro i mesi visibili.

> [!NOTE]
>  Poiché il controllo memorizza nella cache i mesi precedenti e seguenti, rispetto al mese, si riceverà la notifica ogni volta che viene scelto un nuovo mese.

Per gestire correttamente il messaggio, è necessario determinare il numero di mesi sono in fase di informazioni sullo stato giorno richiesto per, Inizializza una matrice di **MONTHDAYSTATE** strutture con i valori appropriati e inizializzare il membro della struttura correlati con le nuove informazioni. La procedura seguente, che riporta in dettaglio i passaggi necessari, si presuppone di avere una `CMonthCalCtrl` oggetto chiamato *m_monthcal* e una matrice di **MONTHDAYSTATE** oggetti, *mdState*.

#### <a name="to-handle-the-mcngetdaystate-notification-message"></a>Per gestire il messaggio di notifica MCN_GETDAYSTATE

1. Usando la finestra Proprietà, aggiungere un gestore delle notifiche per il messaggio MCN_GETDAYSTATE il *m_monthcal* oggetto (vedere [Mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md)).

1. Nel corpo del gestore, aggiungere il codice seguente:

   [!code-cpp[NVC_MFCControlLadenDialog#26](../mfc/codesnippet/cpp/setting-the-day-state-of-a-month-calendar-control_1.cpp)]

   Nell'esempio viene convertito il *pNMHDR viene convertito nel* puntatore nel tipo appropriato, quindi determina il numero di mesi di informazioni richieste (`pDayState->cDayState`). Per ogni mese, il campo di bit corrente (`pDayState->prgDayState[i]`) viene inizializzato su zero e quindi necessarie le date vengono impostate (in questo caso, il giorno 15 del mese).

## <a name="see-also"></a>Vedere anche

[Uso di CMonthCalCtrl](../mfc/using-cmonthcalctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
