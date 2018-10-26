---
title: Classe CAnimationPoint | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2fa0258b002d421376855eaf88c02444f0ddc620
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50076490"
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
|[CAnimationPoint::CAnimationPoint](#canimationpoint)|Di overload. Costruisce un oggetto CAnimationPoint.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAnimationPoint::AddTransition](#addtransition)|Aggiunge le transizioni per X e Y coordinate.|
|[CAnimationPoint::GetDefaultValue](#getdefaultvalue)|Restituisce i valori predefiniti per X e Y coordinate.|
|[CAnimationPoint::GetValue](#getvalue)|Restituisce il valore corrente.|
|[CAnimationPoint::GetX](#getx)|Fornisce l'accesso a CAnimationVariable per la coordinata X.|
|[CAnimationPoint::GetY](#gety)|Fornisce l'accesso a CAnimationVariable per la coordinata Y.|
|[CAnimationPoint::SetDefaultValue](#setdefaultvalue)|Imposta il valore predefinito.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CAnimationPoint::GetAnimationVariableList](#getanimationvariablelist)|Inserisce le variabili di animazione incapsulato in un elenco. (Esegue l'override [CAnimationBaseObject:: GetAnimationVariableList](../../mfc/reference/canimationbaseobject-class.md#getanimationvariablelist).)|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CPoint CAnimationPoint::operator](#operator_cpoint)|Converte un CAnimationPoint un CPoint.|
|[CAnimationPoint::operator =](#operator_eq)|Assegna ptSrc CAnimationPoint.|

### <a name="protected-data-members"></a>Membri dati protetti

|nome|Descrizione|
|----------|-----------------|
|[CAnimationPoint::m_xValue](#m_xvalue)|La variabile di animazione incapsulato rappresentato X coordinate del punto di animazione.|
|[CAnimationPoint::m_yValue](#m_yvalue)|La variabile di animazione incapsulato che rappresenta la coordinata Y del punto di animazione.|

## <a name="remarks"></a>Note

Classe CAnimationPoint incapsula oggetti CAnimationVariable due e può rappresentare un punto nelle applicazioni. Ad esempio, è possibile utilizzare questa classe per aggiungere un'animazione a una posizione di qualsiasi oggetto sullo schermo (ad esempio una stringa di testo, cerchio, un punto e così via). Per usare questa classe nell'applicazione, semplicemente creare un'istanza di un oggetto di questa classe, aggiungerlo al controller di animazione usando CAnimationController:: AddAnimationObject e chiamare AddTransition per ogni transizione da applicare per le coordinate X e/o Y.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CAnimationBaseObject](../../mfc/reference/canimationbaseobject-class.md)

`CAnimationPoint`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

##  <a name="addtransition"></a>  CAnimationPoint::AddTransition

Aggiunge le transizioni per X e Y coordinate.

```
void AddTransition(
    CBaseTransition* pXTransition,
    CBaseTransition* pYTransition);
```

### <a name="parameters"></a>Parametri

*pXTransition*<br/>
Puntatore alla transizione per coordinate X.

*pYTransition*<br/>
Coordinate di un puntatore alla transizione per l'asse Y.

### <a name="remarks"></a>Note

Chiamare questa funzione per aggiungere le transizioni specificate all'elenco interno delle transizioni da applicare alle variabili di animazione per X e Y coordinate. Quando si aggiungono le transizioni, non vengono applicate immediatamente e archiviati in un elenco interno. Le transizioni vengono applicate (aggiunta di uno storyboard per un particolare valore) quando si chiama CAnimationController:: AnimateGroup. Se non è necessario applicare una transizione a una delle coordinate, è possibile passare NULL.

##  <a name="canimationpoint"></a>  CAnimationPoint::CAnimationPoint

Costruisce un oggetto CAnimationPoint.

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
Specifica le coordinate del punto predefinito.

*nGroupID*<br/>
Specifica l'ID del gruppo.

*nObjectID*<br/>
Specifica l'ID dell'oggetto.

*dwUserData*<br/>
Specifica i dati definiti dall'utente.

### <a name="remarks"></a>Note

Costruisce un oggetto con proprietà predefinite CAnimationPoint: predefiniti le coordinate del punto, l'ID del gruppo e ID di oggetto sono impostati su 0.

##  <a name="getanimationvariablelist"></a>  CAnimationPoint::GetAnimationVariableList

Inserisce le variabili di animazione incapsulato in un elenco.

```
virtual void GetAnimationVariableList(CList<CAnimationVariable*, CAnimationVariable*>& lst);
```

### <a name="parameters"></a>Parametri

*lst*<br/>
Quando la funzione viene restituito, contiene i puntatori a due CAnimationVariable oggetti che rappresentano le coordinate X e Y.

##  <a name="getdefaultvalue"></a>  CAnimationPoint::GetDefaultValue

Restituisce i valori predefiniti per X e Y coordinate.

```
CPoint GetDefaultValue();
```

### <a name="return-value"></a>Valore restituito

Un valore predefinito che contiene punti.

### <a name="remarks"></a>Note

Chiamare questa funzione per recuperare il valore predefinito, che in precedenza è stato impostato dal costruttore o SetDefaultValue.

##  <a name="getvalue"></a>  CAnimationPoint::GetValue

Restituisce il valore corrente.

```
BOOL GetValue(CPoint& ptValue);
```

### <a name="parameters"></a>Parametri

*ptValue*<br/>
Output. Quando questo metodo viene restituito, contiene il valore corrente.

### <a name="return-value"></a>Valore restituito

TRUE se il valore corrente è stato recuperato correttamente. in caso contrario, FALSE.

### <a name="remarks"></a>Note

Chiamare questa funzione per recuperare il valore corrente del punto di animazione. Se gli oggetti di questo metodo ha esito negativo o COM sottostante per X e Y coordinate non sono state inizializzate, ptValue conterrà un valore predefinito, che in precedenza è stato impostato nel costruttore o da SetDefaultValue.

##  <a name="getx"></a>  CAnimationPoint::GetX

Fornisce l'accesso a CAnimationVariable per la coordinata X.

```
CAnimationVariable& GetX();
```

### <a name="return-value"></a>Valore restituito

Un riferimento a CAnimationVariable incapsulata, che rappresenta X di coordinate.

### <a name="remarks"></a>Note

È possibile chiamare questo metodo per ottenere l'accesso diretto a CAnimationVariable sottostante che rappresenta X di coordinate.

##  <a name="gety"></a>  CAnimationPoint::GetY

Fornisce l'accesso a CAnimationVariable per la coordinata Y.

```
CAnimationVariable& GetY();
```

### <a name="return-value"></a>Valore restituito

Un riferimento a CAnimationVariable incapsulata, che rappresenta la coordinata Y.

### <a name="remarks"></a>Note

È possibile chiamare questo metodo per ottenere l'accesso diretto a CAnimationVariable sottostante che rappresenta la coordinata Y.

##  <a name="m_xvalue"></a>  CAnimationPoint::m_xValue

La variabile di animazione incapsulato rappresentato X coordinate del punto di animazione.

```
CAnimationVariable m_xValue;
```

##  <a name="m_yvalue"></a>  CAnimationPoint::m_yValue

La variabile di animazione incapsulato che rappresenta la coordinata Y del punto di animazione.

```
CAnimationVariable m_yValue;
```

##  <a name="operator_cpoint"></a>  CPoint CAnimationPoint::operator

Converte un CAnimationPoint un CPoint.

```
operator CPoint();
```

### <a name="return-value"></a>Valore restituito

Valore corrente di CAnimationPoint come CPoint.

### <a name="remarks"></a>Note

Questa funzione chiama internamente GetValue. Se GetValue per qualche motivo non riesce, il punto restituito conterrà i valori predefiniti per X e Y coordinate.

##  <a name="operator_eq"></a>  CAnimationPoint::operator =

Assegna ptSrc CAnimationPoint.

```
void operator=(const CPoint& ptSrc);
```

### <a name="parameters"></a>Parametri

*ptSrc*<br/>
Si intende CPoint o punto.

### <a name="remarks"></a>Note

Assegna ptSrc CAnimationPoint. È consigliabile eseguire da prima dell'inizio dell'animazione poiché questo operatore chiama SetDefaultValue, che ricrea il componente COM sottostante dagli oggetti di per se sono state create le coordinate X e Y. Se si ha sottoscritto l'oggetto di animazione a eventi (ValueChanged o IntegerValueChanged), è necessario abilitare nuovamente questi eventi.

##  <a name="setdefaultvalue"></a>  CAnimationPoint::SetDefaultValue

Imposta il valore predefinito.

```
void SetDefaultValue(const POINT& ptDefault);
```

### <a name="parameters"></a>Parametri

*ptDefault*<br/>
Specifica il valore di punto predefinito.

### <a name="remarks"></a>Note

Utilizzare questa funzione per impostare un valore predefinito per l'oggetto di animazione. Questo metodi assegnano valori predefiniti per le coordinate X e Y del punto di animazione. Ricrea anche gli oggetti COM sottostanti se sono state create. Se si ha sottoscritto l'oggetto di animazione a eventi (ValueChanged o IntegerValueChanged), è necessario abilitare nuovamente questi eventi.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
