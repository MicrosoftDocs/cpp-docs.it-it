---
title: Classe CSmoothStopTransition
ms.date: 11/04/2016
f1_keywords:
- CSmoothStopTransition
- AFXANIMATIONCONTROLLER/CSmoothStopTransition
- AFXANIMATIONCONTROLLER/CSmoothStopTransition::CSmoothStopTransition
- AFXANIMATIONCONTROLLER/CSmoothStopTransition::Create
- AFXANIMATIONCONTROLLER/CSmoothStopTransition::m_dblFinalValue
- AFXANIMATIONCONTROLLER/CSmoothStopTransition::m_maximumDuration
helpviewer_keywords:
- CSmoothStopTransition [MFC], CSmoothStopTransition
- CSmoothStopTransition [MFC], Create
- CSmoothStopTransition [MFC], m_dblFinalValue
- CSmoothStopTransition [MFC], m_maximumDuration
ms.assetid: e1a4b476-6f96-43dd-90db-870a64406b85
ms.openlocfilehash: 0ba550b4a0b9443d0681e17195687fb94c207ace
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81318200"
---
# <a name="csmoothstoptransition-class"></a>Classe CSmoothStopTransition

Incapsula una transizione a interruzione graduale.

## <a name="syntax"></a>Sintassi

```
class CSmoothStopTransition : public CBaseTransition;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSmoothStopTransition::CSmoothStopTransition](#csmoothstoptransition)|Costruisce una transizione smooth-stop e ne inizializza la durata massima e il valore finale.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSmoothStopTransition::Create](#create)|Chiama la libreria di transizione per creare un oggetto COM di transizione incapsulato. (Esegue l'override di [CBaseTransition::Create](../../mfc/reference/cbasetransition-class.md#create).)|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSmoothStopTransition::m_dblFinalValue](#m_dblfinalvalue)|Valore della variabile di animazione alla fine della transizione.|
|[CSmoothStopTransition::m_maximumDuration](#m_maximumduration)|Durata massima della transizione.|

## <a name="remarks"></a>Osservazioni

Una transizione smooth-stop rallenta quando si avvicina a un determinato valore finale e lo raggiunge con una velocità pari a zero. La durata della transizione è determinata dalla velocità iniziale, dalla differenza tra i valori iniziale e finale e dalla durata massima specificata. Se non esiste una soluzione costituita da un singolo arco parabolico, questo metodo crea una transizione cubica. Poiché tutte le transizioni vengono cancellate automaticamente, si consiglia di allocare le autorizzazioni utilizzando operator new. L'oggetto COM IUIAnimationTransition incapsulato viene creato da CAnimationController::AnimateGroup, fino a quel momento è NULL. La modifica delle variabili membro dopo la creazione di questo oggetto COM non ha alcun effetto.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CBaseTransition (Transizione di Base](../../mfc/reference/cbasetransition-class.md)

[CSmoothStopTransition](../../mfc/reference/csmoothstoptransition-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

## <a name="csmoothstoptransitioncreate"></a><a name="create"></a>CSmoothStopTransition::Create

Chiama la libreria di transizione per creare un oggetto COM di transizione incapsulato.

```
virtual BOOL Create(
    IUIAnimationTransitionLibrary* pLibrary,
    IUIAnimationTransitionFactory* \*not used*\);
```

### <a name="parameters"></a>Parametri

*pLibreria*<br/>
Puntatore alla libreria di transizioni, responsabile della creazione di transizioni standard.

### <a name="return-value"></a>Valore restituito

TRUESe la transizione viene creata correttamente. in caso contrario, FALSE.

## <a name="csmoothstoptransitioncsmoothstoptransition"></a><a name="csmoothstoptransition"></a>CSmoothStopTransition::CSmoothStopTransition

Costruisce una transizione smooth-stop e ne inizializza la durata massima e il valore finale.

```
CSmoothStopTransition(
    UI_ANIMATION_SECONDS maximumDuration,
    DOUBLE dblFinalValue);
```

### <a name="parameters"></a>Parametri

*maximumDuration (Durata massima)*<br/>
Durata massima della transizione.

*dblFinalValue (valore dblFinale)*<br/>
Valore della variabile di animazione alla fine della transizione.

## <a name="csmoothstoptransitionm_dblfinalvalue"></a><a name="m_dblfinalvalue"></a>CSmoothStopTransition::m_dblFinalValue

Valore della variabile di animazione alla fine della transizione.

```
DOUBLE m_dblFinalValue;
```

## <a name="csmoothstoptransitionm_maximumduration"></a><a name="m_maximumduration"></a>CSmoothStopTransition::m_maximumDuration

Durata massima della transizione.

```
UI_ANIMATION_SECONDS m_maximumDuration;
```

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
