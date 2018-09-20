---
title: Classe CAnimationManagerEventHandler | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CAnimationManagerEventHandler
- AFXANIMATIONCONTROLLER/CAnimationManagerEventHandler
- AFXANIMATIONCONTROLLER/CAnimationManagerEventHandler::CAnimationManagerEventHandler
- AFXANIMATIONCONTROLLER/CAnimationManagerEventHandler::CreateInstance
- AFXANIMATIONCONTROLLER/CAnimationManagerEventHandler::OnManagerStatusChanged
- AFXANIMATIONCONTROLLER/CAnimationManagerEventHandler::SetAnimationController
dev_langs:
- C++
helpviewer_keywords:
- CAnimationManagerEventHandler [MFC], CAnimationManagerEventHandler
- CAnimationManagerEventHandler [MFC], CreateInstance
- CAnimationManagerEventHandler [MFC], OnManagerStatusChanged
- CAnimationManagerEventHandler [MFC], SetAnimationController
ms.assetid: 6089ec07-e661-4805-b227-823b4652aade
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 96d3ba28d7cd1b60743aec7d9bd5b53b8cf59127
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46405840"
---
# <a name="canimationmanagereventhandler-class"></a>Classe CAnimationManagerEventHandler

Implementa un callback, chiamato dall'API di animazione quando viene modificato uno stato di gestione animazione.

## <a name="syntax"></a>Sintassi

```
class CAnimationManagerEventHandler : public CUIAnimationManagerEventHandlerBase<CAnimationManagerEventHandler>;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAnimationManagerEventHandler::CAnimationManagerEventHandler](#canimationmanagereventhandler)|Costruisce un oggetto `CAnimationManagerEventHandler`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAnimationManagerEventHandler::CreateInstance](#createinstance)|Crea un'istanza di `CAnimationManagerEventHandler` oggetto.|
|[CAnimationManagerEventHandler::OnManagerStatusChanged](#onmanagerstatuschanged)|Chiamato quando viene modificato lo stato di gestione animazione. Esegue l'override`CUIAnimationManagerEventHandlerBase::OnManagerStatusChanged`.|
|[CAnimationManagerEventHandler::SetAnimationController](#setanimationcontroller)|Archivia un puntatore al controller di animazione per instradare gli eventi.|

## <a name="remarks"></a>Note

Questo gestore eventi viene creato e passato al metodo IUIAnimationManager::SetManagerEventHandler, quando si chiama CAnimationController:: EnableAnimationManagerEvent.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CUIAnimationCallbackBase`

`CUIAnimationManagerEventHandlerBase`

`CAnimationManagerEventHandler`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

##  <a name="canimationmanagereventhandler"></a>  CAnimationManagerEventHandler::CAnimationManagerEventHandler

È necessario Visual Studio 2010 SP1.

Costruisce un oggetto CAnimationManagerEventHandler.

```
CAnimationManagerEventHandler();
```

##  <a name="createinstance"></a>  CAnimationManagerEventHandler::CreateInstance

È necessario Visual Studio 2010 SP1.

Crea un'istanza dell'oggetto CAnimationManagerEventHandler.

```
static COM_DECLSPEC_NOTHROW HRESULT CreateInstance(
    CAnimationController* pAnimationController,
    IUIAnimationManagerEventHandler** ppManagerEventHandler);
```

### <a name="parameters"></a>Parametri

*pAnimationController*<br/>
Puntatore al controller di animazione che riceveranno gli eventi.

*ppManagerEventHandler*<br/>
Output. Se il metodo ha esito positivo, contiene un puntatore all'oggetto COM che consente di gestire gli aggiornamenti di stato a Gestione animazione.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.

##  <a name="onmanagerstatuschanged"></a>  CAnimationManagerEventHandler::OnManagerStatusChanged

È necessario Visual Studio 2010 SP1.

Chiamato quando viene modificato lo stato di gestione animazione.

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

Sempre l'implementazione corrente restituisce S_OK;

##  <a name="setanimationcontroller"></a>  CAnimationManagerEventHandler::SetAnimationController

È necessario Visual Studio 2010 SP1.

Archivia un puntatore al controller di animazione per instradare gli eventi.

```
void SetAnimationController(CAnimationController* pAnimationController);
```

### <a name="parameters"></a>Parametri

*pAnimationController*<br/>
Puntatore al controller di animazione che riceveranno gli eventi.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
