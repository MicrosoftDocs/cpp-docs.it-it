---
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
ms.openlocfilehash: 7f45fdad00bacf56e2ee8c30b76e99d626902534
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81377088"
---
# <a name="canimationvariablechangehandler-class"></a>Classe CAnimationVariableChangeHandler

Implementa un callback, chiamato dall'API di animazione quando viene modificato il valore di una variabile di animazione.

## <a name="syntax"></a>Sintassi

```
class CAnimationVariableChangeHandler : public CUIAnimationVariableChangeHandlerBase<CAnimationVariableChangeHandler>;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|`CAnimationVariableChangeHandler::CAnimationVariableChangeHandler`|Costruisce un oggetto `CAnimationVariableChangeHandler`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|`CAnimationVariableChangeHandler::CreateInstance`|Crea un'istanza di `CAnimationVariableChangeHandler` object.|
|[CAnimationVariableChangeHandler::OnValueChanged](#onvaluechanged)|Chiamato quando un valore di una variabile di animazione è stato modificato. Esegue l'override di `CUIAnimationVariableChangeHandlerBase::OnValueChanged`.|
|[CAnimationVariableChangeHandler::SetAnimationController](#setanimationcontroller)|Archivia un puntatore al controller di animazione per instradare gli eventi.|

## <a name="remarks"></a>Osservazioni

Questo gestore eventi viene `IUIAnimationVariable::SetVariableChangeHandler` creato e `CAnimationVariable::EnableValueChangedEvent` passato `CAnimationBaseObject::EnableValueChangedEvent` al metodo, quando si chiama o (che abilita questo evento per tutte le variabili di animazione incapsulate in un oggetto di animazione).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CUIAnimationCallbackBase`

`CUIAnimationVariableChangeHandlerBase`

`CAnimationVariableChangeHandler`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

## <a name="canimationvariablechangehandleronvaluechanged"></a><a name="onvaluechanged"></a>CAnimationVariableChangeHandler::OnValueChanged

Chiamato quando un valore di una variabile di animazione è stato modificato.

```
IFACEMETHOD(OnValueChanged) (
    __in IUIAnimationStoryboard* storyboard,
    __in IUIAnimationVariable* variable,
    __in DOUBLE newValue,
    __in DOUBLE previousValue);
```

### <a name="parameters"></a>Parametri

*Storyboard*<br/>
Storyboard che anima la variabile.

*Variabile*<br/>
Variabile di animazione aggiornata.

*newValue*<br/>
Nuovo valore.

*previousValue (valore in precedenza)*<br/>
Valore precedente.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.

## <a name="canimationvariablechangehandlersetanimationcontroller"></a><a name="setanimationcontroller"></a>CAnimationVariableChangeHandler::SetAnimationController

Archivia un puntatore al controller di animazione per instradare gli eventi.

```
void SetAnimationController(CAnimationController* pAnimationController);
```

### <a name="parameters"></a>Parametri

*pAnimationController*<br/>
Puntatore al controller di animazione, che riceverà gli eventi.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
