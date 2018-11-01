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
ms.openlocfilehash: 4e782a9325360b69e33dfaf6a3b0649d9368b32b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50540179"
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
|[CAnimationRect::CAnimationRect](#canimationrect)|Di overload. Costruisce un oggetto di animazione rect.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAnimationRect::AddTransition](#addtransition)|Aggiunge le transizioni per le coordinate di sinistra, superiore, destro e inferiore.|
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
|[CAnimationRect::GetAnimationVariableList](#getanimationvariablelist)|Inserisce le variabili di animazione incapsulato in un elenco. (Esegue l'override [CAnimationBaseObject:: GetAnimationVariableList](../../mfc/reference/canimationbaseobject-class.md#getanimationvariablelist).)|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAnimationRect::operator RECT](#operator_rect)|Converte un CAnimationRect Rect.|
|[CAnimationRect::operator =](#operator_eq)|Assegna CAnimationRect rect.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAnimationRect::m_bFixedSize](#m_bfixedsize)|Specifica se il rettangolo con dimensioni fisse.|

### <a name="protected-data-members"></a>Membri dati protetti

|nome|Descrizione|
|----------|-----------------|
|[CAnimationRect::m_bottomValue](#m_bottomvalue)|La variabile di animazione incapsulato che nella parte inferiore rappresenta il limite del rettangolo di animazione.|
|[CAnimationRect::m_leftValue](#m_leftvalue)|La variabile di animazione incapsulato che a sinistra rappresenta il limite del rettangolo di animazione.|
|[CAnimationRect::m_rightValue](#m_rightvalue)|La variabile di animazione incapsulato che a destra rappresenta il limite del rettangolo di animazione.|
|[CAnimationRect::m_szInitial](#m_szinitial)|Specifica la dimensione iniziale del rettangolo di animazione.|
|[CAnimationRect::m_topValue](#m_topvalue)|La variabile di animazione incapsulato che rappresenta l'inizio il limite del rettangolo di animazione.|

## <a name="remarks"></a>Note

Classe CAnimationRect incapsula oggetti CAnimationVariable quattro e può rappresentare un rettangolo nelle applicazioni. Per usare questa classe nell'applicazione, creare un'istanza di un oggetto di questa classe, aggiungerlo al controller di animazione usando CAnimationController:: AddAnimationObject e chiamare AddTransition per ogni transizione da applicare alle coordinate sinistra, destra superiore e inferiore.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CAnimationBaseObject](../../mfc/reference/canimationbaseobject-class.md)

`CAnimationRect`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

##  <a name="addtransition"></a>  CAnimationRect::AddTransition

Aggiunge le transizioni per le coordinate di sinistra, superiore, destro e inferiore.

```
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

### <a name="remarks"></a>Note

Chiamare questa funzione per aggiungere le transizioni specificate all'elenco interno delle transizioni da applicare alle variabili di animazione per i lati del rettangolo. Quando si aggiungono le transizioni, non vengono applicate immediatamente e archiviati in un elenco interno. Le transizioni vengono applicate (aggiunta di uno storyboard per un particolare valore) quando si chiama CAnimationController:: AnimateGroup. Se non è necessario applicare una transizione a uno dei lati del rettangolo, è possibile passare NULL.

##  <a name="canimationrect"></a>  CAnimationRect::CAnimationRect

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
Specifica l'ID del gruppo.

*nObjectID*<br/>
Specifica l'ID dell'oggetto.

*dwUserData*<br/>
Specifica i dati definiti dall'utente.

*pt*<br/>
Coordinate dell'angolo superiore sinistro.

*sz*<br/>
Dimensioni del rettangolo.

*nLeft*<br/>
Specifica la coordinata del limite a sinistra.

*Windows*<br/>
Specifica la coordinata del limite superiore.

*nRight*<br/>
Specifica la coordinata del limite destro.

*nBottom*<br/>
Specifica la coordinata del limite inferiore.

### <a name="remarks"></a>Note

L'oggetto viene costruito con i valori predefiniti per la sinistra, superiore, destro e inferiore, ID di oggetto e ID di gruppo, che verrà impostato su 0. Possono essere modificate in un secondo momento in fase di esecuzione utilizzando SetDefaultValue e SetID.

##  <a name="getanimationvariablelist"></a>  CAnimationRect::GetAnimationVariableList

Inserisce le variabili di animazione incapsulato in un elenco.

```
virtual void GetAnimationVariableList(
    CList<CAnimationVariable*,
    CAnimationVariable*>& lst);
```

### <a name="parameters"></a>Parametri

*lst*<br/>
Quando la funzione viene restituito, contiene i puntatori ai quattro CAnimationVariable oggetti che rappresentano le coordinate del rettangolo.

##  <a name="getbottom"></a>  CAnimationRect::GetBottom

Fornisce l'accesso a CAnimationVariable che rappresenta la coordinata inferiore.

```
CAnimationVariable& GetBottom();
```

### <a name="return-value"></a>Valore restituito

Un riferimento a CAnimationVariable incapsulata, che rappresenta la coordinata inferiore.

### <a name="remarks"></a>Note

È possibile chiamare questo metodo per ottenere l'accesso diretto a CAnimationVariable sottostante che rappresenta la coordinata inferiore.

##  <a name="getdefaultvalue"></a>  CAnimationRect::GetDefaultValue

Restituisce i valori predefiniti per i limiti del rettangolo.

```
CRect GetDefaultValue();
```

### <a name="return-value"></a>Valore restituito

Valore CRect contenente le impostazioni predefinite per la sinistra, destra, superiore e inferiore.

### <a name="remarks"></a>Note

Chiamare questa funzione per recuperare il valore predefinito, che in precedenza è stato impostato dal costruttore o SetDefaultValue.

##  <a name="getleft"></a>  CAnimationRect::GetLeft

Fornisce l'accesso a CAnimationVariable che rappresenta la coordinata sinistra.

```
CAnimationVariable& GetLeft();
```

### <a name="return-value"></a>Valore restituito

Un riferimento a CAnimationVariable incapsulata, che rappresenta la coordinata sinistra.

### <a name="remarks"></a>Note

È possibile chiamare questo metodo per ottenere l'accesso diretto a CAnimationVariable sottostante che rappresenta la coordinata sinistra.

##  <a name="getright"></a>  CAnimationRect::GetRight

Fornisce l'accesso a CAnimationVariable che rappresenta la coordinata destra.

```
CAnimationVariable& GetRight();
```

### <a name="return-value"></a>Valore restituito

Un riferimento a CAnimationVariable incapsulata, che rappresenta la coordinata destra.

### <a name="remarks"></a>Note

È possibile chiamare questo metodo per ottenere l'accesso diretto a CAnimationVariable sottostante che rappresenta la coordinata destra.

##  <a name="gettop"></a>  CAnimationRect::GetTop

Fornisce l'accesso a CAnimationVariable che rappresenta la coordinata superiore.

```
CAnimationVariable& GetTop();
```

### <a name="return-value"></a>Valore restituito

Un riferimento a CAnimationVariable incapsulata, che rappresenta la coordinata superiore.

### <a name="remarks"></a>Note

È possibile chiamare questo metodo per ottenere l'accesso diretto a CAnimationVariable sottostante che rappresenta la coordinata superiore.

##  <a name="getvalue"></a>  CAnimationRect::GetValue

Restituisce il valore corrente.

```
BOOL GetValue(CRect& rect);
```

### <a name="parameters"></a>Parametri

*Rect*<br/>
Output. Quando questo metodo viene restituito, contiene il valore corrente.

### <a name="return-value"></a>Valore restituito

TRUE se il valore corrente è stato recuperato correttamente. in caso contrario, FALSE.

### <a name="remarks"></a>Note

Chiamare questa funzione per recuperare il valore corrente del rettangolo di animazione. Se questo metodo ha esito negativo o COM sottostanti gli oggetti per i margini sinistro, superiore, destro e inferiore non sono stati inizializzati, rect contiene il valore predefinito, che in precedenza è stato impostato nel costruttore o da SetDefaultValue.

##  <a name="m_bfixedsize"></a>  CAnimationRect::m_bFixedSize

Specifica se il rettangolo con dimensioni fisse.

```
BOOL m_bFixedSize;
```

### <a name="remarks"></a>Note

Se questo membro è true, le dimensioni del rettangolo sono fissi e a destra e i valori nella parte inferiore vengono ricalcolati ogni volta che l'angolo superiore sinistro viene spostata in base alle dimensioni fisse. Impostare questo valore su TRUE per spostare facilmente il rettangolo attorno alla schermata. In questo caso vengono ignorate le transizioni applicate alle coordinate di destra e inferiore. La dimensione viene archiviata internamente quando si costruisce l'oggetto e/o chiama SetDefaultValue. Per impostazione predefinita, questo membro è impostato su FALSE.

##  <a name="m_bottomvalue"></a>  CAnimationRect::m_bottomValue

La variabile di animazione incapsulato che nella parte inferiore rappresenta il limite del rettangolo di animazione.

```
CAnimationVariable m_bottomValue;
```

##  <a name="m_leftvalue"></a>  CAnimationRect::m_leftValue

La variabile di animazione incapsulato che a sinistra rappresenta il limite del rettangolo di animazione.

```
CAnimationVariable m_leftValue;
```

##  <a name="m_rightvalue"></a>  CAnimationRect::m_rightValue

La variabile di animazione incapsulato che a destra rappresenta il limite del rettangolo di animazione.

```
CAnimationVariable m_rightValue;
```

##  <a name="m_szinitial"></a>  CAnimationRect::m_szInitial

Specifica la dimensione iniziale del rettangolo di animazione.

```
CSize m_szInitial;
```

##  <a name="m_topvalue"></a>  CAnimationRect::m_topValue

La variabile di animazione incapsulato che rappresenta l'inizio il limite del rettangolo di animazione.

```
CAnimationVariable m_topValue;
```

##  <a name="operator_rect"></a>  CAnimationRect::operator RECT

Converte un CAnimationRect Rect.

```
operator RECT();
```

### <a name="return-value"></a>Valore restituito

Valore corrente del rettangolo di animazione Rect.

### <a name="remarks"></a>Note

Questa funzione chiama internamente GetValue. Se GetValue per qualche motivo non riesce, il rettangolo restituito conterrà i valori predefiniti per tutte le coordinate del rettangolo.

##  <a name="operator_eq"></a>  CAnimationRect::operator =

Assegna CAnimationRect rect.

```
void operator=(const RECT& rect);
```

### <a name="parameters"></a>Parametri

*Rect*<br/>
Il nuovo valore del rettangolo di animazione.

### <a name="remarks"></a>Note

È consigliabile farlo prima dell'inizio dell'animazione poiché questo operatore chiama SetDefaultValue che ricrea gli oggetti COM sottostanti per i componenti di colore se sono state create. Se si ha sottoscritto l'oggetto di animazione a eventi (ValueChanged o IntegerValueChanged), è necessario abilitare nuovamente questi eventi.

##  <a name="setdefaultvalue"></a>  CAnimationRect::SetDefaultValue

Imposta il valore predefinito.

```
void SetDefaultValue(const CRect& rect);
```

### <a name="parameters"></a>Parametri

*Rect*<br/>
Specifica nuovi valori predefiniti per sinistro, superiore, destro e inferiore.

### <a name="remarks"></a>Note

Utilizzare questa funzione per impostare un valore predefinito per l'oggetto di animazione. Questo metodo assegna i valori predefiniti in base ai limiti del rettangolo. Ricrea anche gli oggetti COM sottostanti se sono state create. Se si ha sottoscritto l'oggetto di animazione a eventi (ValueChanged o IntegerValueChanged), è necessario abilitare nuovamente questi eventi.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
