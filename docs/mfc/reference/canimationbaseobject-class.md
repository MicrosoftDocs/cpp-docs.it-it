---
description: 'Altre informazioni su: classe CAnimationBaseObject'
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
ms.openlocfilehash: bc44d0e55b409f66648007eeb27fefd386640d9f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97318663"
---
# <a name="canimationbaseobject-class"></a>Classe CAnimationBaseObject

Classe di base per tutti gli oggetti di animazione.

## <a name="syntax"></a>Sintassi

```
class CAnimationBaseObject : public CObject;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CAnimationBaseObject:: CAnimationBaseObject](#canimationbaseobject)|Di overload. Costruisce un oggetto di animazione.|
|[CAnimationBaseObject:: ~ CAnimationBaseObject](#_dtorcanimationbaseobject)|Distruttore. Chiamato quando un oggetto animazione viene eliminato definitivamente.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CAnimationBaseObject:: ApplyTransitions](#applytransitions)|Aggiunge transizioni allo storyboard con la variabile di animazione incapsulata.|
|[CAnimationBaseObject:: ClearTransitions](#cleartransitions)|Rimuove tutte le transizioni correlate.|
|[CAnimationBaseObject:: ContainsVariable](#containsvariable)|Determina se un oggetto animazione contiene una particolare variabile di animazione.|
|[CAnimationBaseObject:: CreateTransitions](#createtransitions)|Crea transizioni associate a un oggetto di animazione.|
|[CAnimationBaseObject::D etachFromController](#detachfromcontroller)|Scollega un oggetto animazione dal controller di animazione padre.|
|[CAnimationBaseObject:: EnableIntegerValueChangedEvent](#enableintegervaluechangedevent)|Imposta il gestore dell'evento di modifica del valore intero.|
|[CAnimationBaseObject:: EnableValueChangedEvent](#enablevaluechangedevent)|Imposta il gestore dell'evento di modifica del valore.|
|[CAnimationBaseObject:: GetAutodestroyTransitions](#getautodestroytransitions)|Indica se la transizione correlata viene distrutta automaticamente.|
|[CAnimationBaseObject:: GetGroupID](#getgroupid)|Restituisce l'ID gruppo corrente.|
|[CAnimationBaseObject:: GetObjectID](#getobjectid)|Restituisce l'ID dell'oggetto corrente.|
|[CAnimationBaseObject:: GetUserData](#getuserdata)|Restituisce i dati definiti dall'utente.|
|[CAnimationBaseObject:: SetAutodestroyTransitions](#setautodestroytransitions)|Imposta un flag per eliminare automaticamente le transizioni.|
|[CAnimationBaseObject:: SetId](#setid)|Imposta nuovi ID.|
|[CAnimationBaseObject:: SetUserData](#setuserdata)|Imposta i dati definiti dall'utente.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Description|
|----------|-----------------|
|[CAnimationBaseObject:: GetAnimationVariableList](#getanimationvariablelist)|Raccoglie i puntatori alle variabili di animazione contenute.|
|[CAnimationBaseObject:: SetParentAnimationObjects](#setparentanimationobjects)|Stabilisce la relazione tra le variabili di animazione, contenute in un oggetto animazione e il relativo contenitore.|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Description|
|----------|-----------------|
|[CAnimationBaseObject:: m_bAutodestroyTransitions](#m_bautodestroytransitions)|Specifica se le transizioni correlate devono essere eliminate automaticamente.|
|[CAnimationBaseObject:: m_dwUserData](#m_dwuserdata)|Archivia i dati definiti dall'utente.|
|[CAnimationBaseObject:: m_nGroupID](#m_ngroupid)|Specifica l'ID del gruppo dell'oggetto Animation.|
|[CAnimationBaseObject:: m_nObjectID](#m_nobjectid)|Specifica l'ID oggetto dell'oggetto Animation.|
|[CAnimationBaseObject:: m_pParentController](#m_pparentcontroller)|Puntatore al controller di animazione padre.|

## <a name="remarks"></a>Commenti

Questa classe implementa i metodi di base per tutti gli oggetti di animazione. Un oggetto animazione può rappresentare un valore, un punto, una dimensione, un rettangolo o un colore in un'applicazione, nonché qualsiasi entità personalizzata. Gli oggetti di animazione vengono archiviati nei gruppi di animazione (vedere CAnimationGroup). Ogni gruppo può essere animato separatamente e può essere considerato analogo allo storyboard. Un oggetto Animation incapsula una o più variabili di animazione (vedere CAnimationVariable), a seconda della relativa rappresentazione logica. Ad esempio, CAnimationRect contiene quattro variabili di animazione, una variabile per ogni lato del rettangolo. Ogni classe di oggetti Animation espone il metodo AddTransition di overload, che deve essere usato per applicare transizioni a variabili di animazione incapsulate. Un oggetto animazione può essere identificato dall'ID oggetto (facoltativamente) e dall'ID gruppo. Un ID gruppo è necessario per inserire un oggetto animazione nel gruppo corretto, ma se non si specifica un ID gruppo, un oggetto viene inserito nel gruppo predefinito con ID 0. Se si chiama SetId con GroupID diversi, un oggetto Animation verrà spostato in un altro gruppo. se necessario, viene creato un nuovo gruppo.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CAnimationBaseObject`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

## <a name="canimationbaseobjectcanimationbaseobject"></a><a name="_dtorcanimationbaseobject"></a> CAnimationBaseObject:: ~ CAnimationBaseObject

Distruttore. Chiamato quando un oggetto animazione viene eliminato definitivamente.

```
virtual ~CAnimationBaseObject();
```

## <a name="canimationbaseobjectapplytransitions"></a><a name="applytransitions"></a> CAnimationBaseObject:: ApplyTransitions

Aggiunge transizioni allo storyboard con la variabile di animazione incapsulata.

```
virtual BOOL ApplyTransitions(
    IUIAnimationStoryboard* pStoryboard,
    BOOL bDependOnKeyframes);
```

### <a name="parameters"></a>Parametri

*pStoryboard*<br/>
Puntatore a uno storyboard.

*bDependOnKeyframes*<br/>
Se è FALSE, questo metodo aggiunge solo le transizioni che non dipendono da fotogrammi chiave.

### <a name="return-value"></a>Valore restituito

TRUE se le transizioni sono state aggiunte correttamente.

### <a name="remarks"></a>Commenti

Aggiunge le transizioni correlate che sono state aggiunte con AddTransition (metodi di overload nelle classi derivate) allo storyboard.

## <a name="canimationbaseobjectcanimationbaseobject"></a><a name="canimationbaseobject"></a> CAnimationBaseObject:: CAnimationBaseObject

Costruisce un oggetto di animazione.

```
CAnimationBaseObject();

CAnimationBaseObject(
    UINT32 nGroupID,
    UINT32 nObjectID = (UINT32)-1,
    DWORD dwUserData = 0);
```

### <a name="parameters"></a>Parametri

*nGroupID*<br/>
Specifica l'ID gruppo.

*nObjectID*<br/>
Specifica l'ID oggetto.

*dwUserData*<br/>
Dati definiti dall'utente, che possono essere associati a un oggetto di animazione e recuperati in un secondo momento in fase di esecuzione.

### <a name="remarks"></a>Commenti

Costruisce oggetti di animazione e assegna l'ID oggetto predefinito (0) e l'ID gruppo (0).

## <a name="canimationbaseobjectcleartransitions"></a><a name="cleartransitions"></a> CAnimationBaseObject:: ClearTransitions

Rimuove tutte le transizioni correlate.

```
virtual void ClearTransitions(BOOL bAutodestroy);
```

### <a name="parameters"></a>Parametri

*bAutodestroy*<br/>
Specifica se eliminare automaticamente gli oggetti di transizione o semplicemente rimuoverli dall'elenco correlato.

### <a name="remarks"></a>Commenti

Rimuove tutte le transizioni correlate e le Elimina Se bAutodestroy o m_bAutodestroyTransitions flag è TRUE. Le transizioni devono essere eliminate automaticamente solo se non sono allocate nello stack. Se i flag precedenti sono FALSE, le transizioni vengono semplicemente rimosse dall'elenco interno di transizioni correlate.

## <a name="canimationbaseobjectcontainsvariable"></a><a name="containsvariable"></a> CAnimationBaseObject:: ContainsVariable

Determina se un oggetto animazione contiene una particolare variabile di animazione.

```
virtual BOOL ContainsVariable(IUIAnimationVariable* pVariable);
```

### <a name="parameters"></a>Parametri

*pVariable*<br/>
Puntatore alla variabile di animazione.

### <a name="return-value"></a>Valore restituito

TRUE se la variabile di animazione è contenuta nell'oggetto Animation; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Questo metodo può essere utilizzato per determinare se una variabile di animazione specificata da pVariable è contenuta all'interno di un oggetto Animation. Un oggetto Animation, a seconda del tipo, può contenere diverse variabili di animazione. Ad esempio, CAnimationColor contiene tre variabili, una per ogni componente colore (rosso, verde e blu). Quando viene modificato un valore della variabile di animazione, l'API di animazione Windows invia gli eventi ValueChanged o IntegerValueChanged (se abilitata) e il parametro di questo evento è un puntatore all'interfaccia IUIAnimationVariable della variabile di animazione. Questo metodo consente di ottenere un puntatore all'animazione da un puntatore a un oggetto COM contenuto.

## <a name="canimationbaseobjectcreatetransitions"></a><a name="createtransitions"></a> CAnimationBaseObject:: CreateTransitions

Crea transizioni associate a un oggetto di animazione.

```
BOOL CreateTransitions();
```

### <a name="return-value"></a>Valore restituito

TRUE se le transizioni sono state create correttamente; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Esegue il loop sull'elenco di variabili di animazione incapsulate in un oggetto animazione derivato e crea transizioni associate a ogni variabile di animazione.

## <a name="canimationbaseobjectdetachfromcontroller"></a><a name="detachfromcontroller"></a> CAnimationBaseObject::D etachFromController

Scollega un oggetto animazione dal controller di animazione padre.

```cpp
void DetachFromController();
```

### <a name="remarks"></a>Commenti

Questo metodo viene utilizzato internamente.

## <a name="canimationbaseobjectenableintegervaluechangedevent"></a><a name="enableintegervaluechangedevent"></a> CAnimationBaseObject:: EnableIntegerValueChangedEvent

Imposta il gestore dell'evento di modifica del valore intero.

```
virtual void EnableIntegerValueChangedEvent(
    CAnimationController* pController,
    BOOL bEnable);
```

### <a name="parameters"></a>Parametri

*pController*<br/>
Puntatore a un controller padre.

*bEnable*<br/>
Specifica se abilitare o disabilitare l'evento di modifica del valore intero.

### <a name="remarks"></a>Commenti

Se il gestore eventi di modifica del valore integer è abilitato, è possibile gestire questo evento nel metodo CAnimationController:: OnAnimationIntegerValueChanged, che deve essere sottoposto a override in una classe derivata da CAnimationController. Questo metodo viene chiamato ogni volta che viene modificato il valore intero dell'animazione.

## <a name="canimationbaseobjectenablevaluechangedevent"></a><a name="enablevaluechangedevent"></a> CAnimationBaseObject:: EnableValueChangedEvent

Imposta il gestore dell'evento di modifica del valore.

```
virtual void EnableValueChangedEvent(
    CAnimationController* pController,
    BOOL bEnable);
```

### <a name="parameters"></a>Parametri

*pController*<br/>
Puntatore a un controller padre.

*bEnable*<br/>
Specifica se abilitare o disabilitare l'evento di modifica del valore.

### <a name="remarks"></a>Commenti

Se il gestore eventi di modifica del valore è abilitato, è possibile gestire questo evento nel metodo CAnimationController:: OnAnimationValueChanged, che deve essere sottoposto a override in una classe derivata da CAnimationController. Questo metodo viene chiamato ogni volta che il valore dell'animazione viene modificato.

## <a name="canimationbaseobjectgetanimationvariablelist"></a><a name="getanimationvariablelist"></a> CAnimationBaseObject:: GetAnimationVariableList

Raccoglie i puntatori alle variabili di animazione contenute.

```
virtual void GetAnimationVariableList(
    CList<CAnimationVariable*,
    CAnimationVariable*>& list) = 0;
```

### <a name="parameters"></a>Parametri

*list*<br/>
Elenco che deve essere compilato con le variabili di animazione contenute in un oggetto Animation.

### <a name="remarks"></a>Commenti

Questo metodo virtuale puro deve essere sottoposto a override in una classe derivata. Un oggetto Animation, a seconda del tipo, contiene una o più variabili di animazione. Ad esempio, CAnimationPoint contiene due variabili, rispettivamente per le coordinate X e Y. La classe base CAnimationBaseObject implementa alcuni metodi generici, che agiscono su un elenco di variabili di animazione: ApplyTransitions, ClearTransitions, EnableValueChangedEvent, EnableIntegerValueChangedEvent. Questi metodi chiamano GetAnimationVariableList, che viene compilato in una classe derivata con le variabili di animazione effettive contenute in un particolare oggetto Animation, quindi esegue il ciclo sull'elenco ed esegue le azioni necessarie. Se si crea un oggetto animazione personalizzato, è necessario aggiungere per *elencare* tutte le variabili di animazione contenute in tale oggetto.

## <a name="canimationbaseobjectgetautodestroytransitions"></a><a name="getautodestroytransitions"></a> CAnimationBaseObject:: GetAutodestroyTransitions

Indica se la transizione correlata viene distrutta automaticamente.

```
BOOL GetAutodestroyTransitions() const;
```

### <a name="return-value"></a>Valore restituito

Se TRUE, le transizioni correlate vengono eliminate automaticamente. Se FALSE, gli oggetti di transizione devono essere deallocati chiamando l'applicazione.

### <a name="remarks"></a>Commenti

Per impostazione predefinita, questo flag è TRUE. Impostare questo flag solo se è stata allocata una transizione nello stack e/o le transizioni devono essere deallocate dall'applicazione chiamante.

## <a name="canimationbaseobjectgetgroupid"></a><a name="getgroupid"></a> CAnimationBaseObject:: GetGroupID

Restituisce l'ID gruppo corrente.

```
UINT32 GetGroupID() const;
```

### <a name="return-value"></a>Valore restituito

ID gruppo corrente.

### <a name="remarks"></a>Commenti

Utilizzare questo metodo per recuperare l'ID gruppo. È 0 se l'ID gruppo non è stato impostato in modo esplicito nel costruttore o con SetId.

## <a name="canimationbaseobjectgetobjectid"></a><a name="getobjectid"></a> CAnimationBaseObject:: GetObjectID

Restituisce l'ID dell'oggetto corrente.

```
UINT32 GetObjectID() const;
```

### <a name="return-value"></a>Valore restituito

ID oggetto corrente.

### <a name="remarks"></a>Commenti

Utilizzare questo metodo per recuperare l'ID oggetto. È 0 se l'ID oggetto non è stato impostato in modo esplicito nel costruttore o con SetId.

## <a name="canimationbaseobjectgetuserdata"></a><a name="getuserdata"></a> CAnimationBaseObject:: GetUserData

Restituisce i dati definiti dall'utente.

```
DWORD GetUserData() const;
```

### <a name="return-value"></a>Valore restituito

Valore di dati personalizzati.

### <a name="remarks"></a>Commenti

Chiamare questo metodo per recuperare i dati personalizzati in fase di esecuzione. Il valore restituito sarà 0 se non è stato inizializzato in modo esplicito nel costruttore o con SetUserData.

## <a name="canimationbaseobjectm_bautodestroytransitions"></a><a name="m_bautodestroytransitions"></a> CAnimationBaseObject:: m_bAutodestroyTransitions

Specifica se le transizioni correlate devono essere eliminate automaticamente.

```
BOOL m_bAutodestroyTransitions;
```

## <a name="canimationbaseobjectm_dwuserdata"></a><a name="m_dwuserdata"></a> CAnimationBaseObject:: m_dwUserData

Archivia i dati definiti dall'utente.

```
DWORD m_dwUserData;
```

## <a name="canimationbaseobjectm_ngroupid"></a><a name="m_ngroupid"></a> CAnimationBaseObject:: m_nGroupID

Specifica l'ID del gruppo dell'oggetto Animation.

```
UINT32 m_nGroupID;
```

## <a name="canimationbaseobjectm_nobjectid"></a><a name="m_nobjectid"></a> CAnimationBaseObject:: m_nObjectID

Specifica l'ID oggetto dell'oggetto Animation.

```
UINT32 m_nObjectID;
```

## <a name="canimationbaseobjectm_pparentcontroller"></a><a name="m_pparentcontroller"></a> CAnimationBaseObject:: m_pParentController

Puntatore al controller di animazione padre.

```
CAnimationController* m_pParentController;
```

## <a name="canimationbaseobjectsetautodestroytransitions"></a><a name="setautodestroytransitions"></a> CAnimationBaseObject:: SetAutodestroyTransitions

Imposta un flag per eliminare automaticamente le transizioni.

```cpp
void SetAutodestroyTransitions(BOOL bValue);
```

### <a name="parameters"></a>Parametri

*bValue*<br/>
Specifica il flag auto Destroy.

### <a name="remarks"></a>Commenti

Impostare questo flag solo se sono stati allocati oggetti di transizione utilizzando operator new. Se per qualche motivo gli oggetti di transizione vengono allocati nello stack, il flag auto Destroy dovrebbe essere FALSE. Per impostazione predefinita, questo flag è TRUE.

## <a name="canimationbaseobjectsetid"></a><a name="setid"></a> CAnimationBaseObject:: SetId

Imposta nuovi ID.

```cpp
void SetID(
    UINT32 nObjectID,
    UINT32 nGroupID = 0);
```

### <a name="parameters"></a>Parametri

*nObjectID*<br/>
Specifica un nuovo ID oggetto.

*nGroupID*<br/>
Specifica un nuovo ID gruppo.

### <a name="remarks"></a>Commenti

Consente di modificare ID oggetto e ID gruppo. Se il nuovo ID gruppo è diverso dall'ID corrente, un oggetto animazione viene spostato in un altro gruppo. se necessario, verrà creato un nuovo gruppo.

## <a name="canimationbaseobjectsetparentanimationobjects"></a><a name="setparentanimationobjects"></a> CAnimationBaseObject:: SetParentAnimationObjects

Stabilisce la relazione tra le variabili di animazione, contenute in un oggetto animazione e il relativo contenitore.

```
virtual void SetParentAnimationObjects();
```

### <a name="remarks"></a>Commenti

Questo helper può essere usato per stabilire una relazione tra le variabili di animazione contenute in un oggetto animazione e il relativo contenitore. Esegue il loop sulle variabili di animazione e imposta un puntatore indietro su un oggetto animazione padre per ogni variabile di animazione. Nell'implementazione corrente la relazione effettiva viene stabilita in CAnimationBaseObject:: ApplyTransitions, pertanto i puntatori indietro non vengono impostati fino a quando non si chiama CAnimationGroup:: animate. Conoscere la relazione può essere utile quando si elaborano eventi ed è necessario ottenere un oggetto animazione padre da CAnimationVariable. Usare CAnimationVariable:: GetParentAnimationObject.

## <a name="canimationbaseobjectsetuserdata"></a><a name="setuserdata"></a> CAnimationBaseObject:: SetUserData

Imposta i dati definiti dall'utente.

```cpp
void SetUserData (DWORD dwUserData);
```

### <a name="parameters"></a>Parametri

*dwUserData*<br/>
Specifica i dati personalizzati.

### <a name="remarks"></a>Commenti

Utilizzare questo metodo per associare dati personalizzati a un oggetto di animazione. Questi dati possono essere recuperati in un secondo momento in fase di esecuzione da GetUserData.

## <a name="see-also"></a>Vedi anche

[Classi](../../mfc/reference/mfc-classes.md)
