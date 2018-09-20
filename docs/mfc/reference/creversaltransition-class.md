---
title: Classe CReversalTransition | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CReversalTransition
- AFXANIMATIONCONTROLLER/CReversalTransition
- AFXANIMATIONCONTROLLER/CReversalTransition::CReversalTransition
- AFXANIMATIONCONTROLLER/CReversalTransition::Create
- AFXANIMATIONCONTROLLER/CReversalTransition::m_duration
dev_langs:
- C++
helpviewer_keywords:
- CReversalTransition [MFC], CReversalTransition
- CReversalTransition [MFC], Create
- CReversalTransition [MFC], m_duration
ms.assetid: e89516be-2d07-4885-95a8-fc278f46e3ad
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 393c0ed7c9d1c5715528468e0c611ae399fbadf6
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46431502"
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
|[CReversalTransition::CReversalTransition](#creversaltransition)|Costruisce un oggetto di transizione di inversione e inizializza la sua durata.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CReversalTransition::Create](#create)|Chiama la libreria di transizione per creare oggetti COM di transizione incapsulato. (Esegue l'override [CBaseTransition:: Create](../../mfc/reference/cbasetransition-class.md#create).)|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CReversalTransition::m_duration](#m_duration)|La durata della transizione.|

## <a name="remarks"></a>Note

Una transizione di inversione cambia facilmente la direzione per una durata specificata. Il valore finale sarà quello utilizzato per il valore iniziale e la velocità finale sarà il corrispondente negativo del velocità iniziale. Poiché tutte le transizioni vengono cancellate automaticamente, è consigliabile allocata li utilizzando l'operatore new. L'oggetto incapsulato IUIAnimationTransition COM viene creato da CAnimationController:: AnimateGroup, finché non è NULL. Per modificare le variabili membro dopo la creazione di questo oggetto COM non ha alcun effetto.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CBaseTransition](../../mfc/reference/cbasetransition-class.md)

[CReversalTransition](../../mfc/reference/creversaltransition-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

##  <a name="create"></a>  CReversalTransition::Create

Chiama la libreria di transizione per creare oggetti COM di transizione incapsulato.

```
virtual BOOL Create(
    IUIAnimationTransitionLibrary* pLibrary,
    IUIAnimationTransitionFactory* \*not used*\);
```

### <a name="parameters"></a>Parametri

*pLibrary*<br/>
Puntatore alla raccolta di transizione, che è responsabile per la creazione di transizioni standard.

### <a name="return-value"></a>Valore restituito

TRUE se transizione viene creata correttamente. in caso contrario, FALSE.

##  <a name="creversaltransition"></a>  CReversalTransition::CReversalTransition

Costruisce un oggetto di transizione di inversione e inizializza la sua durata.

```
CReversalTransition(UI_ANIMATION_SECONDS duration);
```

### <a name="parameters"></a>Parametri

*Durata*<br/>
La durata della transizione.

##  <a name="m_duration"></a>  CReversalTransition::m_duration

La durata della transizione.

```
UI_ANIMATION_SECONDS m_duration;
```

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
