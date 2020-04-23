---
title: Classe CAnimationTimerEventHandler
ms.date: 11/04/2016
f1_keywords:
- CAnimationTimerEventHandler
- AFXANIMATIONCONTROLLER/CAnimationTimerEventHandler
- AFXANIMATIONCONTROLLER/CAnimationTimerEventHandler::CreateInstance
- AFXANIMATIONCONTROLLER/CAnimationTimerEventHandler::OnPostUpdate
- AFXANIMATIONCONTROLLER/CAnimationTimerEventHandler::OnPreUpdate
- AFXANIMATIONCONTROLLER/CAnimationTimerEventHandler::OnRenderingTooSlow
- AFXANIMATIONCONTROLLER/CAnimationTimerEventHandler::SetAnimationController
helpviewer_keywords:
- CAnimationTimerEventHandler [MFC], CreateInstance
- CAnimationTimerEventHandler [MFC], OnPostUpdate
- CAnimationTimerEventHandler [MFC], OnPreUpdate
- CAnimationTimerEventHandler [MFC], OnRenderingTooSlow
- CAnimationTimerEventHandler [MFC], SetAnimationController
ms.assetid: 188dea3b-4b5e-4f6b-8df9-09d993a21619
ms.openlocfilehash: d1653e50fef03deb8eb23dd9a989d1ca2a529dd8
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81755099"
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
|[CAnimationTimerEventHandler::OnPostUpdateCAnimationTimerEventHandler::OnPostUpdate](#onpostupdate)|Gestisce gli eventi che si verificano dopo il termine di un aggiornamento dell'animazione. Esegue l'override di `CUIAnimationTimerEventHandlerBase::OnPostUpdate`.|
|[CAnimationTimerEventHandler::OnPreUpdate](#onpreupdate)|Gestisce gli eventi che si verificano prima dell'inizio di un aggiornamento dell'animazione. Esegue l'override di `CUIAnimationTimerEventHandlerBase::OnPreUpdate`.|
|[CAnimationTimerEventHandler::OnRenderingTooSlow](#onrenderingtooslow)|Gestisce gli eventi che si verificano quando la frequenza fotogrammi di rendering per un'animazione scende al di sotto della frequenza fotogrammi minima desiderata. Esegue l'override di `CUIAnimationTimerEventHandlerBase::OnRenderingTooSlow`.|
|[CAnimationTimerEventHandler::SetAnimationController](#setanimationcontroller)|Archivia un puntatore al controller di animazione per instradare gli eventi.|

## <a name="remarks"></a>Osservazioni

Questo gestore eventi viene creato e passato a IUIAnimationTimer::SetTimerEventHandler quando si chiama CAnimationController::EnableAnimationTimerEventHandler.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CUIAnimationCallbackBase`

`CUIAnimationTimerEventHandlerBase`

`CAnimationTimerEventHandler`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

## <a name="canimationtimereventhandlercreateinstance"></a><a name="createinstance"></a>CAnimationTimerEventHandler::CreateInstance

Crea un'istanza del callback di CAnimationTimerEventHandler.

```
static COM_DECLSPEC_NOTHROW HRESULT CreateInstance(
    CAnimationController* pAnimationController,
    IUIAnimationTimerEventHandler** ppTimerEventHandler);
```

### <a name="parameters"></a>Parametri

*pAnimationController*<br/>
Puntatore al controller di animazione, che riceverà gli eventi.

*ppTimerEventHandler (gestore di controllo ppTimerEventHandler)*

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.

## <a name="canimationtimereventhandleronpostupdate"></a><a name="onpostupdate"></a>CAnimationTimerEventHandler::OnPostUpdateCAnimationTimerEventHandler::OnPostUpdate

Gestisce gli eventi che si verificano dopo il termine di un aggiornamento dell'animazione.

```
IFACEMETHOD(OnPostUpdate)();
```

### <a name="return-value"></a>Valore restituito

S_OK se il metodo ha esito positivo; altrimenti E_FAIL.

## <a name="canimationtimereventhandleronpreupdate"></a><a name="onpreupdate"></a>CAnimationTimerEventHandler::OnPreUpdate

Gestisce gli eventi che si verificano prima dell'inizio di un aggiornamento dell'animazione.

```
IFACEMETHOD(OnPreUpdate)();
```

### <a name="return-value"></a>Valore restituito

S_OK se il metodo ha esito positivo; altrimenti E_FAIL.

## <a name="canimationtimereventhandleronrenderingtooslow"></a><a name="onrenderingtooslow"></a>CAnimationTimerEventHandler::OnRenderingTooSlow

Gestisce gli eventi che si verificano quando la frequenza fotogrammi di rendering per un'animazione scende al di sotto della frequenza fotogrammi minima desiderata.

```
IFACEMETHOD(OnRenderingTooSlow)(UINT32 fps);
```

### <a name="parameters"></a>Parametri

*Fps*

### <a name="return-value"></a>Valore restituito

S_OK se il metodo ha esito positivo; altrimenti E_FAIL.

## <a name="canimationtimereventhandlersetanimationcontroller"></a><a name="setanimationcontroller"></a>CAnimationTimerEventHandler::SetAnimationController

Archivia un puntatore al controller di animazione per instradare gli eventi.

```cpp
void SetAnimationController(CAnimationController* pAnimationController);
```

### <a name="parameters"></a>Parametri

*pAnimationController*<br/>
Puntatore al controller di animazione, che riceverà gli eventi.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
