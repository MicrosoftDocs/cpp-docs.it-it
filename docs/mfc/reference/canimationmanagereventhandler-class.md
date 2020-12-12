---
description: 'Altre informazioni su: Classe CAnimationManagerEventHandler'
title: Classe CAnimationManagerEventHandler
ms.date: 11/04/2016
f1_keywords:
- CAnimationManagerEventHandler
- AFXANIMATIONCONTROLLER/CAnimationManagerEventHandler
- AFXANIMATIONCONTROLLER/CAnimationManagerEventHandler::CAnimationManagerEventHandler
- AFXANIMATIONCONTROLLER/CAnimationManagerEventHandler::CreateInstance
- AFXANIMATIONCONTROLLER/CAnimationManagerEventHandler::OnManagerStatusChanged
- AFXANIMATIONCONTROLLER/CAnimationManagerEventHandler::SetAnimationController
helpviewer_keywords:
- CAnimationManagerEventHandler [MFC], CAnimationManagerEventHandler
- CAnimationManagerEventHandler [MFC], CreateInstance
- CAnimationManagerEventHandler [MFC], OnManagerStatusChanged
- CAnimationManagerEventHandler [MFC], SetAnimationController
ms.assetid: 6089ec07-e661-4805-b227-823b4652aade
ms.openlocfilehash: aab944c23822486bbc04bb7710d257dd8c42beed
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97207946"
---
# <a name="canimationmanagereventhandler-class"></a>Classe CAnimationManagerEventHandler

Implementa un callback, chiamato dall'API di animazione quando viene modificato uno stato di gestione animazione.

## <a name="syntax"></a>Sintassi

```
class CAnimationManagerEventHandler : public CUIAnimationManagerEventHandlerBase<CAnimationManagerEventHandler>;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CAnimationManagerEventHandler:: CAnimationManagerEventHandler](#canimationmanagereventhandler)|Costruisce un oggetto `CAnimationManagerEventHandler`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CAnimationManagerEventHandler:: CreateInstance](#createinstance)|Crea un'istanza dell' `CAnimationManagerEventHandler` oggetto.|
|[CAnimationManagerEventHandler:: OnManagerStatusChanged](#onmanagerstatuschanged)|Chiamato quando viene modificato lo stato di gestione animazioni. Esegue l'override di `CUIAnimationManagerEventHandlerBase::OnManagerStatusChanged`.|
|[CAnimationManagerEventHandler:: SetAnimationController](#setanimationcontroller)|Archivia un puntatore al controller dell'animazione per indirizzare gli eventi.|

## <a name="remarks"></a>Commenti

Questo gestore eventi viene creato e passato al metodo IUIAnimationManager:: SetManagerEventHandler quando si chiama CAnimationController:: EnableAnimationManagerEvent.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CUIAnimationCallbackBase`

`CUIAnimationManagerEventHandlerBase`

`CAnimationManagerEventHandler`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

## <a name="canimationmanagereventhandlercanimationmanagereventhandler"></a><a name="canimationmanagereventhandler"></a> CAnimationManagerEventHandler:: CAnimationManagerEventHandler

È necessario Visual Studio 2010 SP1.

Costruisce un oggetto CAnimationManagerEventHandler.

```
CAnimationManagerEventHandler();
```

## <a name="canimationmanagereventhandlercreateinstance"></a><a name="createinstance"></a> CAnimationManagerEventHandler:: CreateInstance

È necessario Visual Studio 2010 SP1.

Crea un'istanza dell'oggetto CAnimationManagerEventHandler.

```
static COM_DECLSPEC_NOTHROW HRESULT CreateInstance(
    CAnimationController* pAnimationController,
    IUIAnimationManagerEventHandler** ppManagerEventHandler);
```

### <a name="parameters"></a>Parametri

*pAnimationController*<br/>
Puntatore al controller di animazione, che riceverà gli eventi.

*ppManagerEventHandler*<br/>
Output: Se il metodo ha esito positivo, contiene un puntatore all'oggetto COM che gestirà gli aggiornamenti di stato a un gestore di animazioni.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.

## <a name="canimationmanagereventhandleronmanagerstatuschanged"></a><a name="onmanagerstatuschanged"></a> CAnimationManagerEventHandler:: OnManagerStatusChanged

È necessario Visual Studio 2010 SP1.

Chiamato quando viene modificato lo stato di gestione animazioni.

```
IFACEMETHOD(OnManagerStatusChanged)(
    UI_ANIMATION_MANAGER_STATUS newStatus,
    UI_ANIMATION_MANAGER_STATUS previousStatus);
```

### <a name="parameters"></a>Parametri

*newStatus*<br/>
Nuovo stato.

*previousStatus*<br/>
Stato precedente.

### <a name="return-value"></a>Valore restituito

L'implementazione corrente restituisce sempre S_OK;

## <a name="canimationmanagereventhandlersetanimationcontroller"></a><a name="setanimationcontroller"></a> CAnimationManagerEventHandler:: SetAnimationController

È necessario Visual Studio 2010 SP1.

Archivia un puntatore al controller dell'animazione per indirizzare gli eventi.

```cpp
void SetAnimationController(CAnimationController* pAnimationController);
```

### <a name="parameters"></a>Parametri

*pAnimationController*<br/>
Puntatore al controller di animazione, che riceverà gli eventi.

## <a name="see-also"></a>Vedi anche

[Classi](../../mfc/reference/mfc-classes.md)
