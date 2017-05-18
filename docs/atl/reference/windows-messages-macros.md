---
title: Macro di messaggi di Windows | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
ms.assetid: 63abd22c-372d-4148-bb04-c605950ae64f
caps.latest.revision: 16
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 604a4bf49490ad2599c857eb3afd527d67e1e25b
ms.openlocfilehash: be814c0a2ade7df8f7a4d6863627e79efe0a48bc
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="windows-messages-macros"></a>Macro di messaggi di Windows
Questa macro inoltra i messaggi della finestra.  
  
|||  
|-|-|  
|[WM_FORWARDMSG](#wm_forwardmsg)|Utilizzare per inoltrare un messaggio ricevuto da una finestra a un'altra finestra per l'elaborazione.|  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h 
   
##  <a name="wm_forwardmsg"></a>WM_FORWARDMSG  
 Questa macro inoltra un messaggio ricevuto da una finestra a un'altra finestra per l'elaborazione.  
  
```
WM_FORWARDMSG
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il messaggio è stato elaborato, zero se non.  
  
### <a name="remarks"></a>Note  
 Utilizzare `WM_FORWARDMSG` per inoltrare un messaggio ricevuto da una finestra a un'altra finestra per l'elaborazione. I parametri WPARAM e LPARAM vengono utilizzati come segue:  
  
|Parametro|Utilizzo|  
|---------------|-----------|  
|WPARAM|Dati definiti dall'utente|  
|LPARAM|Un puntatore a un `MSG` struttura che contiene informazioni su un messaggio|  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente, `m_hWndOther` rappresenta l'altra finestra che riceve il messaggio.  
  
 [!code-cpp[NVC_ATL_Windowing&#137;](../../atl/codesnippet/cpp/windows-messages-macros_1.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Macro](../../atl/reference/atl-macros.md)

