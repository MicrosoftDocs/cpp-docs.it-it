---
title: Classe CAnimationTimerEventHandler | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CAnimationTimerEventHandler
- AFXANIMATIONCONTROLLER/CAnimationTimerEventHandler
- AFXANIMATIONCONTROLLER/CAnimationTimerEventHandler::CreateInstance
- AFXANIMATIONCONTROLLER/CAnimationTimerEventHandler::OnPostUpdate
- AFXANIMATIONCONTROLLER/CAnimationTimerEventHandler::OnPreUpdate
- AFXANIMATIONCONTROLLER/CAnimationTimerEventHandler::OnRenderingTooSlow
- AFXANIMATIONCONTROLLER/CAnimationTimerEventHandler::SetAnimationController
dev_langs:
- C++
helpviewer_keywords:
- CAnimationTimerEventHandler [MFC], CreateInstance
- CAnimationTimerEventHandler [MFC], OnPostUpdate
- CAnimationTimerEventHandler [MFC], OnPreUpdate
- CAnimationTimerEventHandler [MFC], OnRenderingTooSlow
- CAnimationTimerEventHandler [MFC], SetAnimationController
ms.assetid: 188dea3b-4b5e-4f6b-8df9-09d993a21619
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: fc0fe5a59a5efedc00850da03be84bb212d4a51f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="canimationtimereventhandler-class"></a>Classe CAnimationTimerEventHandler
Implementa un callback, chiamato dall'API di animazione quando si verificano eventi di temporizzazione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CAnimationTimerEventHandler : public CUIAnimationTimerEventHandlerBase<CAnimationTimerEventHandler>;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationTimerEventHandler::CreateInstance](#createinstance)|Crea un'istanza di `CAnimationTimerEventHandler` callback.|  
|[CAnimationTimerEventHandler::OnPostUpdate](#onpostupdate)|Gestisce gli eventi che si verificano al termine dell'aggiornamento di un'animazione. Esegue l'override`CUIAnimationTimerEventHandlerBase::OnPostUpdate`.|  
|[CAnimationTimerEventHandler::OnPreUpdate](#onpreupdate)|Gestisce gli eventi che si verificano prima dell'inizio aggiornamento di un'animazione. Esegue l'override`CUIAnimationTimerEventHandlerBase::OnPreUpdate`.|  
|[CAnimationTimerEventHandler::OnRenderingTooSlow](#onrenderingtooslow)|Gestisce gli eventi che si verificano quando la frequenza dei fotogrammi per il rendering di un'animazione scende sotto la frequenza di fotogrammi. Esegue l'override`CUIAnimationTimerEventHandlerBase::OnRenderingTooSlow`.|  
|[CAnimationTimerEventHandler::SetAnimationController](#setanimationcontroller)|Archivia un puntatore al controller di animazione per eventi della route.|  
  
## <a name="remarks"></a>Note  
 Questo gestore eventi viene creato e passato a IUIAnimationTimer::SetTimerEventHandler quando si chiama CAnimationController::EnableAnimationTimerEventHandler.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CUIAnimationCallbackBase`  
  
 `CUIAnimationTimerEventHandlerBase`  
  
 `CAnimationTimerEventHandler`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxanimationcontroller.h  
  
##  <a name="createinstance"></a>  CAnimationTimerEventHandler::CreateInstance  
 Crea un'istanza di callback CAnimationTimerEventHandler.  
  
```  
static COM_DECLSPEC_NOTHROW HRESULT CreateInstance(
    CAnimationController* pAnimationController,  
    IUIAnimationTimerEventHandler** ppTimerEventHandler);
```  
  
### <a name="parameters"></a>Parametri  
 `pAnimationController`  
 Puntatore al controller di animazione che riceverà gli eventi.  
  
 `ppTimerEventHandler`  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.  
  
##  <a name="onpostupdate"></a>  CAnimationTimerEventHandler::OnPostUpdate  
 Gestisce gli eventi che si verificano al termine dell'aggiornamento di un'animazione.  
  
```  
IFACEMETHOD(OnPostUpdate)();
```  
  
### <a name="return-value"></a>Valore restituito  
 S_OK se il metodo ha esito positivo. in caso contrario E_FAIL.  
  
##  <a name="onpreupdate"></a>  CAnimationTimerEventHandler::OnPreUpdate  
 Gestisce gli eventi che si verificano prima dell'inizio aggiornamento di un'animazione.  
  
```  
IFACEMETHOD(OnPreUpdate)();
```  
  
### <a name="return-value"></a>Valore restituito  
 S_OK se il metodo ha esito positivo. in caso contrario E_FAIL.  
  
##  <a name="onrenderingtooslow"></a>  CAnimationTimerEventHandler::OnRenderingTooSlow  
 Gestisce gli eventi che si verificano quando la frequenza dei fotogrammi per il rendering di un'animazione scende sotto la frequenza di fotogrammi.  
  
```  
IFACEMETHOD(OnRenderingTooSlow)(UINT32 fps);
```  
  
### <a name="parameters"></a>Parametri  
 `fps`  
  
### <a name="return-value"></a>Valore restituito  
 S_OK se il metodo ha esito positivo. in caso contrario E_FAIL.  
  
##  <a name="setanimationcontroller"></a>  CAnimationTimerEventHandler::SetAnimationController  
 Archivia un puntatore al controller di animazione per eventi della route.  
  
```  
void SetAnimationController(CAnimationController* pAnimationController);
```  
  
### <a name="parameters"></a>Parametri  
 `pAnimationController`  
 Puntatore al controller di animazione che riceverà gli eventi.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)
