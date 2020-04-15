---
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
ms.openlocfilehash: 19f02010b6b73573a4800152e40c592fd1736ad5
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81369726"
---
# <a name="canimationpoint-class"></a>Classe CAnimationPoint

Implementa la funzionalità di un punto le cui coordinate possono essere animate.

## <a name="syntax"></a>Sintassi

```
class CAnimationPoint : public CAnimationBaseObject;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAnimationPoint::CAnimationPoint](#canimationpoint)|Di overload. Costruisce CAnimationPoint oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAnimationPoint::AddTransition](#addtransition)|Aggiunge transizioni per le coordinate X e Y.|
|[CAnimationPoint::GetDefaultValue](#getdefaultvalue)|Restituisce i valori predefiniti per le coordinate X e Y.|
|[CAnimationPoint::GetValue](#getvalue)|Restituisce il valore corrente.|
|[CAnimationPoint::GetX](#getx)|Fornisce l'accesso a CAnimationVariable per la coordinata X.|
|[CAnimationPoint::GetY](#gety)|Fornisce l'accesso a CAnimationVariable per la coordinata Y.|
|[CAnimationPoint::SetDefaultValue](#setdefaultvalue)|Imposta il valore predefinito.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CAnimationPoint::GetAnimationVariableList](#getanimationvariablelist)|Inserisce le variabili di animazione incapsulate in un elenco. (OverrideS [CAnimationBaseObject::GetAnimationVariableList](../../mfc/reference/canimationbaseobject-class.md#getanimationvariablelist).)|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAnimationPoint::operator CPoint](#operator_cpoint)|Converte un CAnimationPoint in un CPoint.|
|[CAnimationPoint::operatore](#operator_eq)|Assegna ptSrc a CAnimationPoint.|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Descrizione|
|----------|-----------------|
|[CAnimationPoint::m_xValue](#m_xvalue)|Variabile di animazione incapsulata che rappresenta la coordinata X del punto di animazione.|
|[CAnimationPoint::m_yValue](#m_yvalue)|Variabile di animazione incapsulata che rappresenta la coordinata Y del punto di animazione.|

## <a name="remarks"></a>Osservazioni

Il CAnimationPoint classe incapsula due CAnimationVariable oggetti e può rappresentare nelle applicazioni un punto. Ad esempio, è possibile utilizzare questa classe per animare una posizione di qualsiasi oggetto sullo schermo (come stringa di testo, cerchio, punto e così via). Per usare questa classe nell'applicazione, è sufficiente creare un'istanza di un oggetto di questa classe, aggiungerlo al controller di animazione utilizzando CAnimationController::AddAnimationObject e chiamare AddTransition per ogni transizione da applicare alle coordinate X e/o Y.To use this class in application, just instantiate an object of this class, add it to animation controller using CAnimationController::AddAnimationObject and call AddTransition for each transition to be applied to X and/or Y coordinates.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[Oggetto CAnimationBaseObject](../../mfc/reference/canimationbaseobject-class.md)

`CAnimationPoint`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

## <a name="canimationpointaddtransition"></a><a name="addtransition"></a>CAnimationPoint::AddTransition

Aggiunge transizioni per le coordinate X e Y.

```
void AddTransition(
    CBaseTransition* pXTransition,
    CBaseTransition* pYTransition);
```

### <a name="parameters"></a>Parametri

*PXTransizione*<br/>
Puntatore alla transizione per le coordinate X.

*PYTransition (Transizione a pY)*<br/>
Puntatore alla transizione per la coordinata Y.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per aggiungere le transizioni specificate all'elenco interno delle transizioni da applicare alle variabili di animazione per le coordinate X e Y. Quando si aggiungono transizioni, non vengono applicate immediatamente e archiviate in un elenco interno. Le transizioni vengono applicate (aggiunte a uno storyboard per un determinato valore) quando si chiama CAnimationController::AnimateGroup.Transitions are applied (added to a storyboard for a particular value) when you call CAnimationController::AnimateGroup. Se non è necessario applicare una transizione a una delle coordinate, è possibile passare NULL.

## <a name="canimationpointcanimationpoint"></a><a name="canimationpoint"></a>CAnimationPoint::CAnimationPoint

Costruisce CAnimationPoint oggetto.

```
CAnimationPoint();

CAnimationPoint(
    const CPoint& ptDefault,
    UINT32 nGroupID,
    UINT32 nObjectID = (UINT32)-1,
    DWORD dwUserData = 0);
```

### <a name="parameters"></a>Parametri

*ptPredefinito*<br/>
Specifica le coordinate del punto di default.

*nId gruppo*<br/>
Specifica l'ID gruppo.

*nObjectID (informazioni in stato in questo oggetto)*<br/>
Specifica l'ID oggetto.

*dwUserData (dati utente)*<br/>
Specifica i dati definiti dall'utente.

### <a name="remarks"></a>Osservazioni

Costruisce l'oggetto CAnimationPoint con le proprietà predefinite: le coordinate predefinite del punto, l'ID gruppo e l'ID oggetto sono impostate su 0.

## <a name="canimationpointgetanimationvariablelist"></a><a name="getanimationvariablelist"></a>CAnimationPoint::GetAnimationVariableList

Inserisce le variabili di animazione incapsulate in un elenco.

```
virtual void GetAnimationVariableList(CList<CAnimationVariable*, CAnimationVariable*>& lst);
```

### <a name="parameters"></a>Parametri

*Lst*<br/>
Quando la funzione termina, contiene puntatori a due CAnimationVariable oggetti che rappresentano le coordinate X e Y.

## <a name="canimationpointgetdefaultvalue"></a><a name="getdefaultvalue"></a>CAnimationPoint::GetDefaultValue

Restituisce i valori predefiniti per le coordinate X e Y.

```
CPoint GetDefaultValue();
```

### <a name="return-value"></a>Valore restituito

Un punto contenente il valore predefinito.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per recuperare il valore predefinito, precedentemente impostato dal costruttore o SetDefaultValue.Call this function to retrieve default value, which was previously set by constructor or SetDefaultValue.

## <a name="canimationpointgetvalue"></a><a name="getvalue"></a>CAnimationPoint::GetValue

Restituisce il valore corrente.

```
BOOL GetValue(CPoint& ptValue);
```

### <a name="parameters"></a>Parametri

*valore pt*<br/>
Output: Contiene il valore corrente quando questo metodo restituisce.

### <a name="return-value"></a>Valore restituito

TRUE, se il valore corrente è stato recuperato correttamente. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per recuperare il valore corrente del punto di animazione. Se questo metodo ha esito negativo o gli oggetti COM sottostanti per le coordinate X e Y non sono stati inizializzati, ptValue contiene il valore predefinito, precedentemente impostato nel costruttore o da SetDefaultValue.If this method fails or underlying COM objects for X and Y coordinates have not been initialized, ptValue contains default value, which was previously set in constructor or by SetDefaultValue.

## <a name="canimationpointgetx"></a><a name="getx"></a>CAnimationPoint::GetX

Fornisce l'accesso a CAnimationVariable per la coordinata X.

```
CAnimationVariable& GetX();
```

### <a name="return-value"></a>Valore restituito

Riferimento all'incapsulato CAnimationVariable che rappresenta la coordinata X.

### <a name="remarks"></a>Osservazioni

È possibile chiamare questo metodo per ottenere l'accesso diretto al sottostante CAnimationVariable che rappresenta la coordinata X.You can call this method to get direct access to underlying CAnimationVariable representing X coordinate.

## <a name="canimationpointgety"></a><a name="gety"></a>CAnimationPoint::GetY

Fornisce l'accesso a CAnimationVariable per la coordinata Y.

```
CAnimationVariable& GetY();
```

### <a name="return-value"></a>Valore restituito

Riferimento all'incapsulato CAnimationVariable che rappresenta la coordinata Y.

### <a name="remarks"></a>Osservazioni

È possibile chiamare questo metodo per ottenere l'accesso diretto alla cAnimationVariable sottostante che rappresenta la coordinata Y.You can call this method to get direct access to underlying CAnimationVariable representing Y coordinate.

## <a name="canimationpointm_xvalue"></a><a name="m_xvalue"></a>CAnimationPoint::m_xValue

Variabile di animazione incapsulata che rappresenta la coordinata X del punto di animazione.

```
CAnimationVariable m_xValue;
```

## <a name="canimationpointm_yvalue"></a><a name="m_yvalue"></a>CAnimationPoint::m_yValue

Variabile di animazione incapsulata che rappresenta la coordinata Y del punto di animazione.

```
CAnimationVariable m_yValue;
```

## <a name="canimationpointoperator-cpoint"></a><a name="operator_cpoint"></a>CAnimationPoint::operator CPoint

Converte un CAnimationPoint in un CPoint.

```
operator CPoint();
```

### <a name="return-value"></a>Valore restituito

Valore corrente di CAnimationPoint come CPoint.

### <a name="remarks"></a>Osservazioni

Questa funzione chiama internamente GetValue.This function internally calls GetValue. Se GetValue per qualche motivo ha esito negativo, il punto restituito conterrà i valori predefiniti per le coordinate X e Y.

## <a name="canimationpointoperator"></a><a name="operator_eq"></a>CAnimationPoint::operatore

Assegna ptSrc a CAnimationPoint.

```
void operator=(const CPoint& ptSrc);
```

### <a name="parameters"></a>Parametri

*ptSrc*<br/>
Fa riferimento a CPoint o POINT.

### <a name="remarks"></a>Osservazioni

Assegna ptSrc a CAnimationPoint. È consigliabile eseguire questa operazione prima dell'inizio dell'animazione, perché questo operatore chiama SetDefaultValue, che ricrea gli oggetti COM sottostanti per le coordinate X e Y se sono state create. Se hai sottoscritto questo oggetto di animazione agli eventi (ValueChanged o IntegerValueChanged), devi riattivare questi eventi.

## <a name="canimationpointsetdefaultvalue"></a><a name="setdefaultvalue"></a>CAnimationPoint::SetDefaultValue

Imposta il valore predefinito.

```
void SetDefaultValue(const POINT& ptDefault);
```

### <a name="parameters"></a>Parametri

*ptPredefinito*<br/>
Specifica il valore predefinito del punto.

### <a name="remarks"></a>Osservazioni

Utilizzare questa funzione per impostare un valore predefinito per l'oggetto di animazione. Questo metodo assegna valori predefiniti alle coordinate X e Y del punto di animazione. Vengono inoltre ricreati gli oggetti COM sottostanti, se sono stati creati. Se hai sottoscritto questo oggetto di animazione agli eventi (ValueChanged o IntegerValueChanged), devi riattivare questi eventi.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
