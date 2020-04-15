---
title: Classe CAnimationSize
ms.date: 11/04/2016
f1_keywords:
- CAnimationSize
- AFXANIMATIONCONTROLLER/CAnimationSize
- AFXANIMATIONCONTROLLER/CAnimationSize::CAnimationSize
- AFXANIMATIONCONTROLLER/CAnimationSize::AddTransition
- AFXANIMATIONCONTROLLER/CAnimationSize::GetCX
- AFXANIMATIONCONTROLLER/CAnimationSize::GetCY
- AFXANIMATIONCONTROLLER/CAnimationSize::GetDefaultValue
- AFXANIMATIONCONTROLLER/CAnimationSize::GetValue
- AFXANIMATIONCONTROLLER/CAnimationSize::SetDefaultValue
- AFXANIMATIONCONTROLLER/CAnimationSize::GetAnimationVariableList
- AFXANIMATIONCONTROLLER/CAnimationSize::m_cxValue
- AFXANIMATIONCONTROLLER/CAnimationSize::m_cyValue
helpviewer_keywords:
- CAnimationSize [MFC], CAnimationSize
- CAnimationSize [MFC], AddTransition
- CAnimationSize [MFC], GetCX
- CAnimationSize [MFC], GetCY
- CAnimationSize [MFC], GetDefaultValue
- CAnimationSize [MFC], GetValue
- CAnimationSize [MFC], SetDefaultValue
- CAnimationSize [MFC], GetAnimationVariableList
- CAnimationSize [MFC], m_cxValue
- CAnimationSize [MFC], m_cyValue
ms.assetid: ea06d1b5-502c-44a3-82ca-8bd6ba6a9364
ms.openlocfilehash: 80a90dfa37bc1d2c3c84e6451ae23af7ded767c2
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81369685"
---
# <a name="canimationsize-class"></a>Classe CAnimationSize

Implementa la funzionalità di un oggetto dimensioni le cui dimensioni possono essere animate.

## <a name="syntax"></a>Sintassi

```
class CAnimationSize : public CAnimationBaseObject;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAnimationSize::CAnimationSize](#canimationsize)|Di overload. Costruisce un oggetto dimensione animazione.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAnimationSize::AddTransition](#addtransition)|Aggiunge transizioni per Larghezza e Altezza.|
|[CAnimationSize::GetCX](#getcx)|Fornisce l'accesso a CAnimationVariable che rappresenta Width.|
|[CAnimationSize::GetCY](#getcy)|Fornisce l'accesso a CAnimationVariable che rappresenta Height.|
|[CAnimationSize::GetDefaultValue](#getdefaultvalue)|Restituisce i valori predefiniti per Larghezza e Altezza.|
|[CAnimationSize::GetValue](#getvalue)|Restituisce il valore corrente.|
|[CAnimationSize::SetDefaultValue](#setdefaultvalue)|Imposta il valore predefinito.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CAnimationSize::GetAnimationVariableList](#getanimationvariablelist)|Inserisce le variabili di animazione incapsulate in un elenco. (OverrideS [CAnimationBaseObject::GetAnimationVariableList](../../mfc/reference/canimationbaseobject-class.md#getanimationvariablelist).)|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAnimationSize::operator CSize](#operator_csize)|Converte un CAnimationSize a un CSize.|
|[CAnimationSize::operatore](#operator_eq)|Assegna szSrc a CAnimationSize.|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Descrizione|
|----------|-----------------|
|[CAnimationSize::m_cxValue](#m_cxvalue)|Variabile di animazione incapsulata che rappresenta la larghezza delle dimensioni dell'animazione.|
|[CAnimationSize::m_cyValue](#m_cyvalue)|Variabile di animazione incapsulata che rappresenta l'altezza delle dimensioni dell'animazione.|

## <a name="remarks"></a>Osservazioni

Il CAnimationSize classe incapsula due CAnimationVariable oggetti e può rappresentare nelle applicazioni una dimensione. Ad esempio, è possibile utilizzare questa classe per animare una dimensione di qualsiasi oggetto bidimensionale sullo schermo (come rettangolo, controllo e così via). To use this class in application, just instantiate an object of this class, add it to animation controller using CAnimationController::AddAnimationObject and call AddTransition for each transition to be applied to Width and/or Height.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[Oggetto CAnimationBaseObject](../../mfc/reference/canimationbaseobject-class.md)

`CAnimationSize`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

## <a name="canimationsizeaddtransition"></a><a name="addtransition"></a>CAnimationSize::AddTransition

Aggiunge transizioni per Larghezza e Altezza.

```
void AddTransition(
    CBaseTransition* pCXTransition,
    CBaseTransition* pCYTransition);
```

### <a name="parameters"></a>Parametri

*PCXTransizione*<br/>
Puntatore alla transizione per Width.

*PCYTransition (transizione)*<br/>
Puntatore alla transizione per Altezza.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per aggiungere le transizioni specificate all'elenco interno delle transizioni da applicare alle variabili di animazione per Width e Height. Quando si aggiungono transizioni, non vengono applicate immediatamente e archiviate in un elenco interno. Le transizioni vengono applicate (aggiunte a uno storyboard per un determinato valore) quando si chiama CAnimationController::AnimateGroup.Transitions are applied (added to a storyboard for a particular value) when you call CAnimationController::AnimateGroup. Se non è necessario applicare una transizione a una delle dimensioni, è possibile passare NULL.

## <a name="canimationsizecanimationsize"></a><a name="canimationsize"></a>CAnimationSize::CAnimationSize

Costruisce un oggetto dimensione animazione.

```
CAnimationSize();

CAnimationSize(
    const CSize& szDefault,
    UINT32 nGroupID,
    UINT32 nObjectID = (UINT32)-1,
    DWORD dwUserData = 0);
```

### <a name="parameters"></a>Parametri

*szDefault (predefinito)*<br/>
Specifica le dimensioni predefinite.

*nId gruppo*<br/>
Specifica l'ID gruppo.

*nObjectID (informazioni in stato in questo oggetto)*<br/>
Specifica l'ID oggetto.

*dwUserData (dati utente)*<br/>
Specifica i dati definiti dall'utente.

### <a name="remarks"></a>Osservazioni

L'oggetto viene costruito con i valori predefiniti per larghezza, altezza, ID oggetto e ID gruppo, che verranno impostati su 0. Possono essere modificati in un secondo momento in fase di esecuzione usando SetDefaultValue e SetID.They can be changed later at runtime using SetDefaultValue and SetID.

## <a name="canimationsizegetanimationvariablelist"></a><a name="getanimationvariablelist"></a>CAnimationSize::GetAnimationVariableList

Inserisce le variabili di animazione incapsulate in un elenco.

```
virtual void GetAnimationVariableList(
    CList<CAnimationVariable*,
    CAnimationVariable*>& lst);
```

### <a name="parameters"></a>Parametri

*Lst*<br/>
Quando la funzione termina, contiene puntatori a due CAnimationVariable oggetti che rappresentano la larghezza e l'altezza.

## <a name="canimationsizegetcx"></a><a name="getcx"></a>CAnimationSize::GetCX

Fornisce l'accesso a CAnimationVariable che rappresenta Width.

```
CAnimationVariable& GetCX();
```

### <a name="return-value"></a>Valore restituito

Riferimento all'incapsulato CAnimationVariable che rappresenta Width.

### <a name="remarks"></a>Osservazioni

È possibile chiamare questo metodo per ottenere l'accesso diretto a CAnimationVariable sottostante che rappresenta Width.You can call this method to get direct access to underlying CAnimationVariable representing Width.

## <a name="canimationsizegetcy"></a><a name="getcy"></a>CAnimationSize::GetCY

Fornisce l'accesso a CAnimationVariable che rappresenta Height.

```
CAnimationVariable& GetCY();
```

### <a name="return-value"></a>Valore restituito

Riferimento all'incapsulato CAnimationVariable che rappresenta Height.

### <a name="remarks"></a>Osservazioni

È possibile chiamare questo metodo per ottenere l'accesso diretto al sottostante CAnimationVariable che rappresenta Height.You can call this method to get direct access to underlying CAnimationVariable representing Height.

## <a name="canimationsizegetdefaultvalue"></a><a name="getdefaultvalue"></a>CAnimationSize::GetDefaultValue

Restituisce i valori predefiniti per Larghezza e Altezza.

```
CSize GetDefaultValue();
```

### <a name="return-value"></a>Valore restituito

Oggetto CSize oggetto contenente i valori predefiniti.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per recuperare il valore predefinito, precedentemente impostato dal costruttore o SetDefaultValue.Call this function to retrieve default value, which was previously set by constructor or SetDefaultValue.

## <a name="canimationsizegetvalue"></a><a name="getvalue"></a>CAnimationSize::GetValue

Restituisce il valore corrente.

```
BOOL GetValue(CSize& szValue);
```

### <a name="parameters"></a>Parametri

*Valore sz*<br/>
Output: Contiene il valore corrente quando questo metodo restituisce.

### <a name="return-value"></a>Valore restituito

TRUE, se il valore corrente è stato recuperato correttamente. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per recuperare il valore corrente delle dimensioni dell'animazione. Se questo metodo ha esito negativo o gli oggetti COM sottostanti per Width e Size non sono stati inizializzati, szValue contiene il valore predefinito, precedentemente impostato nel costruttore o da SetDefaultValue.

## <a name="canimationsizem_cxvalue"></a><a name="m_cxvalue"></a>CAnimationSize::m_cxValue

Variabile di animazione incapsulata che rappresenta la larghezza delle dimensioni dell'animazione.

```
CAnimationVariable m_cxValue;
```

## <a name="canimationsizem_cyvalue"></a><a name="m_cyvalue"></a>CAnimationSize::m_cyValue

Variabile di animazione incapsulata che rappresenta l'altezza delle dimensioni dell'animazione.

```
CAnimationVariable m_cyValue;
```

## <a name="canimationsizeoperator-csize"></a><a name="operator_csize"></a>CAnimationSize::operator CSize

Converte un CAnimationSize a un CSize.

```
operator CSize();
```

### <a name="return-value"></a>Valore restituito

Valore corrente delle dimensioni dell'animazione come CSize.

### <a name="remarks"></a>Osservazioni

Questa funzione chiama internamente GetValue.This function internally calls GetValue. Se GetValue per qualche motivo ha esito negativo, la dimensione restituita conterrà i valori predefiniti per Width e Height.

## <a name="canimationsizeoperator"></a><a name="operator_eq"></a>CAnimationSize::operatore

Assegna szSrc a CAnimationSize.

```
void operator=(const CSize& szSrc);
```

### <a name="parameters"></a>Parametri

*szSrc*<br/>
Fa riferimento a CSize o DIMENSIONE.

### <a name="remarks"></a>Osservazioni

Assegna szSrc a CAnimationSize. È consigliabile eseguire questa operazione prima dell'inizio dell'animazione, perché questo operatore chiama SetDefaultValue, che ricrea gli oggetti COM sottostanti per Width e Height se sono stati creati. Se hai sottoscritto questo oggetto di animazione agli eventi (ValueChanged o IntegerValueChanged), devi riattivare questi eventi.

## <a name="canimationsizesetdefaultvalue"></a><a name="setdefaultvalue"></a>CAnimationSize::SetDefaultValue

Imposta il valore predefinito.

```
void SetDefaultValue(const CSize& szDefault);
```

### <a name="parameters"></a>Parametri

*szDefault (predefinito)*<br/>
Specifica le nuove dimensioni predefinite.

### <a name="remarks"></a>Osservazioni

Utilizzare questa funzione per impostare un valore predefinito per l'oggetto di animazione. Questo metodo assegna valori predefiniti a Larghezza e Altezza delle dimensioni dell'animazione. Vengono inoltre ricreati gli oggetti COM sottostanti, se sono stati creati. Se hai sottoscritto questo oggetto di animazione agli eventi (ValueChanged o IntegerValueChanged), devi riattivare questi eventi.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
