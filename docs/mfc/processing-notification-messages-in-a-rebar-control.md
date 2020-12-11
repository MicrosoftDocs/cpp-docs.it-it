---
description: 'Altre informazioni su: elaborazione dei messaggi di notifica in un controllo Rebar'
title: Elaborazione dei messaggi di notifica in un controllo Rebar
ms.date: 11/04/2016
helpviewer_keywords:
- RBN_ notification messages, description of
- CReBarCtrl class [MFC], notification messages sent by
- RBN_ notification messages [MFC]
- notifications [MFC], CReBarCtrl
ms.assetid: 40f43a60-0c18-4d8d-8fab-213a095624f9
ms.openlocfilehash: 6255f10068072f75f556cf1c8576008ab821ed27
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97154838"
---
# <a name="processing-notification-messages-in-a-rebar-control"></a>Elaborazione dei messaggi di notifica in un controllo Rebar

Nella classe padre del controllo Rebar creare una `OnChildNotify` funzione di gestione con un'istruzione switch per tutti `CReBarCtrl` i messaggi di notifica del controllo Rebar () che si desidera gestire. Le notifiche vengono inviate alla finestra padre quando l'utente trascina oggetti sul controllo Rebar, modifica il layout delle bande del Rebar, Elimina le bande dal controllo Rebar e così via.

L'oggetto controllo Rebar può inviare i messaggi di notifica seguenti:

- RBN_AUTOSIZE inviato da un controllo Rebar (creato con lo stile RBS_AUTOSIZE) quando il Rebar viene ridimensionato automaticamente.

- RBN_BEGINDRAG inviato da un controllo Rebar quando l'utente inizia a trascinare un gruppo.

- RBN_CHILDSIZE inviato da un controllo Rebar quando la finestra figlio di una banda viene ridimensionata.

- RBN_DELETEDBAND inviato da un controllo Rebar dopo l'eliminazione di una banda.

- RBN_DELETINGBAND inviato da un controllo Rebar quando un gruppo sta per essere eliminato.

- RBN_ENDDRAG inviato da un controllo Rebar quando l'utente smette di trascinare un gruppo.

- RBN_GETOBJECT inviato da un controllo Rebar (creato con lo stile RBS_REGISTERDROP) quando un oggetto viene trascinato su una banda nel controllo.

- RBN_HEIGHTCHANGE inviato da un controllo Rebar quando l'altezza è cambiata.

- RBN_LAYOUTCHANGED inviato da un controllo Rebar quando l'utente modifica il layout delle bande del controllo.

Per ulteriori informazioni su queste notifiche, vedere Guida di [riferimento al controllo Rebar](/windows/win32/controls/rebar-control-reference) nel Windows SDK.

## <a name="see-also"></a>Vedi anche

[Utilizzo di CReBarCtrl](using-crebarctrl.md)<br/>
[Controlli](controls-mfc.md)
