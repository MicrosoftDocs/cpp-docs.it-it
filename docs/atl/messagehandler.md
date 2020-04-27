---
title: MessageHandler
ms.date: 11/04/2016
ms.topic: reference
helpviewer_keywords:
- MessageHandler function
ms.assetid: 8a0acf97-1b0d-4226-91b9-75446634a03c
ms.openlocfilehash: 65a8ce08e4f8606f168b101aa4daba23ef541051
ms.sourcegitcommit: 2bc15c5b36372ab01fa21e9bcf718fa22705814f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/27/2020
ms.locfileid: "82168670"
---
# <a name="messagehandler"></a>MessageHandler

`MessageHandler`nome della funzione identificata dal secondo parametro della macro MESSAGE_HANDLER nella mappa messaggi.

## <a name="syntax"></a>Sintassi

```cpp
LRESULT MessageHandler(
    UINT uMsg,
    WPARAM wParam,
    LPARAM lParam,
    BOOL& bHandled);
```

### <a name="parameters"></a>Parametri

*uMsg*<br/>
Specifica il messaggio.

*wParam*<br/>
Ulteriori informazioni specifiche del messaggio.

*lParam*<br/>
Ulteriori informazioni specifiche del messaggio.

*bHandled*<br/>
La mappa messaggi imposta *bHandled* su true prima `MessageHandler` di chiamare il metodo. Se `MessageHandler` non gestisce completamente il messaggio, è necessario impostare *bHandled* su false per indicare che il messaggio deve essere ulteriormente elaborato.

## <a name="return-value"></a>Valore restituito

Risultato dell'elaborazione del messaggio. 0 se ha esito positivo.

## <a name="remarks"></a>Osservazioni

Per un esempio di utilizzo di questo gestore di messaggi in una mappa messaggi, vedere [MESSAGE_HANDLER](reference/message-map-macros-atl.md#message_handler).

## <a name="see-also"></a>Vedere anche

[Implementazione di una finestra](../atl/implementing-a-window.md)<br/>
[Mappe messaggi](../atl/message-maps-atl.md)<br/>
[WM_NOTIFY](/windows/win32/controls/wm-notify)
