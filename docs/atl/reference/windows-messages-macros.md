---
title: Macro di messaggi di Windows | Microsoft Docs
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
ms.openlocfilehash: 3063dd1bb5bbd9c0eb957b9727027b2d01edfd7d
ms.sourcegitcommit: 7d68f8303e021e27dc8f4d36e764ed836e93d24f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/06/2018
ms.locfileid: "37886206"
---
# <a name="windows-messages-macros"></a>Macro di messaggi Windows
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
 Diverso da zero se il messaggio è stato elaborato, zero se non.  
  
### <a name="remarks"></a>Note  
 Usare WM_FORWARDMSG per inoltrare un messaggio ricevuto da una finestra a un'altra finestra per l'elaborazione. I parametri LPARAM e WPARAM vengono usati come segue:  
  
|Parametro|Utilizzo|  
|---------------|-----------|  
|WPARAM|Dati definiti dall'utente|  
|LPARAM|Un puntatore a un `MSG` struttura che contiene informazioni su un messaggio|  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente, `m_hWndOther` rappresenta l'altra finestra che riceve questo messaggio.  
  
 [!code-cpp[NVC_ATL_Windowing#137](../../atl/codesnippet/cpp/windows-messages-macros_1.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Macro](../../atl/reference/atl-macros.md)
