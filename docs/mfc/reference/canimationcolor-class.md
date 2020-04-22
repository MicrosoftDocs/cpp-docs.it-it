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
ms.openlocfilehash: 7c1c98d739aa1c17bb30df2d9d4ce8c41558c76d
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81750187"
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
|[CAnimationColor::CAnimationColor](#canimationcolor)|Di overload. Costruisce un oggetto colore di animazione.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAnimationColor::AddTransition](#addtransition)|Aggiunge transizioni per i componenti Rosso, Verde e Blu.|
|[CAnimationColor::GetB](#getb)|Fornisce l'accesso a CAnimationVariable che rappresenta il componente Blue.|
|[CAnimationColor::GetDefaultValue](#getdefaultvalue)|Restituisce i valori predefiniti per i componenti di colore.|
|[CAnimationColor::GetG](#getg)|Fornisce l'accesso a CAnimationVariable che rappresenta il componente verde.|
|[CAnimationColor::GetR](#getr)|Fornisce l'accesso a CAnimationVariable che rappresenta il componente Red.|
|[CAnimationColor::GetValue](#getvalue)|Restituisce il valore corrente.|
|[CAnimationColor::SetDefaultValue](#setdefaultvalue)|Imposta il valore predefinito.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CAnimationColor::GetAnimationVariableList](#getanimationvariablelist)|Inserisce le variabili di animazione incapsulate in un elenco. (OverrideS [CAnimationBaseObject::GetAnimationVariableList](../../mfc/reference/canimationbaseobject-class.md#getanimationvariablelist).)|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAnimationColor::operatore COLORREF](#operator_colorref)||
|[CAnimationColor::operatore](#operator_eq)|Assegna il colore a CAnimationColor.|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Descrizione|
|----------|-----------------|
|[CAnimationColor::m_bValue](#m_bvalue)|Variabile di animazione incapsulata che rappresenta il componente blu del colore dell'animazione.|
|[CAnimationColor::m_gValue](#m_gvalue)|Variabile di animazione incapsulata che rappresenta il componente verde del colore dell'animazione.|
|[CAnimationColor::m_rValue](#m_rvalue)|Variabile di animazione incapsulata che rappresenta il componente Red del colore dell'animazione.|

## <a name="remarks"></a>Osservazioni

Il CAnimationColor classe incapsula tre CAnimationVariable oggetti e può rappresentare nelle applicazioni un colore. Ad esempio, è possibile utilizzare questa classe per animare i colori di qualsiasi oggetto sullo schermo (come il colore del testo, il colore di sfondo e così via). Per usare questa classe nell'applicazione, è sufficiente creare un'istanza di un oggetto di questa classe, aggiungerlo al controller di animazione utilizzando CAnimationController::AddAnimationObject e chiamare AddTransition per ogni transizione da applicare a i componenti Red, Green e Blue.To use this class in application, just instantiate an object of this class, add it to animation controller using CAnimationController::AddAnimationObject and call AddTransition for each transition to be applied to Red, Green and Blue components.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[Oggetto CAnimationBaseObject](../../mfc/reference/canimationbaseobject-class.md)

`CAnimationColor`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

## <a name="canimationcoloraddtransition"></a><a name="addtransition"></a>CAnimationColor::AddTransition

Aggiunge transizioni per i componenti Rosso, Verde e Blu.

```cpp
void AddTransition(
    CBaseTransition* pRTransition,
    CBaseTransition* pGTransition,
    CBaseTransition* pBTransition);
```

### <a name="parameters"></a>Parametri

*pRTransizione*<br/>
Transizione per il componente Rosso.

*pGTransizione*<br/>
Transizione per componente verde.

*PBTransizione*<br/>
Transizione per il componente Blu.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per aggiungere le transizioni specificate all'elenco interno delle transizioni da applicare alle variabili di animazione che rappresentano i componenti di colore. Quando si aggiungono transizioni, non vengono applicate immediatamente e archiviate in un elenco interno. Le transizioni vengono applicate (aggiunte a uno storyboard per un determinato valore) quando si chiama CAnimationController::AnimateGroup.Transitions are applied (added to a storyboard for a particular value) when you call CAnimationController::AnimateGroup. Se non è necessario applicare una transizione a uno dei componenti di colore, è possibile passare NULL.

## <a name="canimationcolorcanimationcolor"></a><a name="canimationcolor"></a>CAnimationColor::CAnimationColor

Costruisce un CAnimationColor oggetto.

```
CAnimationColor();

CAnimationColor(
    COLORREF color,
    UINT32 nGroupID,
    UINT32 nObjectID = (UINT32)-1,
    DWORD dwUserData = 0);
```

### <a name="parameters"></a>Parametri

*Colore*<br/>
Specifica il colore predefinito.

*nId gruppo*<br/>
Specifica l'ID gruppo.

*nObjectID (informazioni in stato in questo oggetto)*<br/>
Specifica l'ID oggetto.

*dwUserData (dati utente)*<br/>
Specifica i dati definiti dall'utente.

### <a name="remarks"></a>Osservazioni

L'oggetto viene costruito con i valori predefiniti per rosso, verde, blu, ID oggetto e ID gruppo, che verranno impostati su 0. Possono essere modificati in un secondo momento in fase di esecuzione usando SetDefaultValue e SetID.They can be changed later at runtime using SetDefaultValue and SetID.

## <a name="canimationcolorgetanimationvariablelist"></a><a name="getanimationvariablelist"></a>CAnimationColor::GetAnimationVariableList

Inserisce le variabili di animazione incapsulate in un elenco.

```
virtual void GetAnimationVariableList(CList<CAnimationVariable*>& lst);
```

### <a name="parameters"></a>Parametri

*Lst*<br/>
Quando la funzione termina, contiene puntatori a tre CAnimationVariable oggetti che rappresentano i componenti rosso, verde e blu.

## <a name="canimationcolorgetb"></a><a name="getb"></a>CAnimationColor::GetB

Fornisce l'accesso a CAnimationVariable che rappresenta il componente Blue.

```
CAnimationVariable& GetB();
```

### <a name="return-value"></a>Valore restituito

Riferimento all'incapsulato CAnimationVariable che rappresenta il componente Blue.

### <a name="remarks"></a>Osservazioni

È possibile chiamare questo metodo per ottenere l'accesso diretto al sottostante CAnimationVariable che rappresenta il componente Blue.You can call this method to get direct access to underlying CAnimationVariable representing Blue component.

## <a name="canimationcolorgetdefaultvalue"></a><a name="getdefaultvalue"></a>CAnimationColor::GetDefaultValue

Restituisce i valori predefiniti per i componenti di colore.

```
COLORREF GetDefaultValue();
```

### <a name="return-value"></a>Valore restituito

Valore COLORREF contenente i valori predefiniti per i componenti RGB.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per recuperare il valore predefinito, precedentemente impostato dal costruttore o SetDefaultValue.Call this function to retrieve default value, which was previously set by constructor or SetDefaultValue.

## <a name="canimationcolorgetg"></a><a name="getg"></a>CAnimationColor::GetG

Fornisce l'accesso a CAnimationVariable che rappresenta il componente verde.

```
CAnimationVariable& GetG();
```

### <a name="return-value"></a>Valore restituito

Riferimento all'incapsulato CAnimationVariable che rappresenta il componente verde.

### <a name="remarks"></a>Osservazioni

È possibile chiamare questo metodo per ottenere l'accesso diretto al sottostante CAnimationVariable che rappresenta il componente verde.

## <a name="canimationcolorgetr"></a><a name="getr"></a>CAnimationColor::GetR

Fornisce l'accesso a CAnimationVariable che rappresenta il componente Red.

```
CAnimationVariable& GetR();
```

### <a name="return-value"></a>Valore restituito

Riferimento all'incapsulato CAnimationVariable che rappresenta il componente Red.

### <a name="remarks"></a>Osservazioni

È possibile chiamare questo metodo per ottenere l'accesso diretto al sottostante CAnimationVariable che rappresenta Red componente.

## <a name="canimationcolorgetvalue"></a><a name="getvalue"></a>CAnimationColor::GetValue

Restituisce il valore corrente.

```
BOOL GetValue(COLORREF& color);
```

### <a name="parameters"></a>Parametri

*Colore*<br/>
Output: Contiene il valore corrente quando questo metodo restituisce.

### <a name="return-value"></a>Valore restituito

TRUE, se il valore corrente è stato recuperato correttamente. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per recuperare il valore corrente del colore di animazione. Se questo metodo ha esito negativo o gli oggetti COM sottostanti per i componenti di colore non sono stati inizializzati, color contiene il valore predefinito, precedentemente impostato nel costruttore o da SetDefaultValue.

## <a name="canimationcolorm_bvalue"></a><a name="m_bvalue"></a>CAnimationColor::m_bValue

Variabile di animazione incapsulata che rappresenta il componente blu del colore dell'animazione.

```
CAnimationVariable m_bValue;
```

## <a name="canimationcolorm_gvalue"></a><a name="m_gvalue"></a>CAnimationColor::m_gValue

Variabile di animazione incapsulata che rappresenta il componente verde del colore dell'animazione.

```
CAnimationVariable m_gValue;
```

## <a name="canimationcolorm_rvalue"></a><a name="m_rvalue"></a>CAnimationColor::m_rValue

Variabile di animazione incapsulata che rappresenta il componente Red del colore dell'animazione.

```
CAnimationVariable m_rValue;
```

## <a name="canimationcoloroperator-colorref"></a><a name="operator_colorref"></a>CAnimationColor::operatore COLORREF

```
operator COLORREF();
```

### <a name="return-value"></a>Valore restituito

## <a name="canimationcoloroperator"></a><a name="operator_eq"></a>CAnimationColor::operatore

Assegna il colore a CAnimationColor.

```cpp
void operator=(COLORREF color);
```

### <a name="parameters"></a>Parametri

*Colore*<br/>
Specifica il nuovo valore Colore animazione.

### <a name="remarks"></a>Osservazioni

È consigliabile eseguire questa operazione prima dell'avvio dell'animazione, perché questo operatore chiama SetDefaultValue, che ricrea gli oggetti COM sottostanti per i componenti di colore se sono stati creati. Se hai sottoscritto questo oggetto di animazione agli eventi (ValueChanged o IntegerValueChanged), devi riattivare questi eventi.

## <a name="canimationcolorsetdefaultvalue"></a><a name="setdefaultvalue"></a>CAnimationColor::SetDefaultValue

Imposta il valore predefinito.

```cpp
void SetDefaultValue(COLORREF color);
```

### <a name="parameters"></a>Parametri

*Colore*<br/>
Specifica i nuovi valori di default per i componenti rosso, verde e blu.

### <a name="remarks"></a>Osservazioni

Utilizzare questa funzione per impostare un valore predefinito per l'oggetto di animazione. Questo metodo assegna valori predefiniti ai componenti di colore del colore dell'animazione. Vengono inoltre ricreati gli oggetti COM sottostanti, se sono stati creati. Se hai sottoscritto questo oggetto di animazione agli eventi (ValueChanged o IntegerValueChanged), devi riattivare questi eventi.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
