---
title: Classe CAccelerateDecelerateTransition
ms.date: 11/04/2016
f1_keywords:
- CAccelerateDecelerateTransition
- afxanimationcontroller/CAccelerateDecelerateTransition
helpviewer_keywords:
- CAccelerateDecelerateTransition class [MFC]
ms.assetid: b1f31ee8-bb11-4ccc-b124-365fb02b025c
ms.openlocfilehash: 356ba30e6d9a638672d2c356676735ebfaed8f3e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371153"
---
# <a name="cacceleratedeceleratetransition-class"></a>Classe CAccelerateDecelerateTransition

Implementa una transizione di accelerazione-decelerazione.

## <a name="syntax"></a>Sintassi

```
class CAccelerateDecelerateTransition : public CBaseTransition;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAccelerateDecelerateTransition::CAccelerateDecelerateTransition](#cacceleratedeceleratetransition)|Costruisce un oggetto di transizione.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAccelerateDecelerateTransition::Create](#create)|Chiama la libreria di transizione per creare un oggetto COM di transizione incapsulato. (Esegue l'override di [CBaseTransition::Create](../../mfc/reference/cbasetransition-class.md#create).)|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAcceleraDecelerateTransition::m_accelerationRatio](#m_accelerationratio)|Il rapporto tra il tempo impiegato per accelerare e la durata.|
|[CAccelerateDecelerateTransition::m_decelerationRatio](#m_decelerationratio)|Il rapporto tra il tempo impiegato per decelerare e la durata.|
|[CAccelerateDecelerateTransition::m_duration](#m_duration)|Durata della transizione.|
|[CAccelerateDecelerateTransition::m_finalValue](#m_finalvalue)|Valore della variabile di animazione alla fine della transizione.|

## <a name="remarks"></a>Osservazioni

Durante una transizione di accelerazione-decelerazione, la variabile di animazione accelera e quindi rallenta per tutta la durata della transizione, terminando in corrispondenza di un valore specificato. È possibile controllare la velocità con cui la variabile accelera e decelera in modo indipendente, specificando rapporti di accelerazione e decelerazione diversi. Quando la velocità iniziale è zero, il rapporto di accelerazione è la frazione della durata che la variabile spenderà accelerando; allo stesso modo con il rapporto di decelerazione. Se la velocità iniziale è diversa da zero, è la frazione di tempo tra la velocità che raggiunge lo zero e la fine della transizione. Il rapporto di accelerazione e il rapporto di decelerazione dovrebbero sommarsi a un massimo di 1,0. Poiché tutte le transizioni vengono cancellate automaticamente, si consiglia di allocare le autorizzazioni utilizzando operator new. L'oggetto COM IUIAnimationTransition incapsulato viene creato da CAnimationController::AnimateGroup, fino a quel momento è NULL. La modifica delle variabili membro dopo la creazione di questo oggetto COM non ha alcun effetto.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CBaseTransition (Transizione di Base](../../mfc/reference/cbasetransition-class.md)

`CAccelerateDecelerateTransition`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

## <a name="cacceleratedeceleratetransitioncacceleratedeceleratetransition"></a><a name="cacceleratedeceleratetransition"></a>CAccelerateDecelerateTransition::CAccelerateDecelerateTransition

Costruisce un oggetto di transizione.

```
CAccelerateDecelerateTransition(
    UI_ANIMATION_SECONDS duration,
    DOUBLE finalValue,
    DOUBLE accelerationRatio = 0.3,
    DOUBLE decelerationRatio = 0.3);
```

### <a name="parameters"></a>Parametri

*Durata*<br/>
Durata della transizione.

*valore finale*<br/>
Valore della variabile di animazione alla fine della transizione.

*accelerationRatio*<br/>
Il rapporto tra il tempo impiegato per accelerare e la durata.

*decelerazioneRatio*<br/>
Il rapporto tra il tempo impiegato per decelerare e la durata.

## <a name="cacceleratedeceleratetransitioncreate"></a><a name="create"></a>CAccelerateDecelerateTransition::Create

Chiama la libreria di transizione per creare un oggetto COM di transizione incapsulato.

```
virtual BOOL Create(
    IUIAnimationTransitionLibrary* pLibrary,
    IUIAnimationTransitionFactory* *\not used*\);
```

### <a name="parameters"></a>Parametri

*pLibreria*<br/>
Puntatore a [un'interfaccia IUIAnimationTransitionLibrary](/windows/win32/api/uianimation/nn-uianimation-iuianimationtransitionlibrary), che definisce una libreria di transizioni standard.

### <a name="return-value"></a>Valore restituito

TRUESe la transizione viene creata correttamente. in caso contrario, FALSE.

## <a name="cacceleratedeceleratetransitionm_accelerationratio"></a><a name="m_accelerationratio"></a>CAcceleraDecelerateTransition::m_accelerationRatio

Il rapporto tra il tempo impiegato per accelerare e la durata.

```
DOUBLE m_accelerationRatio;
```

## <a name="cacceleratedeceleratetransitionm_decelerationratio"></a><a name="m_decelerationratio"></a>CAccelerateDecelerateTransition::m_decelerationRatio

Il rapporto tra il tempo impiegato per decelerare e la durata.

```
DOUBLE m_decelerationRatio;
```

## <a name="cacceleratedeceleratetransitionm_duration"></a><a name="m_duration"></a>CAccelerateDecelerateTransition::m_duration

Durata della transizione.

```
UI_ANIMATION_SECONDS m_duration;
```

## <a name="cacceleratedeceleratetransitionm_finalvalue"></a><a name="m_finalvalue"></a>CAccelerateDecelerateTransition::m_finalValue

Valore della variabile di animazione alla fine della transizione.

```
DOUBLE m_finalValue;
```

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
