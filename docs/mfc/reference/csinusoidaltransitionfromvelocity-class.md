---
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
ms.openlocfilehash: 585ffcf787b2e1156b4f0b9f6444b15a4d5bfc54
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50500516"
---
# <a name="csinusoidaltransitionfromvelocity-class"></a>Classe CSinusoidalTransitionFromVelocity

Incapsula una transizione a velocità sinusoidale con un'ampiezza determinata dalla velocità iniziale della variabile di animazione.

## <a name="syntax"></a>Sintassi

```
class CSinusoidalTransitionFromVelocity : public CBaseTransition;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSinusoidalTransitionFromVelocity::CSinusoidalTransitionFromVelocity](#csinusoidaltransitionfromvelocity)|Costruisce un oggetto di transizione.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSinusoidalTransitionFromVelocity::Create](#create)|Chiama la libreria di transizione per creare oggetti COM di transizione incapsulato. (Esegue l'override [CBaseTransition:: Create](../../mfc/reference/cbasetransition-class.md#create).)|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSinusoidalTransitionFromVelocity::m_duration](#m_duration)|La durata della transizione.|
|[CSinusoidalTransitionFromVelocity::m_period](#m_period)|Il periodo di oscillazione dell'onda sinusoidale in pochi secondi.|

## <a name="remarks"></a>Note

Il valore della variabile di animazione oscilla intorno al valore iniziale per l'intera durata di una transizione a intervalli sinusoidali. L'ampiezza di oscillazione è determinata dalla velocità della variabile di animazione quando viene avviata la transizione. Poiché tutte le transizioni vengono cancellate automaticamente, è consigliabile allocata li utilizzando l'operatore new. L'oggetto incapsulato IUIAnimationTransition COM viene creato da CAnimationController:: AnimateGroup, finché non è NULL. Per modificare le variabili membro dopo la creazione di questo oggetto COM non ha alcun effetto.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CBaseTransition](../../mfc/reference/cbasetransition-class.md)

[CSinusoidalTransitionFromVelocity](../../mfc/reference/csinusoidaltransitionfromvelocity-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

##  <a name="create"></a>  CSinusoidalTransitionFromVelocity::Create

Chiama la libreria di transizione per creare oggetti COM di transizione incapsulato.

```
virtual BOOL Create(
    IUIAnimationTransitionLibrary* pLibrary,
    IUIAnimationTransitionFactory* \*not used*\);
```

### <a name="parameters"></a>Parametri

*pLibrary*<br/>
Puntatore alla raccolta di transizione, che è responsabile per la creazione di transizioni standard.

### <a name="return-value"></a>Valore restituito

TRUE se transizione viene creata correttamente. in caso contrario, FALSE.

##  <a name="csinusoidaltransitionfromvelocity"></a>  CSinusoidalTransitionFromVelocity::CSinusoidalTransitionFromVelocity

Costruisce un oggetto di transizione.

```
CSinusoidalTransitionFromVelocity(
    UI_ANIMATION_SECONDS duration,
    UI_ANIMATION_SECONDS period);
```

### <a name="parameters"></a>Parametri

*Durata*<br/>
La durata della transizione.

*Periodo*<br/>
Il periodo di oscillazione dell'onda sinusoidale in pochi secondi.

##  <a name="m_duration"></a>  CSinusoidalTransitionFromVelocity::m_duration

La durata della transizione.

```
UI_ANIMATION_SECONDS m_duration;
```

##  <a name="m_period"></a>  CSinusoidalTransitionFromVelocity::m_period

Il periodo di oscillazione dell'onda sinusoidale in pochi secondi.

```
UI_ANIMATION_SECONDS m_period;
```

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
