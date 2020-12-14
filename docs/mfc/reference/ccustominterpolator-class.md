---
description: 'Altre informazioni su: classe CCustomInterpolator'
title: Classe CCustomInterpolator
ms.date: 11/04/2016
f1_keywords:
- CCustomInterpolator
- AFXANIMATIONCONTROLLER/CCustomInterpolator
- AFXANIMATIONCONTROLLER/CCustomInterpolator::CCustomInterpolator
- AFXANIMATIONCONTROLLER/CCustomInterpolator::GetDependencies
- AFXANIMATIONCONTROLLER/CCustomInterpolator::GetDuration
- AFXANIMATIONCONTROLLER/CCustomInterpolator::GetFinalValue
- AFXANIMATIONCONTROLLER/CCustomInterpolator::Init
- AFXANIMATIONCONTROLLER/CCustomInterpolator::InterpolateValue
- AFXANIMATIONCONTROLLER/CCustomInterpolator::InterpolateVelocity
- AFXANIMATIONCONTROLLER/CCustomInterpolator::SetDuration
- AFXANIMATIONCONTROLLER/CCustomInterpolator::SetInitialValueAndVelocity
- AFXANIMATIONCONTROLLER/CCustomInterpolator::m_currentValue
- AFXANIMATIONCONTROLLER/CCustomInterpolator::m_currentVelocity
- AFXANIMATIONCONTROLLER/CCustomInterpolator::m_duration
- AFXANIMATIONCONTROLLER/CCustomInterpolator::m_finalValue
- AFXANIMATIONCONTROLLER/CCustomInterpolator::m_initialValue
- AFXANIMATIONCONTROLLER/CCustomInterpolator::m_initialVelocity
helpviewer_keywords:
- CCustomInterpolator [MFC], CCustomInterpolator
- CCustomInterpolator [MFC], GetDependencies
- CCustomInterpolator [MFC], GetDuration
- CCustomInterpolator [MFC], GetFinalValue
- CCustomInterpolator [MFC], Init
- CCustomInterpolator [MFC], InterpolateValue
- CCustomInterpolator [MFC], InterpolateVelocity
- CCustomInterpolator [MFC], SetDuration
- CCustomInterpolator [MFC], SetInitialValueAndVelocity
- CCustomInterpolator [MFC], m_currentValue
- CCustomInterpolator [MFC], m_currentVelocity
- CCustomInterpolator [MFC], m_duration
- CCustomInterpolator [MFC], m_finalValue
- CCustomInterpolator [MFC], m_initialValue
- CCustomInterpolator [MFC], m_initialVelocity
ms.assetid: 28d85595-989a-40a3-b003-e0e38437a94d
ms.openlocfilehash: 84fcdc20ce1a90441a508f1469d498095980af83
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97227754"
---
# <a name="ccustominterpolator-class"></a>Classe CCustomInterpolator

Implementa un interpolatore di base.

## <a name="syntax"></a>Sintassi

```
class CCustomInterpolator;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CCustomInterpolator:: CCustomInterpolator](#ccustominterpolator)|Di overload. Costruisce un oggetto di interpolazione personalizzato e inizializza la durata e la velocità per i valori specificati.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CCustomInterpolator:: getdipendenze](#getdependencies)|Ottiene le dipendenze dell'interpolatore.|
|[CCustomInterpolator:: GetDuration](#getduration)|Ottiene la durata dell'interpolatore.|
|[CCustomInterpolator:: GetFinalValue](#getfinalvalue)|Ottiene il valore finale a cui conduce l'interpolatore.|
|[CCustomInterpolator:: init](#init)|Inizializza la durata e il valore finale.|
|[CCustomInterpolator:: InterpolateValue](#interpolatevalue)|Esegue l'interpolazione del valore in corrispondenza di un offset specificato.|
|[CCustomInterpolator:: InterpolateVelocity](#interpolatevelocity)|Interpola la velocità in corrispondenza di un offset specificato|
|[CCustomInterpolator:: toduration](#setduration)|Imposta la durata dell'interpolatore.|
|[CCustomInterpolator:: SetInitialValueAndVelocity](#setinitialvalueandvelocity)|Imposta la velocità e il valore iniziale dell'interpolatore.|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Description|
|----------|-----------------|
|[CCustomInterpolator:: m_currentValue](#m_currentvalue)|Valore interpolato.|
|[CCustomInterpolator:: m_currentVelocity](#m_currentvelocity)|Velocità interpolata.|
|[CCustomInterpolator:: m_duration](#m_duration)|Durata della transizione.|
|[CCustomInterpolator:: m_finalValue](#m_finalvalue)|Valore finale di una variabile alla fine della transizione.|
|[CCustomInterpolator:: m_initialValue](#m_initialvalue)|Valore della variabile all'inizio della transizione.|
|[CCustomInterpolator:: m_initialVelocity](#m_initialvelocity)|Velocità della variabile all'inizio della transizione.|

## <a name="remarks"></a>Commenti

Derivare una classe da CCustomInterpolator ed eseguire l'override di tutti i metodi necessari per implementare un algoritmo di interpolazione personalizzato. Un puntatore a questa classe deve essere passato come parametro a CCustomTransition.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CCustomInterpolator`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

## <a name="ccustominterpolatorccustominterpolator"></a><a name="ccustominterpolator"></a> CCustomInterpolator:: CCustomInterpolator

Costruisce un oggetto di interpolazione personalizzato e imposta tutti i valori sul valore predefinito 0.

```
CCustomInterpolator();

CCustomInterpolator(
    UI_ANIMATION_SECONDS duration,
    DOUBLE finalValue);
```

### <a name="parameters"></a>Parametri

*duration*<br/>
Durata della transizione.

*finalValue*

### <a name="remarks"></a>Commenti

Usare CCustomInterpolator:: init per inizializzare la durata e il valore finale in un secondo momento nel codice.

## <a name="ccustominterpolatorgetdependencies"></a><a name="getdependencies"></a> CCustomInterpolator:: getdipendenze

Ottiene le dipendenze dell'interpolatore.

```
virtual BOOL GetDependencies(
    UI_ANIMATION_DEPENDENCIES* initialValueDependencies,
    UI_ANIMATION_DEPENDENCIES* initialVelocityDependencies,
    UI_ANIMATION_DEPENDENCIES* durationDependencies);
```

### <a name="parameters"></a>Parametri

*initialValueDependencies*<br/>
Output: Aspetti dell'interpolatore che dipendono dal valore iniziale passato a SetInitialValueAndVelocity.

*initialVelocityDependencies*<br/>
Output: Aspetti dell'interpolatore che dipendono dalla velocità iniziale passata a SetInitialValueAndVelocity.

*durationDependencies*<br/>
Output: Aspetti dell'interpolatore che dipendono dalla durata passata a Duration.

### <a name="return-value"></a>Valore restituito

L'implementazione di base restituisce sempre TRUE. Restituisce FALSE dall'implementazione sottoposta a override se si desidera interrompere l'evento.

## <a name="ccustominterpolatorgetduration"></a><a name="getduration"></a> CCustomInterpolator:: GetDuration

Ottiene la durata dell'interpolatore.

```
virtual BOOL GetDuration(UI_ANIMATION_SECONDS* duration);
```

### <a name="parameters"></a>Parametri

*duration*<br/>
Output: Durata della transizione, in secondi.

### <a name="return-value"></a>Valore restituito

L'implementazione di base restituisce sempre TRUE. Restituisce FALSE dall'implementazione sottoposta a override se si desidera interrompere l'evento.

## <a name="ccustominterpolatorgetfinalvalue"></a><a name="getfinalvalue"></a> CCustomInterpolator:: GetFinalValue

Ottiene il valore finale a cui conduce l'interpolatore.

```
virtual BOOL GetFinalValue(DOUBLE* value);
```

### <a name="parameters"></a>Parametri

*value*<br/>
Output: Valore finale di una variabile alla fine della transizione.

### <a name="return-value"></a>Valore restituito

L'implementazione di base restituisce sempre TRUE. Restituisce FALSE dall'implementazione sottoposta a override se si desidera interrompere l'evento.

## <a name="ccustominterpolatorinit"></a><a name="init"></a> CCustomInterpolator:: init

Inizializza la durata e il valore finale.

```cpp
void Init(
    UI_ANIMATION_SECONDS duration,
    DOUBLE finalValue);
```

### <a name="parameters"></a>Parametri

*duration*<br/>
Durata della transizione.

*finalValue*<br/>
Valore finale di una variabile alla fine della transizione.

## <a name="ccustominterpolatorinterpolatevalue"></a><a name="interpolatevalue"></a> CCustomInterpolator:: InterpolateValue

Esegue l'interpolazione del valore in corrispondenza di un offset specificato.

```
virtual BOOL InterpolateValue(
    UI_ANIMATION_SECONDS */,
    DOUBLE* value);
```

### <a name="parameters"></a>Parametri

*value*<br/>
Output: Valore interpolato.

### <a name="return-value"></a>Valore restituito

L'implementazione di base restituisce sempre TRUE. Restituisce FALSE dall'implementazione sottoposta a override se si desidera interrompere l'evento.

## <a name="ccustominterpolatorinterpolatevelocity"></a><a name="interpolatevelocity"></a> CCustomInterpolator:: InterpolateVelocity

Interpola la velocità in corrispondenza di un offset specificato

```
virtual BOOL InterpolateVelocity(
    UI_ANIMATION_SECONDS */,
    DOUBLE* velocity);
```

### <a name="parameters"></a>Parametri

*velocità*<br/>
Output: Velocità della variabile in corrispondenza dell'offset.

### <a name="return-value"></a>Valore restituito

L'implementazione di base restituisce sempre TRUE. Restituisce FALSE dall'implementazione sottoposta a override se si desidera interrompere l'evento.

## <a name="ccustominterpolatorm_currentvalue"></a><a name="m_currentvalue"></a> CCustomInterpolator:: m_currentValue

Valore interpolato.

```
DOUBLE m_currentValue;
```

## <a name="ccustominterpolatorm_currentvelocity"></a><a name="m_currentvelocity"></a> CCustomInterpolator:: m_currentVelocity

Velocità interpolata.

```
DOUBLE m_currentVelocity;
```

## <a name="ccustominterpolatorm_duration"></a><a name="m_duration"></a> CCustomInterpolator:: m_duration

Durata della transizione.

```
UI_ANIMATION_SECONDS m_duration;
```

## <a name="ccustominterpolatorm_finalvalue"></a><a name="m_finalvalue"></a> CCustomInterpolator:: m_finalValue

Valore finale di una variabile alla fine della transizione.

```
DOUBLE m_finalValue;
```

## <a name="ccustominterpolatorm_initialvalue"></a><a name="m_initialvalue"></a> CCustomInterpolator:: m_initialValue

Valore della variabile all'inizio della transizione.

```
DOUBLE m_initialValue;
```

## <a name="ccustominterpolatorm_initialvelocity"></a><a name="m_initialvelocity"></a> CCustomInterpolator:: m_initialVelocity

Velocità della variabile all'inizio della transizione.

```
DOUBLE m_initialVelocity;
```

## <a name="ccustominterpolatorsetduration"></a><a name="setduration"></a> CCustomInterpolator:: toduration

Imposta la durata dell'interpolatore.

```
virtual BOOL SetDuration(UI_ANIMATION_SECONDS duration);
```

### <a name="parameters"></a>Parametri

*duration*<br/>
Durata della transizione.

### <a name="return-value"></a>Valore restituito

L'implementazione di base restituisce sempre TRUE. Restituisce FALSE dall'implementazione sottoposta a override se si desidera interrompere l'evento.

## <a name="ccustominterpolatorsetinitialvalueandvelocity"></a><a name="setinitialvalueandvelocity"></a> CCustomInterpolator:: SetInitialValueAndVelocity

Imposta la velocità e il valore iniziale dell'interpolatore.

```
virtual BOOL SetInitialValueAndVelocity(
    DOUBLE initialValue,
    DOUBLE initialVelocity);
```

### <a name="parameters"></a>Parametri

*initialValue*<br/>
Valore della variabile all'inizio della transizione.

*initialVelocity*<br/>
Velocità della variabile all'inizio della transizione.

### <a name="return-value"></a>Valore restituito

L'implementazione di base restituisce sempre TRUE. Restituisce FALSE dall'implementazione sottoposta a override se si desidera interrompere l'evento.

## <a name="see-also"></a>Vedi anche

[Classi](../../mfc/reference/mfc-classes.md)
