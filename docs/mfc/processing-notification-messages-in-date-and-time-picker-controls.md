---
title: L'elaborazione di notifica messaggi nella selezione data e ora controlla | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 836714f7a7ca17d759d0d71a7cbb30d63fdfaf95
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="processing-notification-messages-in-date-and-time-picker-controls"></a>Elaborazione dei messaggi di notifica nel controlli selezione data e ora
Quando gli utenti interagiscono con la data e di controllo selezione ora, il controllo (`CDateTimeCtrl`) invia i messaggi di notifica alla finestra padre, in genere un oggetto finestra di dialogo o una vista. Se si desidera eseguire un'operazione in risposta, occorre gestire questi messaggi. Ad esempio, quando l'utente apre la selezione di data e ora per visualizzare il controllo calendario mensile incorporato, il **DTN_DROPDOWN** notifica viene inviata.  
  
 Usare la finestra Proprietà per aggiungere la gestione della notifica alla classe padre per i messaggi da implementare.  
  
 Nell'elenco seguente vengono descritte le diverse notifiche inviate dal controllo selezione data e ora.  
  
-   **DTN_DROPDOWN** notifica all'elemento padre, che il controllo calendario mensile incorporato sta per essere visualizzato. Questa notifica viene inviata solo quando il **DTS_UPDOWN** stile non è stato impostato. Per ulteriori informazioni su questa notifica, vedere [accesso il controllo di calendario mensile incorporato](../mfc/accessing-the-embedded-month-calendar-control.md).  
  
-   **DTN_CLOSEUP** notifica all'elemento padre, che il controllo calendario mensile incorporato sta per essere chiuso. Questa notifica viene inviata solo quando il **DTS_UPDOWN** stile non è stato impostato.  
  
-   **DTN_DATETIMECHANGE** notifica all'elemento padre, che è stata apportata una modifica nel controllo.  
  
-   **DTN_FORMAT** notifica all'elemento padre che è necessario il testo da visualizzare in un campo callback. Per ulteriori informazioni sulla notifica e campi callback, vedere [utilizzo dei campi Callback in una data e un controllo selezione ora](../mfc/using-callback-fields-in-a-date-and-time-picker-control.md).  
  
-   **DTN_FORMATQUERY** richiede l'elemento padre per fornire la dimensione massima consentita della stringa che verrà visualizzata in un campo callback. La gestione di questa notifica consente il controllo per visualizzare correttamente l'output in qualsiasi momento, riduzione dello sfarfallio all'interno della visualizzazione del controllo. Per ulteriori informazioni su questa notifica, vedere [utilizzo dei campi Callback in una data e un controllo selezione ora](../mfc/using-callback-fields-in-a-date-and-time-picker-control.md).  
  
-   **DTN_USERSTRING** notifica all'elemento padre che l'utente ha terminato la modifica del contenuto del controllo selezione data e ora. Questa notifica viene inviata solo quando il **DTS_APPCANPARSE** stile è stato impostato.  
  
-   **DTN_WMKEYDOWN** notifica padre quando l'utente digita in un campo callback. Gestire la notifica per emulare la stessa risposta tastiera supportata per i campi non callback in un controllo selezione data e ora. Per ulteriori informazioni su questa notifica, vedere [supporto campi Callback in un controllo DTP](http://msdn.microsoft.com/library/windows/desktop/bb761726) in Windows SDK.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CDateTimeCtrl](../mfc/using-cdatetimectrl.md)   
 [Controlli](../mfc/controls-mfc.md)

