---
description: 'Altre informazioni su: classe CReversalTransition'
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
ms.openlocfilehash: f1d16562751e93ccf6df7ca3f70dac08bda8423d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97343007"
---
# <a name="creversaltransition-class"></a>Classe CReversalTransition

Incapsula una transizione di inversione.

## <a name="syntax"></a>Sintassi

```
class CReversalTransition : public CBaseTransition;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CReversalTransition:: CReversalTransition](#creversaltransition)|Costruisce un oggetto di transizione di inversione e ne inizializza la durata.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CReversalTransition:: create](#create)|Chiama la libreria di transizione per creare l'oggetto COM di transizione incapsulato. Esegue l'override di [CBaseTransition:: create](../../mfc/reference/cbasetransition-class.md#create).|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CReversalTransition:: m_duration](#m_duration)|Durata della transizione.|

## <a name="remarks"></a>Commenti

Una transizione di inversione cambia in modo graduale la direzione in una determinata durata. Il valore finale sarà uguale al valore iniziale e la velocità finale sarà il negativo della velocità iniziale. Poiché tutte le transizioni vengono cancellate automaticamente, è consigliabile allocarle usando operator new. L'oggetto COM IUIAnimationTransition incapsulato viene creato da CAnimationController:: AnimateGroup, fino a quando non è NULL. La modifica delle variabili membro dopo la creazione di questo oggetto COM non ha alcun effetto.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CBaseTransition](../../mfc/reference/cbasetransition-class.md)

[CReversalTransition](../../mfc/reference/creversaltransition-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

## <a name="creversaltransitioncreate"></a><a name="create"></a> CReversalTransition:: create

Chiama la libreria di transizione per creare l'oggetto COM di transizione incapsulato.

```
virtual BOOL Create(
    IUIAnimationTransitionLibrary* pLibrary,
    IUIAnimationTransitionFactory* \*not used*\);
```

### <a name="parameters"></a>Parametri

*pLibrary*<br/>
Puntatore alla libreria di transizione, responsabile della creazione di transizioni standard.

### <a name="return-value"></a>Valore restituito

TRUE se la transizione viene creata correttamente; in caso contrario, FALSE.

## <a name="creversaltransitioncreversaltransition"></a><a name="creversaltransition"></a> CReversalTransition:: CReversalTransition

Costruisce un oggetto di transizione di inversione e ne inizializza la durata.

```
CReversalTransition(UI_ANIMATION_SECONDS duration);
```

### <a name="parameters"></a>Parametri

*duration*<br/>
Durata della transizione.

## <a name="creversaltransitionm_duration"></a><a name="m_duration"></a> CReversalTransition:: m_duration

Durata della transizione.

```
UI_ANIMATION_SECONDS m_duration;
```

## <a name="see-also"></a>Vedi anche

[Classi](../../mfc/reference/mfc-classes.md)
