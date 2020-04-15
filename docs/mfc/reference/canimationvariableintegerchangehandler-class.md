---
title: Classe CAnimationVariableIntegerChangeHandler
ms.date: 11/04/2016
f1_keywords:
- CAnimationVariableIntegerChangeHandler
- AFXANIMATIONCONTROLLER/CAnimationVariableIntegerChangeHandler
- AFXANIMATIONCONTROLLER/CAnimationVariableIntegerChangeHandler::CAnimationVariableIntegerChangeHandler
- AFXANIMATIONCONTROLLER/CAnimationVariableIntegerChangeHandler::CreateInstance
- AFXANIMATIONCONTROLLER/CAnimationVariableIntegerChangeHandler::OnIntegerValueChanged
- AFXANIMATIONCONTROLLER/CAnimationVariableIntegerChangeHandler::SetAnimationController
helpviewer_keywords:
- CAnimationVariableIntegerChangeHandler [MFC], CAnimationVariableIntegerChangeHandler
- CAnimationVariableIntegerChangeHandler [MFC], CreateInstance
- CAnimationVariableIntegerChangeHandler [MFC], OnIntegerValueChanged
- CAnimationVariableIntegerChangeHandler [MFC], SetAnimationController
ms.assetid: 6ac8e91b-e514-4ff6-babd-33f77c4b2b61
ms.openlocfilehash: 261f8eb17953c047fcc8ec05ae48dc369de4614c
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81377031"
---
# <a name="canimationvariableintegerchangehandler-class"></a>Classe CAnimationVariableIntegerChangeHandler

Implementa un callback, chiamato dall'API di animazione quando viene modificato il valore di una variabile di animazione.

## <a name="syntax"></a>Sintassi

```
class CAnimationVariableIntegerChangeHandler : public CUIAnimationVariableIntegerChangeHandlerBase<CAnimationVariableIntegerChangeHandler>;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAnimationVariableIntegerChangeHandler::CAnimationVariableIntegerChangeHandler](#canimationvariableintegerchangehandler)|Costruisce un oggetto `CAnimationVariableIntegerChangeHandler`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAnimationVariableIntegerChangeHandler::CreateInstance](#createinstance)|Crea un'istanza di `CAnimationVariableIntegerChangeHandler` callback.|
|[CAnimationVariableIntegerChangeHandler::OnIntegerValueChanged](#onintegervaluechanged)|Chiamato quando un valore di una variabile di animazione è stato modificato. Esegue l'override di `CUIAnimationVariableIntegerChangeHandlerBase::OnIntegerValueChanged`.|
|[CAnimationVariableIntegerChangeHandler::SetAnimationController](#setanimationcontroller)|Archivia un puntatore al controller di animazione per instradare gli eventi.|

## <a name="remarks"></a>Osservazioni

Questo gestore eventi viene creato e passato al metodo IUIAnimationVariable::SetVariableIntegerChangeHandler , quando si chiama CAnimationVariable::EnableIntegerValueChangedEvent o CAnimationBaseObject::EnableIntegerValueChangedEvent (che abilita questo evento per tutte le variabili di animazione incapsulate in un oggetto di animazione).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[Classi MFC](../../mfc/reference/mfc-classes.md)

`CUIAnimationCallbackBase`

`CUIAnimationVariableIntegerChangeHandlerBase`

`CAnimationVariableIntegerChangeHandler`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

## <a name="canimationvariableintegerchangehandlercanimationvariableintegerchangehandler"></a><a name="canimationvariableintegerchangehandler"></a>CAnimationVariableIntegerChangeHandler::CAnimationVariableIntegerChangeHandler

Costruisce un oggetto CAnimationVariableIntegerChangeHandler.

```
CAnimationVariableIntegerChangeHandler ();
```

## <a name="canimationvariableintegerchangehandlercreateinstance"></a><a name="createinstance"></a>CAnimationVariableIntegerChangeHandler::CreateInstance

Crea un'istanza del callback di CAnimationVariableIntegerChangeHandler.

```
static COM_DECLSPEC_NOTHROW HRESULT CreateInstance(
    CAnimationController* pAnimationController,
    IUIAnimationVariableIntegerChangeHandler** ppHandler);
```

### <a name="parameters"></a>Parametri

*pAnimationController*<br/>
Puntatore al controller di animazione, che riceverà gli eventi.

*ppHandler (ppGestore)*

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.

## <a name="canimationvariableintegerchangehandleronintegervaluechanged"></a><a name="onintegervaluechanged"></a>CAnimationVariableIntegerChangeHandler::OnIntegerValueChanged

Chiamato quando un valore di una variabile di animazione è stato modificato.

```
IFACEMETHOD(OnIntegerValueChanged) (
    __in IUIAnimationStoryboard* storyboard,
    __in IUIAnimationVariable* variable,
    __in INT32 newValue,
    __in INT32 previousValue);
```

### <a name="parameters"></a>Parametri

*Storyboard*<br/>
Storyboard che anima la variabile.

*Variabile*<br/>
Variabile di animazione aggiornata.

*newValue*<br/>
Nuovo valore arrotondato.

*previousValue (valore in precedenza)*<br/>
Valore arrotondato precedente.

### <a name="return-value"></a>Valore restituito

S_OK se il metodo ha esito positivo; altrimenti E_FAIL.

## <a name="canimationvariableintegerchangehandlersetanimationcontroller"></a><a name="setanimationcontroller"></a>CAnimationVariableIntegerChangeHandler::SetAnimationController

Archivia un puntatore al controller di animazione per instradare gli eventi.

```
void SetAnimationController(CAnimationController* pAnimationController);
```

### <a name="parameters"></a>Parametri

*pAnimationController*<br/>
Puntatore al controller di animazione, che riceverà gli eventi.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
