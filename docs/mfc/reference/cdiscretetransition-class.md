---
description: 'Altre informazioni su: classe CDiscreteTransition'
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
ms.openlocfilehash: 5ab2e2aa8a56236ac0354be088bc72afe5042a76
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97185180"
---
# <a name="cdiscretetransition-class"></a>Classe CDiscreteTransition

Incapsula una transizione discreta.

## <a name="syntax"></a>Sintassi

```
class CDiscreteTransition : public CBaseTransition;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CDiscreteTransition:: CDiscreteTransition](#cdiscretetransition)|Costruisce un oggetto di transizione discreto e ne inizializza i parametri.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CDiscreteTransition:: create](#create)|Chiama la libreria di transizione per creare l'oggetto COM di transizione incapsulato. Esegue l'override di [CBaseTransition:: create](../../mfc/reference/cbasetransition-class.md#create).|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CDiscreteTransition:: m_dblFinalValue](#m_dblfinalvalue)|Valore della variabile di animazione alla fine della transizione.|
|[CDiscreteTransition:: m_delay](#m_delay)|La quantità di tempo in base alla quale ritardare il passaggio istantaneo al valore finale.|
|[CDiscreteTransition:: m_hold](#m_hold)|Quantità di tempo in base alla quale deve essere contenuta la variabile al valore finale.|

## <a name="remarks"></a>Commenti

Durante una transizione discreta, la variabile di animazione rimane in corrispondenza del valore iniziale per un intervallo di tempo specificato, quindi passa immediatamente a un valore finale specificato e rimane in corrispondenza del valore per un determinato tempo di attesa. Poiché tutte le transizioni vengono cancellate automaticamente, è consigliabile allocarle usando operator new. L'oggetto COM IUIAnimationTransition incapsulato viene creato da CAnimationController:: AnimateGroup, fino a quando non è NULL. La modifica delle variabili membro dopo la creazione di questo oggetto COM non ha alcun effetto.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CBaseTransition](../../mfc/reference/cbasetransition-class.md)

[CDiscreteTransition](../../mfc/reference/cdiscretetransition-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

## <a name="cdiscretetransitioncdiscretetransition"></a><a name="cdiscretetransition"></a> CDiscreteTransition:: CDiscreteTransition

Costruisce un oggetto di transizione discreto e ne inizializza i parametri.

```
CDiscreteTransition(
    UI_ANIMATION_SECONDS delay,
    DOUBLE dblFinalValue,
    UI_ANIMATION_SECONDS hold);
```

### <a name="parameters"></a>Parametri

*ritardo*<br/>
La quantità di tempo in base alla quale ritardare il passaggio istantaneo al valore finale.

*dblFinalValue*<br/>
Valore della variabile di animazione alla fine della transizione.

*contenere*<br/>
Quantità di tempo in base alla quale deve essere contenuta la variabile al valore finale.

## <a name="cdiscretetransitioncreate"></a><a name="create"></a> CDiscreteTransition:: create

Chiama la libreria di transizione per creare l'oggetto COM di transizione incapsulato.

```
virtual BOOL Create(
    IUIAnimationTransitionLibrary* pLibrary,
    IUIAnimationTransitionFactory* \*not used*\);
```

*pLibrary*<br/>
Puntatore a un' [interfaccia IUIAnimationTransitionLibrary](/windows/win32/api/uianimation/nn-uianimation-iuianimationtransitionlibrary), che definisce una libreria di transizioni standard.

### <a name="return-value"></a>Valore restituito

TRUE se la transizione viene creata correttamente; in caso contrario, FALSE.

## <a name="cdiscretetransitionm_dblfinalvalue"></a><a name="m_dblfinalvalue"></a> CDiscreteTransition:: m_dblFinalValue

Valore della variabile di animazione alla fine della transizione.

```
DOUBLE m_dblFinalValue;
```

## <a name="cdiscretetransitionm_delay"></a><a name="m_delay"></a> CDiscreteTransition:: m_delay

La quantità di tempo in base alla quale ritardare il passaggio istantaneo al valore finale.

```
UI_ANIMATION_SECONDS m_delay;
```

## <a name="cdiscretetransitionm_hold"></a><a name="m_hold"></a> CDiscreteTransition:: m_hold

Quantità di tempo in base alla quale deve essere contenuta la variabile al valore finale.

```
UI_ANIMATION_SECONDS m_hold;
```

## <a name="see-also"></a>Vedi anche

[Classi](../../mfc/reference/mfc-classes.md)
