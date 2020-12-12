---
description: 'Altre informazioni su: Classe CAnimationVariableChangeHandler'
title: Classe CAnimationVariableChangeHandler
ms.date: 11/04/2016
f1_keywords:
- CAnimationVariableChangeHandler
- AFXANIMATIONCONTROLLER/CAnimationVariableChangeHandler
- AFXANIMATIONCONTROLLER/CAnimationVariableChangeHandler::OnValueChanged
- AFXANIMATIONCONTROLLER/CAnimationVariableChangeHandler::SetAnimationController
helpviewer_keywords:
- CAnimationVariableChangeHandler [MFC], OnValueChanged
- CAnimationVariableChangeHandler [MFC], SetAnimationController
ms.assetid: 2ea4996d-5c04-4dfc-be79-d42d55050795
ms.openlocfilehash: 1c97bc908a29bfb7edf2222f6df117fefdaf4091
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97207878"
---
# <a name="canimationvariablechangehandler-class"></a>Classe CAnimationVariableChangeHandler

Implementa un callback, chiamato dall'API di animazione quando viene modificato il valore di una variabile di animazione.

## <a name="syntax"></a>Sintassi

```
class CAnimationVariableChangeHandler : public CUIAnimationVariableChangeHandlerBase<CAnimationVariableChangeHandler>;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|`CAnimationVariableChangeHandler::CAnimationVariableChangeHandler`|Costruisce un oggetto `CAnimationVariableChangeHandler`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|`CAnimationVariableChangeHandler::CreateInstance`|Crea un'istanza dell' `CAnimationVariableChangeHandler` oggetto.|
|[CAnimationVariableChangeHandler:: OnValueChanged](#onvaluechanged)|Chiamato quando viene modificato il valore di una variabile di animazione. Esegue l'override di `CUIAnimationVariableChangeHandlerBase::OnValueChanged`.|
|[CAnimationVariableChangeHandler:: SetAnimationController](#setanimationcontroller)|Archivia un puntatore al controller dell'animazione per indirizzare gli eventi.|

## <a name="remarks"></a>Commenti

Questo gestore eventi viene creato e passato al `IUIAnimationVariable::SetVariableChangeHandler` metodo, quando si chiama `CAnimationVariable::EnableValueChangedEvent` o `CAnimationBaseObject::EnableValueChangedEvent` (che Abilita questo evento per tutte le variabili di animazione incapsulate in un oggetto Animation).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CUIAnimationCallbackBase`

`CUIAnimationVariableChangeHandlerBase`

`CAnimationVariableChangeHandler`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

## <a name="canimationvariablechangehandleronvaluechanged"></a><a name="onvaluechanged"></a> CAnimationVariableChangeHandler:: OnValueChanged

Chiamato quando viene modificato il valore di una variabile di animazione.

```
IFACEMETHOD(OnValueChanged) (
    __in IUIAnimationStoryboard* storyboard,
    __in IUIAnimationVariable* variable,
    __in DOUBLE newValue,
    __in DOUBLE previousValue);
```

### <a name="parameters"></a>Parametri

*Storyboard*<br/>
Storyboard che sta animando la variabile.

*variable*<br/>
Variabile di animazione aggiornata.

*newValue*<br/>
Nuovo valore.

*previousValue*<br/>
Valore precedente.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.

## <a name="canimationvariablechangehandlersetanimationcontroller"></a><a name="setanimationcontroller"></a> CAnimationVariableChangeHandler:: SetAnimationController

Archivia un puntatore al controller dell'animazione per indirizzare gli eventi.

```cpp
void SetAnimationController(CAnimationController* pAnimationController);
```

### <a name="parameters"></a>Parametri

*pAnimationController*<br/>
Puntatore al controller di animazione, che riceverà gli eventi.

## <a name="see-also"></a>Vedi anche

[Classi](../../mfc/reference/mfc-classes.md)
