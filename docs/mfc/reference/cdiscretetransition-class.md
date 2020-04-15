---
title: Classe CDiscreteTransition
ms.date: 11/04/2016
f1_keywords:
- CDiscreteTransition
- AFXANIMATIONCONTROLLER/CDiscreteTransition
- AFXANIMATIONCONTROLLER/CDiscreteTransition::CDiscreteTransition
- AFXANIMATIONCONTROLLER/CDiscreteTransition::Create
- AFXANIMATIONCONTROLLER/CDiscreteTransition::m_dblFinalValue
- AFXANIMATIONCONTROLLER/CDiscreteTransition::m_delay
- AFXANIMATIONCONTROLLER/CDiscreteTransition::m_hold
helpviewer_keywords:
- CDiscreteTransition [MFC], CDiscreteTransition
- CDiscreteTransition [MFC], Create
- CDiscreteTransition [MFC], m_dblFinalValue
- CDiscreteTransition [MFC], m_delay
- CDiscreteTransition [MFC], m_hold
ms.assetid: b4d84fb3-ccaa-451c-a69b-6b50dcb9b9c8
ms.openlocfilehash: 2a32ee7921e927e25a5196d38c8f5ae350ab2b8d
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81375662"
---
# <a name="cdiscretetransition-class"></a>Classe CDiscreteTransition

Incapsula una transizione discreta.

## <a name="syntax"></a>Sintassi

```
class CDiscreteTransition : public CBaseTransition;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDiscreteTransition::CDiscreteTransition](#cdiscretetransition)|Costruisce un oggetto di transizione discreto e ne inizializza i parametri.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDiscreteTransition::Create](#create)|Chiama la libreria di transizione per creare un oggetto COM di transizione incapsulato. (Esegue l'override di [CBaseTransition::Create](../../mfc/reference/cbasetransition-class.md#create).)|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDiscreteTransition::m_dblFinalValue](#m_dblfinalvalue)|Valore della variabile di animazione alla fine della transizione.|
|[CDiscreteTransition::m_delay](#m_delay)|Quantità di tempo entro la quale ritardare l'interruttore istantaneo al valore finale.|
|[CDiscreteTransizione::m_hold](#m_hold)|Quantità di tempo entro la quale mantenere la variabile al valore finale.|

## <a name="remarks"></a>Osservazioni

Durante una transizione discreta, la variabile di animazione rimane al valore iniziale per un tempo di ritardo specificato, quindi passa istantaneamente a un valore finale specificato e rimane in corrispondenza di tale valore per un determinato tempo di attesa. Poiché tutte le transizioni vengono cancellate automaticamente, si consiglia di allocare le autorizzazioni utilizzando operator new. L'oggetto COM IUIAnimationTransition incapsulato viene creato da CAnimationController::AnimateGroup, fino a quel momento è NULL. La modifica delle variabili membro dopo la creazione di questo oggetto COM non ha alcun effetto.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CBaseTransition (Transizione di Base](../../mfc/reference/cbasetransition-class.md)

[Transizione CDiscrete](../../mfc/reference/cdiscretetransition-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

## <a name="cdiscretetransitioncdiscretetransition"></a><a name="cdiscretetransition"></a>CDiscreteTransition::CDiscreteTransition

Costruisce un oggetto di transizione discreto e ne inizializza i parametri.

```
CDiscreteTransition(
    UI_ANIMATION_SECONDS delay,
    DOUBLE dblFinalValue,
    UI_ANIMATION_SECONDS hold);
```

### <a name="parameters"></a>Parametri

*Ritardo*<br/>
Quantità di tempo entro la quale ritardare l'interruttore istantaneo al valore finale.

*dblFinalValue (valore dblFinale)*<br/>
Valore della variabile di animazione alla fine della transizione.

*Tenere*<br/>
Quantità di tempo entro la quale mantenere la variabile al valore finale.

## <a name="cdiscretetransitioncreate"></a><a name="create"></a>CDiscreteTransition::Create

Chiama la libreria di transizione per creare un oggetto COM di transizione incapsulato.

```
virtual BOOL Create(
    IUIAnimationTransitionLibrary* pLibrary,
    IUIAnimationTransitionFactory* \*not used*\);
```

*pLibreria*<br/>
Puntatore a [un'interfaccia IUIAnimationTransitionLibrary](/windows/win32/api/uianimation/nn-uianimation-iuianimationtransitionlibrary), che definisce una libreria di transizioni standard.

### <a name="return-value"></a>Valore restituito

TRUESe la transizione viene creata correttamente. in caso contrario, FALSE.

## <a name="cdiscretetransitionm_dblfinalvalue"></a><a name="m_dblfinalvalue"></a>CDiscreteTransition::m_dblFinalValue

Valore della variabile di animazione alla fine della transizione.

```
DOUBLE m_dblFinalValue;
```

## <a name="cdiscretetransitionm_delay"></a><a name="m_delay"></a>CDiscreteTransition::m_delay

Quantità di tempo entro la quale ritardare l'interruttore istantaneo al valore finale.

```
UI_ANIMATION_SECONDS m_delay;
```

## <a name="cdiscretetransitionm_hold"></a><a name="m_hold"></a>CDiscreteTransizione::m_hold

Quantità di tempo entro la quale mantenere la variabile al valore finale.

```
UI_ANIMATION_SECONDS m_hold;
```

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
