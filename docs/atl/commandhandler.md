---
title: CommandHandler | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CommandHandler
dev_langs:
- C++
helpviewer_keywords:
- CommandHandler function
ms.assetid: 662bc7bf-4a10-42b3-986d-d8bae4f63551
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 27f5585ec334a4179b76579c5216c8c30013ca97
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="commandhandler"></a>CommandHandler
`CommandHandler` viene identificata dal terzo parametro della funzione di `COMMAND_HANDLER` macro della mappa del messaggio.  
  
## <a name="syntax"></a>Sintassi  
  
```  
 
    LRESULT 
    CommandHandler 
 (
    WORD wNotifyCode,  
    WORD wID,  
    HWND hWndCtl,  
    BOOL& bHandled);
```  
  
#### <a name="parameters"></a>Parametri  
 `wNotifyCode`  
 Il codice di notifica.  
  
 *wID*  
 Identificatore della voce di menu, controllo o i tasti di scelta rapida.  
  
 *hWndCtl*  
 Un handle a un controllo di finestra.  
  
 `bHandled`  
 I set di mapping dei messaggi `bHandled` a **TRUE** prima `CommandHandler` viene chiamato. Se `CommandHandler` non gestire completamente il messaggio, è necessario impostare `bHandled` a **FALSE** per indicare che il messaggio richiede un'ulteriore elaborazione.  
  
## <a name="return-value"></a>Valore restituito  
 Il risultato dell'elaborazione del messaggio. 0 se ha esito positivo.  
  
## <a name="remarks"></a>Note  
 Per un esempio dell'utilizzo di questo gestore di messaggi in una mappa messaggi, vedere [COMMAND_HANDLER](reference/message-map-macros-atl.md#command_handler).  
  
## <a name="see-also"></a>Vedere anche  
 [Implementazione di una finestra](../atl/implementing-a-window.md)   
 [Mappe messaggi](../atl/message-maps-atl.md)   
 [WM_NOTIFY](http://msdn.microsoft.com/library/windows/desktop/bb775583)

