---
description: 'Altre informazioni su: Classe CSinusoidalTransitionFromRange'
title: Classe CSinusoidalTransitionFromRange
ms.date: 11/04/2016
f1_keywords:
- CSinusoidalTransitionFromRange
- AFXANIMATIONCONTROLLER/CSinusoidalTransitionFromRange
- AFXANIMATIONCONTROLLER/CSinusoidalTransitionFromRange::CSinusoidalTransitionFromRange
- AFXANIMATIONCONTROLLER/CSinusoidalTransitionFromRange::Create
- AFXANIMATIONCONTROLLER/CSinusoidalTransitionFromRange::m_dblMaximumValue
- AFXANIMATIONCONTROLLER/CSinusoidalTransitionFromRange::m_dblMinimumValue
- AFXANIMATIONCONTROLLER/CSinusoidalTransitionFromRange::m_duration
- AFXANIMATIONCONTROLLER/CSinusoidalTransitionFromRange::m_period
- AFXANIMATIONCONTROLLER/CSinusoidalTransitionFromRange::m_slope
helpviewer_keywords:
- CSinusoidalTransitionFromRange [MFC], CSinusoidalTransitionFromRange
- CSinusoidalTransitionFromRange [MFC], Create
- CSinusoidalTransitionFromRange [MFC], m_dblMaximumValue
- CSinusoidalTransitionFromRange [MFC], m_dblMinimumValue
- CSinusoidalTransitionFromRange [MFC], m_duration
- CSinusoidalTransitionFromRange [MFC], m_period
- CSinusoidalTransitionFromRange [MFC], m_slope
ms.assetid: 8b66a729-5f10-431a-b055-e3600d0065da
ms.openlocfilehash: 5d00b1cbfb8fe9b76a5a69bd1c9f10316ddf8141
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97264570"
---
# <a name="csinusoidaltransitionfromrange-class"></a>Classe CSinusoidalTransitionFromRange

Incapsula una transizione a intervalli sinusoidali con un determinato intervallo di oscillazione.

## <a name="syntax"></a>Sintassi

```
class CSinusoidalTransitionFromRange : public CBaseTransition;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CSinusoidalTransitionFromRange:: CSinusoidalTransitionFromRange](#csinusoidaltransitionfromrange)|Costruisce un oggetto di transizione.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CSinusoidalTransitionFromRange:: create](#create)|Chiama la libreria di transizione per creare l'oggetto COM di transizione incapsulato. Esegue l'override di [CBaseTransition:: create](../../mfc/reference/cbasetransition-class.md#create).|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CSinusoidalTransitionFromRange:: m_dblMaximumValue](#m_dblmaximumvalue)|Valore della variabile di animazione al picco dell'onda sinusoidale.|
|[CSinusoidalTransitionFromRange:: m_dblMinimumValue](#m_dblminimumvalue)|Valore della variabile di animazione in un trogolo dell'onda sinusoidale.|
|[CSinusoidalTransitionFromRange:: m_duration](#m_duration)|Durata della transizione.|
|[CSinusoidalTransitionFromRange:: m_period](#m_period)|Periodo di oscillazione dell'onda sinusoidale in secondi.|
|[CSinusoidalTransitionFromRange:: m_slope](#m_slope)|Pendenza all'inizio della transizione.|

## <a name="remarks"></a>Commenti

Il valore della variabile di animazione fluttua tra i valori minimo e massimo specificati per l'intera durata di una transizione a intervalli sinusoidali. Il parametro Slope viene usato per distinguere tra le due onde seno possibili specificate dagli altri parametri. Poiché tutte le transizioni vengono cancellate automaticamente, è consigliabile allocarle usando operator new. L'oggetto COM IUIAnimationTransition incapsulato viene creato da CAnimationController:: AnimateGroup, fino a quando non è NULL. La modifica delle variabili membro dopo la creazione di questo oggetto COM non ha alcun effetto.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CBaseTransition](../../mfc/reference/cbasetransition-class.md)

[CSinusoidalTransitionFromRange](../../mfc/reference/csinusoidaltransitionfromrange-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

## <a name="csinusoidaltransitionfromrangecreate"></a><a name="create"></a> CSinusoidalTransitionFromRange:: create

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

## <a name="csinusoidaltransitionfromrangecsinusoidaltransitionfromrange"></a><a name="csinusoidaltransitionfromrange"></a> CSinusoidalTransitionFromRange:: CSinusoidalTransitionFromRange

Costruisce un oggetto di transizione.

```
CSinusoidalTransitionFromRange(
    UI_ANIMATION_SECONDS duration,
    DOUBLE dblMinimumValue,
    DOUBLE dblMaximumValue,
    UI_ANIMATION_SECONDS period,
    UI_ANIMATION_SLOPE slope);
```

### <a name="parameters"></a>Parametri

*duration*<br/>
Durata della transizione.

*dblMinimumValue*<br/>
Valore della variabile di animazione in un trogolo dell'onda sinusoidale.

*dblMaximumValue*<br/>
Valore della variabile di animazione al picco dell'onda sinusoidale.

*period*<br/>
Periodo di oscillazione dell'onda sinusoidale in secondi.

*slope*<br/>
Pendenza all'inizio della transizione.

## <a name="csinusoidaltransitionfromrangem_dblmaximumvalue"></a><a name="m_dblmaximumvalue"></a> CSinusoidalTransitionFromRange:: m_dblMaximumValue

Valore della variabile di animazione al picco dell'onda sinusoidale.

```
DOUBLE m_dblMaximumValue;
```

## <a name="csinusoidaltransitionfromrangem_dblminimumvalue"></a><a name="m_dblminimumvalue"></a> CSinusoidalTransitionFromRange:: m_dblMinimumValue

Valore della variabile di animazione in un trogolo dell'onda sinusoidale.

```
DOUBLE m_dblMinimumValue;
```

## <a name="csinusoidaltransitionfromrangem_duration"></a><a name="m_duration"></a> CSinusoidalTransitionFromRange:: m_duration

Durata della transizione.

```
UI_ANIMATION_SECONDS m_duration;
```

## <a name="csinusoidaltransitionfromrangem_period"></a><a name="m_period"></a> CSinusoidalTransitionFromRange:: m_period

Periodo di oscillazione dell'onda sinusoidale in secondi.

```
UI_ANIMATION_SECONDS m_period;
```

## <a name="csinusoidaltransitionfromrangem_slope"></a><a name="m_slope"></a> CSinusoidalTransitionFromRange:: m_slope

Pendenza all'inizio della transizione.

```
UI_ANIMATION_SLOPE m_slope;
```

## <a name="see-also"></a>Vedi anche

[Classi](../../mfc/reference/mfc-classes.md)
