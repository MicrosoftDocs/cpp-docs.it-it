---
title: MessageHandler | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: MessageHandler
dev_langs: C++
helpviewer_keywords: MessageHandler function
ms.assetid: 8a0acf97-1b0d-4226-91b9-75446634a03c
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: f5a09439cf47c695af0d3b7d6c7724cffcb9ccb4
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="messagehandler"></a>MessageHandler
**MessageHandler** è il nome della funzione identificata dal secondo parametro del `MESSAGE_HANDLER` macro della mappa del messaggio.  
  
## <a name="syntax"></a>Sintassi  
  
```  
 
    LRESULT 
    MessageHandler 
 (
    UINT uMsg,  
    WPARAM wParam,  
    LPARAM lParam,  
    BOOL& bHandled);
```  
  
#### <a name="parameters"></a>Parametri  
 `uMsg`  
 Specifica il messaggio.  
  
 `wParam`  
 Ulteriori informazioni specifiche del messaggio.  
  
 `lParam`  
 Ulteriori informazioni specifiche del messaggio.  
  
 `bHandled`  
 I set di mapping dei messaggi `bHandled` a **TRUE** prima `MessageHandler` viene chiamato. Se `MessageHandler` non gestire completamente il messaggio, è necessario impostare `bHandled` a **FALSE** per indicare che il messaggio richiede un'ulteriore elaborazione.  
  
## <a name="return-value"></a>Valore restituito  
 Il risultato dell'elaborazione del messaggio. 0 se ha esito positivo.  
  
## <a name="remarks"></a>Note  
 Per un esempio dell'utilizzo di questo gestore di messaggi in una mappa messaggi, vedere [MESSAGE_HANDLER](reference/message-map-macros-atl.md#message_handler).  
  
## <a name="see-also"></a>Vedere anche  
 [Implementazione di una finestra](../atl/implementing-a-window.md)   
 [Mappe messaggi](../atl/message-maps-atl.md)   
 [WM_NOTIFY](http://msdn.microsoft.com/library/windows/desktop/bb775583)

