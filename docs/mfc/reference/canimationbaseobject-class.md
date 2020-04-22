---
title: Classe CAnimationBaseObject
ms.date: 03/27/2019
f1_keywords:
- CAnimationBaseObject
- AFXANIMATIONCONTROLLER/CAnimationBaseObject
- AFXANIMATIONCONTROLLER/CAnimationBaseObject::CAnimationBaseObject
- AFXANIMATIONCONTROLLER/CAnimationBaseObject::ApplyTransitions
- AFXANIMATIONCONTROLLER/CAnimationBaseObject::ClearTransitions
- AFXANIMATIONCONTROLLER/CAnimationBaseObject::ContainsVariable
- AFXANIMATIONCONTROLLER/CAnimationBaseObject::CreateTransitions
- AFXANIMATIONCONTROLLER/CAnimationBaseObject::DetachFromController
- AFXANIMATIONCONTROLLER/CAnimationBaseObject::EnableIntegerValueChangedEvent
- AFXANIMATIONCONTROLLER/CAnimationBaseObject::EnableValueChangedEvent
- AFXANIMATIONCONTROLLER/CAnimationBaseObject::GetAutodestroyTransitions
- AFXANIMATIONCONTROLLER/CAnimationBaseObject::GetGroupID
- AFXANIMATIONCONTROLLER/CAnimationBaseObject::GetObjectID
- AFXANIMATIONCONTROLLER/CAnimationBaseObject::GetUserData
- AFXANIMATIONCONTROLLER/CAnimationBaseObject::SetAutodestroyTransitions
- AFXANIMATIONCONTROLLER/CAnimationBaseObject::SetID
- AFXANIMATIONCONTROLLER/CAnimationBaseObject::SetUserData
- AFXANIMATIONCONTROLLER/CAnimationBaseObject::GetAnimationVariableList
- AFXANIMATIONCONTROLLER/CAnimationBaseObject::SetParentAnimationObjects
- AFXANIMATIONCONTROLLER/CAnimationBaseObject::m_bAutodestroyTransitions
- AFXANIMATIONCONTROLLER/CAnimationBaseObject::m_dwUserData
- AFXANIMATIONCONTROLLER/CAnimationBaseObject::m_nGroupID
- AFXANIMATIONCONTROLLER/CAnimationBaseObject::m_nObjectID
- AFXANIMATIONCONTROLLER/CAnimationBaseObject::m_pParentController
helpviewer_keywords:
- CAnimationBaseObject [MFC], CAnimationBaseObject
- CAnimationBaseObject [MFC], ApplyTransitions
- CAnimationBaseObject [MFC], ClearTransitions
- CAnimationBaseObject [MFC], ContainsVariable
- CAnimationBaseObject [MFC], CreateTransitions
- CAnimationBaseObject [MFC], DetachFromController
- CAnimationBaseObject [MFC], EnableIntegerValueChangedEvent
- CAnimationBaseObject [MFC], EnableValueChangedEvent
- CAnimationBaseObject [MFC], GetAutodestroyTransitions
- CAnimationBaseObject [MFC], GetGroupID
- CAnimationBaseObject [MFC], GetObjectID
- CAnimationBaseObject [MFC], GetUserData
- CAnimationBaseObject [MFC], SetAutodestroyTransitions
- CAnimationBaseObject [MFC], SetID
- CAnimationBaseObject [MFC], SetUserData
- CAnimationBaseObject [MFC], GetAnimationVariableList
- CAnimationBaseObject [MFC], SetParentAnimationObjects
- CAnimationBaseObject [MFC], m_bAutodestroyTransitions
- CAnimationBaseObject [MFC], m_dwUserData
- CAnimationBaseObject [MFC], m_nGroupID
- CAnimationBaseObject [MFC], m_nObjectID
- CAnimationBaseObject [MFC], m_pParentController
ms.assetid: 76b25917-940e-4eba-940f-31d270702603
ms.openlocfilehash: 1874ddfdd26b8dd371e32f7e68ea8f668c47d8e1
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81750215"
---
# <a name="canimationbaseobject-class"></a>Classe CAnimationBaseObject

Classe di base per tutti gli oggetti di animazione.

## <a name="syntax"></a>Sintassi

```
class CAnimationBaseObject : public CObject;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Oggetto CAnimationBaseObject::CAnimationBaseObject](#canimationbaseobject)|Di overload. Costruisce un oggetto di animazione.|
|[Oggetto CAnimationBaseObject:: CAnimationBaseObject](#_dtorcanimationbaseobject)|Distruttore. Chiamato quando un oggetto di animazione viene eliminato definitivamente.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Oggetto CAnimationBaseObject::ApplyTransitions](#applytransitions)|Aggiunge transizioni allo storyboard con variabile di animazione incapsulata.|
|[Oggetto CAnimationBaseObject::ClearTransitions](#cleartransitions)|Rimuove tutte le transizioni correlate.|
|[Oggetto CAnimationBaseObject::ContainsVariable](#containsvariable)|Determina se un oggetto di animazione contiene una particolare variabile di animazione.|
|[Oggetto CAnimationBaseObject::CreateTransitionsCAnimationBaseObject::CreateTransitions](#createtransitions)|Crea transizioni associate a un oggetto di animazione.|
|[CAnimationBaseObject::DetachFromController](#detachfromcontroller)|Scollega un oggetto di animazione dal controller di animazione padre.|
|[CAnimationBaseObject::EnableIntegerValueChangedEvent](#enableintegervaluechangedevent)|Imposta il gestore eventi Integer Value Changed.|
|[CAnimationBaseObject::EnableValueChangedEvent](#enablevaluechangedevent)|Imposta il gestore eventi Value Changed.|
|[Oggetto CAnimationBaseObject::GetAutodestroyTransitions](#getautodestroytransitions)|Indica se la transizione correlata viene eliminata automaticamente.|
|[Oggetto CAnimationBaseObject::GetGroupID](#getgroupid)|Restituisce l'ID gruppo corrente.|
|[Oggetto CAnimationBaseObject::GetObjectID](#getobjectid)|Restituisce l'ID oggetto corrente.|
|[Oggetto CAnimationBaseObject::GetUserDataCAnimationBaseObject::GetUserData](#getuserdata)|Restituisce i dati definiti dall'utente.|
|[Oggetto CAnimationBaseObject::SetAutodestroyTransitions](#setautodestroytransitions)|Imposta un flag per eliminare automaticamente le transizioni.|
|[Oggetto CAnimationBaseObject::SetID](#setid)|Imposta i nuovi ID.|
|[Oggetto CAnimationBaseObject::SetUserDataCAnimationBaseObject::SetUserData](#setuserdata)|Imposta i dati definiti dall'utente.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[Oggetto CAnimationBaseObject::GetAnimationVariableList](#getanimationvariablelist)|Raccoglie i puntatori alle variabili di animazione contenute.|
|[Oggetti CAnimationBaseObject::SetParentAnimationObjects](#setparentanimationobjects)|Stabilisce una relazione tra le variabili di animazione, contenute in un oggetto di animazione, e il relativo contenitore.|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Descrizione|
|----------|-----------------|
|[Oggetto CAnimationBaseObject::m_bAutodestroyTransitions](#m_bautodestroytransitions)|Specifica se le transizioni correlate devono essere distrutte automaticamente.|
|[Oggetto CAnimationBaseObject::m_dwUserData](#m_dwuserdata)|Archivia i dati definiti dall'utente.|
|[Oggetto CAnimationBaseObject::m_nGroupID](#m_ngroupid)|Specifica l'ID gruppo dell'oggetto animazione.|
|[Oggetto CAnimationBaseObject::m_nObjectID](#m_nobjectid)|Specifica l'ID oggetto dell'oggetto di animazione.|
|[Oggetto CAnimationBaseObject::m_pParentController](#m_pparentcontroller)|Puntatore al controller di animazione padre.|

## <a name="remarks"></a>Osservazioni

Questa classe implementa i metodi di base per tutti gli oggetti di animazione. Un oggetto di animazione può rappresentare un valore, un punto, una dimensione, un rettangolo o un colore in un'applicazione, nonché qualsiasi entità personalizzata. Gli oggetti di animazione vengono archiviati in gruppi di animazione (vedere CAnimationGroup). Ogni gruppo può essere animato separatamente e può essere trattato come un analogo dello storyboard. Un oggetto di animazione incapsula una o più variabili di animazione (vedere CAnimationVariable), a seconda della relativa rappresentazione logica. Ad esempio, CAnimationRect contiene quattro variabili di animazione, una variabile per ogni lato del rettangolo. Ogni classe di oggetti di animazione espone il metodo AddTransition di overload, che deve essere usato per applicare le transizioni alle variabili di animazione incapsulate. Un oggetto di animazione può essere identificato dall'ID oggetto (facoltativamente) e dall'ID gruppo. Un ID gruppo è necessario per inserire un oggetto di animazione nel gruppo corretto, ma se non viene specificato un ID gruppo, un oggetto viene inserito nel gruppo predefinito con ID 0. Se si chiama SetID con GroupID diverso, un oggetto di animazione verrà spostato in un altro gruppo (viene creato un nuovo gruppo se necessario).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CAnimationBaseObject`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

## <a name="canimationbaseobjectcanimationbaseobject"></a><a name="_dtorcanimationbaseobject"></a>Oggetto CAnimationBaseObject:: CAnimationBaseObject

Distruttore. Chiamato quando un oggetto di animazione viene eliminato definitivamente.

```
virtual ~CAnimationBaseObject();
```

## <a name="canimationbaseobjectapplytransitions"></a><a name="applytransitions"></a>Oggetto CAnimationBaseObject::ApplyTransitions

Aggiunge transizioni allo storyboard con variabile di animazione incapsulata.

```
virtual BOOL ApplyTransitions(
    IUIAnimationStoryboard* pStoryboard,
    BOOL bDependOnKeyframes);
```

### <a name="parameters"></a>Parametri

*pStoryboard*<br/>
Puntatore a uno storyboard.

*bUncionKeyframes*<br/>
Se FALSE, questo metodo aggiunge solo le transizioni che non dipendono dai fotogrammi chiave.

### <a name="return-value"></a>Valore restituito

TRUESe le transizioni sono state aggiunte correttamente.

### <a name="remarks"></a>Osservazioni

Aggiunge transizioni correlate, che sono state aggiunte con AddTransition (metodi di overload nelle classi derivate), allo storyboard.

## <a name="canimationbaseobjectcanimationbaseobject"></a><a name="canimationbaseobject"></a>Oggetto CAnimationBaseObject::CAnimationBaseObject

Costruisce un oggetto di animazione.

```
CAnimationBaseObject();

CAnimationBaseObject(
    UINT32 nGroupID,
    UINT32 nObjectID = (UINT32)-1,
    DWORD dwUserData = 0);
```

### <a name="parameters"></a>Parametri

*nId gruppo*<br/>
Specifica l'ID gruppo.

*nObjectID (informazioni in stato in questo oggetto)*<br/>
Specifica l'ID oggetto.

*dwUserData (dati utente)*<br/>
Dati definiti dall'utente, che possono essere associati all'oggetto di animazione e recuperati in un secondo momento in fase di esecuzione.

### <a name="remarks"></a>Osservazioni

Costruisce un oggetto di animazione e assegna l'ID oggetto predefinito (0) e l'ID gruppo (0).

## <a name="canimationbaseobjectcleartransitions"></a><a name="cleartransitions"></a>Oggetto CAnimationBaseObject::ClearTransitions

Rimuove tutte le transizioni correlate.

```
virtual void ClearTransitions(BOOL bAutodestroy);
```

### <a name="parameters"></a>Parametri

*bAutoeliminazione*<br/>
Specifica se eliminare automaticamente gli oggetti di transizione o semplicemente rimuoverli dall'elenco correlato.

### <a name="remarks"></a>Osservazioni

Rimuove tutte le transizioni correlate e le elimina se bAutodestroy o m_bAutodestroyTransitions flag è TRUE. Le transizioni devono essere distrutte automaticamente solo se non sono allocate nello stack. Se i flag precedenti sono FALSE, le transizioni vengono semplicemente rimosse dall'elenco interno delle transizioni correlate.

## <a name="canimationbaseobjectcontainsvariable"></a><a name="containsvariable"></a>Oggetto CAnimationBaseObject::ContainsVariable

Determina se un oggetto di animazione contiene una particolare variabile di animazione.

```
virtual BOOL ContainsVariable(IUIAnimationVariable* pVariable);
```

### <a name="parameters"></a>Parametri

*pVariabile*<br/>
Puntatore alla variabile di animazione.

### <a name="return-value"></a>Valore restituito

TRUESe la variabile di animazione è contenuta nell'oggetto di animazione. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questo metodo può essere utilizzato per determinare se una variabile di animazione specificata da pVariable è contenuta all'interno di un oggetto di animazione. Un oggetto di animazione, a seconda del tipo, può contenere diverse variabili di animazione. Ad esempio, CAnimationColor contiene tre variabili, una per ogni componente di colore (rosso, verde e blu). Quando un valore della variabile di animazione è stato modificato, l'API di animazione di Windows invia gli eventi ValueChanged o IntegerValueChanged (se abilitato) e il parametro di questo evento è un puntatore all'interfaccia IUIAnimationVariable della variabile di animazione. Questo metodo consente di ottenere un puntatore all'animazione da un puntatore all'oggetto COM indipendente.

## <a name="canimationbaseobjectcreatetransitions"></a><a name="createtransitions"></a>Oggetto CAnimationBaseObject::CreateTransitionsCAnimationBaseObject::CreateTransitions

Crea transizioni associate a un oggetto di animazione.

```
BOOL CreateTransitions();
```

### <a name="return-value"></a>Valore restituito

TRUESe le transizioni sono state create correttamente. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Esegue un ciclo sull'elenco di variabili di animazione incapsulate in un oggetto di animazione derivato e crea transizioni associate a ogni variabile di animazione.

## <a name="canimationbaseobjectdetachfromcontroller"></a><a name="detachfromcontroller"></a>CAnimationBaseObject::DetachFromController

Scollega un oggetto di animazione dal controller di animazione padre.

```cpp
void DetachFromController();
```

### <a name="remarks"></a>Osservazioni

Questo metodo viene utilizzato internamente.

## <a name="canimationbaseobjectenableintegervaluechangedevent"></a><a name="enableintegervaluechangedevent"></a>CAnimationBaseObject::EnableIntegerValueChangedEvent

Imposta il gestore eventi Integer Value Changed.

```
virtual void EnableIntegerValueChangedEvent(
    CAnimationController* pController,
    BOOL bEnable);
```

### <a name="parameters"></a>Parametri

*pController*<br/>
Puntatore a un controller padre.

*bEnable*<br/>
Specifica se abilitare o disabilitare l'evento Integer Value Changed.

### <a name="remarks"></a>Osservazioni

Se il valore intero changed gestore dell'evento è abilitato, è possibile gestire questo evento in CAnimationController::OnAnimationIntegerValueChanged metodo, che deve essere sottoposto a override in un CAnimationController-classe derivata. Questo metodo viene chiamato ogni volta che viene modificato il valore intero dell'animazione.

## <a name="canimationbaseobjectenablevaluechangedevent"></a><a name="enablevaluechangedevent"></a>CAnimationBaseObject::EnableValueChangedEvent

Imposta il gestore eventi Value Changed.

```
virtual void EnableValueChangedEvent(
    CAnimationController* pController,
    BOOL bEnable);
```

### <a name="parameters"></a>Parametri

*pController*<br/>
Puntatore a un controller padre.

*bEnable*<br/>
Specifica se abilitare o disabilitare l'evento Valore modificato.

### <a name="remarks"></a>Osservazioni

Se il Value Changed gestore dell'evento è abilitato, è possibile gestire questo evento in CAnimationController::OnAnimationValueChanged metodo, che deve essere sottoposto a override in un CAnimationController-classe derivata. Questo metodo viene chiamato ogni volta che il valore dell'animazione viene modificato.

## <a name="canimationbaseobjectgetanimationvariablelist"></a><a name="getanimationvariablelist"></a>Oggetto CAnimationBaseObject::GetAnimationVariableList

Raccoglie i puntatori alle variabili di animazione contenute.

```
virtual void GetAnimationVariableList(
    CList<CAnimationVariable*,
    CAnimationVariable*>& list) = 0;
```

### <a name="parameters"></a>Parametri

*list*<br/>
Elenco che deve essere riempito con variabili di animazione contenute in un oggetto di animazione.

### <a name="remarks"></a>Osservazioni

Questo metodo virtuale puro deve essere sottoposto a override in una classe derivata. Un oggetto di animazione, a seconda del tipo, contiene una o più variabili di animazione. Ad esempio, CAnimationPoint contiene due variabili, rispettivamente per le coordinate X e Y. La classe base CAnimationBaseObject implementa alcuni metodi generici che agiscono su un elenco di variabili di animazione: ApplyTransitions, ClearTransitions, EnableValueChangedEvent, EnableIntegerValueChangedEvent. Questi metodi chiamano GetAnimationVariableList, che viene compilato in una classe derivata con variabili di animazione effettive contenute in un particolare oggetto di animazione, quindi scorrere l'elenco ed eseguire le azioni necessarie. Se si crea un oggetto di animazione personalizzato, è necessario aggiungere per *elencare* tutte le variabili di animazione contenute in tale oggetto.

## <a name="canimationbaseobjectgetautodestroytransitions"></a><a name="getautodestroytransitions"></a>Oggetto CAnimationBaseObject::GetAutodestroyTransitions

Indica se la transizione correlata viene eliminata automaticamente.

```
BOOL GetAutodestroyTransitions() const;
```

### <a name="return-value"></a>Valore restituito

Se TRUE, le transizioni correlate vengono distrutte automaticamente; Se FALSE, gli oggetti di transizione devono essere deallocati chiamando l'applicazione.

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, questo flag è TRUE. Impostare questo flag solo se è stata allocata la transizione nello stack e/o le transizioni devono essere deallocate dall'applicazione chiamante.

## <a name="canimationbaseobjectgetgroupid"></a><a name="getgroupid"></a>Oggetto CAnimationBaseObject::GetGroupID

Restituisce l'ID gruppo corrente.

```
UINT32 GetGroupID() const;
```

### <a name="return-value"></a>Valore restituito

ID gruppo corrente.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo per recuperare l'ID gruppo. È 0 se l'ID gruppo non è stato impostato in modo esplicito nel costruttore o con SetID.

## <a name="canimationbaseobjectgetobjectid"></a><a name="getobjectid"></a>Oggetto CAnimationBaseObject::GetObjectID

Restituisce l'ID oggetto corrente.

```
UINT32 GetObjectID() const;
```

### <a name="return-value"></a>Valore restituito

ID oggetto corrente.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo per recuperare l'ID oggetto. È 0 se l'ID oggetto non è stato impostato in modo esplicito nel costruttore o con SetID.

## <a name="canimationbaseobjectgetuserdata"></a><a name="getuserdata"></a>Oggetto CAnimationBaseObject::GetUserDataCAnimationBaseObject::GetUserData

Restituisce i dati definiti dall'utente.

```
DWORD GetUserData() const;
```

### <a name="return-value"></a>Valore restituito

Valore dei dati personalizzati.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per recuperare i dati personalizzati in fase di esecuzione. Il valore restituito sarà 0 se non è stato inizializzato in modo esplicito nel costruttore o con SetUserData.The returned value will be 0 if it was not explicitly initialized in constructor or with SetUserData.

## <a name="canimationbaseobjectm_bautodestroytransitions"></a><a name="m_bautodestroytransitions"></a>Oggetto CAnimationBaseObject::m_bAutodestroyTransitions

Specifica se le transizioni correlate devono essere distrutte automaticamente.

```
BOOL m_bAutodestroyTransitions;
```

## <a name="canimationbaseobjectm_dwuserdata"></a><a name="m_dwuserdata"></a>Oggetto CAnimationBaseObject::m_dwUserData

Archivia i dati definiti dall'utente.

```
DWORD m_dwUserData;
```

## <a name="canimationbaseobjectm_ngroupid"></a><a name="m_ngroupid"></a>Oggetto CAnimationBaseObject::m_nGroupID

Specifica l'ID gruppo dell'oggetto animazione.

```
UINT32 m_nGroupID;
```

## <a name="canimationbaseobjectm_nobjectid"></a><a name="m_nobjectid"></a>Oggetto CAnimationBaseObject::m_nObjectID

Specifica l'ID oggetto dell'oggetto di animazione.

```
UINT32 m_nObjectID;
```

## <a name="canimationbaseobjectm_pparentcontroller"></a><a name="m_pparentcontroller"></a>Oggetto CAnimationBaseObject::m_pParentController

Puntatore al controller di animazione padre.

```
CAnimationController* m_pParentController;
```

## <a name="canimationbaseobjectsetautodestroytransitions"></a><a name="setautodestroytransitions"></a>Oggetto CAnimationBaseObject::SetAutodestroyTransitions

Imposta un flag per eliminare automaticamente le transizioni.

```cpp
void SetAutodestroyTransitions(BOOL bValue);
```

### <a name="parameters"></a>Parametri

*bValore*<br/>
Specifica il flag di eliminazione automatica.

### <a name="remarks"></a>Osservazioni

Impostare questo flag solo se sono stati assegnati oggetti di transizione utilizzando operator new. Se per qualche motivo gli oggetti di transizione vengono allocati nello stack, il flag auto destroy deve essere FALSE. Per impostazione predefinita, questo flag è TRUE.

## <a name="canimationbaseobjectsetid"></a><a name="setid"></a>Oggetto CAnimationBaseObject::SetID

Imposta i nuovi ID.

```cpp
void SetID(
    UINT32 nObjectID,
    UINT32 nGroupID = 0);
```

### <a name="parameters"></a>Parametri

*nObjectID (informazioni in stato in questo oggetto)*<br/>
Specifica un nuovo ID oggetto.

*nId gruppo*<br/>
Specifica un nuovo ID gruppo.

### <a name="remarks"></a>Osservazioni

Consente di modificare l'ID oggetto e l'ID gruppo. Se il nuovo ID gruppo è diverso dall'ID corrente, un oggetto di animazione viene spostato in un altro gruppo (verrà creato un nuovo gruppo, se necessario).

## <a name="canimationbaseobjectsetparentanimationobjects"></a><a name="setparentanimationobjects"></a>Oggetti CAnimationBaseObject::SetParentAnimationObjects

Stabilisce una relazione tra le variabili di animazione, contenute in un oggetto di animazione, e il relativo contenitore.

```
virtual void SetParentAnimationObjects();
```

### <a name="remarks"></a>Osservazioni

Questo helper può essere utilizzato per stabilire una relazione tra le variabili di animazione contenute in un oggetto di animazione e il relativo contenitore. Esegue un ciclo sulle variabili di animazione e imposta un puntatore Indietro a un oggetto di animazione padre su ogni variabile di animazione. In the current implementation, the actual relationship is established in CAnimationBaseObject::ApplyTransitions, therefore back pointers are not set until you call CAnimationGroup::Animate. Conoscere la relazione può essere utile quando si elaborano eventi ed è necessario ottenere un oggetto di animazione padre da CAnimationVariable.Knowing the relationship may be helpful when you processing events and need to get a parent animation object from CAnimationVariable. Usare CAnimationVariable::GetParentAnimationObject.Use CAnimationVariable::GetParentAnimationObject.

## <a name="canimationbaseobjectsetuserdata"></a><a name="setuserdata"></a>Oggetto CAnimationBaseObject::SetUserDataCAnimationBaseObject::SetUserData

Imposta i dati definiti dall'utente.

```cpp
void SetUserData (DWORD dwUserData);
```

### <a name="parameters"></a>Parametri

*dwUserData (dati utente)*<br/>
Specifica i dati personalizzati.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo per associare dati personalizzati a un oggetto di animazione. Questi dati possono essere recuperati in un secondo momento in fase di esecuzione da GetUserData.This data may be retrieved later at runtime by GetUserData.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
