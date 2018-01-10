---
title: Elaborazione dei messaggi di notifica in un controllo Rebar | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- RBN_ notification messages, description of
- CReBarCtrl class [MFC], notification messages sent by
- RBN_ notification messages [MFC]
- notifications [MFC], CReBarCtrl
ms.assetid: 40f43a60-0c18-4d8d-8fab-213a095624f9
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 22a8b584c309cd6698ddd73449fcbba866111190
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="processing-notification-messages-in-a-rebar-control"></a>Elaborazione dei messaggi di notifica in un controllo Rebar
Nella classe padre del controllo rebar, creare un `OnChildNotify` funzione del gestore con un'istruzione switch per qualsiasi controllo rebar (`CReBarCtrl`) che si desidera gestire i messaggi di notifica. Le notifiche vengono inviate alla finestra padre quando l'utente trascina oggetti tramite il controllo rebar, modifica il layout delle bande rebar, elimina bande dal controllo rebar e così via.  
  
 I seguenti messaggi di notifica possono essere inviati dall'oggetto controllo rebar:  
  
-   **RBN_AUTOSIZE viene** inviato da un controllo rebar (creata con la **RBS_AUTOSIZE** stile) quando il controllo rebar viene ridimensionato automaticamente.  
  
-   **RBN_BEGINDRAG viene** inviato da un controllo rebar quando l'utente inizia a trascinare una banda.  
  
-   **RBN_CHILDSIZE viene** inviato da un controllo rebar quando figlio finestra una banda viene ridimensionata.  
  
-   **RBN_DELETEDBAND viene** inviato da un controllo rebar dopo una banda è stata eliminata.  
  
-   **RBN_DELETINGBAND viene** inviato da un controllo rebar quando una banda sta per essere eliminato.  
  
-   **RBN_ENDDRAG viene** inviato da un controllo rebar quando l'utente smette di trascinare una banda.  
  
-   **RBN_GETOBJECT viene** inviato da un controllo rebar (creata con la **RBS_REGISTERDROP** stile) quando un oggetto viene trascinato su una banda nel controllo.  
  
-   **RBN_HEIGHTCHANGE viene** inviato da un controllo rebar quando l'altezza è stato modificato.  
  
-   **RBN_LAYOUTCHANGED viene** inviato da un controllo rebar quando l'utente modifica il layout delle bande del controllo.  
  
 Per ulteriori informazioni sulle notifiche, vedere [riferimento per il controllo Rebar](http://msdn.microsoft.com/library/windows/desktop/bb774375) in Windows SDK.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CReBarCtrl](../mfc/using-crebarctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

