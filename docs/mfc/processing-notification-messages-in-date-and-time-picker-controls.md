---
description: 'Altre informazioni su: elaborazione dei messaggi di notifica nei controlli selezione data e ora'
title: Elaborazione dei messaggi di notifica nel controlli selezione data e ora
ms.date: 11/04/2016
f1_keywords:
- DTN_CLOSEUP
- DTN_DATETIMECHANGE
- DTN_DROPDOWN
helpviewer_keywords:
- DTN_DROPDOWN notification [MFC]
- DTN_DATETIMECHANGE notification [MFC]
- DTN_CLOSEUP notification [MFC]
- DateTimePicker control [MFC], handling notifications
- CDateTimeCtrl class [MFC], handling notifications
- DTN_FORMAT notification [MFC]
- DateTimePicker control [MFC]
ms.assetid: ffbe29ab-ff80-4609-89f7-260b404439c4
ms.openlocfilehash: 07ac9c4c8ba58c833591409b1f5ab405cd05ebc3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97154825"
---
# <a name="processing-notification-messages-in-date-and-time-picker-controls"></a>Elaborazione dei messaggi di notifica nel controlli selezione data e ora

Quando gli utenti interagiscono con il controllo selezione data e ora, il controllo ( `CDateTimeCtrl` ) Invia messaggi di notifica alla finestra padre, in genere un oggetto visualizzazione o finestra di dialogo. Se si desidera eseguire un'operazione in risposta, occorre gestire questi messaggi. Ad esempio, quando l'utente apre il selettore di data e ora per visualizzare il controllo calendario mensile incorporato, viene inviata la notifica DTN_DROPDOWN.

Utilizzare la [creazione guidata classe](reference/mfc-class-wizard.md) per aggiungere gestori di notifiche alla classe padre per i messaggi che si desidera implementare.

Nell'elenco seguente vengono descritte le diverse notifiche inviate dal controllo selezione data e ora.

- DTN_DROPDOWN notifica all'elemento padre che il controllo calendario mensile incorporato sta per essere visualizzato. Questa notifica viene inviata solo quando lo stile del DTS_UPDOWN non è stato impostato. Per ulteriori informazioni su questa notifica, vedere [accesso al controllo calendario mensile incorporato](accessing-the-embedded-month-calendar-control.md).

- DTN_CLOSEUP Notifica all'elemento padre che il controllo calendario mensile incorporato sta per essere chiuso. Questa notifica viene inviata solo quando lo stile del DTS_UPDOWN non è stato impostato.

- DTN_DATETIMECHANGE notifica all'elemento padre che si è verificata una modifica nel controllo.

- DTN_FORMAT Notifica all'elemento padre che è necessario visualizzare il testo in un campo di callback. Per ulteriori informazioni su questi campi di notifica e callback, vedere [utilizzo dei campi di callback in un controllo selezione data e ora](using-callback-fields-in-a-date-and-time-picker-control.md).

- DTN_FORMATQUERY richiede all'elemento padre di specificare la dimensione massima consentita della stringa che verrà visualizzata in un campo di callback. La gestione di questa notifica consente al controllo di visualizzare correttamente l'output in qualsiasi momento, riducendo lo sfarfallio nella visualizzazione del controllo. Per ulteriori informazioni su questa notifica, vedere [utilizzo dei campi di callback in un controllo selezione data e ora](using-callback-fields-in-a-date-and-time-picker-control.md).

- DTN_USERSTRING notifica all'elemento padre che l'utente ha terminato di modificare il contenuto del controllo selezione data e ora. Questa notifica viene inviata solo quando lo stile del DTS_APPCANPARSE è stato impostato.

- DTN_WMKEYDOWN Notifica all'elemento padre quando l'utente digita un campo di callback. Gestire questa notifica per emulare la stessa risposta da tastiera supportata per i campi non di callback in un controllo selezione data e ora. Per ulteriori informazioni su questa notifica, vedere [supporto dei campi di callback in un controllo DTP](/windows/win32/Controls/date-and-time-picker-controls) nel Windows SDK.

## <a name="see-also"></a>Vedi anche

[Utilizzo di CDateTimeCtrl](using-cdatetimectrl.md)<br/>
[Controlli](controls-mfc.md)
