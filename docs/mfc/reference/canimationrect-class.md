---
description: 'Altre informazioni su: classe CAnimationRect'
title: Classe CAnimationRect
ms.date: 11/04/2016
f1_keywords:
- CAnimationRect
- AFXANIMATIONCONTROLLER/CAnimationRect
- AFXANIMATIONCONTROLLER/CAnimationRect::CAnimationRect
- AFXANIMATIONCONTROLLER/CAnimationRect::AddTransition
- AFXANIMATIONCONTROLLER/CAnimationRect::GetBottom
- AFXANIMATIONCONTROLLER/CAnimationRect::GetDefaultValue
- AFXANIMATIONCONTROLLER/CAnimationRect::GetLeft
- AFXANIMATIONCONTROLLER/CAnimationRect::GetRight
- AFXANIMATIONCONTROLLER/CAnimationRect::GetTop
- AFXANIMATIONCONTROLLER/CAnimationRect::GetValue
- AFXANIMATIONCONTROLLER/CAnimationRect::SetDefaultValue
- AFXANIMATIONCONTROLLER/CAnimationRect::GetAnimationVariableList
- AFXANIMATIONCONTROLLER/CAnimationRect::m_bFixedSize
- AFXANIMATIONCONTROLLER/CAnimationRect::m_bottomValue
- AFXANIMATIONCONTROLLER/CAnimationRect::m_leftValue
- AFXANIMATIONCONTROLLER/CAnimationRect::m_rightValue
- AFXANIMATIONCONTROLLER/CAnimationRect::m_szInitial
- AFXANIMATIONCONTROLLER/CAnimationRect::m_topValue
helpviewer_keywords:
- CAnimationRect [MFC], CAnimationRect
- CAnimationRect [MFC], AddTransition
- CAnimationRect [MFC], GetBottom
- CAnimationRect [MFC], GetDefaultValue
- CAnimationRect [MFC], GetLeft
- CAnimationRect [MFC], GetRight
- CAnimationRect [MFC], GetTop
- CAnimationRect [MFC], GetValue
- CAnimationRect [MFC], SetDefaultValue
- CAnimationRect [MFC], GetAnimationVariableList
- CAnimationRect [MFC], m_bFixedSize
- CAnimationRect [MFC], m_bottomValue
- CAnimationRect [MFC], m_leftValue
- CAnimationRect [MFC], m_rightValue
- CAnimationRect [MFC], m_szInitial
- CAnimationRect [MFC], m_topValue
ms.assetid: 0294156d-241e-4a57-92b2-31234fe557d6
ms.openlocfilehash: 590b1382992a32e0eb3d49e0ea562d10193c1990
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97207891"
---
# <a name="canimationrect-class"></a>Classe CAnimationRect

Implementa la funzionalità di un rettangolo i cui lati possono essere animati.

## <a name="syntax"></a>Sintassi

```
class CAnimationRect : public CAnimationBaseObject;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CAnimationRect:: CAnimationRect](#canimationrect)|Di overload. Costruisce un oggetto Rect dell'animazione.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CAnimationRect:: AddTransition](#addtransition)|Aggiunge le transizioni per le coordinate Left, top, Right e Bottom.|
|[CAnimationRect:: GetBottom](#getbottom)|Fornisce l'accesso a CAnimationVariable che rappresenta la coordinata inferiore.|
|[CAnimationRect:: GetDefaultValue](#getdefaultvalue)|Restituisce i valori predefiniti per i limiti del rettangolo.|
|[CAnimationRect:: GetLeft](#getleft)|Fornisce l'accesso a CAnimationVariable che rappresenta la coordinata sinistra.|
|[CAnimationRect:: GetRight](#getright)|Fornisce l'accesso a CAnimationVariable che rappresenta la coordinata destra.|
|[CAnimationRect:: GetTop](#gettop)|Fornisce l'accesso a CAnimationVariable che rappresenta la coordinata superiore.|
|[CAnimationRect:: GetValue](#getvalue)|Restituisce il valore corrente.|
|[CAnimationRect:: sedefaultvalue](#setdefaultvalue)|Imposta il valore predefinito.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Description|
|----------|-----------------|
|[CAnimationRect:: GetAnimationVariableList](#getanimationvariablelist)|Inserisce le variabili di animazione incapsulate in un elenco. Esegue l'override di [CAnimationBaseObject:: GetAnimationVariableList](../../mfc/reference/canimationbaseobject-class.md#getanimationvariablelist).|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[CAnimationRect:: operator RECT](#operator_rect)|Converte un CAnimationRect in RECT.|
|[CAnimationRect:: operator =](#operator_eq)|Assegna Rect a CAnimationRect.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CAnimationRect:: m_bFixedSize](#m_bfixedsize)|Specifica se le dimensioni del rettangolo sono fisse.|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Description|
|----------|-----------------|
|[CAnimationRect:: m_bottomValue](#m_bottomvalue)|Variabile di animazione incapsulata che rappresenta il limite inferiore del rettangolo di animazione.|
|[CAnimationRect:: m_leftValue](#m_leftvalue)|Variabile di animazione incapsulata che rappresenta il limite sinistro del rettangolo di animazione.|
|[CAnimationRect:: m_rightValue](#m_rightvalue)|Variabile di animazione incapsulata che rappresenta il limite destro del rettangolo di animazione.|
|[CAnimationRect:: m_szInitial](#m_szinitial)|Specifica le dimensioni iniziali del rettangolo di animazione.|
|[CAnimationRect:: m_topValue](#m_topvalue)|Variabile di animazione incapsulata che rappresenta il limite superiore del rettangolo di animazione.|

## <a name="remarks"></a>Commenti

La classe CAnimationRect incapsula quattro oggetti CAnimationVariable e può rappresentare nelle applicazioni un rettangolo. Per usare questa classe nell'applicazione, è sufficiente creare un'istanza di un oggetto di questa classe, aggiungerla al controller di animazione usando CAnimationController:: AddAnimationObject e chiamare AddTransition per ogni transizione da applicare alle coordinate Left, right top e Bottom.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CAnimationBaseObject](../../mfc/reference/canimationbaseobject-class.md)

`CAnimationRect`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

## <a name="canimationrectaddtransition"></a><a name="addtransition"></a> CAnimationRect:: AddTransition

Aggiunge le transizioni per le coordinate Left, top, Right e Bottom.

```cpp
void AddTransition(
    CBaseTransition* pLeftTransition,
    CBaseTransition* pTopTransition,
    CBaseTransition* pRightTransition,
    CBaseTransition* pBottomTransition);
```

### <a name="parameters"></a>Parametri

*pLeftTransition*<br/>
Specifica la transizione per il lato sinistro.

*pTopTransition*<br/>
Specifica la transizione per il lato superiore.

*pRightTransition*<br/>
Specifica la transizione per il lato destro.

*pBottomTransition*<br/>
Specifica la transizione per il lato inferiore.

### <a name="remarks"></a>Commenti

Chiamare questa funzione per aggiungere le transizioni specificate all'elenco interno di transizioni da applicare alle variabili di animazione per ogni lato del rettangolo. Quando si aggiungono transizioni, queste non vengono applicate immediatamente e archiviate in un elenco interno. Le transizioni vengono applicate (aggiunte a uno storyboard per un particolare valore) quando si chiama CAnimationController:: AnimateGroup. Se non è necessario applicare una transizione a uno dei lati del rettangolo, è possibile passare NULL.

## <a name="canimationrectcanimationrect"></a><a name="canimationrect"></a> CAnimationRect:: CAnimationRect

Costruisce un oggetto CAnimationRect.

```
CAnimationRect();

CAnimationRect(
    const CRect& rect,
    UINT32 nGroupID,
    UINT32 nObjectID = (UINT32)-1,
    DWORD dwUserData = 0);

CAnimationRect(
    const CPoint& pt,
    const CSize& sz,
    UINT32 nGroupID,
    UINT32 nObjectID = (UINT32)-1,
    DWORD dwUserData = 0);

CAnimationRect(
    int nLeft,
    int nTop,
    int nRight,
    int nBottom,
    UINT32 nGroupID,
    UINT32 nObjectID = (UINT32)-1,
    DWORD dwUserData = 0);
```

### <a name="parameters"></a>Parametri

*Rect*<br/>
Specifica il rettangolo predefinito.

*nGroupID*<br/>
Specifica l'ID gruppo.

*nObjectID*<br/>
Specifica l'ID oggetto.

*dwUserData*<br/>
Specifica i dati definiti dall'utente.

*pt*<br/>
Coordinata dell'angolo superiore sinistro.

*SZ*<br/>
Dimensioni del rettangolo.

*nLeft*<br/>
Specifica la coordinata del limite sinistro.

*nTop*<br/>
Specifica la coordinata del limite superiore.

*nRight*<br/>
Specifica la coordinata del limite destro.

*nBottom*<br/>
Specifica la coordinata del limite inferiore.

### <a name="remarks"></a>Commenti

L'oggetto viene costruito con i valori predefiniti per left, top, Right e Bottom, ID oggetto e ID gruppo, che verrà impostato su 0. Questi elementi possono essere modificati in un secondo momento in fase di esecuzione tramite sedefaultvalue e SetId.

## <a name="canimationrectgetanimationvariablelist"></a><a name="getanimationvariablelist"></a> CAnimationRect:: GetAnimationVariableList

Inserisce le variabili di animazione incapsulate in un elenco.

```
virtual void GetAnimationVariableList(
    CList<CAnimationVariable*,
    CAnimationVariable*>& lst);
```

### <a name="parameters"></a>Parametri

*LST*<br/>
Quando la funzione restituisce un risultato, contiene puntatori a quattro oggetti CAnimationVariable che rappresentano le coordinate del rettangolo.

## <a name="canimationrectgetbottom"></a><a name="getbottom"></a> CAnimationRect:: GetBottom

Fornisce l'accesso a CAnimationVariable che rappresenta la coordinata inferiore.

```
CAnimationVariable& GetBottom();
```

### <a name="return-value"></a>Valore restituito

Riferimento a CAnimationVariable incapsulato che rappresenta la coordinata inferiore.

### <a name="remarks"></a>Commenti

È possibile chiamare questo metodo per ottenere l'accesso diretto ai CAnimationVariable sottostanti che rappresentano la coordinata inferiore.

## <a name="canimationrectgetdefaultvalue"></a><a name="getdefaultvalue"></a> CAnimationRect:: GetDefaultValue

Restituisce i valori predefiniti per i limiti del rettangolo.

```
CRect GetDefaultValue();
```

### <a name="return-value"></a>Valore restituito

Valore CRect contenente i valori predefiniti per left, right, Top e Bottom.

### <a name="remarks"></a>Commenti

Chiamare questa funzione per recuperare il valore predefinito, precedentemente impostato dal costruttore o da DefaultValue.

## <a name="canimationrectgetleft"></a><a name="getleft"></a> CAnimationRect:: GetLeft

Fornisce l'accesso a CAnimationVariable che rappresenta la coordinata sinistra.

```
CAnimationVariable& GetLeft();
```

### <a name="return-value"></a>Valore restituito

Riferimento a CAnimationVariable incapsulato che rappresenta la coordinata sinistra.

### <a name="remarks"></a>Commenti

È possibile chiamare questo metodo per ottenere l'accesso diretto ai CAnimationVariable sottostanti che rappresentano la coordinata sinistra.

## <a name="canimationrectgetright"></a><a name="getright"></a> CAnimationRect:: GetRight

Fornisce l'accesso a CAnimationVariable che rappresenta la coordinata destra.

```
CAnimationVariable& GetRight();
```

### <a name="return-value"></a>Valore restituito

Riferimento a CAnimationVariable incapsulato che rappresenta la coordinata destra.

### <a name="remarks"></a>Commenti

È possibile chiamare questo metodo per ottenere l'accesso diretto ai CAnimationVariable sottostanti che rappresentano la coordinata destra.

## <a name="canimationrectgettop"></a><a name="gettop"></a> CAnimationRect:: GetTop

Fornisce l'accesso a CAnimationVariable che rappresenta la coordinata superiore.

```
CAnimationVariable& GetTop();
```

### <a name="return-value"></a>Valore restituito

Riferimento a CAnimationVariable incapsulato che rappresenta la coordinata superiore.

### <a name="remarks"></a>Commenti

È possibile chiamare questo metodo per ottenere l'accesso diretto ai CAnimationVariable sottostanti che rappresentano la coordinata superiore.

## <a name="canimationrectgetvalue"></a><a name="getvalue"></a> CAnimationRect:: GetValue

Restituisce il valore corrente.

```
BOOL GetValue(CRect& rect);
```

### <a name="parameters"></a>Parametri

*Rect*<br/>
Output: Contiene il valore corrente quando il metodo restituisce.

### <a name="return-value"></a>Valore restituito

TRUE se il valore corrente è stato recuperato correttamente; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Chiamare questa funzione per recuperare il valore corrente del rettangolo di animazione. Se questo metodo ha esito negativo o gli oggetti COM sottostanti per left, top, Right e Bottom non sono stati inizializzati, Rect contiene il valore predefinito, che è stato precedentemente impostato nel costruttore o da DefaultValue.

## <a name="canimationrectm_bfixedsize"></a><a name="m_bfixedsize"></a> CAnimationRect:: m_bFixedSize

Specifica se le dimensioni del rettangolo sono fisse.

```
BOOL m_bFixedSize;
```

### <a name="remarks"></a>Commenti

Se questo membro è true, le dimensioni del rettangolo sono fisse e i valori a destra e in basso vengono ricalcolati ogni volta che l'angolo superiore sinistro viene spostato in base alle dimensioni fisse. Impostare questo valore su TRUE per spostare facilmente il rettangolo intorno allo schermo. In questo caso le transizioni applicate alle coordinate destra e inferiore vengono ignorate. La dimensione viene archiviata internamente quando si costruisce l'oggetto e/o si chiama l'oggetto DefaultValue. Per impostazione predefinita, questo membro è impostato su FALSE.

## <a name="canimationrectm_bottomvalue"></a><a name="m_bottomvalue"></a> CAnimationRect:: m_bottomValue

Variabile di animazione incapsulata che rappresenta il limite inferiore del rettangolo di animazione.

```
CAnimationVariable m_bottomValue;
```

## <a name="canimationrectm_leftvalue"></a><a name="m_leftvalue"></a> CAnimationRect:: m_leftValue

Variabile di animazione incapsulata che rappresenta il limite sinistro del rettangolo di animazione.

```
CAnimationVariable m_leftValue;
```

## <a name="canimationrectm_rightvalue"></a><a name="m_rightvalue"></a> CAnimationRect:: m_rightValue

Variabile di animazione incapsulata che rappresenta il limite destro del rettangolo di animazione.

```
CAnimationVariable m_rightValue;
```

## <a name="canimationrectm_szinitial"></a><a name="m_szinitial"></a> CAnimationRect:: m_szInitial

Specifica le dimensioni iniziali del rettangolo di animazione.

```
CSize m_szInitial;
```

## <a name="canimationrectm_topvalue"></a><a name="m_topvalue"></a> CAnimationRect:: m_topValue

Variabile di animazione incapsulata che rappresenta il limite superiore del rettangolo di animazione.

```
CAnimationVariable m_topValue;
```

## <a name="canimationrectoperator-rect"></a><a name="operator_rect"></a> CAnimationRect:: operator RECT

Converte un CAnimationRect in RECT.

```
operator RECT();
```

### <a name="return-value"></a>Valore restituito

Valore corrente del rettangolo di animazione come RECT.

### <a name="remarks"></a>Commenti

Questa funzione chiama internamente GetValue. Se per qualche motivo GetValue ha esito negativo, il RECT restituito conterrà i valori predefiniti per tutte le coordinate del rettangolo.

## <a name="canimationrectoperator"></a><a name="operator_eq"></a> CAnimationRect:: operator =

Assegna Rect a CAnimationRect.

```cpp
void operator=(const RECT& rect);
```

### <a name="parameters"></a>Parametri

*Rect*<br/>
Nuovo valore del rettangolo dell'animazione.

### <a name="remarks"></a>Commenti

È consigliabile eseguire questa operazione prima dell'avvio dell'animazione, perché questo operatore chiama DefaultValue, che ricrea gli oggetti COM sottostanti per i componenti di colore se sono stati creati. Se l'oggetto animazione è stato sottoscritto agli eventi (ValueChanged o IntegerValueChanged), è necessario riabilitare questi eventi.

## <a name="canimationrectsetdefaultvalue"></a><a name="setdefaultvalue"></a> CAnimationRect:: sedefaultvalue

Imposta il valore predefinito.

```cpp
void SetDefaultValue(const CRect& rect);
```

### <a name="parameters"></a>Parametri

*Rect*<br/>
Specifica i nuovi valori predefiniti per left, top, Right e Bottom.

### <a name="remarks"></a>Commenti

Utilizzare questa funzione per impostare un valore predefinito per l'oggetto di animazione. Questo metodo assegna i valori predefiniti ai limiti del rettangolo. Vengono inoltre ricreati gli oggetti COM sottostanti se sono stati creati. Se l'oggetto animazione è stato sottoscritto agli eventi (ValueChanged o IntegerValueChanged), è necessario riabilitare questi eventi.

## <a name="see-also"></a>Vedi anche

[Classi](../../mfc/reference/mfc-classes.md)
