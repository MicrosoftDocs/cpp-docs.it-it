---
description: 'Altre informazioni su: MessageHandler'
title: MessageHandler
ms.date: 11/04/2016
ms.topic: reference
helpviewer_keywords:
- MessageHandler function
ms.assetid: 8a0acf97-1b0d-4226-91b9-75446634a03c
ms.openlocfilehash: d369b94721e57eb4adc704570bc09d1aae184fe1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97159505"
---
# <a name="messagehandler"></a>MessageHandler

`MessageHandler` nome della funzione identificata dal secondo parametro della macro MESSAGE_HANDLER nella mappa messaggi.

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
La mappa messaggi imposta *bHandled* su true prima di chiamare il metodo `MessageHandler` . Se non `MessageHandler` gestisce completamente il messaggio, è necessario impostare *BHANDLED* su false per indicare che il messaggio deve essere ulteriormente elaborato.

## <a name="return-value"></a>Valore restituito

Risultato dell'elaborazione del messaggio. 0 se ha esito positivo.

## <a name="remarks"></a>Commenti

Per un esempio di utilizzo di questo gestore di messaggi in una mappa messaggi, vedere [MESSAGE_HANDLER](reference/message-map-macros-atl.md#message_handler).

## <a name="see-also"></a>Vedi anche

[Implementazione di una finestra](../atl/implementing-a-window.md)<br/>
[Mappe messaggi](../atl/message-maps-atl.md)<br/>
[WM_NOTIFY](/windows/win32/controls/wm-notify)
