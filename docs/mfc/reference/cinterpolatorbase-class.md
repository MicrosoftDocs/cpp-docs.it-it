---
title: Classe CInterpolatorBase
ms.date: 11/04/2016
f1_keywords:
- CInterpolatorBase
- AFXANIMATIONCONTROLLER/CInterpolatorBase
- AFXANIMATIONCONTROLLER/CInterpolatorBase::CInterpolatorBase
- AFXANIMATIONCONTROLLER/CInterpolatorBase::CreateInstance
- AFXANIMATIONCONTROLLER/CInterpolatorBase::GetDependencies
- AFXANIMATIONCONTROLLER/CInterpolatorBase::GetDuration
- AFXANIMATIONCONTROLLER/CInterpolatorBase::GetFinalValue
- AFXANIMATIONCONTROLLER/CInterpolatorBase::InterpolateValue
- AFXANIMATIONCONTROLLER/CInterpolatorBase::InterpolateVelocity
- AFXANIMATIONCONTROLLER/CInterpolatorBase::SetCustomInterpolator
- AFXANIMATIONCONTROLLER/CInterpolatorBase::SetDuration
- AFXANIMATIONCONTROLLER/CInterpolatorBase::SetInitialValueAndVelocity
helpviewer_keywords:
- CInterpolatorBase [MFC], CInterpolatorBase
- CInterpolatorBase [MFC], CreateInstance
- CInterpolatorBase [MFC], GetDependencies
- CInterpolatorBase [MFC], GetDuration
- CInterpolatorBase [MFC], GetFinalValue
- CInterpolatorBase [MFC], InterpolateValue
- CInterpolatorBase [MFC], InterpolateVelocity
- CInterpolatorBase [MFC], SetCustomInterpolator
- CInterpolatorBase [MFC], SetDuration
- CInterpolatorBase [MFC], SetInitialValueAndVelocity
ms.assetid: bbc3dce7-8398-47f9-b97e-e4fd2d737232
ms.openlocfilehash: efa08aa5dd556d7e136323c31451a9f33bd72ec6
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81754950"
---
# <a name="cinterpolatorbase-class"></a>Classe CInterpolatorBase

Implementa un callback, chiamato dall'API di animazione quando deve essere calcolato un nuovo valore di una variabile di animazione.

## <a name="syntax"></a>Sintassi

```
class CInterpolatorBase : public CUIAnimationInterpolatorBase<CInterpolatorBase>;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CInterpolatorBase::CInterpolatorBase](#cinterpolatorbase)|Costruisce l'oggetto. `CInterpolatorBase`|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CInterpolatorBase::CreateInstance](#createinstance)|Crea un'istanza di `CInterpolatorBase` e archivia un puntatore all'interpolatore personalizzato, che gestirà gli eventi.|
|[CInterpolatorBase::GetDependencies](#getdependencies)|Ottiene le dipendenze dell'interpolatore. Esegue l'override di `CUIAnimationInterpolatorBase::GetDependencies`.|
|[CInterpolatorBase::GetDuration](#getduration)|Ottiene la durata dell'interpolatore. Esegue l'override di `CUIAnimationInterpolatorBase::GetDuration`.|
|[CInterpolatorBase::GetFinalValue](#getfinalvalue)|Ottiene il valore finale a cui conduce l'interpolatore. Esegue l'override di `CUIAnimationInterpolatorBase::GetFinalValue`.|
|[CInterpolatorBase::InterpolateValue](#interpolatevalue)|Interpola il valore in corrispondenza di `CUIAnimationInterpolatorBase::InterpolateValue`un determinato offset (overrides .)|
|[CInterpolatorBase::InterpolateVelocity](#interpolatevelocity)|Interpola la velocità in corrispondenza di `CUIAnimationInterpolatorBase::InterpolateVelocity`un determinato offset (Overrides .)|
|[CInterpolatorBase::SetCustomInterpolator](#setcustominterpolator)|Archivia un puntatore all'interpolatore personalizzato, che gestirà gli eventi.|
|[CInterpolatorBase::SetDuration](#setduration)|Imposta la durata dell'interpolatore (Sostituzioni `CUIAnimationInterpolatorBase::SetDuration`.)|
|[CInterpolatorBase::SetInitialValueAndVelocity](#setinitialvalueandvelocity)|Imposta il valore iniziale e la velocità dell'interpolatore. Esegue l'override di `CUIAnimationInterpolatorBase::SetInitialValueAndVelocity`.|

## <a name="remarks"></a>Osservazioni

Questo gestore viene `IUIAnimationTransitionFactory::CreateTransition` creato `CCustomTransition` e passato quando un oggetto viene creato `CAnimationController::AnimateGroup`come parte del processo di inizializzazione dell'animazione (avviato da ). In genere non è necessario utilizzare direttamente questa classe, è `CCustomInterpolator`sufficiente eseguire tutte le espressioni in `CCustomTransition`una classe derivata, il cui puntatore viene passato al costruttore di .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CUIAnimationCallbackBase`

`CUIAnimationInterpolatorBase`

`CInterpolatorBase`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

## <a name="cinterpolatorbasecinterpolatorbase"></a><a name="cinterpolatorbase"></a>CInterpolatorBase::CInterpolatorBase

Costruisce l'oggetto CInterpolatorBase.

```
CInterpolatorBase();
```

## <a name="cinterpolatorbasecreateinstance"></a><a name="createinstance"></a>CInterpolatorBase::CreateInstance

Crea un'istanza di CInterpolatorBase e archivia un puntatore all'interpolatore personalizzato, che gestirà gli eventi.

```
static COM_DECLSPEC_NOTHROW HRESULT CreateInstance(
    CCustomInterpolator* pInterpolator,
    IUIAnimationInterpolator** ppHandler);
```

### <a name="parameters"></a>Parametri

*pInterpolator*<br/>
Puntatore all'interpolatore personalizzato.

*ppHandler (ppGestore)*<br/>
Output: Contiene un puntatore all'istanza di CInterpolatorBase quando la funzione restituisce.

### <a name="return-value"></a>Valore restituito

## <a name="cinterpolatorbasegetdependencies"></a><a name="getdependencies"></a>CInterpolatorBase::GetDependencies

Ottiene le dipendenze dell'interpolatore.

```
IFACEMETHOD(GetDependencies)(
    __out UI_ANIMATION_DEPENDENCIES* initialValueDependencies,
    __out UI_ANIMATION_DEPENDENCIES* initialVelocityDependencies,
    __out UI_ANIMATION_DEPENDENCIES* durationDependencies);
```

### <a name="parameters"></a>Parametri

*initialValueDependencies*<br/>
Output: Aspetti dell'interpolatore che dipendono dal valore iniziale passato a SetInitialValueAndVelocity.

*initialVelocityDependencies*<br/>
Output: Aspetti dell'interpolatore che dipendono dalla velocità iniziale passata a SetInitialValueAndVelocity.

*durationDipendenze*<br/>
Output: Aspetti dell'interpolatore che dipendono dalla durata passata a SetDuration.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. Restituisce E_FAIL se CCustomInterpolator non è impostato o l'implementazione personalizzata restituisce FALSE dal GetDependencies metodo.

## <a name="cinterpolatorbasegetduration"></a><a name="getduration"></a>CInterpolatorBase::GetDuration

Ottiene la durata dell'interpolatore.

```
IFACEMETHOD(GetDuration)(__out UI_ANIMATION_SECONDS* duration);
```

### <a name="parameters"></a>Parametri

*duration*<br/>
Output: Durata della transizione, in secondi.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. Restituisce E_FAIL se CCustomInterpolator non è impostato o l'implementazione personalizzata restituisce FALSE dal GetDuration metodo.

## <a name="cinterpolatorbasegetfinalvalue"></a><a name="getfinalvalue"></a>CInterpolatorBase::GetFinalValue

Ottiene il valore finale a cui conduce l'interpolatore.

```
IFACEMETHOD(GetFinalValue)(__out DOUBLE* value);
```

### <a name="parameters"></a>Parametri

*value*<br/>
Output: Valore finale di una variabile alla fine della transizione.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. Restituisce E_FAIL se CCustomInterpolator non è impostato o l'implementazione personalizzata restituisce FALSE dal GetFinalValue metodo.

## <a name="cinterpolatorbaseinterpolatevalue"></a><a name="interpolatevalue"></a>CInterpolatorBase::InterpolateValue

Interpola il valore in corrispondenza di un determinato offset

```
IFACEMETHOD(InterpolateValue)(
    __in UI_ANIMATION_SECONDS offset,
    __out DOUBLE* value);
```

### <a name="parameters"></a>Parametri

*offset*<br/>
Offset dall'inizio della transizione. L'offset è sempre maggiore o uguale a zero e minore della durata della transizione. Questo metodo non viene chiamato se la durata della transizione è zero.

*value*<br/>
Output: Valore interpolato.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. Restituisce E_FAIL se CCustomInterpolator non è impostato o l'implementazione personalizzata restituisce FALSE dal InterpolateValue metodo.

## <a name="cinterpolatorbaseinterpolatevelocity"></a><a name="interpolatevelocity"></a>CInterpolatorBase::InterpolateVelocity

Interpola la velocità in corrispondenza di un determinato offset

```
IFACEMETHOD(InterpolateVelocity)(
    __in UI_ANIMATION_SECONDS offset,
    __out DOUBLE* velocity);
```

### <a name="parameters"></a>Parametri

*offset*<br/>
Offset dall'inizio della transizione. L'offset è sempre maggiore o uguale a zero e minore o uguale alla durata della transizione. Questo metodo non viene chiamato se la durata della transizione è zero.

*velocity*<br/>
Output: Velocità della variabile in corrispondenza dell'offset.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. Restituisce E_FAIL se CCustomInterpolator non è impostato o l'implementazione personalizzata restituisce FALSE dal Metodo InterpolateVelocity.

## <a name="cinterpolatorbasesetcustominterpolator"></a><a name="setcustominterpolator"></a>CInterpolatorBase::SetCustomInterpolator

Archivia un puntatore all'interpolatore personalizzato, che gestirà gli eventi.

```cpp
void SetCustomInterpolator(CCustomInterpolator* pInterpolator);
```

### <a name="parameters"></a>Parametri

*pInterpolator*<br/>
Puntatore all'interpolatore personalizzato.

## <a name="cinterpolatorbasesetduration"></a><a name="setduration"></a>CInterpolatorBase::SetDuration

Imposta la durata dell'interpolatore

```
IFACEMETHOD(SetDuration)(__in UI_ANIMATION_SECONDS duration);
```

### <a name="parameters"></a>Parametri

*duration*<br/>
Durata della transizione.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. Restituisce E_FAIL se CCustomInterpolator non è impostato o l'implementazione personalizzata restituisce FALSE dal SetDuration metodo.

## <a name="cinterpolatorbasesetinitialvalueandvelocity"></a><a name="setinitialvalueandvelocity"></a>CInterpolatorBase::SetInitialValueAndVelocity

Imposta il valore iniziale e la velocità dell'interpolatore.

```
IFACEMETHOD(SetInitialValueAndVelocity)(
    __in DOUBLE initialValue,
    __in DOUBLE initialVelocity);
```

### <a name="parameters"></a>Parametri

*initialValue (Valoredino)*<br/>
Valore della variabile all'inizio della transizione.

*inizialeVelocità*<br/>
Velocità della variabile all'inizio della transizione.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. Restituisce E_FAIL se CCustomInterpolator non è impostato o l'implementazione personalizzata restituisce FALSE dal SetInitialValueAndVelocity metodo.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
