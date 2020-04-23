---
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
ms.openlocfilehash: 273ea2b548d35722ebf937d2db2b589fef5e69fa
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81755128"
---
# <a name="canimationrect-class"></a>Classe CAnimationRect

Implementa la funzionalità di un rettangolo i cui lati possono essere animati.

## <a name="syntax"></a>Sintassi

```
class CAnimationRect : public CAnimationBaseObject;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAnimationRect::CAnimationRect](#canimationrect)|Di overload. Costruisce un oggetto rect di animazione.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAnimationRect::AddTransition](#addtransition)|Aggiunge transizioni per le coordinate sinistra, superiore, destra e inferiore.|
|[CAnimationRect::GetBottom](#getbottom)|Fornisce l'accesso a CAnimationVariable che rappresenta la coordinata inferiore.|
|[CAnimationRect::GetDefaultValue](#getdefaultvalue)|Restituisce i valori predefiniti per i limiti del rettangolo.|
|[CAnimationRect::GetLeft](#getleft)|Fornisce l'accesso a CAnimationVariable che rappresenta la coordinata sinistra.|
|[CAnimationRect::GetRight](#getright)|Fornisce l'accesso a CAnimationVariable che rappresenta la coordinata destra.|
|[CAnimationRect::GetTop](#gettop)|Fornisce l'accesso a CAnimationVariable che rappresenta la coordinata superiore.|
|[CAnimationRect::GetValue](#getvalue)|Restituisce il valore corrente.|
|[CAnimationRect::SetDefaultValue](#setdefaultvalue)|Imposta il valore predefinito.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CAnimationRect::GetAnimationVariableList](#getanimationvariablelist)|Inserisce le variabili di animazione incapsulate in un elenco. (OverrideS [CAnimationBaseObject::GetAnimationVariableList](../../mfc/reference/canimationbaseobject-class.md#getanimationvariablelist).)|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAnimationRect::operatore RECT](#operator_rect)|Converte un CAnimationRect a RECT.|
|[CAnimationRect::operatore](#operator_eq)|Assegna rect a CAnimationRect.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAnimationRect::m_bFixedSize](#m_bfixedsize)|Specifica se il rettangolo ha dimensioni fisse.|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Descrizione|
|----------|-----------------|
|[CAnimationRect::m_bottomValue](#m_bottomvalue)|Variabile di animazione incapsulata che rappresenta il limite inferiore del rettangolo di animazione.|
|[CAnimationRect::m_leftValue](#m_leftvalue)|Variabile di animazione incapsulata che rappresenta il limite sinistro del rettangolo di animazione.|
|[CAnimationRect::m_rightValue](#m_rightvalue)|Variabile di animazione incapsulata che rappresenta il limite destro del rettangolo di animazione.|
|[CAnimationRect::m_szInitial](#m_szinitial)|Specifica le dimensioni iniziali del rettangolo di animazione.|
|[CAnimationRect::m_topValue](#m_topvalue)|Variabile di animazione incapsulata che rappresenta il limite superiore del rettangolo di animazione.|

## <a name="remarks"></a>Osservazioni

Il CAnimationRect classe incapsula quattro CAnimationVariable oggetti e può rappresentare nelle applicazioni un rettangolo. Per usare questa classe nell'applicazione, è sufficiente creare un'istanza di un oggetto di questa classe, aggiungerlo al controller di animazione utilizzando CAnimationController::AddAnimationObject e chiamare AddTransition per ogni transizione da applicare alle coordinate sinistra, superiore destra e inferiore.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[Oggetto CAnimationBaseObject](../../mfc/reference/canimationbaseobject-class.md)

`CAnimationRect`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

## <a name="canimationrectaddtransition"></a><a name="addtransition"></a>CAnimationRect::AddTransition

Aggiunge transizioni per le coordinate sinistra, superiore, destra e inferiore.

```cpp
void AddTransition(
    CBaseTransition* pLeftTransition,
    CBaseTransition* pTopTransition,
    CBaseTransition* pRightTransition,
    CBaseTransition* pBottomTransition);
```

### <a name="parameters"></a>Parametri

*pLeftTransition (transizione)*<br/>
Specifica la transizione per il lato sinistro.

*pTopTransizione*<br/>
Specifica la transizione per il lato superiore.

*pRightTransizione*<br/>
Specifica la transizione per il lato destro.

*pBottomTransizione*<br/>
Specifica la transizione per il lato inferiore.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per aggiungere le transizioni specificate all'elenco interno delle transizioni da applicare alle variabili di animazione per ogni lato rettangolo. Quando si aggiungono transizioni, non vengono applicate immediatamente e archiviate in un elenco interno. Le transizioni vengono applicate (aggiunte a uno storyboard per un determinato valore) quando si chiama CAnimationController::AnimateGroup.Transitions are applied (added to a storyboard for a particular value) when you call CAnimationController::AnimateGroup. Se non è necessario applicare una transizione a uno dei lati del rettangolo, è possibile passare NULL.

## <a name="canimationrectcanimationrect"></a><a name="canimationrect"></a>CAnimationRect::CAnimationRect

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

*nId gruppo*<br/>
Specifica l'ID gruppo.

*nObjectID (informazioni in stato in questo oggetto)*<br/>
Specifica l'ID oggetto.

*dwUserData (dati utente)*<br/>
Specifica i dati definiti dall'utente.

*pt*<br/>
Coordinata dell'angolo superiore sinistro.

*Sz*<br/>
Dimensione del rettangolo.

*nLeft (Sinistra)*<br/>
Specifica la coordinata del limite sinistro.

*Ntop*<br/>
Specifica la coordinata del limite superiore.

*nDiritto*<br/>
Specifica la coordinata del limite destro.

*nIn basso*<br/>
Specifica la coordinata del limite inferiore.

### <a name="remarks"></a>Osservazioni

L'oggetto viene costruito con i valori predefiniti per left, top, right e bottom, Object ID e Group ID, che verranno impostati su 0. Possono essere modificati in un secondo momento in fase di esecuzione usando SetDefaultValue e SetID.They can be changed later at runtime using SetDefaultValue and SetID.

## <a name="canimationrectgetanimationvariablelist"></a><a name="getanimationvariablelist"></a>CAnimationRect::GetAnimationVariableList

Inserisce le variabili di animazione incapsulate in un elenco.

```
virtual void GetAnimationVariableList(
    CList<CAnimationVariable*,
    CAnimationVariable*>& lst);
```

### <a name="parameters"></a>Parametri

*Lst*<br/>
Quando la funzione restituisce, contiene puntatori a quattro CAnimationVariable oggetti che rappresentano le coordinate del rettangolo.

## <a name="canimationrectgetbottom"></a><a name="getbottom"></a>CAnimationRect::GetBottom

Fornisce l'accesso a CAnimationVariable che rappresenta la coordinata inferiore.

```
CAnimationVariable& GetBottom();
```

### <a name="return-value"></a>Valore restituito

Riferimento all'incapsulato CAnimationVariable che rappresenta la coordinata inferiore.

### <a name="remarks"></a>Osservazioni

È possibile chiamare questo metodo per ottenere l'accesso diretto a CAnimationVariable sottostante che rappresenta la coordinata inferiore.

## <a name="canimationrectgetdefaultvalue"></a><a name="getdefaultvalue"></a>CAnimationRect::GetDefaultValue

Restituisce i valori predefiniti per i limiti del rettangolo.

```
CRect GetDefaultValue();
```

### <a name="return-value"></a>Valore restituito

Valore CRect contenente i valori predefiniti per left, right, top e bottom.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per recuperare il valore predefinito, precedentemente impostato dal costruttore o SetDefaultValue.Call this function to retrieve default value, which was previously set by constructor or SetDefaultValue.

## <a name="canimationrectgetleft"></a><a name="getleft"></a>CAnimationRect::GetLeft

Fornisce l'accesso a CAnimationVariable che rappresenta la coordinata sinistra.

```
CAnimationVariable& GetLeft();
```

### <a name="return-value"></a>Valore restituito

Riferimento all'incapsulato CAnimationVariable che rappresenta la coordinata sinistra.

### <a name="remarks"></a>Osservazioni

È possibile chiamare questo metodo per ottenere l'accesso diretto a CAnimationVariable sottostante che rappresenta la coordinata sinistra.

## <a name="canimationrectgetright"></a><a name="getright"></a>CAnimationRect::GetRight

Fornisce l'accesso a CAnimationVariable che rappresenta la coordinata destra.

```
CAnimationVariable& GetRight();
```

### <a name="return-value"></a>Valore restituito

Riferimento all'incapsulato CAnimationVariable che rappresenta la coordinata destra.

### <a name="remarks"></a>Osservazioni

È possibile chiamare questo metodo per ottenere l'accesso diretto a CAnimationVariable sottostante che rappresenta la coordinata destra.

## <a name="canimationrectgettop"></a><a name="gettop"></a>CAnimationRect::GetTop

Fornisce l'accesso a CAnimationVariable che rappresenta la coordinata superiore.

```
CAnimationVariable& GetTop();
```

### <a name="return-value"></a>Valore restituito

Riferimento all'incapsulato CAnimationVariable che rappresenta la coordinata superiore.

### <a name="remarks"></a>Osservazioni

È possibile chiamare questo metodo per ottenere l'accesso diretto a CAnimationVariable sottostante che rappresenta la coordinata superiore.

## <a name="canimationrectgetvalue"></a><a name="getvalue"></a>CAnimationRect::GetValue

Restituisce il valore corrente.

```
BOOL GetValue(CRect& rect);
```

### <a name="parameters"></a>Parametri

*Rect*<br/>
Output: Contiene il valore corrente quando questo metodo restituisce.

### <a name="return-value"></a>Valore restituito

TRUE, se il valore corrente è stato recuperato correttamente. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per recuperare il valore corrente del rettangolo di animazione. Se questo metodo ha esito negativo o gli oggetti COM sottostanti per left, top, right e bottom non sono stati inizializzati, rect contiene il valore predefinito, precedentemente impostato nel costruttore o da SetDefaultValue.

## <a name="canimationrectm_bfixedsize"></a><a name="m_bfixedsize"></a>CAnimationRect::m_bFixedSize

Specifica se il rettangolo ha dimensioni fisse.

```
BOOL m_bFixedSize;
```

### <a name="remarks"></a>Osservazioni

Se questo membro è true, la dimensione del rettangolo è fissa e i valori destro e inferiore vengono ricalcolati ogni volta che l'angolo superiore sinistro viene spostato in base alle dimensioni fisse. Impostare questo valore su TRUE per spostare facilmente il rettangolo sullo schermo. In questo caso le transizioni applicate alle coordinate destra e inferiore vengono ignorate. La dimensione viene archiviata internamente quando si costruisce l'oggetto e/o si chiama SetDefaultValue. Per impostazione predefinita, questo membro è impostato su FALSE.

## <a name="canimationrectm_bottomvalue"></a><a name="m_bottomvalue"></a>CAnimationRect::m_bottomValue

Variabile di animazione incapsulata che rappresenta il limite inferiore del rettangolo di animazione.

```
CAnimationVariable m_bottomValue;
```

## <a name="canimationrectm_leftvalue"></a><a name="m_leftvalue"></a>CAnimationRect::m_leftValue

Variabile di animazione incapsulata che rappresenta il limite sinistro del rettangolo di animazione.

```
CAnimationVariable m_leftValue;
```

## <a name="canimationrectm_rightvalue"></a><a name="m_rightvalue"></a>CAnimationRect::m_rightValue

Variabile di animazione incapsulata che rappresenta il limite destro del rettangolo di animazione.

```
CAnimationVariable m_rightValue;
```

## <a name="canimationrectm_szinitial"></a><a name="m_szinitial"></a>CAnimationRect::m_szInitial

Specifica le dimensioni iniziali del rettangolo di animazione.

```
CSize m_szInitial;
```

## <a name="canimationrectm_topvalue"></a><a name="m_topvalue"></a>CAnimationRect::m_topValue

Variabile di animazione incapsulata che rappresenta il limite superiore del rettangolo di animazione.

```
CAnimationVariable m_topValue;
```

## <a name="canimationrectoperator-rect"></a><a name="operator_rect"></a>CAnimationRect::operatore RECT

Converte un CAnimationRect a RECT.

```
operator RECT();
```

### <a name="return-value"></a>Valore restituito

Valore corrente del rettangolo di animazione come RECT.

### <a name="remarks"></a>Osservazioni

Questa funzione chiama internamente GetValue.This function internally calls GetValue. Se GetValue per qualche motivo ha esito negativo, il VALORE restituito RECT conterrà i valori predefiniti per tutte le coordinate del rettangolo.

## <a name="canimationrectoperator"></a><a name="operator_eq"></a>CAnimationRect::operatore

Assegna rect a CAnimationRect.

```cpp
void operator=(const RECT& rect);
```

### <a name="parameters"></a>Parametri

*Rect*<br/>
Nuovo valore del rettangolo di animazione.

### <a name="remarks"></a>Osservazioni

È consigliabile eseguire questa operazione prima dell'avvio dell'animazione, perché questo operatore chiama SetDefaultValue, che ricrea gli oggetti COM sottostanti per i componenti di colore se sono stati creati. Se hai sottoscritto questo oggetto di animazione agli eventi (ValueChanged o IntegerValueChanged), devi riattivare questi eventi.

## <a name="canimationrectsetdefaultvalue"></a><a name="setdefaultvalue"></a>CAnimationRect::SetDefaultValue

Imposta il valore predefinito.

```cpp
void SetDefaultValue(const CRect& rect);
```

### <a name="parameters"></a>Parametri

*Rect*<br/>
Specifica i nuovi valori predefiniti per sinistra, superiore, destra e inferiore.

### <a name="remarks"></a>Osservazioni

Utilizzare questa funzione per impostare un valore predefinito per l'oggetto di animazione. Questo metodo assegna valori predefiniti ai limiti del rettangolo. Vengono inoltre ricreati gli oggetti COM sottostanti, se sono stati creati. Se hai sottoscritto questo oggetto di animazione agli eventi (ValueChanged o IntegerValueChanged), devi riattivare questi eventi.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
