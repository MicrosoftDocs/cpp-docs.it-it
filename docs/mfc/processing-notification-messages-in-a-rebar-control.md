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
ms.openlocfilehash: 9a1d42d129ab7b7d2e98ae1126b8f32f68b1f356
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36931827"
---
# <a name="processing-notification-messages-in-a-rebar-control"></a>Elaborazione dei messaggi di notifica in un controllo Rebar
Nella classe padre del controllo rebar, creare un `OnChildNotify` funzione del gestore con un'istruzione switch per qualsiasi controllo rebar (`CReBarCtrl`) dei messaggi di notifica che si desidera gestire. Le notifiche vengono inviate alla finestra padre quando l'utente trascina oggetti sopra il controllo rebar, modifica il layout delle bande rebar, eliminazioni bande dal controllo rebar e così via.  
  
 I seguenti messaggi di notifica possono essere inviati dall'oggetto controllo rebar:  
  
-   RBN_AUTOSIZE viene inviato da un controllo rebar (creato con lo stile RBS_AUTOSIZE) quando il controllo rebar viene ridimensionato automaticamente.  
  
-   RBN_BEGINDRAG viene inviato da un controllo rebar quando l'utente inizia a trascinare una fuori banda.  
  
-   RBN_CHILDSIZE viene inviato da un controllo rebar quando viene ridimensionato finestra figlio della banda.  
  
-   RBN_DELETEDBAND viene inviato da un controllo rebar dopo una banda è stata eliminata.  
  
-   RBN_DELETINGBAND viene inviato da un controllo rebar quando una banda sta per essere eliminato.  
  
-   RBN_ENDDRAG viene inviato da un controllo rebar quando l'utente smette di trascinare una fuori banda.  
  
-   RBN_GETOBJECT viene inviato da un controllo rebar (creato con lo stile RBS_REGISTERDROP) quando un oggetto viene trascinato su una banda nel controllo.  
  
-   RBN_HEIGHTCHANGE viene inviato da un controllo rebar quando l'altezza è stato modificato.  
  
-   RBN_LAYOUTCHANGED viene inviato da un controllo rebar quando l'utente modifica il layout delle bande del controllo.  
  
 Per ulteriori informazioni su queste notifiche, vedere [riferimento per il controllo Rebar](http://msdn.microsoft.com/library/windows/desktop/bb774375) in Windows SDK.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CReBarCtrl](../mfc/using-crebarctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

