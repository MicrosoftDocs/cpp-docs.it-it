---
title: Classe CAnimationColor
ms.date: 11/04/2016
f1_keywords:
- CAnimationColor
- AFXANIMATIONCONTROLLER/CAnimationColor
- AFXANIMATIONCONTROLLER/CAnimationColor::CAnimationColor
- AFXANIMATIONCONTROLLER/CAnimationColor::AddTransition
- AFXANIMATIONCONTROLLER/CAnimationColor::GetB
- AFXANIMATIONCONTROLLER/CAnimationColor::GetDefaultValue
- AFXANIMATIONCONTROLLER/CAnimationColor::GetG
- AFXANIMATIONCONTROLLER/CAnimationColor::GetR
- AFXANIMATIONCONTROLLER/CAnimationColor::GetValue
- AFXANIMATIONCONTROLLER/CAnimationColor::SetDefaultValue
- AFXANIMATIONCONTROLLER/CAnimationColor::GetAnimationVariableList
- AFXANIMATIONCONTROLLER/CAnimationColor::m_bValue
- AFXANIMATIONCONTROLLER/CAnimationColor::m_gValue
- AFXANIMATIONCONTROLLER/CAnimationColor::m_rValue
helpviewer_keywords:
- CAnimationColor [MFC], CAnimationColor
- CAnimationColor [MFC], AddTransition
- CAnimationColor [MFC], GetB
- CAnimationColor [MFC], GetDefaultValue
- CAnimationColor [MFC], GetG
- CAnimationColor [MFC], GetR
- CAnimationColor [MFC], GetValue
- CAnimationColor [MFC], SetDefaultValue
- CAnimationColor [MFC], GetAnimationVariableList
- CAnimationColor [MFC], m_bValue
- CAnimationColor [MFC], m_gValue
- CAnimationColor [MFC], m_rValue
ms.assetid: 88bfabd4-efeb-4652-87e8-304253d8e48c
ms.openlocfilehash: ee6003a22db78c2a510579c3d717fec887f8a6ad
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57304334"
---
# <a name="canimationcolor-class"></a>Classe CAnimationColor

Implementa la funzionalità di un colore i cui componenti rosso, verde e blu possono essere animati.

## <a name="syntax"></a>Sintassi

```
class CAnimationColor : public CAnimationBaseObject;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAnimationColor::CAnimationColor](#canimationcolor)|Di overload. Costruisce un oggetto di colore animazione.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAnimationColor::AddTransition](#addtransition)|Aggiunge le transizioni per i componenti rosso, verde e blu.|
|[CAnimationColor::GetB](#getb)|Fornisce l'accesso a CAnimationVariable che rappresenta il componente blu.|
|[CAnimationColor::GetDefaultValue](#getdefaultvalue)|Restituisce i valori predefiniti per i componenti di colore.|
|[CAnimationColor::GetG](#getg)|Fornisce l'accesso a CAnimationVariable che rappresenta il componente verde.|
|[CAnimationColor::GetR](#getr)|Fornisce l'accesso a CAnimationVariable che rappresenta il componente rosso.|
|[CAnimationColor::GetValue](#getvalue)|Restituisce il valore corrente.|
|[CAnimationColor::SetDefaultValue](#setdefaultvalue)|Imposta il valore predefinito.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CAnimationColor::GetAnimationVariableList](#getanimationvariablelist)|Inserisce le variabili di animazione incapsulato in un elenco. (Esegue l'override [CAnimationBaseObject:: GetAnimationVariableList](../../mfc/reference/canimationbaseobject-class.md#getanimationvariablelist).)|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAnimationColor::operator COLORREF](#operator_colorref)||
|[CAnimationColor::operator=](#operator_eq)|Assegna colore a CAnimationColor.|

### <a name="protected-data-members"></a>Membri dati protetti

|nome|Descrizione|
|----------|-----------------|
|[CAnimationColor::m_bValue](#m_bvalue)|La variabile di animazione incapsulato che rappresenta il componente blu del colore di animazione.|
|[CAnimationColor::m_gValue](#m_gvalue)|La variabile di animazione incapsulato che rappresenta il componente verde del colore di animazione.|
|[CAnimationColor::m_rValue](#m_rvalue)|La variabile di animazione incapsulato che rappresenta il componente rosso del colore di animazione.|

## <a name="remarks"></a>Note

Classe CAnimationColor incapsula oggetti CAnimationVariable tre e può rappresentare un colore nelle applicazioni. Ad esempio, è possibile utilizzare questa classe per aggiungere un'animazione dei colori di qualsiasi oggetto sullo schermo (come colore del testo, il colore di sfondo e così via). Per usare questa classe nell'applicazione, creare un'istanza di un oggetto di questa classe, aggiungerlo al controller di animazione usando CAnimationController:: AddAnimationObject e chiamare AddTransition per ogni transizione da applicare ai componenti rosso, verde e blu.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CAnimationBaseObject](../../mfc/reference/canimationbaseobject-class.md)

`CAnimationColor`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

##  <a name="addtransition"></a>  CAnimationColor::AddTransition

Aggiunge le transizioni per i componenti rosso, verde e blu.

```
void AddTransition(
    CBaseTransition* pRTransition,
    CBaseTransition* pGTransition,
    CBaseTransition* pBTransition);
```

### <a name="parameters"></a>Parametri

*pRTransition*<br/>
Transizione per il componente rossa.

*pGTransition*<br/>
Transizione per il componente verde.

*pBTransition*<br/>
Transizione per il componente blu.

### <a name="remarks"></a>Note

Chiamare questa funzione per aggiungere le transizioni specificate all'elenco interno delle transizioni da applicare alle variabili di animazione che rappresenta i componenti di colore. Quando si aggiungono le transizioni, non vengono applicate immediatamente e archiviati in un elenco interno. Le transizioni vengono applicate (aggiunta di uno storyboard per un particolare valore) quando si chiama CAnimationController:: AnimateGroup. Se non è necessario applicare una transizione a uno dei componenti di colore, è possibile passare NULL.

##  <a name="canimationcolor"></a>  CAnimationColor::CAnimationColor

Costruisce un oggetto CAnimationColor.

```
CAnimationColor();

CAnimationColor(
    COLORREF color,
    UINT32 nGroupID,
    UINT32 nObjectID = (UINT32)-1,
    DWORD dwUserData = 0);
```

### <a name="parameters"></a>Parametri

*color*<br/>
Specifica il colore predefinito.

*nGroupID*<br/>
Specifica l'ID del gruppo.

*nObjectID*<br/>
Specifica l'ID dell'oggetto.

*dwUserData*<br/>
Specifica i dati definiti dall'utente.

### <a name="remarks"></a>Note

L'oggetto viene costruito con i valori predefiniti per red, green, blue, ID di oggetto e ID di gruppo, che verrà impostato su 0. Possono essere modificate in un secondo momento in fase di esecuzione utilizzando SetDefaultValue e SetID.

##  <a name="getanimationvariablelist"></a>  CAnimationColor::GetAnimationVariableList

Inserisce le variabili di animazione incapsulato in un elenco.

```
virtual void GetAnimationVariableList(CList<CAnimationVariable*>& lst);
```

### <a name="parameters"></a>Parametri

*lst*<br/>
Quando la funzione viene restituito, contiene i puntatori ai tre CAnimationVariable oggetti che rappresentano i componenti rossi, verdi e blu.

##  <a name="getb"></a>  CAnimationColor::GetB

Fornisce l'accesso a CAnimationVariable che rappresenta il componente blu.

```
CAnimationVariable& GetB();
```

### <a name="return-value"></a>Valore restituito

Un riferimento a CAnimationVariable incapsulata, che rappresenta il componente blu.

### <a name="remarks"></a>Note

È possibile chiamare questo metodo per ottenere l'accesso diretto a CAnimationVariable sottostante che rappresenta il componente blu.

##  <a name="getdefaultvalue"></a>  CAnimationColor::GetDefaultValue

Restituisce i valori predefiniti per i componenti di colore.

```
COLORREF GetDefaultValue();
```

### <a name="return-value"></a>Valore restituito

Valore COLORREF che contiene le impostazioni predefinite per i componenti RGB.

### <a name="remarks"></a>Note

Chiamare questa funzione per recuperare il valore predefinito, che in precedenza è stato impostato dal costruttore o SetDefaultValue.

##  <a name="getg"></a>  CAnimationColor::GetG

Fornisce l'accesso a CAnimationVariable che rappresenta il componente verde.

```
CAnimationVariable& GetG();
```

### <a name="return-value"></a>Valore restituito

Un riferimento a CAnimationVariable incapsulati che rappresenta il componente verde.

### <a name="remarks"></a>Note

È possibile chiamare questo metodo per ottenere l'accesso diretto a CAnimationVariable sottostante che rappresenta il componente verde.

##  <a name="getr"></a>  CAnimationColor::GetR

Fornisce l'accesso a CAnimationVariable che rappresenta il componente rosso.

```
CAnimationVariable& GetR();
```

### <a name="return-value"></a>Valore restituito

Un riferimento a CAnimationVariable incapsulata, che rappresenta il componente rossa.

### <a name="remarks"></a>Note

È possibile chiamare questo metodo per ottenere l'accesso diretto a CAnimationVariable sottostante che rappresenta il componente rosso.

##  <a name="getvalue"></a>  CAnimationColor::GetValue

Restituisce il valore corrente.

```
BOOL GetValue(COLORREF& color);
```

### <a name="parameters"></a>Parametri

*color*<br/>
Output. Quando questo metodo viene restituito, contiene il valore corrente.

### <a name="return-value"></a>Valore restituito

TRUE se il valore corrente è stato recuperato correttamente. in caso contrario, FALSE.

### <a name="remarks"></a>Note

Chiamare questa funzione per recuperare il valore corrente del colore di animazione. Se questo metodo ha esito negativo o non sono stati inizializzati gli oggetti COM sottostanti per i componenti di colore, colore contiene il valore predefinito, che in precedenza è stato impostato nel costruttore o da SetDefaultValue.

##  <a name="m_bvalue"></a>  CAnimationColor::m_bValue

La variabile di animazione incapsulato che rappresenta il componente blu del colore di animazione.

```
CAnimationVariable m_bValue;
```

##  <a name="m_gvalue"></a>  CAnimationColor::m_gValue

La variabile di animazione incapsulato che rappresenta il componente verde del colore di animazione.

```
CAnimationVariable m_gValue;
```

##  <a name="m_rvalue"></a>  CAnimationColor::m_rValue

La variabile di animazione incapsulato che rappresenta il componente rosso del colore di animazione.

```
CAnimationVariable m_rValue;
```

##  <a name="operator_colorref"></a>  CAnimationColor::operator COLORREF

```
operator COLORREF();
```

### <a name="return-value"></a>Valore restituito

##  <a name="operator_eq"></a>  CAnimationColor::operator=

Assegna colore a CAnimationColor.

```
void operator=(COLORREF color);
```

### <a name="parameters"></a>Parametri

*color*<br/>
Specifica un nuovo valore del colore di animazione.

### <a name="remarks"></a>Note

È consigliabile farlo prima dell'inizio dell'animazione poiché questo operatore chiama SetDefaultValue che ricrea gli oggetti COM sottostanti per i componenti di colore se sono state create. Se si ha sottoscritto l'oggetto di animazione a eventi (ValueChanged o IntegerValueChanged), è necessario abilitare nuovamente questi eventi.

##  <a name="setdefaultvalue"></a>  CAnimationColor::SetDefaultValue

Imposta il valore predefinito.

```
void SetDefaultValue(COLORREF color);
```

### <a name="parameters"></a>Parametri

*color*<br/>
Specifica nuovi valori predefiniti per i componenti rossi, verdi e blu.

### <a name="remarks"></a>Note

Utilizzare questa funzione per impostare un valore predefinito per l'oggetto di animazione. Questo metodo assegna i valori predefiniti per i componenti di colore del colore di animazione. Ricrea anche gli oggetti COM sottostanti se sono state create. Se si ha sottoscritto l'oggetto di animazione a eventi (ValueChanged o IntegerValueChanged), è necessario abilitare nuovamente questi eventi.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
