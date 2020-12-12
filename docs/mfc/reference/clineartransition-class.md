---
description: 'Altre informazioni su: classe CLinearTransition'
title: Classe CLinearTransition
ms.date: 11/04/2016
f1_keywords:
- CLinearTransition
- AFXANIMATIONCONTROLLER/CLinearTransition
- AFXANIMATIONCONTROLLER/CLinearTransition::CLinearTransition
- AFXANIMATIONCONTROLLER/CLinearTransition::Create
- AFXANIMATIONCONTROLLER/CLinearTransition::m_dblFinalValue
- AFXANIMATIONCONTROLLER/CLinearTransition::m_duration
helpviewer_keywords:
- CLinearTransition [MFC], CLinearTransition
- CLinearTransition [MFC], Create
- CLinearTransition [MFC], m_dblFinalValue
- CLinearTransition [MFC], m_duration
ms.assetid: 7fcb2dba-beb8-4933-9f5d-3b7fb1585ef0
ms.openlocfilehash: bff8d580bb07de14583f02c592fceaefa5c3523a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97236776"
---
# <a name="clineartransition-class"></a>Classe CLinearTransition

Incapsula una transizione lineare.

## <a name="syntax"></a>Sintassi

```
class CLinearTransition : public CBaseTransition;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CLinearTransition:: CLinearTransition](#clineartransition)|Costruisce un oggetto di transizione lineare e lo inizializza con la durata e il valore finale.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CLinearTransition:: create](#create)|Chiama la libreria di transizione per creare l'oggetto COM di transizione incapsulato. Esegue l'override di [CBaseTransition:: create](../../mfc/reference/cbasetransition-class.md#create).|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CLinearTransition:: m_dblFinalValue](#m_dblfinalvalue)|Valore della variabile di animazione alla fine della transizione.|
|[CLinearTransition:: m_duration](#m_duration)|Durata della transizione.|

## <a name="remarks"></a>Commenti

Durante una transizione lineare, il valore della variabile di animazione esegue una transizione lineare dal valore iniziale a un valore finale specificato. Poiché tutte le transizioni vengono cancellate automaticamente, è consigliabile allocarle usando operator new. L'oggetto COM IUIAnimationTransition incapsulato viene creato da CAnimationController:: AnimateGroup, fino a quando non è NULL. La modifica delle variabili membro dopo la creazione di questo oggetto COM non ha alcun effetto.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CBaseTransition](../../mfc/reference/cbasetransition-class.md)

[CLinearTransition](../../mfc/reference/clineartransition-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

## <a name="clineartransitionclineartransition"></a><a name="clineartransition"></a> CLinearTransition:: CLinearTransition

Costruisce un oggetto di transizione lineare e lo inizializza con la durata e il valore finale.

```
CLinearTransition(
    UI_ANIMATION_SECONDS duration,
    DOUBLE dblFinalValue);
```

### <a name="parameters"></a>Parametri

*duration*<br/>
Durata della transizione.

*dblFinalValue*<br/>
Valore della variabile di animazione alla fine della transizione.

## <a name="clineartransitioncreate"></a><a name="create"></a> CLinearTransition:: create

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

## <a name="clineartransitionm_dblfinalvalue"></a><a name="m_dblfinalvalue"></a> CLinearTransition:: m_dblFinalValue

Valore della variabile di animazione alla fine della transizione.

```
DOUBLE m_dblFinalValue;
```

## <a name="clineartransitionm_duration"></a><a name="m_duration"></a> CLinearTransition:: m_duration

Durata della transizione.

```
UI_ANIMATION_SECONDS m_duration;
```

## <a name="see-also"></a>Vedi anche

[Classi](../../mfc/reference/mfc-classes.md)
