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
ms.openlocfilehash: 6092e805516d242daf6149615a8ef72df334dfd5
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50656703"
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
|[CDiscreteTransition::CDiscreteTransition](#cdiscretetransition)|Costruisce un oggetto di transizione discreta e la inizializza i relativi parametri.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDiscreteTransition::Create](#create)|Chiama la libreria di transizione per creare oggetti COM di transizione incapsulato. (Esegue l'override [CBaseTransition:: Create](../../mfc/reference/cbasetransition-class.md#create).)|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDiscreteTransition::m_dblFinalValue](#m_dblfinalvalue)|Il valore della variabile di animazione al termine della transizione.|
|[CDiscreteTransition::m_delay](#m_delay)|La quantità di tempo per cui ritardare il commutatore istantaneo sul valore finale.|
|[CDiscreteTransition::m_hold](#m_hold)|La quantità di tempo durante il quale contenere la variabile sul valore finale.|

## <a name="remarks"></a>Note

Durante una transizione discreta, la variabile di animazione rimane il valore iniziale per un periodo di tempo specificato, quindi passa immediatamente a un valore finale specificato e mantiene tale valore per un determinato tempo di attesa. Poiché tutte le transizioni vengono cancellate automaticamente, è consigliabile allocata li utilizzando l'operatore new. L'oggetto incapsulato IUIAnimationTransition COM viene creato da CAnimationController:: AnimateGroup, finché non è NULL. Per modificare le variabili membro dopo la creazione di questo oggetto COM non ha alcun effetto.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CBaseTransition](../../mfc/reference/cbasetransition-class.md)

[CDiscreteTransition](../../mfc/reference/cdiscretetransition-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

##  <a name="cdiscretetransition"></a>  CDiscreteTransition::CDiscreteTransition

Costruisce un oggetto di transizione discreta e la inizializza i relativi parametri.

```
CDiscreteTransition(
    UI_ANIMATION_SECONDS delay,
    DOUBLE dblFinalValue,
    UI_ANIMATION_SECONDS hold);
```

### <a name="parameters"></a>Parametri

*Ritardo*<br/>
La quantità di tempo per cui ritardare il commutatore istantaneo sul valore finale.

*dblFinalValue*<br/>
Il valore della variabile di animazione al termine della transizione.

*tenere premuto*<br/>
La quantità di tempo durante il quale contenere la variabile sul valore finale.

##  <a name="create"></a>  CDiscreteTransition::Create

Chiama la libreria di transizione per creare oggetti COM di transizione incapsulato.

```
virtual BOOL Create(
    IUIAnimationTransitionLibrary* pLibrary,
    IUIAnimationTransitionFactory* \*not used*\);
```

*pLibrary*<br/>
Un puntatore a un [IUIAnimationTransitionLibrary interfaccia](/windows/desktop/api/uianimation/nn-uianimation-iuianimationtransitionlibrary), che definisce una raccolta di transizioni standard.

### <a name="return-value"></a>Valore restituito

TRUE se transizione viene creata correttamente. in caso contrario, FALSE.

##  <a name="m_dblfinalvalue"></a>  CDiscreteTransition::m_dblFinalValue

Il valore della variabile di animazione al termine della transizione.

```
DOUBLE m_dblFinalValue;
```

##  <a name="m_delay"></a>  CDiscreteTransition::m_delay

La quantità di tempo per cui ritardare il commutatore istantaneo sul valore finale.

```
UI_ANIMATION_SECONDS m_delay;
```

##  <a name="m_hold"></a>  CDiscreteTransition::m_hold

La quantità di tempo durante il quale contenere la variabile sul valore finale.

```
UI_ANIMATION_SECONDS m_hold;
```

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
