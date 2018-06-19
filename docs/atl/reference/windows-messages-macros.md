---
title: Macro di messaggi di Windows | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- atlbase/ATL::WM_FORWARDMSG
dev_langs:
- C++
ms.assetid: 63abd22c-372d-4148-bb04-c605950ae64f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 21bb273b94f871e253ab927238c96256f46e2b3a
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32360217"
---
# <a name="windows-messages-macros"></a>Macro di messaggi di Windows
Questa macro inoltra i messaggi della finestra.  
  
|||  
|-|-|  
|[WM_FORWARDMSG](#wm_forwardmsg)|Usare per inoltrare un messaggio ricevuto da una finestra a un'altra finestra per l'elaborazione.|  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h 
   
##  <a name="wm_forwardmsg"></a>  WM_FORWARDMSG  
 Questa macro inoltra un messaggio ricevuto da una finestra a un'altra finestra per l'elaborazione.  
  
```
WM_FORWARDMSG
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il messaggio è stato elaborato, se non lo zero.  
  
### <a name="remarks"></a>Note  
 Utilizzare `WM_FORWARDMSG` per inoltrare un messaggio ricevuto da una finestra a un'altra finestra per l'elaborazione. I parametri LPARAM e WPARAM vengono utilizzati come indicato di seguito:  
  
|Parametro|Utilizzo|  
|---------------|-----------|  
|WPARAM|Dati definiti dall'utente|  
|LPARAM|Un puntatore a un `MSG` struttura che contiene informazioni su un messaggio|  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente, `m_hWndOther` rappresenta l'altra finestra che riceve il messaggio.  
  
 [!code-cpp[NVC_ATL_Windowing#137](../../atl/codesnippet/cpp/windows-messages-macros_1.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Macro](../../atl/reference/atl-macros.md)
