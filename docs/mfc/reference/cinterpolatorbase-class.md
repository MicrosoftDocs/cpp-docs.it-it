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
ms.openlocfilehash: e428478f2f437654ea2f0890993245afc53c01f3
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50541466"
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
|[CInterpolatorBase::CInterpolatorBase](#cinterpolatorbase)|Costruisce il `CInterpolatorBase` oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CInterpolatorBase::CreateInstance](#createinstance)|Crea un'istanza di `CInterpolatorBase` e archivia un puntatore a un interpolatore personalizzato che gestirà gli eventi.|
|[CInterpolatorBase::GetDependencies](#getdependencies)|Ottiene le dipendenze dell'interpolatore. Esegue l'override di `CUIAnimationInterpolatorBase::GetDependencies`.|
|[CInterpolatorBase::GetDuration](#getduration)|Ottiene la durata dell'interpolatore. Esegue l'override di `CUIAnimationInterpolatorBase::GetDuration`.|
|[CInterpolatorBase::GetFinalValue](#getfinalvalue)|Ottiene il valore finale a cui punta l'interpolatore. Esegue l'override di `CUIAnimationInterpolatorBase::GetFinalValue`.|
|[CInterpolatorBase::InterpolateValue](#interpolatevalue)|Crea un'interpolazione il valore a un offset specificato (esegue l'override `CUIAnimationInterpolatorBase::InterpolateValue`.)|
|[CInterpolatorBase::InterpolateVelocity](#interpolatevelocity)|Crea un'interpolazione la velocità a un offset specificato (esegue l'override `CUIAnimationInterpolatorBase::InterpolateVelocity`.)|
|[CInterpolatorBase::SetCustomInterpolator](#setcustominterpolator)|Archivia un puntatore a un interpolatore personalizzato che gestirà gli eventi.|
|[CInterpolatorBase::SetDuration](#setduration)|Imposta la durata dell'interpolatore (esegue l'override `CUIAnimationInterpolatorBase::SetDuration`.)|
|[CInterpolatorBase::SetInitialValueAndVelocity](#setinitialvalueandvelocity)|Imposta valore iniziale e la velocità dell'interpolatore. Esegue l'override di `CUIAnimationInterpolatorBase::SetInitialValueAndVelocity`.|

## <a name="remarks"></a>Note

Questo gestore di è creato e passato a `IUIAnimationTransitionFactory::CreateTransition` quando un `CCustomTransition` oggetto viene creato come parte del processo di inizializzazione di animazione (avviato da `CAnimationController::AnimateGroup`). In genere non è necessario utilizzare questa classe direttamente, semplicemente routs tutti gli eventi a un `CCustomInterpolator`-il cui puntatore viene passato al costruttore della classe derivata `CCustomTransition`.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CUIAnimationCallbackBase`

`CUIAnimationInterpolatorBase`

`CInterpolatorBase`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

##  <a name="cinterpolatorbase"></a>  CInterpolatorBase::CInterpolatorBase

Costruisce l'oggetto CInterpolatorBase.

```
CInterpolatorBase();
```

##  <a name="createinstance"></a>  CInterpolatorBase::CreateInstance

Crea un'istanza di CInterpolatorBase e archivia un puntatore a un interpolatore personalizzato che gestirà gli eventi.

```
static COM_DECLSPEC_NOTHROW HRESULT CreateInstance(
    CCustomInterpolator* pInterpolator,
    IUIAnimationInterpolator** ppHandler);
```

### <a name="parameters"></a>Parametri

*pInterpolator*<br/>
Puntatore a interpolatore personalizzato.

*ppHandler*<br/>
Output. Contiene un puntatore all'istanza di CInterpolatorBase quando la funzione restituisce.

### <a name="return-value"></a>Valore restituito

##  <a name="getdependencies"></a>  CInterpolatorBase::GetDependencies

Ottiene le dipendenze dell'interpolatore.

```
IFACEMETHOD(GetDependencies)(
    __out UI_ANIMATION_DEPENDENCIES* initialValueDependencies,
    __out UI_ANIMATION_DEPENDENCIES* initialVelocityDependencies,
    __out UI_ANIMATION_DEPENDENCIES* durationDependencies);
```

### <a name="parameters"></a>Parametri

*initialValueDependencies*<br/>
Output. Gli aspetti dell'interpolatore che dipendono dal valore iniziale passato a SetInitialValueAndVelocity.

*initialVelocityDependencies*<br/>
Output. Gli aspetti dell'interpolatore che variano in base alla velocità iniziale passato a SetInitialValueAndVelocity.

*durationDependencies*<br/>
Output. Aspetti che dipendono dalla durata dell'interpolatore passati a SetDuration.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. Restituisce E_FAIL se CCustomInterpolator non è impostata, o l'implementazione personalizzata restituisce FALSE dal metodo GetDependencies.

##  <a name="getduration"></a>  CInterpolatorBase::GetDuration

Ottiene la durata dell'interpolatore.

```
IFACEMETHOD(GetDuration)(__out UI_ANIMATION_SECONDS* duration);
```

### <a name="parameters"></a>Parametri

*Durata*<br/>
Output. La durata della transizione, in secondi.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. Restituisce E_FAIL se CCustomInterpolator non è impostata, o l'implementazione personalizzata restituisce FALSE dal metodo GetDuration.

##  <a name="getfinalvalue"></a>  CInterpolatorBase::GetFinalValue

Ottiene il valore finale a cui punta l'interpolatore.

```
IFACEMETHOD(GetFinalValue)(__out DOUBLE* value);
```

### <a name="parameters"></a>Parametri

*valore*<br/>
Output. Il valore finale di una variabile al termine della transizione.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. Restituisce E_FAIL se CCustomInterpolator non è impostata, o l'implementazione personalizzata restituisce FALSE dal metodo GetFinalValue.

##  <a name="interpolatevalue"></a>  CInterpolatorBase::InterpolateValue

Crea un'interpolazione il valore a un offset specificato

```
IFACEMETHOD(InterpolateValue)(
  __in UI_ANIMATION_SECONDS offset,
  __out DOUBLE* value);
```

### <a name="parameters"></a>Parametri

*offset*<br/>
L'offset dall'inizio della transizione. L'offset è sempre maggiore o uguale a zero e minore rispetto alla durata della transizione. Questo metodo non viene chiamato se la durata della transizione è uguale a zero.

*valore*<br/>
Output. Il valore interpolato.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. Restituisce E_FAIL se CCustomInterpolator non è impostata, o l'implementazione personalizzata restituisce FALSE dal metodo InterpolateValue.

##  <a name="interpolatevelocity"></a>  CInterpolatorBase::InterpolateVelocity

Crea un'interpolazione la velocità a un offset specificato

```
IFACEMETHOD(InterpolateVelocity)(
  __in UI_ANIMATION_SECONDS offset,
  __out DOUBLE* velocity);
```

### <a name="parameters"></a>Parametri

*offset*<br/>
L'offset dall'inizio della transizione. L'offset è sempre maggiore di o uguale a zero e minore o uguale alla durata della transizione. Questo metodo non viene chiamato se la durata della transizione è uguale a zero.

*Velocità*<br/>
Output. La velocità della variabile in corrispondenza dell'offset.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. Restituisce E_FAIL se CCustomInterpolator non è impostata, o l'implementazione personalizzata restituisce FALSE dal metodo InterpolateVelocity.

##  <a name="setcustominterpolator"></a>  CInterpolatorBase::SetCustomInterpolator

Archivia un puntatore a un interpolatore personalizzato che gestirà gli eventi.

```
void SetCustomInterpolator(CCustomInterpolator* pInterpolator);
```

### <a name="parameters"></a>Parametri

*pInterpolator*<br/>
Puntatore a interpolatore personalizzato.

##  <a name="setduration"></a>  CInterpolatorBase::SetDuration

Imposta la durata dell'interpolatore

```
IFACEMETHOD(SetDuration)(__in UI_ANIMATION_SECONDS duration);
```

### <a name="parameters"></a>Parametri

*Durata*<br/>
La durata della transizione.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. Restituisce E_FAIL se CCustomInterpolator non è impostata, o l'implementazione personalizzata restituisce FALSE dal metodo SetDuration.

##  <a name="setinitialvalueandvelocity"></a>  CInterpolatorBase::SetInitialValueAndVelocity

Imposta valore iniziale e la velocità dell'interpolatore.

```
IFACEMETHOD(SetInitialValueAndVelocity)(
  __in DOUBLE initialValue,
  __in DOUBLE initialVelocity);
```

### <a name="parameters"></a>Parametri

*initialValue*<br/>
Il valore della variabile all'inizio della transizione.

*initialVelocity*<br/>
La velocità della variabile all'inizio della transizione.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, viene restituito S_OK. Restituisce E_FAIL se CCustomInterpolator non è impostata, o l'implementazione personalizzata restituisce FALSE dal metodo SetInitialValueAndVelocity.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
