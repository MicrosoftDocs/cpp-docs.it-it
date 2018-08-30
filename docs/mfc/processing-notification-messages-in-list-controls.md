---
title: Elaborazione dei messaggi di notifica nei controlli List | Microsoft Docs
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
ms.openlocfilehash: 3362074ce0f8d4d7a3a3463d22f9089f847e747d
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43208710"
---
# <a name="processing-notification-messages-in-list-controls"></a>Elaborazione dei messaggi di notifica nei controlli List
Come gli utenti fanno clic le intestazioni di colonna, trascinano le icone, modificare le etichette e così via, il controllo elenco ([CListCtrl](../mfc/reference/clistctrl-class.md)) invia i messaggi di notifica alla finestra padre. Se si desidera eseguire un'operazione in risposta, occorre gestire questi messaggi. Ad esempio, quando l'utente fa clic sull'intestazione di una colonna, è possibile che si desideri che le voci vengano ordinate in base al contenuto della colonna selezionata, come in Microsoft Outlook.  
  
 Elaborare i messaggi WM_NOTIFY dal controllo elenco nella classe di finestra di dialogo o visualizzazione. Utilizzare la finestra proprietà per creare un [OnChildNotify](../mfc/reference/cwnd-class.md#onchildnotify) funzione del gestore con un'istruzione switch basata sul messaggio di notifica che viene gestito.  
  
 Per un elenco delle notifiche di un controllo elenco può inviare alla finestra padre, vedere [riferimento del controllo visualizzazione elenco](/windows/desktop/Controls/list-view-control-reference) nel SDK di Windows.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CListCtrl](../mfc/using-clistctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

