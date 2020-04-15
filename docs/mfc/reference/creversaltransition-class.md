---
title: Classe CReversalTransition
ms.date: 11/04/2016
f1_keywords:
- CReversalTransition
- AFXANIMATIONCONTROLLER/CReversalTransition
- AFXANIMATIONCONTROLLER/CReversalTransition::CReversalTransition
- AFXANIMATIONCONTROLLER/CReversalTransition::Create
- AFXANIMATIONCONTROLLER/CReversalTransition::m_duration
helpviewer_keywords:
- CReversalTransition [MFC], CReversalTransition
- CReversalTransition [MFC], Create
- CReversalTransition [MFC], m_duration
ms.assetid: e89516be-2d07-4885-95a8-fc278f46e3ad
ms.openlocfilehash: 73d12fb6bbaefcfac1437248ebe11f3a5c24c45b
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81368309"
---
# <a name="creversaltransition-class"></a>Classe CReversalTransition

Incapsula una transizione di inversione.

## <a name="syntax"></a>Sintassi

```
class CReversalTransition : public CBaseTransition;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CReversalTransition::CReversalTransition](#creversaltransition)|Costruisce un oggetto di transizione di inversione e ne inizializza la durata.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CReversalTransition::Create](#create)|Chiama la libreria di transizione per creare un oggetto COM di transizione incapsulato. (Esegue l'override di [CBaseTransition::Create](../../mfc/reference/cbasetransition-class.md#create).)|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CReversalTransition::m_duration](#m_duration)|Durata della transizione.|

## <a name="remarks"></a>Osservazioni

Una transizione di inversione cambia uniformemente direzione per una determinata durata. Il valore finale sarà lo stesso del valore iniziale e la velocità finale sarà il negativo della velocità iniziale. Poiché tutte le transizioni vengono cancellate automaticamente, si consiglia di allocare le autorizzazioni utilizzando operator new. L'oggetto COM IUIAnimationTransition incapsulato viene creato da CAnimationController::AnimateGroup, fino a quel momento è NULL. La modifica delle variabili membro dopo la creazione di questo oggetto COM non ha alcun effetto.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CBaseTransition (Transizione di Base](../../mfc/reference/cbasetransition-class.md)

[CReversalTransition](../../mfc/reference/creversaltransition-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

## <a name="creversaltransitioncreate"></a><a name="create"></a>CReversalTransition::Create

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

## <a name="creversaltransitioncreversaltransition"></a><a name="creversaltransition"></a>CReversalTransition::CReversalTransition

Costruisce un oggetto di transizione di inversione e ne inizializza la durata.

```
CReversalTransition(UI_ANIMATION_SECONDS duration);
```

### <a name="parameters"></a>Parametri

*Durata*<br/>
Durata della transizione.

## <a name="creversaltransitionm_duration"></a><a name="m_duration"></a>CReversalTransition::m_duration

Durata della transizione.

```
UI_ANIMATION_SECONDS m_duration;
```

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
