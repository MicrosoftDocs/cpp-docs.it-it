---
title: NotifyHandler | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- NotifyHandler
dev_langs:
- C++
helpviewer_keywords:
- NotifyHandler function
ms.assetid: 5ff953ec-de35-42bc-8b3c-d384d636c139
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 8f2b7e1825e7192c6a9afa105aeb3a7436f120c1
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="notifyhandler"></a>NotifyHandler
Il nome della funzione identificata dal terzo parametro del `NOTIFY_HANDLER` macro della mappa del messaggio.  
  
## <a name="syntax"></a>Sintassi  
  
```  
 
    LRESULT 
    NotifyHandler 
 (
    int idCtrl,  
    LPNMHDR pnmh,  
    BOOL& bHandled);
```  
  
#### <a name="parameters"></a>Parametri  
 `idCtrl`  
 L'identificatore del controllo che invia il messaggio.  
  
 *pnmh*  
 Indirizzo di un [NMHDR](http://msdn.microsoft.com/library/windows/desktop/bb775514) struttura che contiene il codice di notifica e informazioni aggiuntive. Per alcuni messaggi di notifica, questo parametro punta a una struttura più ampia che dispone di **NMHDR** struttura come il primo membro.  
  
 `bHandled`  
 I set di mapping dei messaggi `bHandled` a **TRUE** prima *NotifyHandler* viene chiamato. Se *NotifyHandler* non gestire completamente il messaggio, è necessario impostare `bHandled` a **FALSE** per indicare che il messaggio richiede un'ulteriore elaborazione.  
  
## <a name="return-value"></a>Valore restituito  
 Il risultato dell'elaborazione del messaggio. 0 se ha esito positivo.  
  
## <a name="remarks"></a>Note  
 Per un esempio dell'utilizzo di questo gestore di messaggi in una mappa messaggi, vedere [NOTIFY_HANDLER](reference/message-map-macros-atl.md#notify_handler)).  
  
## <a name="see-also"></a>Vedere anche  
 [Implementazione di una finestra](../atl/implementing-a-window.md)   
 [Mappe messaggi](../atl/message-maps-atl.md)   
 [WM_NOTIFY](http://msdn.microsoft.com/library/windows/desktop/bb775583)

