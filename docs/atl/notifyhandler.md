---
description: 'Altre informazioni su: NotifyHandler'
title: NotifyHandler
ms.date: 11/04/2016
ms.topic: reference
helpviewer_keywords:
- NotifyHandler function
ms.assetid: 5ff953ec-de35-42bc-8b3c-d384d636c139
ms.openlocfilehash: 1c08eaa91962fa9f6acf330de89334ad1224e582
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97159375"
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
Indirizzo di una struttura [NMHDR](/windows/win32/api/richedit/ns-richedit-nmhdr) che contiene il codice di notifica e informazioni aggiuntive. Per alcuni messaggi di notifica, questo parametro punta a una struttura più ampia con la `NMHDR` struttura come primo membro.

*bHandled*<br/>
La mappa messaggi imposta *bHandled* su true prima di chiamare *NotifyHandler* . Se *NotifyHandler* non gestisce completamente il messaggio, deve impostare *bHandled* su **false** per indicare che il messaggio deve essere ulteriormente elaborato.

## <a name="return-value"></a>Valore restituito

Risultato dell'elaborazione del messaggio. 0 se ha esito positivo.

## <a name="remarks"></a>Commenti

Per un esempio di utilizzo di questo gestore di messaggi in una mappa messaggi, vedere [NOTIFY_HANDLER](reference/message-map-macros-atl.md#notify_handler)).

## <a name="see-also"></a>Vedi anche

[Implementazione di una finestra](../atl/implementing-a-window.md)<br/>
[Mappe messaggi](../atl/message-maps-atl.md)<br/>
[WM_NOTIFY](/windows/win32/controls/wm-notify)
