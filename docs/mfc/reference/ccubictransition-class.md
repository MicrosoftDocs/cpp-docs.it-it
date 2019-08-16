---
title: Classe CCubicTransition
ms.date: 11/04/2016
f1_keywords:
- CCubicTransition
- AFXANIMATIONCONTROLLER/CCubicTransition
- AFXANIMATIONCONTROLLER/CCubicTransition::CCubicTransition
- AFXANIMATIONCONTROLLER/CCubicTransition::Create
- AFXANIMATIONCONTROLLER/CCubicTransition::m_dblFinalValue
- AFXANIMATIONCONTROLLER/CCubicTransition::m_dblFinalVelocity
- AFXANIMATIONCONTROLLER/CCubicTransition::m_duration
helpviewer_keywords:
- CCubicTransition [MFC], CCubicTransition
- CCubicTransition [MFC], Create
- CCubicTransition [MFC], m_dblFinalValue
- CCubicTransition [MFC], m_dblFinalVelocity
- CCubicTransition [MFC], m_duration
ms.assetid: 4fc30e9c-160c-45e1-bdbe-51adf8fee9c5
ms.openlocfilehash: b6bb626f944ce87748809a5eb03a6f06f92c3de5
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69507132"
---
# <a name="ccubictransition-class"></a>Classe CCubicTransition

Incapsula una transizione cubica.

## <a name="syntax"></a>Sintassi

```
class CCubicTransition : public CBaseTransition;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[CCubicTransition::CCubicTransition](#ccubictransition)|Costruisce un oggetto di transizione e ne inizializza i parametri.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CCubicTransition::Create](#create)|Chiama la libreria di transizione per creare l'oggetto COM di transizione incapsulato. Esegue l'override di [CBaseTransition:: create](../../mfc/reference/cbasetransition-class.md#create).|

### <a name="public-data-members"></a>Membri dati pubblici

|NOME|Descrizione|
|----------|-----------------|
|[CCubicTransition::m_dblFinalValue](#m_dblfinalvalue)|Valore della variabile di animazione alla fine della transizione.|
|[CCubicTransition::m_dblFinalVelocity](#m_dblfinalvelocity)|Velocità della variabile alla fine della transizione.|
|[CCubicTransition::m_duration](#m_duration)|Durata della transizione.|

## <a name="remarks"></a>Note

Durante una transizione cubica, il valore della variabile di animazione passa dal valore iniziale a un valore finale specificato per la durata della transizione, terminando a una velocità specificata. Poiché tutte le transizioni vengono cancellate automaticamente, è consigliabile allocarle usando operator new. L'oggetto COM IUIAnimationTransition incapsulato viene creato da CAnimationController:: AnimateGroup, fino a quando non è NULL. La modifica delle variabili membro dopo la creazione di questo oggetto COM non ha alcun effetto.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CBaseTransition](../../mfc/reference/cbasetransition-class.md)

`CCubicTransition`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

##  <a name="ccubictransition"></a>CCubicTransition:: CCubicTransition

Costruisce un oggetto di transizione e ne inizializza i parametri.

```
CCubicTransition(
    UI_ANIMATION_SECONDS duration,
    DOUBLE finalValue,
    DOUBLE finalVelocity);
```

### <a name="parameters"></a>Parametri

*durata*<br/>
Durata della transizione.

*finalValue*<br/>
Valore della variabile di animazione alla fine della transizione.

*finalVelocity*<br/>
Velocità della variabile alla fine della transizione.

##  <a name="create"></a>CCubicTransition:: create

Chiama la libreria di transizione per creare l'oggetto COM di transizione incapsulato.

```
virtual BOOL Create(
    IUIAnimationTransitionLibrary* pLibrary,
    IUIAnimationTransitionFactory* \*not used*\);
```

### <a name="parameters"></a>Parametri

*pLibrary*<br/>
Puntatore a un' [interfaccia IUIAnimationTransitionLibrary](/windows/win32/api/uianimation/nn-uianimation-iuianimationtransitionlibrary), che definisce una libreria di transizioni standard.

### <a name="return-value"></a>Valore restituito

TRUE se la transizione viene creata correttamente; in caso contrario, FALSE.

##  <a name="m_dblfinalvalue"></a>  CCubicTransition::m_dblFinalValue

Valore della variabile di animazione alla fine della transizione.

```
DOUBLE m_dblFinalValue;
```

##  <a name="m_dblfinalvelocity"></a>  CCubicTransition::m_dblFinalVelocity

Velocità della variabile alla fine della transizione.

```
DOUBLE m_dblFinalVelocity;
```

##  <a name="m_duration"></a>CCubicTransition:: m_duration

Durata della transizione.

```
UI_ANIMATION_SECONDS m_duration;
```

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
