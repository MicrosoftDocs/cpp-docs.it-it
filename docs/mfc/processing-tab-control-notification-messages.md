---
title: L'elaborazione dei messaggi di notifica controlli Tab | Documenti Microsoft
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
ms.openlocfilehash: 462d9177b1f6300eb356d052cbdfff3b85db86a1
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36928062"
---
# <a name="processing-tab-control-notification-messages"></a>Elaborazione dei messaggi di notifica dei controlli Tab
Come gli utenti fanno clic schede o i pulsanti, il controllo struttura a schede ([CTabCtrl](../mfc/reference/ctabctrl-class.md)) invia i messaggi di notifica alla finestra padre. Se si desidera eseguire un'operazione in risposta, occorre gestire questi messaggi. Ad esempio, quando l'utente fa clic su una scheda, si desideri predefinito dei dati di controllo nella pagina prima di visualizzarlo.  
  
 Elaborare i messaggi WM_NOTIFY dal controllo struttura a schede nella classe finestra di dialogo o una vista. Utilizzare la finestra proprietà per creare un [OnChildNotify](../mfc/reference/cwnd-class.md#onchildnotify) funzione del gestore con un'istruzione switch basata sul messaggio di notifica viene gestita. Per un elenco di notifiche che un controllo tab può inviare alla finestra padre, vedere la **notifiche** sezione [riferimento per il controllo scheda](http://msdn.microsoft.com/library/windows/desktop/bb760548) in Windows SDK.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CTabCtrl](../mfc/using-ctabctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

