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
ms.openlocfilehash: e5e6b0a22d438f9c26318129e2d04df96d386cda
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62391335"
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
|[CAnimationTimerEventHandler::OnPostUpdate](#onpostupdate)|Gestisce gli eventi che si verificano dopo l'aggiornamento di un'animazione è terminato. Esegue l'override di `CUIAnimationTimerEventHandlerBase::OnPostUpdate`.|
|[CAnimationTimerEventHandler::OnPreUpdate](#onpreupdate)|Gestisce gli eventi che si verificano prima dell'inizio dell'aggiornamento un'animazione. Esegue l'override di `CUIAnimationTimerEventHandlerBase::OnPreUpdate`.|
|[CAnimationTimerEventHandler::OnRenderingTooSlow](#onrenderingtooslow)|Gestisce gli eventi che si verificano quando la frequenza dei fotogrammi per il rendering per un'animazione scende di sotto della frequenza di fotogrammi. Esegue l'override di `CUIAnimationTimerEventHandlerBase::OnRenderingTooSlow`.|
|[CAnimationTimerEventHandler::SetAnimationController](#setanimationcontroller)|Archivia un puntatore al controller di animazione per instradare gli eventi.|

## <a name="remarks"></a>Note

Questo gestore eventi viene creato e passato al IUIAnimationTimer::SetTimerEventHandler quando si chiama CAnimationController::EnableAnimationTimerEventHandler.

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

*pAnimationController*<br/>
Puntatore al controller di animazione che riceveranno gli eventi.

*ppTimerEventHandler*

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.

##  <a name="onpostupdate"></a>  CAnimationTimerEventHandler::OnPostUpdate

Gestisce gli eventi che si verificano dopo l'aggiornamento di un'animazione è terminato.

```
IFACEMETHOD(OnPostUpdate)();
```

### <a name="return-value"></a>Valore restituito

S_OK se il metodo ha esito positivo; in caso contrario, E_FAIL.

##  <a name="onpreupdate"></a>  CAnimationTimerEventHandler::OnPreUpdate

Gestisce gli eventi che si verificano prima dell'inizio dell'aggiornamento un'animazione.

```
IFACEMETHOD(OnPreUpdate)();
```

### <a name="return-value"></a>Valore restituito

S_OK se il metodo ha esito positivo; in caso contrario, E_FAIL.

##  <a name="onrenderingtooslow"></a>  CAnimationTimerEventHandler::OnRenderingTooSlow

Gestisce gli eventi che si verificano quando la frequenza dei fotogrammi per il rendering per un'animazione scende di sotto della frequenza di fotogrammi.

```
IFACEMETHOD(OnRenderingTooSlow)(UINT32 fps);
```

### <a name="parameters"></a>Parametri

*fps*

### <a name="return-value"></a>Valore restituito

S_OK se il metodo ha esito positivo; in caso contrario, E_FAIL.

##  <a name="setanimationcontroller"></a>  CAnimationTimerEventHandler::SetAnimationController

Archivia un puntatore al controller di animazione per instradare gli eventi.

```
void SetAnimationController(CAnimationController* pAnimationController);
```

### <a name="parameters"></a>Parametri

*pAnimationController*<br/>
Puntatore al controller di animazione che riceveranno gli eventi.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
