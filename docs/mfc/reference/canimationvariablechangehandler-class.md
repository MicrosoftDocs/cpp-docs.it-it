---
title: Classe CAnimationVariableChangeHandler | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CAnimationVariableChangeHandler
- AFXANIMATIONCONTROLLER/CAnimationVariableChangeHandler
- AFXANIMATIONCONTROLLER/CAnimationVariableChangeHandler::OnValueChanged
- AFXANIMATIONCONTROLLER/CAnimationVariableChangeHandler::SetAnimationController
dev_langs:
- C++
helpviewer_keywords:
- CAnimationVariableChangeHandler [MFC], OnValueChanged
- CAnimationVariableChangeHandler [MFC], SetAnimationController
ms.assetid: 2ea4996d-5c04-4dfc-be79-d42d55050795
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 23521a9ee9706787df0568547fe3419fe7e4fae5
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46424599"
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
|`CAnimationVariableChangeHandler::CreateInstance`|Crea un'istanza di `CAnimationVariableChangeHandler` oggetto.|
|[CAnimationVariableChangeHandler::OnValueChanged](#onvaluechanged)|Chiamato quando viene modificato un valore di una variabile di animazione. Esegue l'override`CUIAnimationVariableChangeHandlerBase::OnValueChanged`.|
|[CAnimationVariableChangeHandler::SetAnimationController](#setanimationcontroller)|Archivia un puntatore al controller di animazione per instradare gli eventi.|

## <a name="remarks"></a>Note

Questo gestore eventi viene creato e passato a `IUIAnimationVariable::SetVariableChangeHandler` metodo, quando si chiama `CAnimationVariable::EnableValueChangedEvent` o `CAnimationBaseObject::EnableValueChangedEvent` (che consente questo evento per tutte le variabili di animazione incapsulato in un oggetto di animazione).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CUIAnimationCallbackBase`

`CUIAnimationVariableChangeHandlerBase`

`CAnimationVariableChangeHandler`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

##  <a name="onvaluechanged"></a>  CAnimationVariableChangeHandler::OnValueChanged

Chiamato quando viene modificato un valore di una variabile di animazione.

```
IFACEMETHOD(OnValueChanged) (
    __in IUIAnimationStoryboard* storyboard,
    __in IUIAnimationVariable* variable,
    __in DOUBLE newValue,
    __in DOUBLE previousValue);
```

### <a name="parameters"></a>Parametri

*storyboard*<br/>
Lo storyboard che viene aggiunta un'animazione alla variabile.

*Variabile*<br/>
La variabile di animazione che è stata aggiornata.

*newValue*<br/>
Nuovo valore.

*valore previousValue*<br/>
Il valore precedente.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.

##  <a name="setanimationcontroller"></a>  CAnimationVariableChangeHandler::SetAnimationController

Archivia un puntatore al controller di animazione per instradare gli eventi.

```
void SetAnimationController(CAnimationController* pAnimationController);
```

### <a name="parameters"></a>Parametri

*pAnimationController*<br/>
Puntatore al controller di animazione che riceveranno gli eventi.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
