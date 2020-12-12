---
description: 'Altre informazioni su: classe CCustomTransition'
title: Classe CCustomTransition
ms.date: 11/04/2016
f1_keywords:
- CCustomTransition
- AFXANIMATIONCONTROLLER/CCustomTransition
- AFXANIMATIONCONTROLLER/CCustomTransition::CCustomTransition
- AFXANIMATIONCONTROLLER/CCustomTransition::Create
- AFXANIMATIONCONTROLLER/CCustomTransition::SetInitialValue
- AFXANIMATIONCONTROLLER/CCustomTransition::SetInitialVelocity
- AFXANIMATIONCONTROLLER/CCustomTransition::m_bInitialValueSpecified
- AFXANIMATIONCONTROLLER/CCustomTransition::m_bInitialVelocitySpecified
- AFXANIMATIONCONTROLLER/CCustomTransition::m_initialValue
- AFXANIMATIONCONTROLLER/CCustomTransition::m_initialVelocity
- AFXANIMATIONCONTROLLER/CCustomTransition::m_pInterpolator
helpviewer_keywords:
- CCustomTransition [MFC], CCustomTransition
- CCustomTransition [MFC], Create
- CCustomTransition [MFC], SetInitialValue
- CCustomTransition [MFC], SetInitialVelocity
- CCustomTransition [MFC], m_bInitialValueSpecified
- CCustomTransition [MFC], m_bInitialVelocitySpecified
- CCustomTransition [MFC], m_initialValue
- CCustomTransition [MFC], m_initialVelocity
- CCustomTransition [MFC], m_pInterpolator
ms.assetid: 5bd3f492-940f-4290-a38b-fa68eb8f8401
ms.openlocfilehash: 22c08cdcedc3a7cbdbe824ac1d98d62cfe810772
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97227663"
---
# <a name="ccustomtransition-class"></a>Classe CCustomTransition

Implementa una transizione personalizzata.

## <a name="syntax"></a>Sintassi

```
class CCustomTransition : public CBaseTransition;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CCustomTransition:: CCustomTransition](#ccustomtransition)|Costruisce un oggetto di transizione personalizzato.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CCustomTransition:: create](#create)|Chiama la libreria di transizione per creare l'oggetto COM di transizione incapsulato. Esegue l'override di [CBaseTransition:: create](../../mfc/reference/cbasetransition-class.md#create).|
|[CCustomTransition:: SetInitialValue](#setinitialvalue)|Imposta un valore iniziale, che verrà applicato a una variabile di animazione associata a questa transizione.|
|[CCustomTransition:: SetInitialVelocity](#setinitialvelocity)|Imposta una velocità iniziale, che verrà applicata a una variabile di animazione associata a questa transizione.|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Description|
|----------|-----------------|
|[CCustomTransition:: m_bInitialValueSpecified](#m_binitialvaluespecified)|Specifica se il valore iniziale è stato specificato con SetInitialValue.|
|[CCustomTransition:: m_bInitialVelocitySpecified](#m_binitialvelocityspecified)|Specifica se la velocità iniziale è stata specificata con SetInitialVelocity.|
|[CCustomTransition:: m_initialValue](#m_initialvalue)|Archivia il valore iniziale.|
|[CCustomTransition:: m_initialVelocity](#m_initialvelocity)|Archivia la velocità iniziale.|
|[CCustomTransition:: m_pInterpolator](#m_pinterpolator)|Archivia un puntatore a un interpolatore personalizzato.|

## <a name="remarks"></a>Commenti

La classe CCustomTransitions consente agli sviluppatori di implementare transizioni personalizzate. Viene creato e usato come transizione standard, ma il costruttore accetta come parametro un puntatore a un interpolatore personalizzato. Per usare le transizioni personalizzate, attenersi alla procedura seguente: 1. Derivare una classe da CCustomInterpolator e implementare almeno il metodo InterpolateValue. 2. Assicurarsi che la durata dell'oggetto di interpolazione personalizzato debba essere più lunga della durata dell'animazione in cui viene utilizzata. 3. Creare un'istanza di (usando operator new) un oggetto CCustomTransition e passare un puntatore a un interpolatore personalizzato nel costruttore. 4. Chiamare CCustomTransition:: SetInitialValue e CCustomTransition:: SetInitialVelocity se questi parametri sono necessari per l'interpolazione personalizzata. 5. Passare il puntatore alla transizione personalizzata al metodo AddTransition dell'oggetto Animation, il cui valore deve essere animato con l'algoritmo personalizzato. 6. Quando il valore dell'oggetto Animation deve modificare l'API di animazione Windows chiamerà InterpolateValue (e altri metodi rilevanti) in CCustomInterpolator.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CBaseTransition](../../mfc/reference/cbasetransition-class.md)

`CCustomTransition`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

## <a name="ccustomtransitionccustomtransition"></a><a name="ccustomtransition"></a> CCustomTransition:: CCustomTransition

Costruisce un oggetto di transizione personalizzato.

```
CCustomTransition(CCustomInterpolator* pInterpolator);
```

### <a name="parameters"></a>Parametri

*pInterpolator*<br/>
Puntatore all'interpolazione personalizzata.

## <a name="ccustomtransitioncreate"></a><a name="create"></a> CCustomTransition:: create

Chiama la libreria di transizione per creare l'oggetto COM di transizione incapsulato.

```
virtual BOOL Create(
    IUIAnimationTransitionLibrary* */,
    IUIAnimationTransitionFactory* pFactory);
```

### <a name="parameters"></a>Parametri

*pFactory*<br/>
Puntatore alla Factory di transizione, responsabile della creazione di transizioni personalizzate.

### <a name="return-value"></a>Valore restituito

### <a name="remarks"></a>Commenti

Questo metodo può inoltre impostare il valore iniziale e la velocità iniziale da applicare a una variabile di animazione, che è associata a questa transizione. A questo scopo, è necessario chiamare SetInitialValue e SetInitialVelocity prima che il framework crei l'oggetto COM di transizione incapsulato (si verifica quando si chiama CAnimationController:: AnimateGroup).

## <a name="ccustomtransitionm_binitialvaluespecified"></a><a name="m_binitialvaluespecified"></a> CCustomTransition:: m_bInitialValueSpecified

Specifica se il valore iniziale è stato specificato con SetInitialValue.

```
BOOL m_bInitialValueSpecified;
```

## <a name="ccustomtransitionm_binitialvelocityspecified"></a><a name="m_binitialvelocityspecified"></a> CCustomTransition:: m_bInitialVelocitySpecified

Specifica se la velocità iniziale è stata specificata con SetInitialVelocity.

```
BOOL m_bInitialVelocitySpecified;
```

## <a name="ccustomtransitionm_initialvalue"></a><a name="m_initialvalue"></a> CCustomTransition:: m_initialValue

Archivia il valore iniziale.

```
DOUBLE m_initialValue;
```

## <a name="ccustomtransitionm_initialvelocity"></a><a name="m_initialvelocity"></a> CCustomTransition:: m_initialVelocity

Archivia la velocità iniziale.

```
DOUBLE m_initialVelocity;
```

## <a name="ccustomtransitionm_pinterpolator"></a><a name="m_pinterpolator"></a> CCustomTransition:: m_pInterpolator

Archivia un puntatore a un interpolatore personalizzato.

```
CCustomInterpolator* m_pInterpolator;
```

## <a name="ccustomtransitionsetinitialvalue"></a><a name="setinitialvalue"></a> CCustomTransition:: SetInitialValue

Imposta un valore iniziale, che verrà applicato a una variabile di animazione associata a questa transizione.

```cpp
void SetInitialValue(DOUBLE initialValue);
```

### <a name="parameters"></a>Parametri

*initialValue*

## <a name="ccustomtransitionsetinitialvelocity"></a><a name="setinitialvelocity"></a> CCustomTransition:: SetInitialVelocity

Imposta una velocità iniziale, che verrà applicata a una variabile di animazione associata a questa transizione.

```cpp
void SetInitialVelocity(DOUBLE initialVelocity);
```

### <a name="parameters"></a>Parametri

*initialVelocity*

## <a name="see-also"></a>Vedi anche

[Classi](../../mfc/reference/mfc-classes.md)
