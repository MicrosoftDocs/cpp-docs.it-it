---
description: 'Altre informazioni su: Classe CAnimationColor'
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
ms.openlocfilehash: 430f017bc9d60eed5e2d42b71f0303546deecaca
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97318637"
---
# <a name="canimationcolor-class"></a>Classe CAnimationColor

Implementa la funzionalità di un colore i cui componenti rosso, verde e blu possono essere animati.

## <a name="syntax"></a>Sintassi

```
class CAnimationColor : public CAnimationBaseObject;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CAnimationColor:: CAnimationColor](#canimationcolor)|Di overload. Costruisce un oggetto colore dell'animazione.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CAnimationColor:: AddTransition](#addtransition)|Aggiunge transizioni per i componenti rosso, verde e blu.|
|[CAnimationColor:: GetB](#getb)|Fornisce l'accesso a CAnimationVariable che rappresenta il componente blu.|
|[CAnimationColor:: GetDefaultValue](#getdefaultvalue)|Restituisce i valori predefiniti per i componenti colore.|
|[CAnimationColor:: GetG](#getg)|Fornisce l'accesso a CAnimationVariable che rappresenta il componente verde.|
|[CAnimationColor:: GetR](#getr)|Fornisce l'accesso a CAnimationVariable che rappresenta il componente rosso.|
|[CAnimationColor:: GetValue](#getvalue)|Restituisce il valore corrente.|
|[CAnimationColor:: sedefaultvalue](#setdefaultvalue)|Imposta il valore predefinito.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Description|
|----------|-----------------|
|[CAnimationColor:: GetAnimationVariableList](#getanimationvariablelist)|Inserisce le variabili di animazione incapsulate in un elenco. Esegue l'override di [CAnimationBaseObject:: GetAnimationVariableList](../../mfc/reference/canimationbaseobject-class.md#getanimationvariablelist).|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[CAnimationColor:: operator COLORREF](#operator_colorref)||
|[CAnimationColor:: operator =](#operator_eq)|Assegna il colore a CAnimationColor.|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Description|
|----------|-----------------|
|[CAnimationColor:: m_bValue](#m_bvalue)|Variabile di animazione incapsulata che rappresenta il componente blu del colore dell'animazione.|
|[CAnimationColor:: m_gValue](#m_gvalue)|Variabile di animazione incapsulata che rappresenta il componente verde del colore dell'animazione.|
|[CAnimationColor:: m_rValue](#m_rvalue)|Variabile di animazione incapsulata che rappresenta il componente rosso del colore dell'animazione.|

## <a name="remarks"></a>Commenti

La classe CAnimationColor incapsula tre oggetti CAnimationVariable e può rappresentare nelle applicazioni un colore. Ad esempio, è possibile usare questa classe per animare i colori di qualsiasi oggetto sullo schermo, ad esempio il colore del testo, il colore di sfondo e così via. Per usare questa classe nell'applicazione, è sufficiente creare un'istanza di un oggetto di questa classe, aggiungerla al controller di animazione usando CAnimationController:: AddAnimationObject e chiamare AddTransition per ogni transizione da applicare ai componenti rosso, verde e blu.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CAnimationBaseObject](../../mfc/reference/canimationbaseobject-class.md)

`CAnimationColor`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

## <a name="canimationcoloraddtransition"></a><a name="addtransition"></a> CAnimationColor:: AddTransition

Aggiunge transizioni per i componenti rosso, verde e blu.

```cpp
void AddTransition(
    CBaseTransition* pRTransition,
    CBaseTransition* pGTransition,
    CBaseTransition* pBTransition);
```

### <a name="parameters"></a>Parametri

*pRTransition*<br/>
Transizione per il componente rosso.

*pGTransition*<br/>
Transizione per il componente verde.

*pBTransition*<br/>
Transizione per il componente blu.

### <a name="remarks"></a>Commenti

Chiamare questa funzione per aggiungere le transizioni specificate all'elenco interno di transizioni da applicare alle variabili di animazione che rappresentano i componenti dei colori. Quando si aggiungono transizioni, queste non vengono applicate immediatamente e archiviate in un elenco interno. Le transizioni vengono applicate (aggiunte a uno storyboard per un particolare valore) quando si chiama CAnimationController:: AnimateGroup. Se non è necessario applicare una transizione a uno dei componenti dei colori, è possibile passare NULL.

## <a name="canimationcolorcanimationcolor"></a><a name="canimationcolor"></a> CAnimationColor:: CAnimationColor

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
Specifica l'ID gruppo.

*nObjectID*<br/>
Specifica l'ID oggetto.

*dwUserData*<br/>
Specifica i dati definiti dall'utente.

### <a name="remarks"></a>Commenti

L'oggetto viene costruito con i valori predefiniti per rosso, verde, blu, ID oggetto e ID gruppo, che verrà impostato su 0. Questi elementi possono essere modificati in un secondo momento in fase di esecuzione tramite sedefaultvalue e SetId.

## <a name="canimationcolorgetanimationvariablelist"></a><a name="getanimationvariablelist"></a> CAnimationColor:: GetAnimationVariableList

Inserisce le variabili di animazione incapsulate in un elenco.

```
virtual void GetAnimationVariableList(CList<CAnimationVariable*>& lst);
```

### <a name="parameters"></a>Parametri

*LST*<br/>
Quando la funzione restituisce un risultato, contiene puntatori a tre oggetti CAnimationVariable che rappresentano i componenti rosso, verde e blu.

## <a name="canimationcolorgetb"></a><a name="getb"></a> CAnimationColor:: GetB

Fornisce l'accesso a CAnimationVariable che rappresenta il componente blu.

```
CAnimationVariable& GetB();
```

### <a name="return-value"></a>Valore restituito

Riferimento a CAnimationVariable incapsulato che rappresenta il componente blu.

### <a name="remarks"></a>Commenti

È possibile chiamare questo metodo per ottenere l'accesso diretto ai CAnimationVariable sottostanti che rappresentano il componente blu.

## <a name="canimationcolorgetdefaultvalue"></a><a name="getdefaultvalue"></a> CAnimationColor:: GetDefaultValue

Restituisce i valori predefiniti per i componenti colore.

```
COLORREF GetDefaultValue();
```

### <a name="return-value"></a>Valore restituito

Valore COLORREF contenente i valori predefiniti per i componenti RGB.

### <a name="remarks"></a>Commenti

Chiamare questa funzione per recuperare il valore predefinito, precedentemente impostato dal costruttore o da DefaultValue.

## <a name="canimationcolorgetg"></a><a name="getg"></a> CAnimationColor:: GetG

Fornisce l'accesso a CAnimationVariable che rappresenta il componente verde.

```
CAnimationVariable& GetG();
```

### <a name="return-value"></a>Valore restituito

Riferimento a CAnimationVariable incapsulato che rappresenta il componente verde.

### <a name="remarks"></a>Commenti

È possibile chiamare questo metodo per ottenere l'accesso diretto ai CAnimationVariable sottostanti che rappresentano il componente verde.

## <a name="canimationcolorgetr"></a><a name="getr"></a> CAnimationColor:: GetR

Fornisce l'accesso a CAnimationVariable che rappresenta il componente rosso.

```
CAnimationVariable& GetR();
```

### <a name="return-value"></a>Valore restituito

Riferimento a CAnimationVariable incapsulato che rappresenta il componente rosso.

### <a name="remarks"></a>Commenti

È possibile chiamare questo metodo per ottenere l'accesso diretto ai CAnimationVariable sottostanti che rappresentano il componente rosso.

## <a name="canimationcolorgetvalue"></a><a name="getvalue"></a> CAnimationColor:: GetValue

Restituisce il valore corrente.

```
BOOL GetValue(COLORREF& color);
```

### <a name="parameters"></a>Parametri

*color*<br/>
Output: Contiene il valore corrente quando il metodo restituisce.

### <a name="return-value"></a>Valore restituito

TRUE se il valore corrente è stato recuperato correttamente; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Chiamare questa funzione per recuperare il valore corrente del colore dell'animazione. Se questo metodo ha esito negativo o gli oggetti COM sottostanti per i componenti di colore non sono stati inizializzati, color contiene il valore predefinito, che è stato precedentemente impostato nel costruttore o da DefaultValue.

## <a name="canimationcolorm_bvalue"></a><a name="m_bvalue"></a> CAnimationColor:: m_bValue

Variabile di animazione incapsulata che rappresenta il componente blu del colore dell'animazione.

```
CAnimationVariable m_bValue;
```

## <a name="canimationcolorm_gvalue"></a><a name="m_gvalue"></a> CAnimationColor:: m_gValue

Variabile di animazione incapsulata che rappresenta il componente verde del colore dell'animazione.

```
CAnimationVariable m_gValue;
```

## <a name="canimationcolorm_rvalue"></a><a name="m_rvalue"></a> CAnimationColor:: m_rValue

Variabile di animazione incapsulata che rappresenta il componente rosso del colore dell'animazione.

```
CAnimationVariable m_rValue;
```

## <a name="canimationcoloroperator-colorref"></a><a name="operator_colorref"></a> CAnimationColor:: operator COLORREF

```
operator COLORREF();
```

### <a name="return-value"></a>Valore restituito

## <a name="canimationcoloroperator"></a><a name="operator_eq"></a> CAnimationColor:: operator =

Assegna il colore a CAnimationColor.

```cpp
void operator=(COLORREF color);
```

### <a name="parameters"></a>Parametri

*color*<br/>
Specifica il nuovo colore di animazione del valore.

### <a name="remarks"></a>Commenti

È consigliabile eseguire questa operazione prima dell'avvio dell'animazione, perché questo operatore chiama DefaultValue, che ricrea gli oggetti COM sottostanti per i componenti di colore se sono stati creati. Se l'oggetto animazione è stato sottoscritto agli eventi (ValueChanged o IntegerValueChanged), è necessario riabilitare questi eventi.

## <a name="canimationcolorsetdefaultvalue"></a><a name="setdefaultvalue"></a> CAnimationColor:: sedefaultvalue

Imposta il valore predefinito.

```cpp
void SetDefaultValue(COLORREF color);
```

### <a name="parameters"></a>Parametri

*color*<br/>
Specifica i nuovi valori predefiniti per i componenti rosso, verde e blu.

### <a name="remarks"></a>Commenti

Utilizzare questa funzione per impostare un valore predefinito per l'oggetto di animazione. Questo metodo assegna i valori predefiniti ai componenti di colore del colore dell'animazione. Vengono inoltre ricreati gli oggetti COM sottostanti se sono stati creati. Se l'oggetto animazione è stato sottoscritto agli eventi (ValueChanged o IntegerValueChanged), è necessario riabilitare questi eventi.

## <a name="see-also"></a>Vedi anche

[Classi](../../mfc/reference/mfc-classes.md)
