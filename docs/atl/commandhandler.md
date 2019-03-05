---
title: CommandHandler
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- CommandHandler
helpviewer_keywords:
- CommandHandler function
ms.assetid: 662bc7bf-4a10-42b3-986d-d8bae4f63551
ms.openlocfilehash: c8ae2ae3b68b01c00ce1c6441fa9a3150d4c334b
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57285061"
---
# <a name="commandhandler"></a>CommandHandler

`CommandHandler` la funzione è identificata dal terzo parametro della macro COMMAND_HANDLER nella mappa messaggi.

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
Il codice di notifica.

*wID*<br/>
Identificatore della voce di menu, controllo o tasto di scelta rapida.

*hWndCtl*<br/>
Handle per un controllo di finestra.

*bHandled*<br/>
Il set di mapping dei messaggi *bHandled* su TRUE prima `CommandHandler` viene chiamato. Se `CommandHandler` non gestisce completamente il messaggio deve essere impostato *bHandled* su FALSE per indicare che il messaggio richiede un'ulteriore elaborazione.

## <a name="return-value"></a>Valore restituito

Il risultato dell'elaborazione del messaggio. 0 se ha esito positivo.

## <a name="remarks"></a>Note

Per un esempio dell'uso di questo gestore di messaggi in una mappa dei messaggi, vedere [COMMAND_HANDLER](reference/message-map-macros-atl.md#command_handler).

## <a name="see-also"></a>Vedere anche

[Implementazione di una finestra](../atl/implementing-a-window.md)<br/>
[Mappe messaggi](../atl/message-maps-atl.md)<br/>
[WM_NOTIFY](/windows/desktop/controls/wm-notify)
