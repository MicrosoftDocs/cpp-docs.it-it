---
title: MessageHandler | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- MessageHandler
dev_langs:
- C++
helpviewer_keywords:
- MessageHandler function
ms.assetid: 8a0acf97-1b0d-4226-91b9-75446634a03c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4a2434257290c673ca4e18be2e5ec70877e72e67
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46039088"
---
# <a name="messagehandler"></a>MessageHandler

`MessageHandler` è il nome della funzione identificata dal secondo parametro della macro MESSAGE_HANDLER nella mappa messaggi.

## <a name="syntax"></a>Sintassi

```
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
Informazioni aggiuntive specifiche del messaggio.

*lParam*<br/>
Informazioni aggiuntive specifiche del messaggio.

*bHandled*<br/>
Il set di mapping dei messaggi *bHandled* su TRUE prima `MessageHandler` viene chiamato. Se `MessageHandler` non gestisce completamente il messaggio deve essere impostato *bHandled* su FALSE per indicare che il messaggio richiede un'ulteriore elaborazione.

## <a name="return-value"></a>Valore restituito

Il risultato dell'elaborazione del messaggio. 0 se ha esito positivo.

## <a name="remarks"></a>Note

Per un esempio dell'uso di questo gestore di messaggi in una mappa dei messaggi, vedere [MESSAGE_HANDLER](reference/message-map-macros-atl.md#message_handler).

## <a name="see-also"></a>Vedere anche

[Implementazione di una finestra](../atl/implementing-a-window.md)<br/>
[Mappe messaggi](../atl/message-maps-atl.md)<br/>
[WM_NOTIFY](https://msdn.microsoft.com/library/windows/desktop/bb775583)
