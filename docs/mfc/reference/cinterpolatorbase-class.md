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
ms.openlocfilehash: d1fc675b1014ab9a099e8310b52b7458f2bff65f
ms.sourcegitcommit: 46d24d6e70c03e05484923d9efc6ed5150e96a64
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2019
ms.locfileid: "68916210"
---
# <a name="cinterpolatorbase-class"></a>Classe CInterpolatorBase

Implementa un callback, chiamato dall'API di animazione quando deve essere calcolato un nuovo valore di una variabile di animazione.

## <a name="syntax"></a>Sintassi

```
class CInterpolatorBase : public CUIAnimationInterpolatorBase<CInterpolatorBase>;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CInterpolatorBase::CInterpolatorBase](#cinterpolatorbase)|Costruisce l' `CInterpolatorBase` oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CInterpolatorBase::CreateInstance](#createinstance)|Crea un'istanza di `CInterpolatorBase` e archivia un puntatore a un interpolatore personalizzato, che gestirà gli eventi.|
|[CInterpolatorBase::GetDependencies](#getdependencies)|Ottiene le dipendenze dell'interpolatore. Esegue l'override di `CUIAnimationInterpolatorBase::GetDependencies`.|
|[CInterpolatorBase::GetDuration](#getduration)|Ottiene la durata dell'interpolatore. Esegue l'override di `CUIAnimationInterpolatorBase::GetDuration`.|
|[CInterpolatorBase::GetFinalValue](#getfinalvalue)|Ottiene il valore finale a cui conduce l'interpolatore. Esegue l'override di `CUIAnimationInterpolatorBase::GetFinalValue`.|
|[CInterpolatorBase::InterpolateValue](#interpolatevalue)|Interpola il valore in corrispondenza di un offset specificato `CUIAnimationInterpolatorBase::InterpolateValue`(esegue l'override di).|
|[CInterpolatorBase::InterpolateVelocity](#interpolatevelocity)|Interpola la velocità in corrispondenza di un offset specificato `CUIAnimationInterpolatorBase::InterpolateVelocity`(esegue l'override di).|
|[CInterpolatorBase::SetCustomInterpolator](#setcustominterpolator)|Archivia un puntatore a un interpolatore personalizzato, che gestirà gli eventi.|
|[CInterpolatorBase::SetDuration](#setduration)|Imposta la durata dell'interpolatore ( `CUIAnimationInterpolatorBase::SetDuration`override).|
|[CInterpolatorBase::SetInitialValueAndVelocity](#setinitialvalueandvelocity)|Imposta la velocità e il valore iniziale dell'interpolatore. Esegue l'override di `CUIAnimationInterpolatorBase::SetInitialValueAndVelocity`.|

## <a name="remarks"></a>Note

Questo gestore viene creato e passato a `IUIAnimationTransitionFactory::CreateTransition` quando un `CCustomTransition` oggetto viene creato come parte del processo di inizializzazione dell'animazione (avviato `CAnimationController::AnimateGroup`da). In genere non è necessario usare direttamente questa classe, ma solo tutti gli eventi vengono instradati a una classe derivata da, il `CCustomInterpolator`cui puntatore viene passato al costruttore di. `CCustomTransition`

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CUIAnimationCallbackBase`

`CUIAnimationInterpolatorBase`

`CInterpolatorBase`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

##  <a name="cinterpolatorbase"></a>CInterpolatorBase:: CInterpolatorBase

Costruisce l'oggetto CInterpolatorBase.

```
CInterpolatorBase();
```

##  <a name="createinstance"></a>CInterpolatorBase:: CreateInstance

Crea un'istanza di CInterpolatorBase e archivia un puntatore a un interpolatore personalizzato, che gestirà gli eventi.

```
static COM_DECLSPEC_NOTHROW HRESULT CreateInstance(
    CCustomInterpolator* pInterpolator,
    IUIAnimationInterpolator** ppHandler);
```

### <a name="parameters"></a>Parametri

*pInterpolator*<br/>
Puntatore all'interpolazione personalizzata.

*ppHandler*<br/>
Output. Contiene un puntatore all'istanza di CInterpolatorBase quando la funzione restituisce un valore.

### <a name="return-value"></a>Valore restituito

##  <a name="getdependencies"></a>CInterpolatorBase:: getdipendenze

Ottiene le dipendenze dell'interpolatore.

```
IFACEMETHOD(GetDependencies)(
    __out UI_ANIMATION_DEPENDENCIES* initialValueDependencies,
    __out UI_ANIMATION_DEPENDENCIES* initialVelocityDependencies,
    __out UI_ANIMATION_DEPENDENCIES* durationDependencies);
```

### <a name="parameters"></a>Parametri

*initialValueDependencies*<br/>
Output. Aspetti dell'interpolatore che dipendono dal valore iniziale passato a SetInitialValueAndVelocity.

*initialVelocityDependencies*<br/>
Output. Aspetti dell'interpolatore che dipendono dalla velocità iniziale passata a SetInitialValueAndVelocity.

*durationDependencies*<br/>
Output. Aspetti dell'interpolatore che dipendono dalla durata passata a Duration.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce S_OK. Restituisce E_FAIL se CCustomInterpolator non è impostato oppure l'implementazione personalizzata restituisce FALSE dal metodo getdipendetions.

##  <a name="getduration"></a>CInterpolatorBase:: GetDuration

Ottiene la durata dell'interpolatore.

```
IFACEMETHOD(GetDuration)(__out UI_ANIMATION_SECONDS* duration);
```

### <a name="parameters"></a>Parametri

*durata*<br/>
Output. Durata della transizione, in secondi.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce S_OK. Restituisce E_FAIL se CCustomInterpolator non è impostato oppure l'implementazione personalizzata restituisce FALSE dal metodo GetDuration.

##  <a name="getfinalvalue"></a>CInterpolatorBase:: GetFinalValue

Ottiene il valore finale a cui conduce l'interpolatore.

```
IFACEMETHOD(GetFinalValue)(__out DOUBLE* value);
```

### <a name="parameters"></a>Parametri

*value*<br/>
Output. Valore finale di una variabile alla fine della transizione.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce S_OK. Restituisce E_FAIL se CCustomInterpolator non è impostato oppure l'implementazione personalizzata restituisce FALSE dal metodo GetFinalValue.

##  <a name="interpolatevalue"></a>  CInterpolatorBase::InterpolateValue

Esegue l'interpolazione del valore in corrispondenza di un offset specificato

```
IFACEMETHOD(InterpolateValue)(
    __in UI_ANIMATION_SECONDS offset,
    __out DOUBLE* value);
```

### <a name="parameters"></a>Parametri

*offset*<br/>
Offset dall'inizio della transizione. L'offset è sempre maggiore o uguale a zero e minore della durata della transizione. Questo metodo non viene chiamato se la durata della transizione è zero.

*value*<br/>
Output. Valore interpolato.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce S_OK. Restituisce E_FAIL se CCustomInterpolator non è impostato oppure l'implementazione personalizzata restituisce FALSE dal metodo InterpolateValue.

##  <a name="interpolatevelocity"></a>CInterpolatorBase:: InterpolateVelocity

Interpola la velocità in corrispondenza di un offset specificato

```
IFACEMETHOD(InterpolateVelocity)(
    __in UI_ANIMATION_SECONDS offset,
    __out DOUBLE* velocity);
```

### <a name="parameters"></a>Parametri

*offset*<br/>
Offset dall'inizio della transizione. L'offset è sempre maggiore o uguale a zero e minore o uguale alla durata della transizione. Questo metodo non viene chiamato se la durata della transizione è zero.

*velocity*<br/>
Output. Velocità della variabile in corrispondenza dell'offset.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce S_OK. Restituisce E_FAIL se CCustomInterpolator non è impostato oppure l'implementazione personalizzata restituisce FALSE dal metodo InterpolateVelocity.

##  <a name="setcustominterpolator"></a>CInterpolatorBase:: SetCustomInterpolator

Archivia un puntatore a un interpolatore personalizzato, che gestirà gli eventi.

```
void SetCustomInterpolator(CCustomInterpolator* pInterpolator);
```

### <a name="parameters"></a>Parametri

*pInterpolator*<br/>
Puntatore all'interpolazione personalizzata.

##  <a name="setduration"></a>CInterpolatorBase:: toduration

Imposta la durata dell'interpolatore

```
IFACEMETHOD(SetDuration)(__in UI_ANIMATION_SECONDS duration);
```

### <a name="parameters"></a>Parametri

*durata*<br/>
Durata della transizione.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce S_OK. Restituisce E_FAIL se CCustomInterpolator non è impostato oppure l'implementazione personalizzata restituisce FALSE dal metodo seduration.

##  <a name="setinitialvalueandvelocity"></a>  CInterpolatorBase::SetInitialValueAndVelocity

Imposta la velocità e il valore iniziale dell'interpolatore.

```
IFACEMETHOD(SetInitialValueAndVelocity)(
    __in DOUBLE initialValue,
    __in DOUBLE initialVelocity);
```

### <a name="parameters"></a>Parametri

*initialValue*<br/>
Valore della variabile all'inizio della transizione.

*initialVelocity*<br/>
Velocità della variabile all'inizio della transizione.

### <a name="return-value"></a>Valore restituito

Se il metodo ha esito positivo, restituisce S_OK. Restituisce E_FAIL se CCustomInterpolator non è impostato oppure l'implementazione personalizzata restituisce FALSE dal metodo SetInitialValueAndVelocity.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
