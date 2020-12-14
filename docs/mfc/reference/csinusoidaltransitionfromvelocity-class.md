---
description: 'Altre informazioni su: classe CSinusoidalTransitionFromVelocity'
title: Classe CSinusoidalTransitionFromVelocity
ms.date: 11/04/2016
f1_keywords:
- CSinusoidalTransitionFromVelocity
- AFXANIMATIONCONTROLLER/CSinusoidalTransitionFromVelocity
- AFXANIMATIONCONTROLLER/CSinusoidalTransitionFromVelocity::CSinusoidalTransitionFromVelocity
- AFXANIMATIONCONTROLLER/CSinusoidalTransitionFromVelocity::Create
- AFXANIMATIONCONTROLLER/CSinusoidalTransitionFromVelocity::m_duration
- AFXANIMATIONCONTROLLER/CSinusoidalTransitionFromVelocity::m_period
helpviewer_keywords:
- CSinusoidalTransitionFromVelocity [MFC], CSinusoidalTransitionFromVelocity
- CSinusoidalTransitionFromVelocity [MFC], Create
- CSinusoidalTransitionFromVelocity [MFC], m_duration
- CSinusoidalTransitionFromVelocity [MFC], m_period
ms.assetid: cc885f17-b84b-45ee-8f1f-36a8bbb7adad
ms.openlocfilehash: 96f4a4c6343f3635f3b60480f49c5af6e6f1e089
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97342754"
---
# <a name="csinusoidaltransitionfromvelocity-class"></a>Classe CSinusoidalTransitionFromVelocity

Incapsula una transizione a velocità sinusoidale con un'ampiezza determinata dalla velocità iniziale della variabile di animazione.

## <a name="syntax"></a>Sintassi

```
class CSinusoidalTransitionFromVelocity : public CBaseTransition;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CSinusoidalTransitionFromVelocity:: CSinusoidalTransitionFromVelocity](#csinusoidaltransitionfromvelocity)|Costruisce un oggetto di transizione.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CSinusoidalTransitionFromVelocity:: create](#create)|Chiama la libreria di transizione per creare l'oggetto COM di transizione incapsulato. Esegue l'override di [CBaseTransition:: create](../../mfc/reference/cbasetransition-class.md#create).|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CSinusoidalTransitionFromVelocity:: m_duration](#m_duration)|Durata della transizione.|
|[CSinusoidalTransitionFromVelocity:: m_period](#m_period)|Periodo di oscillazione dell'onda sinusoidale in secondi.|

## <a name="remarks"></a>Commenti

Il valore della variabile di animazione oscilla intorno al valore iniziale per l'intera durata di una transizione a intervalli sinusoidali. L'ampiezza dell'oscillazione è determinata dalla velocità della variabile di animazione all'inizio della transizione. Poiché tutte le transizioni vengono cancellate automaticamente, è consigliabile allocarle usando operator new. L'oggetto COM IUIAnimationTransition incapsulato viene creato da CAnimationController:: AnimateGroup, fino a quando non è NULL. La modifica delle variabili membro dopo la creazione di questo oggetto COM non ha alcun effetto.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CBaseTransition](../../mfc/reference/cbasetransition-class.md)

[CSinusoidalTransitionFromVelocity](../../mfc/reference/csinusoidaltransitionfromvelocity-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

## <a name="csinusoidaltransitionfromvelocitycreate"></a><a name="create"></a> CSinusoidalTransitionFromVelocity:: create

Chiama la libreria di transizione per creare l'oggetto COM di transizione incapsulato.

```
virtual BOOL Create(
    IUIAnimationTransitionLibrary* pLibrary,
    IUIAnimationTransitionFactory* \*not used*\);
```

### <a name="parameters"></a>Parametri

*pLibrary*<br/>
Puntatore alla libreria di transizione, responsabile della creazione di transizioni standard.

### <a name="return-value"></a>Valore restituito

TRUE se la transizione viene creata correttamente; in caso contrario, FALSE.

## <a name="csinusoidaltransitionfromvelocitycsinusoidaltransitionfromvelocity"></a><a name="csinusoidaltransitionfromvelocity"></a> CSinusoidalTransitionFromVelocity:: CSinusoidalTransitionFromVelocity

Costruisce un oggetto di transizione.

```
CSinusoidalTransitionFromVelocity(
    UI_ANIMATION_SECONDS duration,
    UI_ANIMATION_SECONDS period);
```

### <a name="parameters"></a>Parametri

*duration*<br/>
Durata della transizione.

*period*<br/>
Periodo di oscillazione dell'onda sinusoidale in secondi.

## <a name="csinusoidaltransitionfromvelocitym_duration"></a><a name="m_duration"></a> CSinusoidalTransitionFromVelocity:: m_duration

Durata della transizione.

```
UI_ANIMATION_SECONDS m_duration;
```

## <a name="csinusoidaltransitionfromvelocitym_period"></a><a name="m_period"></a> CSinusoidalTransitionFromVelocity:: m_period

Periodo di oscillazione dell'onda sinusoidale in secondi.

```
UI_ANIMATION_SECONDS m_period;
```

## <a name="see-also"></a>Vedi anche

[Classi](../../mfc/reference/mfc-classes.md)
