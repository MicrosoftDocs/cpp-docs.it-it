---
description: 'Altre informazioni su: classe CParabolicTransitionFromAcceleration'
title: Classe CParabolicTransitionFromAcceleration
ms.date: 11/04/2016
f1_keywords:
- CParabolicTransitionFromAcceleration
- AFXANIMATIONCONTROLLER/CParabolicTransitionFromAcceleration
- AFXANIMATIONCONTROLLER/CParabolicTransitionFromAcceleration::CParabolicTransitionFromAcceleration
- AFXANIMATIONCONTROLLER/CParabolicTransitionFromAcceleration::Create
- AFXANIMATIONCONTROLLER/CParabolicTransitionFromAcceleration::m_dblAcceleration
- AFXANIMATIONCONTROLLER/CParabolicTransitionFromAcceleration::m_dblFinalValue
- AFXANIMATIONCONTROLLER/CParabolicTransitionFromAcceleration::m_dblFinalVelocity
helpviewer_keywords:
- CParabolicTransitionFromAcceleration [MFC], CParabolicTransitionFromAcceleration
- CParabolicTransitionFromAcceleration [MFC], Create
- CParabolicTransitionFromAcceleration [MFC], m_dblAcceleration
- CParabolicTransitionFromAcceleration [MFC], m_dblFinalValue
- CParabolicTransitionFromAcceleration [MFC], m_dblFinalVelocity
ms.assetid: 1e59b86f-358b-4da0-a4fd-8eaf5e85e00f
ms.openlocfilehash: 037c2ff8391b655c556339547966b14ee094fee0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97301490"
---
# <a name="cparabolictransitionfromacceleration-class"></a>Classe CParabolicTransitionFromAcceleration

Incapsula una transizione di accelerazione parabolica.

## <a name="syntax"></a>Sintassi

```
class CParabolicTransitionFromAcceleration : public CBaseTransition;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CParabolicTransitionFromAcceleration:: CParabolicTransitionFromAcceleration](#cparabolictransitionfromacceleration)|Costruisce una transizione di accelerazione parabolica e la inizializza con i parametri specificati.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CParabolicTransitionFromAcceleration:: create](#create)|Chiama la libreria di transizione per creare l'oggetto COM di transizione incapsulato. Esegue l'override di [CBaseTransition:: create](../../mfc/reference/cbasetransition-class.md#create).|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CParabolicTransitionFromAcceleration:: m_dblAcceleration](#m_dblacceleration)|Accelerazione della variabile di animazione durante la transizione.|
|[CParabolicTransitionFromAcceleration:: m_dblFinalValue](#m_dblfinalvalue)|Valore della variabile di animazione alla fine della transizione.|
|[CParabolicTransitionFromAcceleration:: m_dblFinalVelocity](#m_dblfinalvelocity)|Velocità della variabile di animazione alla fine della transizione.|

## <a name="remarks"></a>Commenti

Durante una transizione con accelerazione parabolica, il valore della variabile di animazione viene modificato dal valore iniziale al valore finale che termina a una velocità specificata. È possibile controllare la velocità con cui la variabile raggiunge il valore finale specificando la frequenza di accelerazione. Poiché tutte le transizioni vengono cancellate automaticamente, è consigliabile allocarle usando operator new. L'oggetto COM IUIAnimationTransition incapsulato viene creato da CAnimationController:: AnimateGroup, fino a quando non è NULL. La modifica delle variabili membro dopo la creazione di questo oggetto COM non ha alcun effetto.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CBaseTransition](../../mfc/reference/cbasetransition-class.md)

[CParabolicTransitionFromAcceleration](../../mfc/reference/cparabolictransitionfromacceleration-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

## <a name="cparabolictransitionfromaccelerationcparabolictransitionfromacceleration"></a><a name="cparabolictransitionfromacceleration"></a> CParabolicTransitionFromAcceleration:: CParabolicTransitionFromAcceleration

Costruisce una transizione di accelerazione parabolica e la inizializza con i parametri specificati.

```
CParabolicTransitionFromAcceleration(
    DOUBLE dblFinalValue,
    DOUBLE dblFinalVelocity,
    DOUBLE dblAcceleration);
```

### <a name="parameters"></a>Parametri

*dblFinalValue*<br/>
Valore della variabile di animazione alla fine della transizione.

*dblFinalVelocity*<br/>
Velocità della variabile di animazione alla fine della transizione.

*dblAcceleration*<br/>
Accelerazione della variabile di animazione durante la transizione.

## <a name="cparabolictransitionfromaccelerationcreate"></a><a name="create"></a> CParabolicTransitionFromAcceleration:: create

Chiama la libreria di transizione per creare l'oggetto COM di transizione incapsulato.

```
virtual BOOL Create(
    IUIAnimationTransitionLibrary* pLibrary,
    IUIAnimationTransitionFactory* /* not used */);
```

### <a name="parameters"></a>Parametri

*pLibrary*<br/>
Puntatore alla libreria di transizione, responsabile della creazione di transizioni standard.

### <a name="return-value"></a>Valore restituito

TRUE se la transizione viene creata correttamente; in caso contrario, FALSE.

## <a name="cparabolictransitionfromaccelerationm_dblacceleration"></a><a name="m_dblacceleration"></a> CParabolicTransitionFromAcceleration:: m_dblAcceleration

Accelerazione della variabile di animazione durante la transizione.

```
DOUBLE m_dblAcceleration;
```

## <a name="cparabolictransitionfromaccelerationm_dblfinalvalue"></a><a name="m_dblfinalvalue"></a> CParabolicTransitionFromAcceleration:: m_dblFinalValue

Valore della variabile di animazione alla fine della transizione.

```
DOUBLE m_dblFinalValue;
```

## <a name="cparabolictransitionfromaccelerationm_dblfinalvelocity"></a><a name="m_dblfinalvelocity"></a> CParabolicTransitionFromAcceleration:: m_dblFinalVelocity

Velocità della variabile di animazione alla fine della transizione.

```
DOUBLE m_dblFinalVelocity;
```

## <a name="see-also"></a>Vedi anche

[Classi](../../mfc/reference/mfc-classes.md)
