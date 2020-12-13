---
description: 'Altre informazioni su: classe CAnimationTimerEventHandler'
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
ms.openlocfilehash: 5d5f3e07eeb7ffe3f3bb226afd566330808303ac
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97336756"
---
# <a name="canimationtimereventhandler-class"></a>Classe CAnimationTimerEventHandler

Implementa un callback, chiamato dall'API di animazione quando si verificano eventi di temporizzazione.

## <a name="syntax"></a>Sintassi

```
class CAnimationTimerEventHandler : public CUIAnimationTimerEventHandlerBase<CAnimationTimerEventHandler>;
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CAnimationTimerEventHandler:: CreateInstance](#createinstance)|Crea un'istanza di `CAnimationTimerEventHandler` callback.|
|[CAnimationTimerEventHandler:: OnPostUpdate](#onpostupdate)|Gestisce gli eventi che si verificano dopo il completamento di un aggiornamento dell'animazione. Esegue l'override di `CUIAnimationTimerEventHandlerBase::OnPostUpdate`.|
|[CAnimationTimerEventHandler:: OnPreUpdate](#onpreupdate)|Gestisce gli eventi che si verificano prima dell'inizio di un aggiornamento dell'animazione. Esegue l'override di `CUIAnimationTimerEventHandlerBase::OnPreUpdate`.|
|[CAnimationTimerEventHandler:: OnRenderingTooSlow](#onrenderingtooslow)|Gestisce gli eventi che si verificano quando la frequenza dei fotogrammi di rendering per un'animazione scende al di sotto della frequenza minima desiderata per i frame. Esegue l'override di `CUIAnimationTimerEventHandlerBase::OnRenderingTooSlow`.|
|[CAnimationTimerEventHandler:: SetAnimationController](#setanimationcontroller)|Archivia un puntatore al controller dell'animazione per indirizzare gli eventi.|

## <a name="remarks"></a>Commenti

Questo gestore eventi viene creato e passato a IUIAnimationTimer:: SetTimerEventHandler quando si chiama CAnimationController:: EnableAnimationTimerEventHandler.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CUIAnimationCallbackBase`

`CUIAnimationTimerEventHandlerBase`

`CAnimationTimerEventHandler`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

## <a name="canimationtimereventhandlercreateinstance"></a><a name="createinstance"></a> CAnimationTimerEventHandler:: CreateInstance

Crea un'istanza del callback CAnimationTimerEventHandler.

```
static COM_DECLSPEC_NOTHROW HRESULT CreateInstance(
    CAnimationController* pAnimationController,
    IUIAnimationTimerEventHandler** ppTimerEventHandler);
```

### <a name="parameters"></a>Parametri

*pAnimationController*<br/>
Puntatore al controller di animazione, che riceverà gli eventi.

*ppTimerEventHandler*

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.

## <a name="canimationtimereventhandleronpostupdate"></a><a name="onpostupdate"></a> CAnimationTimerEventHandler:: OnPostUpdate

Gestisce gli eventi che si verificano dopo il completamento di un aggiornamento dell'animazione.

```
IFACEMETHOD(OnPostUpdate)();
```

### <a name="return-value"></a>Valore restituito

S_OK se il metodo ha esito positivo; in caso contrario E_FAIL.

## <a name="canimationtimereventhandleronpreupdate"></a><a name="onpreupdate"></a> CAnimationTimerEventHandler:: OnPreUpdate

Gestisce gli eventi che si verificano prima dell'inizio di un aggiornamento dell'animazione.

```
IFACEMETHOD(OnPreUpdate)();
```

### <a name="return-value"></a>Valore restituito

S_OK se il metodo ha esito positivo; in caso contrario E_FAIL.

## <a name="canimationtimereventhandleronrenderingtooslow"></a><a name="onrenderingtooslow"></a> CAnimationTimerEventHandler:: OnRenderingTooSlow

Gestisce gli eventi che si verificano quando la frequenza dei fotogrammi di rendering per un'animazione scende al di sotto della frequenza minima desiderata per i frame.

```
IFACEMETHOD(OnRenderingTooSlow)(UINT32 fps);
```

### <a name="parameters"></a>Parametri

*fps*

### <a name="return-value"></a>Valore restituito

S_OK se il metodo ha esito positivo; in caso contrario E_FAIL.

## <a name="canimationtimereventhandlersetanimationcontroller"></a><a name="setanimationcontroller"></a> CAnimationTimerEventHandler:: SetAnimationController

Archivia un puntatore al controller dell'animazione per indirizzare gli eventi.

```cpp
void SetAnimationController(CAnimationController* pAnimationController);
```

### <a name="parameters"></a>Parametri

*pAnimationController*<br/>
Puntatore al controller di animazione, che riceverà gli eventi.

## <a name="see-also"></a>Vedi anche

[Classi](../../mfc/reference/mfc-classes.md)
