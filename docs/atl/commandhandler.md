---
title: CommandHandler | Microsoft Docs
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
ms.openlocfilehash: 1ad124f0819dbfd9cfd0117cb91fbcffba05a400
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43201276"
---
# <a name="commandhandler"></a>CommandHandler
`CommandHandler` la funzione è identificata dal terzo parametro della macro COMMAND_HANDLER nella mappa messaggi.  
  
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
 *wNotifyCode*  
 Il codice di notifica.  
  
 *wID*  
 Identificatore della voce di menu, controllo o tasto di scelta rapida.  
  
 *hWndCtl*  
 Handle per un controllo di finestra.  
  
 *bHandled*  
 Il set di mapping dei messaggi *bHandled* su TRUE prima `CommandHandler` viene chiamato. Se `CommandHandler` non gestisce completamente il messaggio deve essere impostato *bHandled* su FALSE per indicare che il messaggio richiede un'ulteriore elaborazione.  
  
## <a name="return-value"></a>Valore restituito  
 Il risultato dell'elaborazione del messaggio. 0 se ha esito positivo.  
  
## <a name="remarks"></a>Note  
 Per un esempio dell'uso di questo gestore di messaggi in una mappa dei messaggi, vedere [COMMAND_HANDLER](reference/message-map-macros-atl.md#command_handler).  
  
## <a name="see-also"></a>Vedere anche  
 [Implementazione di una finestra](../atl/implementing-a-window.md)   
 [Mappe messaggi](../atl/message-maps-atl.md)   
 [WM_NOTIFY](https://msdn.microsoft.com/library/windows/desktop/bb775583)

