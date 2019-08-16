---
title: Classe CAnimationVariable
ms.date: 03/27/2019
f1_keywords:
- CAnimationVariable
- AFXANIMATIONCONTROLLER/CAnimationVariable
- AFXANIMATIONCONTROLLER/CAnimationVariable::CAnimationVariable
- AFXANIMATIONCONTROLLER/CAnimationVariable::AddTransition
- AFXANIMATIONCONTROLLER/CAnimationVariable::ApplyTransitions
- AFXANIMATIONCONTROLLER/CAnimationVariable::ClearTransitions
- AFXANIMATIONCONTROLLER/CAnimationVariable::Create
- AFXANIMATIONCONTROLLER/CAnimationVariable::CreateTransitions
- AFXANIMATIONCONTROLLER/CAnimationVariable::EnableIntegerValueChangedEvent
- AFXANIMATIONCONTROLLER/CAnimationVariable::EnableValueChangedEvent
- AFXANIMATIONCONTROLLER/CAnimationVariable::GetDefaultValue
- AFXANIMATIONCONTROLLER/CAnimationVariable::GetParentAnimationObject
- AFXANIMATIONCONTROLLER/CAnimationVariable::GetValue
- AFXANIMATIONCONTROLLER/CAnimationVariable::GetVariable
- AFXANIMATIONCONTROLLER/CAnimationVariable::SetDefaultValue
- AFXANIMATIONCONTROLLER/CAnimationVariable::SetParentAnimationObject
- AFXANIMATIONCONTROLLER/CAnimationVariable::m_bAutodestroyTransitions
- AFXANIMATIONCONTROLLER/CAnimationVariable::m_dblDefaultValue
- AFXANIMATIONCONTROLLER/CAnimationVariable::m_lstTransitions
- AFXANIMATIONCONTROLLER/CAnimationVariable::m_pParentObject
- AFXANIMATIONCONTROLLER/CAnimationVariable::m_variable
helpviewer_keywords:
- CAnimationVariable [MFC], CAnimationVariable
- CAnimationVariable [MFC], AddTransition
- CAnimationVariable [MFC], ApplyTransitions
- CAnimationVariable [MFC], ClearTransitions
- CAnimationVariable [MFC], Create
- CAnimationVariable [MFC], CreateTransitions
- CAnimationVariable [MFC], EnableIntegerValueChangedEvent
- CAnimationVariable [MFC], EnableValueChangedEvent
- CAnimationVariable [MFC], GetDefaultValue
- CAnimationVariable [MFC], GetParentAnimationObject
- CAnimationVariable [MFC], GetValue
- CAnimationVariable [MFC], GetVariable
- CAnimationVariable [MFC], SetDefaultValue
- CAnimationVariable [MFC], SetParentAnimationObject
- CAnimationVariable [MFC], m_bAutodestroyTransitions
- CAnimationVariable [MFC], m_dblDefaultValue
- CAnimationVariable [MFC], m_lstTransitions
- CAnimationVariable [MFC], m_pParentObject
- CAnimationVariable [MFC], m_variable
ms.assetid: 506e697e-31a8-4033-a27e-292f4d7b42d9
ms.openlocfilehash: b6767ed42d66aff467ef36bd2a7b5234ad181ced
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69507535"
---
# <a name="canimationvariable-class"></a>Classe CAnimationVariable

Rappresenta una variabile di animazione.

## <a name="syntax"></a>Sintassi

```
class CAnimationVariable;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAnimationVariable:: CAnimationVariable](#canimationvariable)|Costruisce un oggetto variabile di animazione.|
|[CAnimationVariable:: ~ CAnimationVariable](#_dtorcanimationvariable)|Distruttore. Chiamato quando un oggetto CAnimationVariable viene eliminato definitivamente.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAnimationVariable::AddTransition](#addtransition)|Aggiunge una transizione.|
|[CAnimationVariable:: ApplyTransitions](#applytransitions)|Aggiunge transizioni dall'elenco interno allo storyboard.|
|[CAnimationVariable:: ClearTransitions](#cleartransitions)|Cancella le transizioni.|
|[CAnimationVariable:: create](#create)|Crea l'oggetto COM della variabile di animazione sottostante.|
|[CAnimationVariable::CreateTransitions](#createtransitions)|Crea tutte le transizioni da applicare a questa variabile di animazione.|
|[CAnimationVariable::EnableIntegerValueChangedEvent](#enableintegervaluechangedevent)|Abilita o Disabilita l'evento IntegerValueChanged.|
|[CAnimationVariable::EnableValueChangedEvent](#enablevaluechangedevent)|Abilita o Disabilita l'evento ValueChanged.|
|[CAnimationVariable::GetDefaultValue](#getdefaultvalue)|Restituisce un valore predefinito.|
|[CAnimationVariable::GetParentAnimationObject](#getparentanimationobject)|Restituisce l'oggetto animazione padre.|
|[CAnimationVariable:: GetValue](#getvalue)|Di overload. Restituisce il valore corrente della variabile di animazione.|
|[CAnimationVariable:: getvariabile](#getvariable)|Restituisce un puntatore all'oggetto COM IUIAnimationVariable.|
|[CAnimationVariable::SetDefaultValue](#setdefaultvalue)|Imposta il valore predefinito e rilascia l'oggetto COM IUIAnimationVariable.|

### <a name="protected-methods"></a>Metodi protetti

|Name|DESCRIZIONE|
|----------|-----------------|
|[CAnimationVariable::SetParentAnimationObject](#setparentanimationobject)|Imposta la relazione tra una variabile di animazione e un oggetto di animazione.|

### <a name="public-data-members"></a>Membri dati pubblici

|NOME|Descrizione|
|----------|-----------------|
|[CAnimationVariable:: m_bAutodestroyTransitions](#m_bautodestroytransitions)|Specifica se gli oggetti di transizione correlati devono essere eliminati.|

### <a name="protected-data-members"></a>Membri dati protetti

|Name|Descrizione|
|----------|-----------------|
|[CAnimationVariable::m_dblDefaultValue](#m_dbldefaultvalue)|Specifica il valore predefinito, che viene propagato a IUIAnimationVariable.|
|[CAnimationVariable:: m_lstTransitions](#m_lsttransitions)|Contiene un elenco di transizioni che animano questa variabile di animazione.|
|[CAnimationVariable::m_pParentObject](#m_pparentobject)|Puntatore a un oggetto di animazione che incapsula questa variabile di animazione.|
|[CAnimationVariable:: m_variable](#m_variable)|Archivia un puntatore all'oggetto COM IUIAnimationVariable. NULL se l'oggetto COM non è stato ancora creato o se la creazione non è riuscita.|

## <a name="remarks"></a>Note

La classe CAnimationVariable incapsula l'oggetto COM IUIAnimationVariable. Include inoltre un elenco di transizioni da applicare alla variabile di animazione in uno storyboard. Gli oggetti CAnimationVariable sono incorporati in oggetti di animazione, che possono rappresentare in un'applicazione un valore animato, un punto, una dimensione, un colore e un rettangolo.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CAnimationVariable`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

##  <a name="_dtorcanimationvariable"></a>CAnimationVariable:: ~ CAnimationVariable

Distruttore. Chiamato quando un oggetto CAnimationVariable viene eliminato definitivamente.

```
virtual ~CAnimationVariable();
```

##  <a name="addtransition"></a>CAnimationVariable:: AddTransition

Aggiunge una transizione.

```
void AddTransition(CBaseTransition* pTransition);
```

### <a name="parameters"></a>Parametri

*pTransition*<br/>
Puntatore a una transizione da aggiungere.

### <a name="remarks"></a>Note

Questo metodo viene chiamato per aggiungere una transizione all'elenco interno di transizioni da applicare alla variabile di animazione. Questo elenco deve essere cancellato quando è stata pianificata un'animazione.

##  <a name="applytransitions"></a>CAnimationVariable:: ApplyTransitions

Aggiunge transizioni dall'elenco interno allo storyboard.

```
void ApplyTransitions(
    CAnimationController* pController,
    IUIAnimationStoryboard* pStoryboard,
    BOOL bDependOnKeyframes);
```

### <a name="parameters"></a>Parametri

*pController*<br/>
Puntatore al controller di animazione padre.

*pStoryboard*<br/>
Puntatore allo storyboard.

*bDependOnKeyframes*<br/>
TRUE se questo metodo deve aggiungere transizioni che dipendono da fotogrammi chiave.

### <a name="remarks"></a>Note

Questo metodo aggiunge transizioni dall'elenco interno allo storyboard. Viene chiamato dal codice di primo livello più volte per aggiungere transizioni che non dipendono da fotogrammi chiave e aggiungono transizioni che dipendono da fotogrammi chiave. Se l'oggetto COM della variabile di animazione sottostante non è stato creato, questo metodo lo crea in questa fase.

##  <a name="canimationvariable"></a>CAnimationVariable:: CAnimationVariable

Costruisce un oggetto variabile di animazione.

```
CAnimationVariable(DOUBLE dblDefaultValue = 0.0);
```

### <a name="parameters"></a>Parametri

*dblDefaultValue*<br/>
Specifica il valore predefinito.

### <a name="remarks"></a>Note

Costruisce un oggetto variabile di animazione e ne imposta il valore predefinito. Un valore predefinito viene usato quando una variabile non è animata o non può essere animata.

##  <a name="cleartransitions"></a>CAnimationVariable:: ClearTransitions

Cancella le transizioni.

```
void ClearTransitions(BOOL bAutodestroy);
```

### <a name="parameters"></a>Parametri

*bAutodestroy*<br/>
Specifica se questo metodo deve eliminare gli oggetti di transizione.

### <a name="remarks"></a>Note

Questo metodo rimuove tutte le transizioni dall'elenco interno di transizioni. Se bAutodestroy è TRUE o m_bAutodestroyTransitions è TRUE, le transizioni vengono eliminate. In caso contrario, il chiamante deve deallocare gli oggetti di transizione.

##  <a name="create"></a>CAnimationVariable:: create

Crea l'oggetto COM della variabile di animazione sottostante.

```
virtual BOOL Create(IUIAnimationManager* pManager);
```

### <a name="parameters"></a>Parametri

*pManager*<br/>
Puntatore al gestore di animazioni.

### <a name="return-value"></a>Valore restituito

TRUE se la variabile di animazione è stata creata correttamente; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Questo metodo crea l'oggetto COM della variabile di animazione sottostante e ne imposta il valore predefinito.

##  <a name="createtransitions"></a>CAnimationVariable:: CreateTransitions

Crea tutte le transizioni da applicare a questa variabile di animazione.

```
BOOL CreateTransitions(
    IUIAnimationTransitionLibrary* pLibrary,
    IUIAnimationTransitionFactory* \*not used*\);
```

### <a name="parameters"></a>Parametri

*pLibrary*<br/>
Puntatore a un' [interfaccia IUIAnimationTransitionLibrary](/windows/win32/api/uianimation/nn-uianimation-iuianimationtransitionlibrary), che definisce una libreria di transizioni standard.

### <a name="return-value"></a>Valore restituito

TRUE se le transizioni sono state create correttamente; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Questo metodo viene chiamato dal framework quando è necessario creare transizioni che sono state aggiunte all'elenco di transizioni interno della variabile.

##  <a name="enableintegervaluechangedevent"></a>  CAnimationVariable::EnableIntegerValueChangedEvent

Abilita o Disabilita l'evento IntegerValueChanged.

```
void EnableIntegerValueChangedEvent (
    CAnimationController* pController,
    BOOL bEnable);
```

### <a name="parameters"></a>Parametri

*pController*<br/>
Puntatore al controller padre.

*bEnable*<br/>
Evento TRUE-Enable, evento FALSE-Disable.

### <a name="remarks"></a>Note

Quando l'evento ValueChanged è abilitato, il Framework chiama il metodo virtuale CAnimationController:: OnAnimationIntegerValueChanged. Per elaborare questo evento, è necessario eseguirne l'override in una classe derivata da CAnimationController. Questo metodo viene chiamato ogni volta che viene modificato il valore intero della variabile di animazione.

##  <a name="enablevaluechangedevent"></a>  CAnimationVariable::EnableValueChangedEvent

Abilita o Disabilita l'evento ValueChanged.

```
void EnableValueChangedEvent (
    CAnimationController* pController,
    BOOL bEnable);
```

### <a name="parameters"></a>Parametri

*pController*<br/>
Puntatore al controller padre.

*bEnable*<br/>
Evento TRUE-Enable, evento FALSE-Disable.

### <a name="remarks"></a>Note

Quando l'evento ValueChanged è abilitato, il Framework chiama il metodo virtuale CAnimationController:: OnAnimationValueChanged. Per elaborare questo evento, è necessario eseguirne l'override in una classe derivata da CAnimationController. Questo metodo viene chiamato ogni volta che viene modificato il valore della variabile di animazione.

##  <a name="getdefaultvalue"></a>  CAnimationVariable::GetDefaultValue

Restituisce un valore predefinito.

```
DOUBLE GetDefaultValue() const;
```

### <a name="return-value"></a>Valore restituito

Il valore predefinito.

### <a name="remarks"></a>Note

Usare questa funzione per ottenere il valore predefinito della variabile di animazione. Il valore predefinito può essere impostato nel costruttore o dal metodo DefaultValue.

##  <a name="getparentanimationobject"></a>CAnimationVariable:: GetParentAnimationObject

Restituisce l'oggetto animazione padre.

```
CAnimationBaseObject* GetParentAnimationObject();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto di animazione padre, se la relazione è stata stabilita; in caso contrario, NULL.

### <a name="remarks"></a>Note

Questo metodo può essere chiamato per recuperare un puntatore a un oggetto di animazione padre (un contenitore).

##  <a name="getvalue"></a>CAnimationVariable:: GetValue

Restituisce il valore corrente della variabile di animazione.

```
HRESULT GetValue(DOUBLE& dblValue);
HRESULT GetValue(INT32& nValue);
```

### <a name="parameters"></a>Parametri

*dblValue*<br/>
Valore corrente della variabile di animazione.

*nValue*<br/>
Valore corrente della variabile di animazione.

### <a name="return-value"></a>Valore restituito

S_OK se il valore è stato ottenuto correttamente oppure la variabile di animazione sottostante non è stata creata. In caso contrario, codice di errore HRESULT.

### <a name="remarks"></a>Note

Questo metodo può essere chiamato per recuperare il valore corrente della variabile di animazione. Se l'oggetto COM sottostante non è stato creato, dblValue conterrà un valore predefinito, quando la funzione restituisce.

##  <a name="getvariable"></a>CAnimationVariable:: getvariabile

Restituisce un puntatore all'oggetto COM IUIAnimationVariable.

```
IUIAnimationVariable* GetVariable();
```

### <a name="return-value"></a>Valore restituito

Puntatore valido all'oggetto COM IUIAnimationVariable o NULL se la variabile di animazione non è stata creata o non può essere creata.

### <a name="remarks"></a>Note

Usare questa funzione per accedere all'oggetto COM IUIAnimationVariable sottostante e chiamarne direttamente i metodi, se necessario.

##  <a name="m_bautodestroytransitions"></a>CAnimationVariable:: m_bAutodestroyTransitions

Specifica se gli oggetti di transizione correlati devono essere eliminati.

```
BOOL m_bAutodestroyTransitions;
```

### <a name="remarks"></a>Note

Impostare questo valore su TRUE per forzare l'eliminazione degli oggetti di transizione quando vengono rimossi dall'elenco interno di transizioni. Se questo valore è FALSE, è necessario eliminare le transizioni chiamando l'applicazione. L'elenco delle transizioni viene sempre cancellato dopo che è stata pianificata un'animazione. Il valore predefinito è FALSE.

##  <a name="m_dbldefaultvalue"></a>  CAnimationVariable::m_dblDefaultValue

Specifica il valore predefinito, che viene propagato a IUIAnimationVariable.

```
DOUBLE m_dblDefaultValue;
```

##  <a name="m_lsttransitions"></a>CAnimationVariable:: m_lstTransitions

Contiene un elenco di transizioni che animano questa variabile di animazione.

```
CObList m_lstTransitions;
```

##  <a name="m_pparentobject"></a>CAnimationVariable:: m_pParentObject

Puntatore a un oggetto di animazione che incapsula questa variabile di animazione.

```
CAnimationBaseObject* m_pParentObject;
```

##  <a name="m_variable"></a>CAnimationVariable:: m_variable

Archivia un puntatore all'oggetto COM IUIAnimationVariable. NULL se l'oggetto COM non è stato ancora creato o se la creazione non è riuscita.

```
ATL::CComPtr<IUIAnimationVariable> m_variable;
```

##  <a name="setdefaultvalue"></a>  CAnimationVariable::SetDefaultValue

Imposta il valore predefinito e rilascia l'oggetto COM IUIAnimationVariable.

```
void SetDefaultValue(DOUBLE dblDefaultValue);
```

### <a name="parameters"></a>Parametri

*dblDefaultValue*<br/>
Specifica il nuovo valore predefinito.

### <a name="remarks"></a>Note

Utilizzare questo metodo per reimpostare il valore predefinito. Questo metodo rilascia l'oggetto COM IUIAnimationVariable interno, pertanto quando la variabile di animazione viene ricreata, l'oggetto COM sottostante ottiene il nuovo valore predefinito. Il valore predefinito viene restituito da GetValue se l'oggetto COM che rappresenta la variabile di animazione non viene creato o se la variabile non è stata animata.

##  <a name="setparentanimationobject"></a>  CAnimationVariable::SetParentAnimationObject

Imposta la relazione tra una variabile di animazione e un oggetto di animazione.

```
void SetParentAnimationObject(CAnimationBaseObject* pParentObject);
```

### <a name="parameters"></a>Parametri

*pParentObject*<br/>
Puntatore a un oggetto di animazione che contiene questa variabile.

### <a name="remarks"></a>Note

Questo metodo viene chiamato internamente per stabilire una relazione uno-a-uno tra una variabile di animazione e un oggetto di animazione che lo incapsula.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
