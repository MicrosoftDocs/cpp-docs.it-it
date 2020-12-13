---
description: 'Altre informazioni su: classe CAnimationSize'
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
ms.openlocfilehash: 894675c485077291c3fca35acfb9bfa9a3d10286
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97336770"
---
# <a name="canimationsize-class"></a>Classe CAnimationSize

Implementa la funzionalità di un oggetto dimensioni le cui dimensioni possono essere animate.

## <a name="syntax"></a>Sintassi

```
class CAnimationSize : public CAnimationBaseObject;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CAnimationSize:: CAnimationSize](#canimationsize)|Di overload. Costruisce un oggetto delle dimensioni dell'animazione.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CAnimationSize:: AddTransition](#addtransition)|Aggiunge transizioni per larghezza e altezza.|
|[CAnimationSize:: GetCX](#getcx)|Fornisce l'accesso a CAnimationVariable che rappresenta la larghezza.|
|[CAnimationSize:: GetCY](#getcy)|Fornisce l'accesso a CAnimationVariable che rappresenta l'altezza.|
|[CAnimationSize:: GetDefaultValue](#getdefaultvalue)|Restituisce i valori predefiniti per larghezza e altezza.|
|[CAnimationSize:: GetValue](#getvalue)|Restituisce il valore corrente.|
|[CAnimationSize:: sedefaultvalue](#setdefaultvalue)|Imposta il valore predefinito.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Description|
|----------|-----------------|
|[CAnimationSize:: GetAnimationVariableList](#getanimationvariablelist)|Inserisce le variabili di animazione incapsulate in un elenco. Esegue l'override di [CAnimationBaseObject:: GetAnimationVariableList](../../mfc/reference/canimationbaseobject-class.md#getanimationvariablelist).|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[CAnimationSize:: operator CSize](#operator_csize)|Converte un CAnimationSize in un CSize.|
|[CAnimationSize:: operator =](#operator_eq)|Assegna szSrc a CAnimationSize.|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Description|
|----------|-----------------|
|[CAnimationSize:: m_cxValue](#m_cxvalue)|Variabile di animazione incapsulata che rappresenta la larghezza delle dimensioni dell'animazione.|
|[CAnimationSize:: m_cyValue](#m_cyvalue)|Variabile di animazione incapsulata che rappresenta l'altezza delle dimensioni dell'animazione.|

## <a name="remarks"></a>Commenti

La classe CAnimationSize incapsula due oggetti CAnimationVariable e può rappresentare nelle applicazioni una dimensione. Ad esempio, è possibile usare questa classe per animare una dimensione di qualsiasi oggetto bidimensionale sullo schermo, ad esempio rettangolo, controllo e così via. Per usare questa classe nell'applicazione, è sufficiente creare un'istanza di un oggetto di questa classe, aggiungerla al controller di animazione usando CAnimationController:: AddAnimationObject e chiamare AddTransition per ogni transizione da applicare alla larghezza e/o all'altezza.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CAnimationBaseObject](../../mfc/reference/canimationbaseobject-class.md)

`CAnimationSize`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

## <a name="canimationsizeaddtransition"></a><a name="addtransition"></a> CAnimationSize:: AddTransition

Aggiunge transizioni per larghezza e altezza.

```cpp
void AddTransition(
    CBaseTransition* pCXTransition,
    CBaseTransition* pCYTransition);
```

### <a name="parameters"></a>Parametri

*pCXTransition*<br/>
Puntatore alla transizione per la larghezza.

*pCYTransition*<br/>
Puntatore alla transizione per l'altezza.

### <a name="remarks"></a>Commenti

Chiamare questa funzione per aggiungere le transizioni specificate all'elenco interno di transizioni da applicare alle variabili di animazione per larghezza e altezza. Quando si aggiungono transizioni, queste non vengono applicate immediatamente e archiviate in un elenco interno. Le transizioni vengono applicate (aggiunte a uno storyboard per un particolare valore) quando si chiama CAnimationController:: AnimateGroup. Se non è necessario applicare una transizione a una delle dimensioni, è possibile passare NULL.

## <a name="canimationsizecanimationsize"></a><a name="canimationsize"></a> CAnimationSize:: CAnimationSize

Costruisce un oggetto delle dimensioni dell'animazione.

```
CAnimationSize();

CAnimationSize(
    const CSize& szDefault,
    UINT32 nGroupID,
    UINT32 nObjectID = (UINT32)-1,
    DWORD dwUserData = 0);
```

### <a name="parameters"></a>Parametri

*szDefault*<br/>
Specifica le dimensioni predefinite.

*nGroupID*<br/>
Specifica l'ID gruppo.

*nObjectID*<br/>
Specifica l'ID oggetto.

*dwUserData*<br/>
Specifica i dati definiti dall'utente.

### <a name="remarks"></a>Commenti

L'oggetto viene costruito con i valori predefiniti per larghezza, altezza, ID oggetto e ID gruppo, che verrà impostato su 0. Questi elementi possono essere modificati in un secondo momento in fase di esecuzione tramite sedefaultvalue e SetId.

## <a name="canimationsizegetanimationvariablelist"></a><a name="getanimationvariablelist"></a> CAnimationSize:: GetAnimationVariableList

Inserisce le variabili di animazione incapsulate in un elenco.

```
virtual void GetAnimationVariableList(
    CList<CAnimationVariable*,
    CAnimationVariable*>& lst);
```

### <a name="parameters"></a>Parametri

*LST*<br/>
Quando la funzione restituisce un risultato, contiene puntatori a due oggetti CAnimationVariable che rappresentano la larghezza e l'altezza.

## <a name="canimationsizegetcx"></a><a name="getcx"></a> CAnimationSize:: GetCX

Fornisce l'accesso a CAnimationVariable che rappresenta la larghezza.

```
CAnimationVariable& GetCX();
```

### <a name="return-value"></a>Valore restituito

Riferimento a CAnimationVariable incapsulato che rappresenta la larghezza.

### <a name="remarks"></a>Commenti

È possibile chiamare questo metodo per ottenere l'accesso diretto ai CAnimationVariable sottostanti che rappresentano la larghezza.

## <a name="canimationsizegetcy"></a><a name="getcy"></a> CAnimationSize:: GetCY

Fornisce l'accesso a CAnimationVariable che rappresenta l'altezza.

```
CAnimationVariable& GetCY();
```

### <a name="return-value"></a>Valore restituito

Riferimento a CAnimationVariable incapsulati che rappresenta l'altezza.

### <a name="remarks"></a>Commenti

È possibile chiamare questo metodo per ottenere l'accesso diretto ai CAnimationVariable sottostanti che rappresentano l'altezza.

## <a name="canimationsizegetdefaultvalue"></a><a name="getdefaultvalue"></a> CAnimationSize:: GetDefaultValue

Restituisce i valori predefiniti per larghezza e altezza.

```
CSize GetDefaultValue();
```

### <a name="return-value"></a>Valore restituito

Oggetto CSize che contiene i valori predefiniti.

### <a name="remarks"></a>Commenti

Chiamare questa funzione per recuperare il valore predefinito, precedentemente impostato dal costruttore o da DefaultValue.

## <a name="canimationsizegetvalue"></a><a name="getvalue"></a> CAnimationSize:: GetValue

Restituisce il valore corrente.

```
BOOL GetValue(CSize& szValue);
```

### <a name="parameters"></a>Parametri

*szValue*<br/>
Output: Contiene il valore corrente quando il metodo restituisce.

### <a name="return-value"></a>Valore restituito

TRUE se il valore corrente è stato recuperato correttamente; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Chiamare questa funzione per recuperare il valore corrente delle dimensioni dell'animazione. Se questo metodo ha esito negativo o gli oggetti COM sottostanti per la larghezza e la dimensione non sono stati inizializzati, szValue contiene il valore predefinito, che è stato precedentemente impostato nel costruttore o da DefaultValue.

## <a name="canimationsizem_cxvalue"></a><a name="m_cxvalue"></a> CAnimationSize:: m_cxValue

Variabile di animazione incapsulata che rappresenta la larghezza delle dimensioni dell'animazione.

```
CAnimationVariable m_cxValue;
```

## <a name="canimationsizem_cyvalue"></a><a name="m_cyvalue"></a> CAnimationSize:: m_cyValue

Variabile di animazione incapsulata che rappresenta l'altezza delle dimensioni dell'animazione.

```
CAnimationVariable m_cyValue;
```

## <a name="canimationsizeoperator-csize"></a><a name="operator_csize"></a> CAnimationSize:: operator CSize

Converte un CAnimationSize in un CSize.

```
operator CSize();
```

### <a name="return-value"></a>Valore restituito

Valore corrente delle dimensioni dell'animazione come CSize.

### <a name="remarks"></a>Commenti

Questa funzione chiama internamente GetValue. Se il GetValue per qualche motivo ha esito negativo, la dimensione restituita conterrà i valori predefiniti per larghezza e altezza.

## <a name="canimationsizeoperator"></a><a name="operator_eq"></a> CAnimationSize:: operator =

Assegna szSrc a CAnimationSize.

```cpp
void operator=(const CSize& szSrc);
```

### <a name="parameters"></a>Parametri

*szSrc*<br/>
Fa riferimento a CSize o SIZE.

### <a name="remarks"></a>Commenti

Assegna szSrc a CAnimationSize. È consigliabile eseguire questa operazione prima dell'avvio dell'animazione, perché questo operatore chiama DefaultValue, che ricrea gli oggetti COM sottostanti per la larghezza e l'altezza, se sono stati creati. Se l'oggetto animazione è stato sottoscritto agli eventi (ValueChanged o IntegerValueChanged), è necessario riabilitare questi eventi.

## <a name="canimationsizesetdefaultvalue"></a><a name="setdefaultvalue"></a> CAnimationSize:: sedefaultvalue

Imposta il valore predefinito.

```cpp
void SetDefaultValue(const CSize& szDefault);
```

### <a name="parameters"></a>Parametri

*szDefault*<br/>
Specifica le nuove dimensioni predefinite.

### <a name="remarks"></a>Commenti

Utilizzare questa funzione per impostare un valore predefinito per l'oggetto di animazione. Questo metodo assegna i valori predefiniti a larghezza e altezza delle dimensioni dell'animazione. Vengono inoltre ricreati gli oggetti COM sottostanti se sono stati creati. Se l'oggetto animazione è stato sottoscritto agli eventi (ValueChanged o IntegerValueChanged), è necessario riabilitare questi eventi.

## <a name="see-also"></a>Vedi anche

[Classi](../../mfc/reference/mfc-classes.md)
