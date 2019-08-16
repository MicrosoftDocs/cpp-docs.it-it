---
title: Classe CAccelerateDecelerateTransition
ms.date: 11/04/2016
f1_keywords:
- CAccelerateDecelerateTransition
- afxanimationcontroller/CAccelerateDecelerateTransition
helpviewer_keywords:
- CAccelerateDecelerateTransition class [MFC]
ms.assetid: b1f31ee8-bb11-4ccc-b124-365fb02b025c
ms.openlocfilehash: 1e55e81b4d9b5c324f86bfd141b74d9faa362d94
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69507746"
---
# <a name="cacceleratedeceleratetransition-class"></a>Classe CAccelerateDecelerateTransition

Implementa una transizione di accelerazione-decelerazione.

## <a name="syntax"></a>Sintassi

```
class CAccelerateDecelerateTransition : public CBaseTransition;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAccelerateDecelerateTransition::CAccelerateDecelerateTransition](#cacceleratedeceleratetransition)|Costruisce un oggetto di transizione.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAccelerateDecelerateTransition::Create](#create)|Chiama la libreria di transizione per creare l'oggetto COM di transizione incapsulato. Esegue l'override di [CBaseTransition:: create](../../mfc/reference/cbasetransition-class.md#create).|

### <a name="public-data-members"></a>Membri dati pubblici

|NOME|Descrizione|
|----------|-----------------|
|[CAccelerateDecelerateTransition::m_accelerationRatio](#m_accelerationratio)|Rapporto del tempo impiegato per accelerare la durata.|
|[CAccelerateDecelerateTransition::m_decelerationRatio](#m_decelerationratio)|Rapporto del tempo impiegato per la decelerazione fino alla durata.|
|[CAccelerateDecelerateTransition::m_duration](#m_duration)|Durata della transizione.|
|[CAccelerateDecelerateTransition::m_finalValue](#m_finalvalue)|Valore della variabile di animazione alla fine della transizione.|

## <a name="remarks"></a>Note

Durante una transizione accelerate-decelerate, la variabile di animazione accelera e rallenta la durata della transizione, terminando con un valore specificato. È possibile controllare la velocità con cui la variabile accelera e decelera in modo indipendente, specificando diversi rapporti di accelerazione e decelerazione. Quando la velocità iniziale è zero, il rapporto di accelerazione è la frazione della durata che la variabile spenderà per accelerare; allo stesso modo con il rapporto di decelerazione. Se la velocità iniziale è diversa da zero, è la frazione del tempo che intercorre tra la velocità che raggiunge lo zero e la fine della transizione. Il rapporto di accelerazione e il rapporto di decelerazione devono essere sommati a un massimo di 1,0. Poiché tutte le transizioni vengono cancellate automaticamente, è consigliabile allocarle usando operator new. L'oggetto COM IUIAnimationTransition incapsulato viene creato da CAnimationController:: AnimateGroup, fino a quando non è NULL. La modifica delle variabili membro dopo la creazione di questo oggetto COM non ha alcun effetto.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CBaseTransition](../../mfc/reference/cbasetransition-class.md)

`CAccelerateDecelerateTransition`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

##  <a name="cacceleratedeceleratetransition"></a>CAccelerateDecelerateTransition::CAccelerateDecelerateTransition

Costruisce un oggetto di transizione.

```
CAccelerateDecelerateTransition(
    UI_ANIMATION_SECONDS duration,
    DOUBLE finalValue,
    DOUBLE accelerationRatio = 0.3,
    DOUBLE decelerationRatio = 0.3);
```

### <a name="parameters"></a>Parametri

*durata*<br/>
Durata della transizione.

*finalValue*<br/>
Valore della variabile di animazione alla fine della transizione.

*accelerationRatio*<br/>
Rapporto del tempo impiegato per accelerare la durata.

*decelerationRatio*<br/>
Rapporto del tempo impiegato per la decelerazione fino alla durata.

##  <a name="create"></a>CAccelerateDecelerateTransition:: create

Chiama la libreria di transizione per creare l'oggetto COM di transizione incapsulato.

```
virtual BOOL Create(
    IUIAnimationTransitionLibrary* pLibrary,
    IUIAnimationTransitionFactory* *\not used*\);
```

### <a name="parameters"></a>Parametri

*pLibrary*<br/>
Puntatore a un' [interfaccia IUIAnimationTransitionLibrary](/windows/win32/api/uianimation/nn-uianimation-iuianimationtransitionlibrary), che definisce una libreria di transizioni standard.

### <a name="return-value"></a>Valore restituito

TRUE se la transizione viene creata correttamente; in caso contrario, FALSE.

##  <a name="m_accelerationratio"></a>  CAccelerateDecelerateTransition::m_accelerationRatio

Rapporto del tempo impiegato per accelerare la durata.

```
DOUBLE m_accelerationRatio;
```

##  <a name="m_decelerationratio"></a>  CAccelerateDecelerateTransition::m_decelerationRatio

Rapporto del tempo impiegato per la decelerazione fino alla durata.

```
DOUBLE m_decelerationRatio;
```

##  <a name="m_duration"></a>  CAccelerateDecelerateTransition::m_duration

Durata della transizione.

```
UI_ANIMATION_SECONDS m_duration;
```

##  <a name="m_finalvalue"></a>  CAccelerateDecelerateTransition::m_finalValue

Valore della variabile di animazione alla fine della transizione.

```
DOUBLE m_finalValue;
```

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
