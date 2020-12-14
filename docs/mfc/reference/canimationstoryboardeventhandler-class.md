---
description: 'Altre informazioni su: Classe CAnimationStoryboardEventHandler'
title: Classe CAnimationStoryboardEventHandler
ms.date: 11/04/2016
f1_keywords:
- CAnimationStoryboardEventHandler
- AFXANIMATIONCONTROLLER/CAnimationStoryboardEventHandler
- AFXANIMATIONCONTROLLER/CAnimationStoryboardEventHandler::CAnimationStoryboardEventHandler
- AFXANIMATIONCONTROLLER/CAnimationStoryboardEventHandler::CreateInstance
- AFXANIMATIONCONTROLLER/CAnimationStoryboardEventHandler::OnStoryboardStatusChanged
- AFXANIMATIONCONTROLLER/CAnimationStoryboardEventHandler::OnStoryboardUpdated
- AFXANIMATIONCONTROLLER/CAnimationStoryboardEventHandler::SetAnimationController
helpviewer_keywords:
- CAnimationStoryboardEventHandler [MFC], CAnimationStoryboardEventHandler
- CAnimationStoryboardEventHandler [MFC], CreateInstance
- CAnimationStoryboardEventHandler [MFC], OnStoryboardStatusChanged
- CAnimationStoryboardEventHandler [MFC], OnStoryboardUpdated
- CAnimationStoryboardEventHandler [MFC], SetAnimationController
ms.assetid: 10a7e86b-c02d-4124-9a2e-61ecf8ac62fc
ms.openlocfilehash: 7208ba91ec78a6de688699183b55a691b8e3d28d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97254742"
---
# <a name="canimationstoryboardeventhandler-class"></a>Classe CAnimationStoryboardEventHandler

Implementa un callback, chiamato dall'API di animazione quando viene modificato lo stato di uno storyboard o viene aggiornato uno storyboard.

## <a name="syntax"></a>Sintassi

```
class CAnimationStoryboardEventHandler : public CUIAnimationStoryboardEventHandlerBase<CAnimationStoryboardEventHandler>;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CAnimationStoryboardEventHandler:: CAnimationStoryboardEventHandler](#canimationstoryboardeventhandler)|Costruisce un oggetto `CAnimationStoryboardEventHandler`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CAnimationStoryboardEventHandler:: CreateInstance](#createinstance)|Crea un'istanza di `CAnimationStoryboardEventHandler` callback.|
|[CAnimationStoryboardEventHandler:: OnStoryboardStatusChanged](#onstoryboardstatuschanged)|Gestisce `OnStoryboardStatusChanged` gli eventi che si verificano quando lo stato di uno storyboard cambia (esegue l'override di `CUIAnimationStoryboardEventHandlerBase::OnStoryboardStatusChanged` ).|
|[CAnimationStoryboardEventHandler:: OnStoryboardUpdated](#onstoryboardupdated)|Gestisce `OnStoryboardUpdated` gli eventi che si verificano quando viene aggiornato uno storyboard (esegue l'override di `CUIAnimationStoryboardEventHandlerBase::OnStoryboardUpdated` ).|
|[CAnimationStoryboardEventHandler:: SetAnimationController](#setanimationcontroller)|Archivia un puntatore al controller dell'animazione per indirizzare gli eventi.|

## <a name="remarks"></a>Commenti

Questo gestore eventi viene creato e passato al `IUIAnimationStoryboard::SetStoryboardEventHandler` metodo, quando si chiama `CAnimationController::EnableStoryboardEventHandler` .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CUIAnimationCallbackBase`

`CUIAnimationStoryboardEventHandlerBase`

`CAnimationStoryboardEventHandler`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

## <a name="canimationstoryboardeventhandlercanimationstoryboardeventhandler"></a><a name="canimationstoryboardeventhandler"></a> CAnimationStoryboardEventHandler:: CAnimationStoryboardEventHandler

Costruisce un oggetto CAnimationStoryboardEventHandler.

```
CAnimationStoryboardEventHandler();
```

## <a name="canimationstoryboardeventhandlercreateinstance"></a><a name="createinstance"></a> CAnimationStoryboardEventHandler:: CreateInstance

Crea un'istanza del callback CAnimationStoryboardEventHandler.

```
static COM_DECLSPEC_NOTHROW HRESULT CreateInstance(
    CAnimationController* pAnimationController,
    IUIAnimationStoryboardEventHandler** ppHandler);
```

### <a name="parameters"></a>Parametri

*pAnimationController*<br/>
Puntatore al controller di animazione, che riceverà gli eventi.

*ppHandler*

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.

## <a name="canimationstoryboardeventhandleronstoryboardstatuschanged"></a><a name="onstoryboardstatuschanged"></a> CAnimationStoryboardEventHandler:: OnStoryboardStatusChanged

Gestisce gli eventi OnStoryboardStatusChanged, che si verificano quando viene modificato lo stato di uno storyboard.

```
IFACEMETHOD(OnStoryboardStatusChanged) (
    __in IUIAnimationStoryboard* storyboard,
    __in UI_ANIMATION_STORYBOARD_STATUS newStatus,
    __in UI_ANIMATION_STORYBOARD_STATUS previousStatus);
```

### <a name="parameters"></a>Parametri

*Storyboard*<br/>
Puntatore allo storyboard il cui stato è stato modificato.

*newStatus*<br/>
Specifica il nuovo stato dello storyboard.

*previousStatus*<br/>
Specifica lo stato precedente dello storyboard.

### <a name="return-value"></a>Valore restituito

S_OK se il metodo ha esito positivo; in caso contrario E_FAIL.

## <a name="canimationstoryboardeventhandleronstoryboardupdated"></a><a name="onstoryboardupdated"></a> CAnimationStoryboardEventHandler:: OnStoryboardUpdated

Gestisce gli eventi OnStoryboardUpdated, che si verificano quando viene aggiornato uno storyboard

```
IFACEMETHOD(OnStoryboardUpdated) (__in IUIAnimationStoryboard* storyboard);
```

### <a name="parameters"></a>Parametri

*Storyboard*<br/>
Puntatore a storyboard, che è stato aggiornato.

### <a name="return-value"></a>Valore restituito

S_OK se il metodo ha esito positivo; in caso contrario E_FAIL.

## <a name="canimationstoryboardeventhandlersetanimationcontroller"></a><a name="setanimationcontroller"></a> CAnimationStoryboardEventHandler:: SetAnimationController

Archivia un puntatore al controller dell'animazione per indirizzare gli eventi.

```cpp
void SetAnimationController(CAnimationController* pAnimationController);
```

### <a name="parameters"></a>Parametri

*pAnimationController*<br/>
Puntatore al controller di animazione, che riceverà gli eventi.

## <a name="see-also"></a>Vedi anche

[Classi](../../mfc/reference/mfc-classes.md)
