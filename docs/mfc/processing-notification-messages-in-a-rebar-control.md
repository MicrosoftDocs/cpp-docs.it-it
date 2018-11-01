---
title: Elaborazione dei messaggi di notifica in un controllo Rebar
ms.date: 11/04/2016
helpviewer_keywords:
- RBN_ notification messages, description of
- CReBarCtrl class [MFC], notification messages sent by
- RBN_ notification messages [MFC]
- notifications [MFC], CReBarCtrl
ms.assetid: 40f43a60-0c18-4d8d-8fab-213a095624f9
ms.openlocfilehash: 8cbe9849e16e8bfa9c0d0ce1f96e846bffaab2ef
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50621832"
---
# <a name="processing-notification-messages-in-a-rebar-control"></a>Elaborazione dei messaggi di notifica in un controllo Rebar

Nella classe padre del controllo rebar, creare un `OnChildNotify` funzione di gestione di un'istruzione switch per qualsiasi controllo rebar (`CReBarCtrl`) dei messaggi di notifica che si desidera gestire. Le notifiche vengono inviate alla finestra padre quando l'utente trascina gli oggetti tramite il controllo rebar, modifica il layout delle bande rebar, eliminazioni bande nel controllo rebar e così via.

I messaggi di notifica seguente possono essere inviati dall'oggetto controllo rebar:

- RBN_AUTOSIZE viene inviato da un controllo rebar (creato con lo stile RBS_AUTOSIZE) quando il controllo rebar si ridimensiona automaticamente.

- RBN_BEGINDRAG viene inviato da un controllo rebar quando l'utente inizia a trascinare una fuori banda.

- RBN_CHILDSIZE viene inviato da un controllo rebar quando viene ridimensionato finestra figlio della banda.

- RBN_DELETEDBAND viene inviato da un controllo rebar dopo una banda è stata eliminata.

- RBN_DELETINGBAND viene inviato da un controllo rebar quando una banda sta per essere eliminato.

- RBN_ENDDRAG viene inviato da un controllo rebar quando l'utente smette di trascinare una fuori banda.

- RBN_GETOBJECT viene inviato da un controllo rebar (creato con lo stile RBS_REGISTERDROP) quando un oggetto viene trascinato su una fuori banda nel controllo.

- RBN_HEIGHTCHANGE viene inviato da un controllo rebar quando l'altezza è stato modificato.

- RBN_LAYOUTCHANGED viene inviato da un controllo rebar quando l'utente modifica il layout delle bande del controllo.

Per altre informazioni su queste notifiche, vedere [riferimento al controllo Rebar](https://msdn.microsoft.com/library/windows/desktop/bb774375) nel SDK di Windows.

## <a name="see-also"></a>Vedere anche

[Uso di CReBarCtrl](../mfc/using-crebarctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

