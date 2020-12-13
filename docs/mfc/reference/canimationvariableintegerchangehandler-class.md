---
description: 'Altre informazioni su: classe CAnimationVariableIntegerChangeHandler'
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
ms.openlocfilehash: 53a0a1838e021294b4ccc870e6f01b873233a0c9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97336728"
---
# <a name="canimationvariableintegerchangehandler-class"></a>Classe CAnimationVariableIntegerChangeHandler

Implementa un callback, chiamato dall'API di animazione quando viene modificato il valore di una variabile di animazione.

## <a name="syntax"></a>Sintassi

```
class CAnimationVariableIntegerChangeHandler : public CUIAnimationVariableIntegerChangeHandlerBase<CAnimationVariableIntegerChangeHandler>;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CAnimationVariableIntegerChangeHandler:: CAnimationVariableIntegerChangeHandler](#canimationvariableintegerchangehandler)|Costruisce un oggetto `CAnimationVariableIntegerChangeHandler`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CAnimationVariableIntegerChangeHandler:: CreateInstance](#createinstance)|Crea un'istanza di `CAnimationVariableIntegerChangeHandler` callback.|
|[CAnimationVariableIntegerChangeHandler:: OnIntegerValueChanged](#onintegervaluechanged)|Chiamato quando viene modificato il valore di una variabile di animazione. Esegue l'override di `CUIAnimationVariableIntegerChangeHandlerBase::OnIntegerValueChanged`.|
|[CAnimationVariableIntegerChangeHandler:: SetAnimationController](#setanimationcontroller)|Archivia un puntatore al controller dell'animazione per indirizzare gli eventi.|

## <a name="remarks"></a>Commenti

Questo gestore eventi viene creato e passato al metodo IUIAnimationVariable:: SetVariableIntegerChangeHandler, quando si chiama CAnimationVariable:: EnableIntegerValueChangedEvent o CAnimationBaseObject:: EnableIntegerValueChangedEvent (che Abilita questo evento per tutte le variabili di animazione incapsulate in un oggetto animazione).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[Classi MFC](../../mfc/reference/mfc-classes.md)

`CUIAnimationCallbackBase`

`CUIAnimationVariableIntegerChangeHandlerBase`

`CAnimationVariableIntegerChangeHandler`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

## <a name="canimationvariableintegerchangehandlercanimationvariableintegerchangehandler"></a><a name="canimationvariableintegerchangehandler"></a> CAnimationVariableIntegerChangeHandler:: CAnimationVariableIntegerChangeHandler

Costruisce un oggetto CAnimationVariableIntegerChangeHandler.

```
CAnimationVariableIntegerChangeHandler ();
```

## <a name="canimationvariableintegerchangehandlercreateinstance"></a><a name="createinstance"></a> CAnimationVariableIntegerChangeHandler:: CreateInstance

Crea un'istanza del callback CAnimationVariableIntegerChangeHandler.

```
static COM_DECLSPEC_NOTHROW HRESULT CreateInstance(
    CAnimationController* pAnimationController,
    IUIAnimationVariableIntegerChangeHandler** ppHandler);
```

### <a name="parameters"></a>Parametri

*pAnimationController*<br/>
Puntatore al controller di animazione, che riceverà gli eventi.

*ppHandler*

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.

## <a name="canimationvariableintegerchangehandleronintegervaluechanged"></a><a name="onintegervaluechanged"></a> CAnimationVariableIntegerChangeHandler:: OnIntegerValueChanged

Chiamato quando viene modificato il valore di una variabile di animazione.

```
IFACEMETHOD(OnIntegerValueChanged) (
    __in IUIAnimationStoryboard* storyboard,
    __in IUIAnimationVariable* variable,
    __in INT32 newValue,
    __in INT32 previousValue);
```

### <a name="parameters"></a>Parametri

*Storyboard*<br/>
Storyboard che sta animando la variabile.

*variable*<br/>
Variabile di animazione aggiornata.

*newValue*<br/>
Nuovo valore arrotondato.

*previousValue*<br/>
Valore arrotondato precedente.

### <a name="return-value"></a>Valore restituito

S_OK se il metodo ha esito positivo; in caso contrario E_FAIL.

## <a name="canimationvariableintegerchangehandlersetanimationcontroller"></a><a name="setanimationcontroller"></a> CAnimationVariableIntegerChangeHandler:: SetAnimationController

Archivia un puntatore al controller dell'animazione per indirizzare gli eventi.

```cpp
void SetAnimationController(CAnimationController* pAnimationController);
```

### <a name="parameters"></a>Parametri

*pAnimationController*<br/>
Puntatore al controller di animazione, che riceverà gli eventi.

## <a name="see-also"></a>Vedi anche

[Classi](../../mfc/reference/mfc-classes.md)
