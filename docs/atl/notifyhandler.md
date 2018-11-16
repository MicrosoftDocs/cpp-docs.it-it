---
title: NotifyHandler
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- NotifyHandler
helpviewer_keywords:
- NotifyHandler function
ms.assetid: 5ff953ec-de35-42bc-8b3c-d384d636c139
ms.openlocfilehash: 72c8fa3a0773a67c32a0652eb048885564a734be
ms.sourcegitcommit: b032daf81cb5fdb1f5a988277ee30201441c4945
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/15/2018
ms.locfileid: "51694608"
---
# <a name="notifyhandler"></a>NotifyHandler

Il nome della funzione identificato dal terzo parametro della macro NOTIFY_HANDLER nella mappa messaggi.

## <a name="syntax"></a>Sintassi

```cpp
LRESULT NotifyHandler(
    int idCtrl,
    LPNMHDR pnmh,
    BOOL& bHandled);
```

#### <a name="parameters"></a>Parametri

*idCtrl*<br/>
L'identificatore del controllo che invia il messaggio.

*pnmh*<br/>
Indirizzo di un [NMHDR](/windows/desktop/api/richedit/ns-richedit-_nmhdr) struttura che contiene il codice di notifica e informazioni aggiuntive. Per alcuni messaggi di notifica, questo parametro punta a una struttura più grande che presenta il `NMHDR` struttura come il primo membro.

*bHandled*<br/>
Il set di mapping dei messaggi *bHandled* su TRUE prima *NotifyHandler* viene chiamato. Se *NotifyHandler* non gestisce completamente il messaggio deve essere impostato *bHandled* al **FALSE** per indicare che il messaggio richiede un'ulteriore elaborazione.

## <a name="return-value"></a>Valore restituito

Il risultato dell'elaborazione del messaggio. 0 se ha esito positivo.

## <a name="remarks"></a>Note

Per un esempio dell'uso di questo gestore di messaggi in una mappa dei messaggi, vedere [NOTIFY_HANDLER](reference/message-map-macros-atl.md#notify_handler)).

## <a name="see-also"></a>Vedere anche

[Implementazione di una finestra](../atl/implementing-a-window.md)<br/>
[Mappe messaggi](../atl/message-maps-atl.md)<br/>
[WM_NOTIFY](/windows/desktop/controls/wm-notify)
