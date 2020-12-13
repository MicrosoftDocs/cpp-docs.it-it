---
description: 'Altre informazioni su: CommandHandler'
title: CommandHandler
ms.date: 11/04/2016
ms.topic: reference
helpviewer_keywords:
- CommandHandler function
ms.assetid: 662bc7bf-4a10-42b3-986d-d8bae4f63551
ms.openlocfilehash: 746048dd83088cac8316cf6e0140644956c21b4b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97153284"
---
# <a name="commandhandler"></a>CommandHandler

`CommandHandler` funzione identificata dal terzo parametro della macro COMMAND_HANDLER nella mappa messaggi.

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
La mappa messaggi imposta *bHandled* su true prima di chiamare il metodo `CommandHandler` . Se non `CommandHandler` gestisce completamente il messaggio, è necessario impostare *BHANDLED* su false per indicare che il messaggio deve essere ulteriormente elaborato.

## <a name="return-value"></a>Valore restituito

Risultato dell'elaborazione del messaggio. 0 se ha esito positivo.

## <a name="remarks"></a>Commenti

Per un esempio di utilizzo di questo gestore di messaggi in una mappa messaggi, vedere [COMMAND_HANDLER](reference/message-map-macros-atl.md#command_handler).

## <a name="see-also"></a>Vedi anche

[Implementazione di una finestra](../atl/implementing-a-window.md)<br/>
[Mappe messaggi](../atl/message-maps-atl.md)<br/>
[WM_NOTIFY](/windows/win32/controls/wm-notify)
