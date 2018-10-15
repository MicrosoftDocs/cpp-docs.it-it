---
title: Classe CAccelerateDecelerateTransition | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CAccelerateDecelerateTransition
- afxanimationcontroller/CAccelerateDecelerateTransition
dev_langs:
- C++
helpviewer_keywords:
- CAccelerateDecelerateTransition class [MFC]
ms.assetid: b1f31ee8-bb11-4ccc-b124-365fb02b025c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b0133a24b5253baa4d7292cc54d02df5201abd63
ms.sourcegitcommit: 3f4e92266737ecb70507871e87dc8e2965ad7e04
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/15/2018
ms.locfileid: "49334596"
---
# <a name="cacceleratedeceleratetransition-class"></a>Classe CAccelerateDecelerateTransition

Implementa una transizione di accelerazione-decelerazione.

## <a name="syntax"></a>Sintassi

```
class CAccelerateDecelerateTransition : public CBaseTransition;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAccelerateDecelerateTransition::CAccelerateDecelerateTransition](#cacceleratedeceleratetransition)|Costruisce un oggetto di transizione.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAccelerateDecelerateTransition::Create](#create)|Chiama la libreria di transizione per creare oggetti COM di transizione incapsulato. (Esegue l'override [CBaseTransition:: Create](../../mfc/reference/cbasetransition-class.md#create).)|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAccelerateDecelerateTransition::m_accelerationRatio](#m_accelerationratio)|Il rapporto tra il tempo trascorsa accelerando alla durata.|
|[CAccelerateDecelerateTransition::m_decelerationRatio](#m_decelerationratio)|Il rapporto tra il tempo trascorsa decelerando alla durata.|
|[CAccelerateDecelerateTransition::m_duration](#m_duration)|La durata della transizione.|
|[CAccelerateDecelerateTransition::m_finalValue](#m_finalvalue)|Il valore della variabile di animazione al termine della transizione.|

## <a name="remarks"></a>Note

Durante un'accelerazione-decelerare transizione, la variabile di animazione di velocizzare e rallenta la durata della transizione, termina con un valore specificato. È possibile controllare rapidità con cui la variabile accelera e rallenta in modo indipendente, specificando l'accelerazione diversi e rapporti decelerazione. Quando la velocità iniziale è zero, il rapporto tra l'accelerazione è la frazione della durata variabile dedicheranno accelerando; lo stesso vale per il rapporto tra la decelerazione. Se la velocità iniziale è diverso da zero, è la frazione del tempo tra la velocità che raggiunge zero e la fine della transizione. Il rapporto di accelerazione e il rapporto decelerazione somma deve restituire un massimo pari a 1,0. Poiché tutte le transizioni vengono cancellate automaticamente, è consigliabile allocata li utilizzando l'operatore new. L'oggetto incapsulato IUIAnimationTransition COM viene creato da CAnimationController:: AnimateGroup, finché non è NULL. Per modificare le variabili membro dopo la creazione di questo oggetto COM non ha alcun effetto.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CBaseTransition](../../mfc/reference/cbasetransition-class.md)

`CAccelerateDecelerateTransition`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

##  <a name="cacceleratedeceleratetransition"></a>  CAccelerateDecelerateTransition::CAccelerateDecelerateTransition

Costruisce un oggetto di transizione.

```
CAccelerateDecelerateTransition(
    UI_ANIMATION_SECONDS duration,
    DOUBLE finalValue,
    DOUBLE accelerationRatio = 0.3,
    DOUBLE decelerationRatio = 0.3);
```

### <a name="parameters"></a>Parametri

*Durata*<br/>
La durata della transizione.

*finalValue*<br/>
Il valore della variabile di animazione al termine della transizione.

*accelerationRatio*<br/>
Il rapporto tra il tempo trascorsa accelerando alla durata.

*decelerationRatio*<br/>
Il rapporto tra il tempo trascorsa decelerando alla durata.

##  <a name="create"></a>  CAccelerateDecelerateTransition::Create

Chiama la libreria di transizione per creare oggetti COM di transizione incapsulato.

```
virtual BOOL Create(
    IUIAnimationTransitionLibrary* pLibrary,
    IUIAnimationTransitionFactory* *\not used*\);
```

### <a name="parameters"></a>Parametri

*pLibrary*<br/>
Un puntatore a un [IUIAnimationTransitionLibrary interfaccia](/windows/desktop/api/uianimation/nn-uianimation-iuianimationtransitionlibrary), che definisce una raccolta di transizioni standard.

### <a name="return-value"></a>Valore restituito

TRUE se transizione viene creata correttamente. in caso contrario, FALSE.

##  <a name="m_accelerationratio"></a>  CAccelerateDecelerateTransition::m_accelerationRatio

Il rapporto tra il tempo trascorsa accelerando alla durata.

```
DOUBLE m_accelerationRatio;
```

##  <a name="m_decelerationratio"></a>  CAccelerateDecelerateTransition::m_decelerationRatio

Il rapporto tra il tempo trascorsa decelerando alla durata.

```
DOUBLE m_decelerationRatio;
```

##  <a name="m_duration"></a>  CAccelerateDecelerateTransition::m_duration

La durata della transizione.

```
UI_ANIMATION_SECONDS m_duration;
```

##  <a name="m_finalvalue"></a>  CAccelerateDecelerateTransition::m_finalValue

Il valore della variabile di animazione al termine della transizione.

```
DOUBLE m_finalValue;
```

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
