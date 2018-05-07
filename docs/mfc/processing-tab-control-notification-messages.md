---
title: L'elaborazione di messaggi di notifica del controllo Tab | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- notifications [MFC], tab controls
- CTabCtrl class [MFC], processing notifications
- notifications [MFC], processing in CTabCtrl
- processing notifications [MFC]
- tab controls [MFC], processing notifications
ms.assetid: 758ccb7a-9e73-48f8-9073-23f7cb09918c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6ce59bfe298798d4574bf158998e989c4a6af62c
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="processing-tab-control-notification-messages"></a>Elaborazione dei messaggi di notifica dei controlli Tab
Come gli utenti fanno clic schede o i pulsanti, il controllo struttura a schede ([CTabCtrl](../mfc/reference/ctabctrl-class.md)) invia i messaggi di notifica alla finestra padre. Se si desidera eseguire un'operazione in risposta, occorre gestire questi messaggi. Ad esempio, quando l'utente fa clic su una scheda, si desideri predefinito dei dati di controllo nella pagina prima di visualizzarlo.  
  
 Processo **WM_NOTIFY** messaggi dal controllo struttura a schede nella classe finestra di dialogo o una vista. Utilizzare la finestra proprietà per creare un [OnChildNotify](../mfc/reference/cwnd-class.md#onchildnotify) funzione del gestore con un'istruzione switch in base al messaggio di notifica che viene gestito. Per un elenco di notifiche che un controllo tab può inviare alla finestra padre, vedere il **notifiche** sezione [scheda Controllo riferimento](http://msdn.microsoft.com/library/windows/desktop/bb760548) in Windows SDK.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CTabCtrl](../mfc/using-ctabctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

