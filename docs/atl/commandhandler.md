---
title: CommandHandler
ms.date: 11/04/2016
ms.topic: reference
helpviewer_keywords:
- CommandHandler function
ms.assetid: 662bc7bf-4a10-42b3-986d-d8bae4f63551
ms.openlocfilehash: 99a95228f6036e5f391395be367cdef39ca3dc3b
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69492461"
---
# <a name="commandhandler"></a>CommandHandler

`CommandHandler`funzione identificata dal terzo parametro della macro COMMAND_HANDLER nella mappa messaggi.

## <a name="syntax"></a>Sintassi

```cpp
LRESULT CommandHandler(
    WORD wNotifyCode,
    WORD wID,
    HWND hWndCtl,
    BOOL& bHandled);
```

#### <a name="parameters"></a>Parametri

*wNotifyCode*<br/>
Codice di notifica.

*wID*<br/>
Identificatore della voce di menu, del controllo o dell'acceleratore.

*hWndCtl*<br/>
Handle per un controllo finestra.

*bHandled*<br/>
La mappa messaggi imposta *bHandled* su true prima `CommandHandler` di chiamare il metodo. Se `CommandHandler` non gestisce completamente il messaggio, è necessario impostare *bHandled* su false per indicare che il messaggio deve essere ulteriormente elaborato.

## <a name="return-value"></a>Valore restituito

Risultato dell'elaborazione del messaggio. 0 se ha esito positivo.

## <a name="remarks"></a>Note

Per un esempio di utilizzo di questo gestore di messaggi in una mappa messaggi, vedere [COMMAND_HANDLER](reference/message-map-macros-atl.md#command_handler).

## <a name="see-also"></a>Vedere anche

[Implementazione di una finestra](../atl/implementing-a-window.md)<br/>
[Mappe messaggi](../atl/message-maps-atl.md)<br/>
[WM_NOTIFY](/windows/win32/controls/wm-notify)
