---
title: Elaborazione dei messaggi di notifica nel mese di calendario controlli | Documenti Microsoft
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
ms.openlocfilehash: ce9906a738ed6c577f46d2919a5cdac80b877110
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36930989"
---
# <a name="processing-notification-messages-in-month-calendar-controls"></a>Elaborazione dei messaggi di notifica nel controlli calendario mensile
Quando gli utenti interagiscono con il controllo di calendario mensile (selezione di date e/o la visualizzazione di un altro mese), il controllo (`CMonthCalCtrl`) invia i messaggi di notifica alla finestra padre, in genere un oggetto finestra di dialogo o una vista. Se si desidera eseguire un'operazione in risposta, occorre gestire questi messaggi. Quando l'utente seleziona un nuovo mese per visualizzare, ad esempio, è possibile fornire un set di date che devono essere evidenziate.  
  
 Usare la finestra Proprietà per aggiungere la gestione della notifica alla classe padre per i messaggi da implementare.  
  
 Nell'elenco seguente vengono descritte le diverse notifiche inviate dal controllo calendario mensile.  
  
-   MCN_GETDAYSTATE richiede informazioni concernenti giorni devono essere visualizzati in grassetto. Per informazioni sulla gestione di questa notifica, vedere [impostazione dello stato giorno di un controllo calendario mensile](../mfc/setting-the-day-state-of-a-month-calendar-control.md).  
  
-   MCN_SELCHANGE notifica all'elemento padre, che è stata modificata la data selezionata o l'intervallo della data.  
  
-   MCN_SELECT Notifica all'elemento padre, che è stata effettuata una selezione data esplicita.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CMonthCalCtrl](../mfc/using-cmonthcalctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

