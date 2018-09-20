---
title: Notifiche di elaborazione dei messaggi nella selezione data e ora controlli | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- DTN_CLOSEUP
- DTN_DATETIMECHANGE
- DTN_DROPDOWN
dev_langs:
- C++
helpviewer_keywords:
- DTN_DROPDOWN notification [MFC]
- DTN_DATETIMECHANGE notification [MFC]
- DTN_CLOSEUP notification [MFC]
- DateTimePicker control [MFC], handling notifications
- CDateTimeCtrl class [MFC], handling notifications
- DTN_FORMAT notification [MFC]
- DateTimePicker control [MFC]
ms.assetid: ffbe29ab-ff80-4609-89f7-260b404439c4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4ae7773d46d93f0f2c5a237f833da4c81679084c
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46414381"
---
# <a name="processing-notification-messages-in-date-and-time-picker-controls"></a>Elaborazione dei messaggi di notifica nel controlli selezione data e ora

Quando gli utenti interagiscono con la data e controllo di selezione ora, il controllo (`CDateTimeCtrl`) invia i messaggi di notifica alla finestra padre, in genere un oggetto finestra di dialogo o visualizzazione. Se si desidera eseguire un'operazione in risposta, occorre gestire questi messaggi. Ad esempio, quando l'utente apre il selettore data e ora per visualizzare il controllo calendario mensile incorporato, viene inviata il DTN_DROPDOWN (notifica).

Usare la finestra Proprietà per aggiungere la gestione della notifica alla classe padre per i messaggi da implementare.

Nell'elenco seguente descrive le diverse notifiche inviate dal controllo selezione data e ora.

- DTN_DROPDOWN Notifica l'elemento padre che controllo calendario mensile incorporato deve essere visualizzato. Questa notifica viene inviata solo quando lo stile DTS_UPDOWN non è stato impostato. Per altre informazioni su questa notifica, vedere [l'accesso a controllo calendario mensile incorporato](../mfc/accessing-the-embedded-month-calendar-control.md).

- DTN_CLOSEUP notifica l'elemento padre che controllo calendario mensile incorporato sta per essere chiuso. Questa notifica viene inviata solo quando lo stile DTS_UPDOWN non è stato impostato.

- DTN_DATETIMECHANGE Notifica all'elemento padre, che si è verificata una modifica nel controllo.

- DTN_FORMAT notifica l'elemento padre che il testo è necessario visualizzare in un campo callback. Per altre informazioni su questa notifica e campi callback, vedere [utilizzo dei campi Callback in una data e ora controllo di selezione](../mfc/using-callback-fields-in-a-date-and-time-picker-control.md).

- DTN_FORMATQUERY richiede l'elemento padre per specificare la dimensione massima consentita della stringa che verrà visualizzata in un campo callback. La gestione di questa notifica consente il controllo per visualizzare correttamente l'output in qualsiasi momento, ridurre lo sfarfallio all'interno della visualizzazione del controllo. Per altre informazioni su questa notifica, vedere [utilizzo dei campi Callback in una data e ora controllo di selezione](../mfc/using-callback-fields-in-a-date-and-time-picker-control.md).

- Notifica al DTN_USERSTRING padre che l'utente ha terminato la modifica del contenuto del controllo selezione data e ora. Questa notifica viene inviata solo quando lo stile DTS_APPCANPARSE è stato impostato.

- DTN_WMKEYDOWN Notifica padre quando l'utente digita in un campo callback. Gestire tale notifica emulare le stesse risposte della tastiera è supportata per i campi non callback in un controllo selezione data e ora. Per altre informazioni su questa notifica, vedere [che supportano i campi Callback in un controllo DTP](/windows/desktop/Controls/date-and-time-picker-controls) nel SDK di Windows.

## <a name="see-also"></a>Vedere anche

[Uso di CDateTimeCtrl](../mfc/using-cdatetimectrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

