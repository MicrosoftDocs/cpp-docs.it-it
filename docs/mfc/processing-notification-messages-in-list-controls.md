---
title: Elaborazione dei messaggi di notifica nei controlli List | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- processing notifications [MFC]
- CListCtrl class [MFC], processing notifications
ms.assetid: 1f0e296e-d2a3-48fc-ae38-51d7fb096f51
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: af648a0bf4ae78c5c5e8bcceeac12c5dbc87307a
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33347676"
---
# <a name="processing-notification-messages-in-list-controls"></a>Elaborazione dei messaggi di notifica nei controlli List
Come gli utenti fanno clic le intestazioni di colonna, trascinano le icone, modificare le etichette e così via, il controllo elenco ([CListCtrl](../mfc/reference/clistctrl-class.md)) invia i messaggi di notifica alla finestra padre. Se si desidera eseguire un'operazione in risposta, occorre gestire questi messaggi. Ad esempio, quando l'utente fa clic sull'intestazione di una colonna, è possibile che si desideri che le voci vengano ordinate in base al contenuto della colonna selezionata, come in Microsoft Outlook.  
  
 Processo **WM_NOTIFY** messaggi dal controllo elenco nella classe finestra di dialogo o una vista. Utilizzare la finestra proprietà per creare un [OnChildNotify](../mfc/reference/cwnd-class.md#onchildnotify) funzione del gestore con un'istruzione switch in base al messaggio di notifica che viene gestito.  
  
 Per un elenco di notifiche che un controllo elenco può inviare alla finestra padre, vedere [riferimento del controllo visualizzazione elenco](http://msdn.microsoft.com/library/windows/desktop/bb774737) in Windows SDK.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CListCtrl](../mfc/using-clistctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

