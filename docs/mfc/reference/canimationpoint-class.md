---
description: 'Altre informazioni su: classe CAnimationPoint'
title: Classe CAnimationPoint
ms.date: 11/04/2016
f1_keywords:
- CAnimationPoint
- AFXANIMATIONCONTROLLER/CAnimationPoint
- AFXANIMATIONCONTROLLER/CAnimationPoint::CAnimationPoint
- AFXANIMATIONCONTROLLER/CAnimationPoint::AddTransition
- AFXANIMATIONCONTROLLER/CAnimationPoint::GetDefaultValue
- AFXANIMATIONCONTROLLER/CAnimationPoint::GetValue
- AFXANIMATIONCONTROLLER/CAnimationPoint::GetX
- AFXANIMATIONCONTROLLER/CAnimationPoint::GetY
- AFXANIMATIONCONTROLLER/CAnimationPoint::SetDefaultValue
- AFXANIMATIONCONTROLLER/CAnimationPoint::GetAnimationVariableList
- AFXANIMATIONCONTROLLER/CAnimationPoint::m_xValue
- AFXANIMATIONCONTROLLER/CAnimationPoint::m_yValue
helpviewer_keywords:
- CAnimationPoint [MFC], CAnimationPoint
- CAnimationPoint [MFC], AddTransition
- CAnimationPoint [MFC], GetDefaultValue
- CAnimationPoint [MFC], GetValue
- CAnimationPoint [MFC], GetX
- CAnimationPoint [MFC], GetY
- CAnimationPoint [MFC], SetDefaultValue
- CAnimationPoint [MFC], GetAnimationVariableList
- CAnimationPoint [MFC], m_xValue
- CAnimationPoint [MFC], m_yValue
ms.assetid: 5dc4d46f-e695-4681-b15c-544b78b3e317
ms.openlocfilehash: ddefb93950f0ff1109478f3574413faf9f60a22a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97336782"
---
# <a name="canimationpoint-class"></a>Classe CAnimationPoint

Implementa la funzionalità di un punto le cui coordinate possono essere animate.

## <a name="syntax"></a>Sintassi

```
class CAnimationPoint : public CAnimationBaseObject;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CAnimationPoint:: CAnimationPoint](#canimationpoint)|Di overload. Costruisce l'oggetto CAnimationPoint.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CAnimationPoint:: AddTransition](#addtransition)|Aggiunge transizioni per le coordinate X e Y.|
|[CAnimationPoint:: GetDefaultValue](#getdefaultvalue)|Restituisce i valori predefiniti per le coordinate X e Y.|
|[CAnimationPoint:: GetValue](#getvalue)|Restituisce il valore corrente.|
|[CAnimationPoint:: I GetX](#getx)|Fornisce l'accesso a CAnimationVariable per la coordinata X.|
|[CAnimationPoint:: GetY](#gety)|Fornisce l'accesso a CAnimationVariable per la coordinata Y.|
|[CAnimationPoint:: sedefaultvalue](#setdefaultvalue)|Imposta il valore predefinito.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Description|
|----------|-----------------|
|[CAnimationPoint:: GetAnimationVariableList](#getanimationvariablelist)|Inserisce le variabili di animazione incapsulate in un elenco. Esegue l'override di [CAnimationBaseObject:: GetAnimationVariableList](../../mfc/reference/canimationbaseobject-class.md#getanimationvariablelist).|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[CAnimationPoint:: operator CPoint](#operator_cpoint)|Converte un CAnimationPoint in un CPoint.|
|[CAnimationPoint:: operator =](#operator_eq)|Assegna ptSrc a CAnimationPoint.|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Description|
|----------|-----------------|
|[CAnimationPoint:: m_xValue](#m_xvalue)|Variabile di animazione incapsulata che rappresenta la coordinata X del punto di animazione.|
|[CAnimationPoint:: m_yValue](#m_yvalue)|Variabile di animazione incapsulata che rappresenta la coordinata Y del punto di animazione.|

## <a name="remarks"></a>Commenti

La classe CAnimationPoint incapsula due oggetti CAnimationVariable e può rappresentare nelle applicazioni un punto. Ad esempio, è possibile usare questa classe per animare una posizione di un oggetto sullo schermo, ad esempio una stringa di testo, un cerchio, un punto e così via. Per usare questa classe nell'applicazione, è sufficiente creare un'istanza di un oggetto di questa classe, aggiungerla al controller di animazione usando CAnimationController:: AddAnimationObject e chiamare AddTransition per ogni transizione da applicare alle coordinate X e/o Y.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CAnimationBaseObject](../../mfc/reference/canimationbaseobject-class.md)

`CAnimationPoint`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

## <a name="canimationpointaddtransition"></a><a name="addtransition"></a> CAnimationPoint:: AddTransition

Aggiunge transizioni per le coordinate X e Y.

```cpp
void AddTransition(
    CBaseTransition* pXTransition,
    CBaseTransition* pYTransition);
```

### <a name="parameters"></a>Parametri

*pXTransition*<br/>
Puntatore alla transizione per le coordinate X.

*pYTransition*<br/>
Puntatore alla transizione per la coordinata Y.

### <a name="remarks"></a>Commenti

Chiamare questa funzione per aggiungere le transizioni specificate all'elenco interno di transizioni da applicare alle variabili di animazione per le coordinate X e Y. Quando si aggiungono transizioni, queste non vengono applicate immediatamente e archiviate in un elenco interno. Le transizioni vengono applicate (aggiunte a uno storyboard per un particolare valore) quando si chiama CAnimationController:: AnimateGroup. Se non è necessario applicare una transizione a una delle coordinate, è possibile passare NULL.

## <a name="canimationpointcanimationpoint"></a><a name="canimationpoint"></a> CAnimationPoint:: CAnimationPoint

Costruisce l'oggetto CAnimationPoint.

```
CAnimationPoint();

CAnimationPoint(
    const CPoint& ptDefault,
    UINT32 nGroupID,
    UINT32 nObjectID = (UINT32)-1,
    DWORD dwUserData = 0);
```

### <a name="parameters"></a>Parametri

*ptDefault*<br/>
Specifica le coordinate del punto predefinite.

*nGroupID*<br/>
Specifica l'ID gruppo.

*nObjectID*<br/>
Specifica l'ID oggetto.

*dwUserData*<br/>
Specifica i dati definiti dall'utente.

### <a name="remarks"></a>Commenti

Costruisce un oggetto CAnimationPoint con proprietà predefinite: le coordinate dei punti predefinite, l'ID gruppo e l'ID oggetto sono impostate su 0.

## <a name="canimationpointgetanimationvariablelist"></a><a name="getanimationvariablelist"></a> CAnimationPoint:: GetAnimationVariableList

Inserisce le variabili di animazione incapsulate in un elenco.

```
virtual void GetAnimationVariableList(CList<CAnimationVariable*, CAnimationVariable*>& lst);
```

### <a name="parameters"></a>Parametri

*LST*<br/>
Quando la funzione restituisce un risultato, contiene puntatori a due oggetti CAnimationVariable che rappresentano le coordinate X e Y.

## <a name="canimationpointgetdefaultvalue"></a><a name="getdefaultvalue"></a> CAnimationPoint:: GetDefaultValue

Restituisce i valori predefiniti per le coordinate X e Y.

```
CPoint GetDefaultValue();
```

### <a name="return-value"></a>Valore restituito

Punto contenente un valore predefinito.

### <a name="remarks"></a>Commenti

Chiamare questa funzione per recuperare il valore predefinito, precedentemente impostato dal costruttore o da DefaultValue.

## <a name="canimationpointgetvalue"></a><a name="getvalue"></a> CAnimationPoint:: GetValue

Restituisce il valore corrente.

```
BOOL GetValue(CPoint& ptValue);
```

### <a name="parameters"></a>Parametri

*ptValue*<br/>
Output: Contiene il valore corrente quando il metodo restituisce.

### <a name="return-value"></a>Valore restituito

TRUE se il valore corrente è stato recuperato correttamente; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Chiamare questa funzione per recuperare il valore corrente del punto di animazione. Se questo metodo ha esito negativo o gli oggetti COM sottostanti per le coordinate X e Y non sono stati inizializzati, ptValue contiene il valore predefinito, che è stato precedentemente impostato nel costruttore o da DefaultValue.

## <a name="canimationpointgetx"></a><a name="getx"></a> CAnimationPoint:: I GetX

Fornisce l'accesso a CAnimationVariable per la coordinata X.

```
CAnimationVariable& GetX();
```

### <a name="return-value"></a>Valore restituito

Riferimento a CAnimationVariable incapsulato che rappresenta la coordinata X.

### <a name="remarks"></a>Commenti

È possibile chiamare questo metodo per ottenere l'accesso diretto ai CAnimationVariable sottostanti che rappresentano la coordinata X.

## <a name="canimationpointgety"></a><a name="gety"></a> CAnimationPoint:: GetY

Fornisce l'accesso a CAnimationVariable per la coordinata Y.

```
CAnimationVariable& GetY();
```

### <a name="return-value"></a>Valore restituito

Riferimento a CAnimationVariable incapsulato che rappresenta la coordinata Y.

### <a name="remarks"></a>Commenti

È possibile chiamare questo metodo per ottenere l'accesso diretto ai CAnimationVariable sottostanti che rappresentano la coordinata Y.

## <a name="canimationpointm_xvalue"></a><a name="m_xvalue"></a> CAnimationPoint:: m_xValue

Variabile di animazione incapsulata che rappresenta la coordinata X del punto di animazione.

```
CAnimationVariable m_xValue;
```

## <a name="canimationpointm_yvalue"></a><a name="m_yvalue"></a> CAnimationPoint:: m_yValue

Variabile di animazione incapsulata che rappresenta la coordinata Y del punto di animazione.

```
CAnimationVariable m_yValue;
```

## <a name="canimationpointoperator-cpoint"></a><a name="operator_cpoint"></a> CAnimationPoint:: operator CPoint

Converte un CAnimationPoint in un CPoint.

```
operator CPoint();
```

### <a name="return-value"></a>Valore restituito

Valore corrente di CAnimationPoint come CPoint.

### <a name="remarks"></a>Commenti

Questa funzione chiama internamente GetValue. Se GetValue per qualche motivo non riesce, il punto restituito conterrà i valori predefiniti per le coordinate X e Y.

## <a name="canimationpointoperator"></a><a name="operator_eq"></a> CAnimationPoint:: operator =

Assegna ptSrc a CAnimationPoint.

```cpp
void operator=(const CPoint& ptSrc);
```

### <a name="parameters"></a>Parametri

*ptSrc*<br/>
Fa riferimento a CPoint o POINT.

### <a name="remarks"></a>Commenti

Assegna ptSrc a CAnimationPoint. È consigliabile eseguire questa operazione prima dell'avvio dell'animazione, perché questo operatore chiama DefaultValue, che ricrea gli oggetti COM sottostanti per le coordinate X e Y se sono stati creati. Se l'oggetto animazione è stato sottoscritto agli eventi (ValueChanged o IntegerValueChanged), è necessario riabilitare questi eventi.

## <a name="canimationpointsetdefaultvalue"></a><a name="setdefaultvalue"></a> CAnimationPoint:: sedefaultvalue

Imposta il valore predefinito.

```cpp
void SetDefaultValue(const POINT& ptDefault);
```

### <a name="parameters"></a>Parametri

*ptDefault*<br/>
Specifica il valore predefinito del punto.

### <a name="remarks"></a>Commenti

Utilizzare questa funzione per impostare un valore predefinito per l'oggetto di animazione. Questo metodo assegna i valori predefiniti alle coordinate X e Y del punto di animazione. Vengono inoltre ricreati gli oggetti COM sottostanti se sono stati creati. Se l'oggetto animazione è stato sottoscritto agli eventi (ValueChanged o IntegerValueChanged), è necessario riabilitare questi eventi.

## <a name="see-also"></a>Vedi anche

[Classi](../../mfc/reference/mfc-classes.md)
