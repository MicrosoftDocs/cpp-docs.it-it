---
description: 'Altre informazioni su: classe CLinearTransitionFromSpeed'
title: Classe CLinearTransitionFromSpeed
ms.date: 11/04/2016
f1_keywords:
- CLinearTransitionFromSpeed
- AFXANIMATIONCONTROLLER/CLinearTransitionFromSpeed
- AFXANIMATIONCONTROLLER/CLinearTransitionFromSpeed::CLinearTransitionFromSpeed
- AFXANIMATIONCONTROLLER/CLinearTransitionFromSpeed::Create
- AFXANIMATIONCONTROLLER/CLinearTransitionFromSpeed::m_dblFinalValue
- AFXANIMATIONCONTROLLER/CLinearTransitionFromSpeed::m_dblSpeed
helpviewer_keywords:
- CLinearTransitionFromSpeed [MFC], CLinearTransitionFromSpeed
- CLinearTransitionFromSpeed [MFC], Create
- CLinearTransitionFromSpeed [MFC], m_dblFinalValue
- CLinearTransitionFromSpeed [MFC], m_dblSpeed
ms.assetid: 8f159a1c-8893-4017-951e-09e5758aba7d
ms.openlocfilehash: ce919787508f4f6326f9d07c0c6003a63633b279
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97236737"
---
# <a name="clineartransitionfromspeed-class"></a>Classe CLinearTransitionFromSpeed

Incapsula una transizione a velocità lineare.

## <a name="syntax"></a>Sintassi

```
class CLinearTransitionFromSpeed : public CBaseTransition;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CLinearTransitionFromSpeed:: CLinearTransitionFromSpeed](#clineartransitionfromspeed)|Costruisce un oggetto di transizione a velocità lineare e lo inizializza con la velocità e il valore finale.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CLinearTransitionFromSpeed:: create](#create)|Chiama la libreria di transizione per creare l'oggetto COM di transizione incapsulato. Esegue l'override di [CBaseTransition:: create](../../mfc/reference/cbasetransition-class.md#create).|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CLinearTransitionFromSpeed:: m_dblFinalValue](#m_dblfinalvalue)|Valore della variabile di animazione alla fine della transizione.|
|[CLinearTransitionFromSpeed:: m_dblSpeed](#m_dblspeed)|Valore assoluto della velocità della variabile.|

## <a name="remarks"></a>Commenti

Durante una transizione a velocità lineare, il valore della variabile di animazione cambia a una velocità specificata. La durata della transizione è determinata dalla differenza tra il valore iniziale e il valore finale specificato. Poiché tutte le transizioni vengono cancellate automaticamente, è consigliabile allocarle usando operator new. L'oggetto COM IUIAnimationTransition incapsulato viene creato da CAnimationController:: AnimateGroup, fino a quando non è NULL. La modifica delle variabili membro dopo la creazione di questo oggetto COM non ha alcun effetto.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CBaseTransition](../../mfc/reference/cbasetransition-class.md)

[CLinearTransitionFromSpeed](../../mfc/reference/clineartransitionfromspeed-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

## <a name="clineartransitionfromspeedclineartransitionfromspeed"></a><a name="clineartransitionfromspeed"></a> CLinearTransitionFromSpeed:: CLinearTransitionFromSpeed

Costruisce un oggetto di transizione a velocità lineare e lo inizializza con la velocità e il valore finale.

```
CLinearTransitionFromSpeed(
    DOUBLE dblSpeed,
    DOUBLE dblFinalValue);
```

### <a name="parameters"></a>Parametri

*dblSpeed*<br/>
Valore assoluto della velocità della variabile.

*dblFinalValue*<br/>
Valore della variabile di animazione alla fine della transizione.

## <a name="clineartransitionfromspeedcreate"></a><a name="create"></a> CLinearTransitionFromSpeed:: create

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

## <a name="clineartransitionfromspeedm_dblfinalvalue"></a><a name="m_dblfinalvalue"></a> CLinearTransitionFromSpeed:: m_dblFinalValue

Valore della variabile di animazione alla fine della transizione.

```
DOUBLE m_dblFinalValue;
```

## <a name="clineartransitionfromspeedm_dblspeed"></a><a name="m_dblspeed"></a> CLinearTransitionFromSpeed:: m_dblSpeed

Valore assoluto della velocità della variabile.

```
DOUBLE m_dblSpeed;
```

## <a name="see-also"></a>Vedi anche

[Classi](../../mfc/reference/mfc-classes.md)
