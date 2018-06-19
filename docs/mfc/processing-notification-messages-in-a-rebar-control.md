---
title: Elaborazione dei messaggi di notifica in un controllo Rebar | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- RBN_ notification messages, description of
- CReBarCtrl class [MFC], notification messages sent by
- RBN_ notification messages [MFC]
- notifications [MFC], CReBarCtrl
ms.assetid: 40f43a60-0c18-4d8d-8fab-213a095624f9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a06df0bdfe8d1b81b4285fc86378f3da99882698
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33348416"
---
# <a name="processing-notification-messages-in-a-rebar-control"></a>Elaborazione dei messaggi di notifica in un controllo Rebar
Nella classe padre del controllo rebar, creare un `OnChildNotify` funzione del gestore con un'istruzione switch per qualsiasi controllo rebar (`CReBarCtrl`) che si desidera gestire i messaggi di notifica. Le notifiche vengono inviate alla finestra padre quando l'utente trascina oggetti tramite il controllo rebar, modifica il layout delle bande rebar, elimina bande dal controllo rebar e così via.  
  
 I seguenti messaggi di notifica possono essere inviati dall'oggetto controllo rebar:  
  
-   **RBN_AUTOSIZE viene** inviati da un controllo rebar (creata con il **RBS_AUTOSIZE** stile) quando il controllo rebar viene ridimensionato automaticamente.  
  
-   **RBN_BEGINDRAG viene** inviato da un controllo rebar quando l'utente inizia a trascinare una fuori banda.  
  
-   **RBN_CHILDSIZE viene** inviato da un controllo rebar quando viene ridimensionato finestra figlio della banda.  
  
-   **RBN_DELETEDBAND viene** inviato da un controllo rebar dopo una banda è stata eliminata.  
  
-   **RBN_DELETINGBAND viene** inviato da un controllo rebar quando una banda sta per essere eliminato.  
  
-   **RBN_ENDDRAG viene** inviato da un controllo rebar quando l'utente smette di trascinare una fuori banda.  
  
-   **RBN_GETOBJECT viene** inviati da un controllo rebar (creata con il **RBS_REGISTERDROP** stile) quando un oggetto viene trascinato su una banda nel controllo.  
  
-   **RBN_HEIGHTCHANGE viene** inviato da un controllo rebar quando l'altezza è stato modificato.  
  
-   **RBN_LAYOUTCHANGED viene** inviato da un controllo rebar quando l'utente modifica il layout delle bande del controllo.  
  
 Per ulteriori informazioni sulle notifiche, vedere [riferimento per il controllo Rebar](http://msdn.microsoft.com/library/windows/desktop/bb774375) in Windows SDK.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CReBarCtrl](../mfc/using-crebarctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

