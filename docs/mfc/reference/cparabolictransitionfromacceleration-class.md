---
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
ms.openlocfilehash: 3d4a073a0fd74f7564d9183779acfd66b41a9540
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62372972"
---
# <a name="cparabolictransitionfromacceleration-class"></a>Classe CParabolicTransitionFromAcceleration

Incapsula una transizione di accelerazione parabolica.

## <a name="syntax"></a>Sintassi

```
class CParabolicTransitionFromAcceleration : public CBaseTransition;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CParabolicTransitionFromAcceleration::CParabolicTransitionFromAcceleration](#cparabolictransitionfromacceleration)|Costruisce una transizione di accelerazione parabolica e la inizializza con i parametri specificati.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CParabolicTransitionFromAcceleration::Create](#create)|Chiama la libreria di transizione per creare oggetti COM di transizione incapsulato. (Esegue l'override [CBaseTransition:: Create](../../mfc/reference/cbasetransition-class.md#create).)|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CParabolicTransitionFromAcceleration::m_dblAcceleration](#m_dblacceleration)|L'accelerazione della variabile di animazione durante la transizione.|
|[CParabolicTransitionFromAcceleration::m_dblFinalValue](#m_dblfinalvalue)|Il valore della variabile di animazione al termine della transizione.|
|[CParabolicTransitionFromAcceleration::m_dblFinalVelocity](#m_dblfinalvelocity)|La velocità della variabile di animazione al termine della transizione.|

## <a name="remarks"></a>Note

Durante una transizione di accelerazione parabolica, cambia il valore della variabile di animazione dal valore iniziale per il valore finale termina con una velocità specificata. È possibile controllare rapidità con cui la variabile raggiunge il valore finale, specificando la frequenza dell'accelerazione. Poiché tutte le transizioni vengono cancellate automaticamente, è consigliabile allocata li utilizzando l'operatore new. L'oggetto incapsulato IUIAnimationTransition COM viene creato da CAnimationController:: AnimateGroup, finché non è NULL. Per modificare le variabili membro dopo la creazione di questo oggetto COM non ha alcun effetto.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CBaseTransition](../../mfc/reference/cbasetransition-class.md)

[CParabolicTransitionFromAcceleration](../../mfc/reference/cparabolictransitionfromacceleration-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

##  <a name="cparabolictransitionfromacceleration"></a>  CParabolicTransitionFromAcceleration::CParabolicTransitionFromAcceleration

Costruisce una transizione di accelerazione parabolica e la inizializza con i parametri specificati.

```
CParabolicTransitionFromAcceleration(
    DOUBLE dblFinalValue,
    DOUBLE dblFinalVelocity,
    DOUBLE dblAcceleration);
```

### <a name="parameters"></a>Parametri

*dblFinalValue*<br/>
Il valore della variabile di animazione al termine della transizione.

*dblFinalVelocity*<br/>
La velocità della variabile di animazione al termine della transizione.

*dblAcceleration*<br/>
L'accelerazione della variabile di animazione durante la transizione.

##  <a name="create"></a>  CParabolicTransitionFromAcceleration::Create

Chiama la libreria di transizione per creare oggetti COM di transizione incapsulato.

```
virtual BOOL Create(
    IUIAnimationTransitionLibrary* pLibrary,
    IUIAnimationTransitionFactory* /* not used */);
```

### <a name="parameters"></a>Parametri

*pLibrary*<br/>
Puntatore alla raccolta di transizione, che è responsabile per la creazione di transizioni standard.

### <a name="return-value"></a>Valore restituito

TRUE se transizione viene creata correttamente. in caso contrario, FALSE.

##  <a name="m_dblacceleration"></a>  CParabolicTransitionFromAcceleration::m_dblAcceleration

L'accelerazione della variabile di animazione durante la transizione.

```
DOUBLE m_dblAcceleration;
```

##  <a name="m_dblfinalvalue"></a>  CParabolicTransitionFromAcceleration::m_dblFinalValue

Il valore della variabile di animazione al termine della transizione.

```
DOUBLE m_dblFinalValue;
```

##  <a name="m_dblfinalvelocity"></a>  CParabolicTransitionFromAcceleration::m_dblFinalVelocity

La velocità della variabile di animazione al termine della transizione.

```
DOUBLE m_dblFinalVelocity;
```

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
