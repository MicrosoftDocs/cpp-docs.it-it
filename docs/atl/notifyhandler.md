---
title: NotifyHandler | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- NotifyHandler
dev_langs:
- C++
helpviewer_keywords:
- NotifyHandler function
ms.assetid: 5ff953ec-de35-42bc-8b3c-d384d636c139
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 8f11c698b0f89e0584b673a112da10e82250cf5c
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46035773"
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
[WM_NOTIFY](https://msdn.microsoft.com/library/windows/desktop/bb775583)
