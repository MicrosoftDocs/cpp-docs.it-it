---
title: NotifyHandler
ms.date: 11/04/2016
ms.topic: reference
helpviewer_keywords:
- NotifyHandler function
ms.assetid: 5ff953ec-de35-42bc-8b3c-d384d636c139
ms.openlocfilehash: 16fb330d2da83ddfd013e33a2d4b688b2711103b
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69492308"
---
# <a name="notifyhandler"></a>NotifyHandler

Nome della funzione identificata dal terzo parametro della macro NOTIFY_HANDLER nella mappa messaggi.

## <a name="syntax"></a>Sintassi

```cpp
LRESULT NotifyHandler(
    int idCtrl,
    LPNMHDR pnmh,
    BOOL& bHandled);
```

#### <a name="parameters"></a>Parametri

*idCtrl*<br/>
Identificatore del controllo che invia il messaggio.

*pnmh*<br/>
Indirizzo di una struttura [NMHDR](/windows/win32/api/richedit/ns-richedit-nmhdr) che contiene il codice di notifica e informazioni aggiuntive. Per alcuni messaggi di notifica, questo parametro punta a una struttura più ampia con `NMHDR` la struttura come primo membro.

*bHandled*<br/>
La mappa messaggi imposta *bHandled* su true prima di chiamare *NotifyHandler* . Se *NotifyHandler* non gestisce completamente il messaggio, deve impostare *bHandled* su **false** per indicare che il messaggio deve essere ulteriormente elaborato.

## <a name="return-value"></a>Valore restituito

Risultato dell'elaborazione del messaggio. 0 se ha esito positivo.

## <a name="remarks"></a>Note

Per un esempio di utilizzo di questo gestore di messaggi in una mappa messaggi, vedere [NOTIFY_HANDLER](reference/message-map-macros-atl.md#notify_handler).

## <a name="see-also"></a>Vedere anche

[Implementazione di una finestra](../atl/implementing-a-window.md)<br/>
[Mappe messaggi](../atl/message-maps-atl.md)<br/>
[WM_NOTIFY](/windows/win32/controls/wm-notify)
