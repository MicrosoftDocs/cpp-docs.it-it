---
title: Classe CBaseTransition
ms.date: 11/04/2016
f1_keywords:
- CBaseTransition
- AFXANIMATIONCONTROLLER/CBaseTransition
- AFXANIMATIONCONTROLLER/CBaseTransition::CBaseTransition
- AFXANIMATIONCONTROLLER/CBaseTransition::AddToStoryboard
- AFXANIMATIONCONTROLLER/CBaseTransition::AddToStoryboardAtKeyframes
- AFXANIMATIONCONTROLLER/CBaseTransition::Clear
- AFXANIMATIONCONTROLLER/CBaseTransition::Create
- AFXANIMATIONCONTROLLER/CBaseTransition::GetEndKeyframe
- AFXANIMATIONCONTROLLER/CBaseTransition::GetRelatedVariable
- AFXANIMATIONCONTROLLER/CBaseTransition::GetStartKeyframe
- AFXANIMATIONCONTROLLER/CBaseTransition::GetTransition
- AFXANIMATIONCONTROLLER/CBaseTransition::GetType
- AFXANIMATIONCONTROLLER/CBaseTransition::IsAdded
- AFXANIMATIONCONTROLLER/CBaseTransition::SetKeyframes
- AFXANIMATIONCONTROLLER/CBaseTransition::SetRelatedVariable
- AFXANIMATIONCONTROLLER/CBaseTransition::m_bAdded
- AFXANIMATIONCONTROLLER/CBaseTransition::m_pEndKeyframe
- AFXANIMATIONCONTROLLER/CBaseTransition::m_pRelatedVariable
- AFXANIMATIONCONTROLLER/CBaseTransition::m_pStartKeyframe
- AFXANIMATIONCONTROLLER/CBaseTransition::m_transition
- AFXANIMATIONCONTROLLER/CBaseTransition::m_type
helpviewer_keywords:
- CBaseTransition [MFC], CBaseTransition
- CBaseTransition [MFC], AddToStoryboard
- CBaseTransition [MFC], AddToStoryboardAtKeyframes
- CBaseTransition [MFC], Clear
- CBaseTransition [MFC], Create
- CBaseTransition [MFC], GetEndKeyframe
- CBaseTransition [MFC], GetRelatedVariable
- CBaseTransition [MFC], GetStartKeyframe
- CBaseTransition [MFC], GetTransition
- CBaseTransition [MFC], GetType
- CBaseTransition [MFC], IsAdded
- CBaseTransition [MFC], SetKeyframes
- CBaseTransition [MFC], SetRelatedVariable
- CBaseTransition [MFC], m_bAdded
- CBaseTransition [MFC], m_pEndKeyframe
- CBaseTransition [MFC], m_pRelatedVariable
- CBaseTransition [MFC], m_pStartKeyframe
- CBaseTransition [MFC], m_transition
- CBaseTransition [MFC], m_type
ms.assetid: dfe84007-bbc5-43b7-b5b8-fae9145573bf
ms.openlocfilehash: 1f9bc3708974511506741a35c11676df2b0be592
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57258372"
---
# <a name="cbasetransition-class"></a>Classe CBaseTransition

Rappresenta una transizione di base.

## <a name="syntax"></a>Sintassi

```
class CBaseTransition : public CObject;
```

## <a name="members"></a>Membri

### <a name="public-enumerations"></a>Enumerazioni pubbliche

|Nome|Descrizione|
|----------|-----------------|
|[Enumerazione CBaseTransition::TRANSITION_TYPE](#transition_type_enumeration)|Definisce i tipi di transizione attualmente supportati dall'implementazione MFC di API di animazione di Windows.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CBaseTransition::CBaseTransition](#cbasetransition)|Costruisce un oggetto di transizione di base.|
|[CBaseTransition::~CBaseTransition](#cbasetransition__~cbasetransition)|Distruttore. Chiamato quando viene eliminata definitivamente un oggetto di transizione.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CBaseTransition::AddToStoryboard](#addtostoryboard)|Aggiunge una transizione a uno storyboard.|
|[CBaseTransition::AddToStoryboardAtKeyframes](#addtostoryboardatkeyframes)|Aggiunge una transizione a uno storyboard.|
|[CBaseTransition::Clear](#clear)|Oggetto COM IUIAnimationTransition incapsulato versioni.|
|[CBaseTransition::Create](#create)|Crea una transizione di COM.|
|[CBaseTransition::GetEndKeyframe](#getendkeyframe)|Restituisce l'inizio del fotogramma chiave.|
|[CBaseTransition::GetRelatedVariable](#getrelatedvariable)|Restituisce un puntatore alla variabile correlati.|
|[CBaseTransition::GetStartKeyframe](#getstartkeyframe)|Restituisce l'inizio del fotogramma chiave.|
|[CBaseTransition::GetTransition](#gettransition)|Di overload. Restituisce un puntatore all'oggetto di transizione COM sottostante.|
|[CBaseTransition::GetType](#gettype)|Restituisce il tipo di transizione.|
|[CBaseTransition::IsAdded](#isadded)|Indica se è stata aggiunta una transizione di uno storyboard.|
|[CBaseTransition::SetKeyframes](#setkeyframes)|Imposta i fotogrammi chiave per una transizione.|
|[CBaseTransition::SetRelatedVariable](#setrelatedvariable)|Stabilisce una relazione tra la variabile di animazione e di transizione.|

### <a name="protected-data-members"></a>Membri dati protetti

|nome|Descrizione|
|----------|-----------------|
|[CBaseTransition::m_bAdded](#m_badded)|Specifica se è stata aggiunta una transizione di uno storyboard.|
|[CBaseTransition::m_pEndKeyframe](#m_pendkeyframe)|Archivia un puntatore al fotogramma chiave che specifica la fine della transizione.|
|[CBaseTransition::m_pRelatedVariable](#m_prelatedvariable)|Puntatore a una variabile di animazione, viene aggiunta un'animazione con la transizione archiviata in m_transition.|
|[CBaseTransition::m_pStartKeyframe](#m_pstartkeyframe)|Archivia un puntatore al fotogramma chiave che specifica l'inizio della transizione.|
|[CBaseTransition::m_transition](#m_transition)|Archivia un puntatore a IUIAnimationTransition. NULL se non è stato creato un oggetto COM di transizione.|
|[CBaseTransition::m_type](#m_type)|Archivia il tipo di transizione.|

## <a name="remarks"></a>Note

Questa classe incapsula l'interfaccia IUIAnimationTransition e funge da classe base per tutte le transizioni.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CBaseTransition`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

##  <a name="_dtorcbasetransition"></a>  CBaseTransition:: ~ CBaseTransition

Distruttore. Chiamato quando viene eliminata definitivamente un oggetto di transizione.

```
virtual ~CBaseTransition();
```

##  <a name="addtostoryboard"></a>  CBaseTransition::AddToStoryboard

Aggiunge una transizione a uno storyboard.

```
BOOL AddToStoryboard(IUIAnimationStoryboard* pStoryboard);
```

### <a name="parameters"></a>Parametri

*pStoryboard*<br/>
Puntatore allo storyboard, che viene animato la variabile correlata.

### <a name="return-value"></a>Valore restituito

TRUE se transizione è stato aggiunto a uno storyboard.

### <a name="remarks"></a>Note

Si applica la transizione alla variabile correlata nello storyboard. Se si tratta la transizione prima applicata questa variabile in questo storyboard, la transizione inizia all'inizio dello storyboard. In caso contrario, la transizione viene aggiunto alla transizione aggiunta più di recente alla variabile.

##  <a name="addtostoryboardatkeyframes"></a>  CBaseTransition::AddToStoryboardAtKeyframes

Aggiunge una transizione a uno storyboard.

```
BOOL AddToStoryboardAtKeyframes(IUIAnimationStoryboard* pStoryboard);
```

### <a name="parameters"></a>Parametri

*pStoryboard*<br/>
Puntatore allo storyboard, che viene animato la variabile correlata.

### <a name="return-value"></a>Valore restituito

TRUE se transizione è stato aggiunto a uno storyboard.

### <a name="remarks"></a>Note

Si applica la transizione alla variabile correlata nello storyboard. Se è stato specificato il fotogramma chiave di inizio, la transizione inizia in corrispondenza di quel fotogramma chiave. Se è stato specificato il fotogramma chiave end, la transizione inizia in corrispondenza del fotogramma chiave iniziale e si arresta in corrispondenza del fotogramma chiave di fine. Se la transizione è stata creata con un parametro di durata specificato, la durata viene sovrascritto con l'intervallo di tempo tra i fotogrammi chiave di inizio e fine. Se è stato specificato alcun fotogramma chiave, la transizione viene aggiunto alla transizione aggiunta più di recente alla variabile.

##  <a name="cbasetransition"></a>  CBaseTransition::CBaseTransition

Costruisce un oggetto di transizione di base.

```
CBaseTransition();
```

##  <a name="clear"></a>  CBaseTransition::Clear

Oggetto COM IUIAnimationTransition incapsulato versioni.

```
void Clear();
```

### <a name="remarks"></a>Note

Questo metodo deve essere chiamato dal metodo Create della classe derivata per evitare la perdita di interfaccia IUITransition.

##  <a name="create"></a>  CBaseTransition::Create

Crea una transizione di COM.

```
virtual BOOL Create(
    IUIAnimationTransitionLibrary* pLibrary,
    IUIAnimationTransitionFactory* pFactory) = 0;
```

### <a name="parameters"></a>Parametri

*pLibrary*<br/>
Puntatore alla raccolta di transizione, che consente di creare transizioni standard. Per le transizioni personalizzate può essere NULL.

*pFactory*<br/>
Puntatore alla factory di transizione, che consente di creare transizioni personalizzate. Per le transizioni standard può essere NULL.

### <a name="return-value"></a>Valore restituito

TRUE se un oggetto COM di transizione è stato creato correttamente. in caso contrario, FALSE.

### <a name="remarks"></a>Note

Si tratta di una funzione virtuale pura che deve essere sottoposto a override in una classe derivata. Viene chiamato dal framework per creare un'istanza di oggetto di transizione COM sottostante.

##  <a name="getendkeyframe"></a>  CBaseTransition::GetEndKeyframe

Restituisce l'inizio del fotogramma chiave.

```
CBaseKeyFrame* GetEndKeyframe();
```

### <a name="return-value"></a>Valore restituito

Un puntatore valido a un fotogramma chiave, o NULL se non deve essere inserita una transizione tra fotogrammi chiave.

### <a name="remarks"></a>Note

Questo metodo può essere utilizzato per accedere a un oggetto fotogramma chiave che è stato impostato in precedenza da SetKeyframes. Viene chiamato dal codice di primo livello quando le transizioni vengono aggiunti allo storyboard.

##  <a name="getrelatedvariable"></a>  CBaseTransition::GetRelatedVariable

Restituisce un puntatore alla variabile correlati.

```
CAnimationVariable* GetRelatedVariable();
```

### <a name="return-value"></a>Valore restituito

Un puntatore valido a variabile di animazione, o NULL se non è stata impostata una variabile di animazione da SetRelatedVariable.

### <a name="remarks"></a>Note

Si tratta di una funzione di accesso alla variabile di animazione correlati.

##  <a name="getstartkeyframe"></a>  CBaseTransition::GetStartKeyframe

Restituisce l'inizio del fotogramma chiave.

```
CBaseKeyFrame* GetStartKeyframe();
```

### <a name="return-value"></a>Valore restituito

Un puntatore valido a un fotogramma chiave, o NULL se una transizione non deve iniziare dopo un fotogramma chiave.

### <a name="remarks"></a>Note

Questo metodo può essere utilizzato per accedere a un oggetto fotogramma chiave che è stato impostato in precedenza da SetKeyframes. Viene chiamato dal codice di primo livello quando le transizioni vengono aggiunti allo storyboard.

##  <a name="gettransition"></a>  CBaseTransition::GetTransition

Restituisce un puntatore all'oggetto di transizione COM sottostante.

```
IUIAnimationTransition* GetTransition(
    IUIAnimationTransitionLibrary* pLibrary,
    IUIAnimationTransitionFactory* pFactory);

IUIAnimationTransition* GetTransition();
```

### <a name="parameters"></a>Parametri

*pLibrary*<br/>
Puntatore alla raccolta di transizione, che consente di creare transizioni standard. Per le transizioni personalizzate può essere NULL.

*pFactory*<br/>
Puntatore alla factory di transizione, che consente di creare transizioni personalizzate. Per le transizioni standard può essere NULL.

### <a name="return-value"></a>Valore restituito

Non è possibile creare un puntatore valido a IUIAnimationTransition o NULL se la transizione sottostante.

### <a name="remarks"></a>Note

Questo metodo restituisce un puntatore all'oggetto sottostante di transizione COM e la crea se necessario.

##  <a name="gettype"></a>  CBaseTransition::GetType

Restituisce il tipo di transizione.

```
TRANSITION_TYPE GetType() const;
```

### <a name="return-value"></a>Valore restituito

Uno dei TRANSITION_TYPE valori enumerati.

### <a name="remarks"></a>Note

Questo metodo può essere utilizzato per identificare un oggetto di transizione in base al tipo. Il tipo è impostato in un costruttore in una classe derivata.

##  <a name="isadded"></a>  CBaseTransition::IsAdded

Indica se è stata aggiunta una transizione di uno storyboard.

```
BOOL IsAdded();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se è stata aggiunta una transizione a uno storyboard, in caso contrario FALSE.

### <a name="remarks"></a>Note

Questo flag è impostato internamente quando il codice di primo livello aggiunge passa allo storyboard.

##  <a name="m_badded"></a>  CBaseTransition::m_bAdded

Specifica se è stata aggiunta una transizione di uno storyboard.

```
BOOL m_bAdded;
```

##  <a name="m_pendkeyframe"></a>  CBaseTransition::m_pEndKeyframe

Archivia un puntatore al fotogramma chiave che specifica la fine della transizione.

```
CBaseKeyFrame* m_pEndKeyframe;
```

##  <a name="m_prelatedvariable"></a>  CBaseTransition::m_pRelatedVariable

Puntatore a una variabile di animazione, viene aggiunta un'animazione con la transizione archiviata in m_transition.

```
CAnimationVariable* m_pRelatedVariable;
```

##  <a name="m_pstartkeyframe"></a>  CBaseTransition::m_pStartKeyframe

Archivia un puntatore al fotogramma chiave che specifica l'inizio della transizione.

```
CBaseKeyFrame* m_pStartKeyframe;
```

##  <a name="m_transition"></a>  CBaseTransition::m_transition

Archivia un puntatore a IUIAnimationTransition. NULL se non è stato creato un oggetto COM di transizione.

```
ATL::CComPtr<IUIAnimationTransition> m_transition;
```

##  <a name="m_type"></a>  CBaseTransition::m_type

Archivia il tipo di transizione.

```
TRANSITION_TYPE m_type;
```

##  <a name="setkeyframes"></a>  CBaseTransition::SetKeyframes

Imposta i fotogrammi chiave per una transizione.

```
void SetKeyframes(
    CBaseKeyFrame* pStart = NULL,
    CBaseKeyFrame* pEnd = NULL);
```

### <a name="parameters"></a>Parametri

*pStart*<br/>
Un fotogramma chiave che specifica l'inizio della transizione.

*pEnd*<br/>
Un fotogramma chiave che specifica la fine della transizione.

### <a name="remarks"></a>Note

Questo metodo indica la transizione a iniziare dopo il fotogramma chiave specificato e, facoltativamente, se non è NULL, in sospeso terminare prima del fotogramma chiave specificato. Se la transizione è stata creata con un parametro di durata specificato, la durata viene sovrascritto con l'intervallo di tempo tra i fotogrammi chiave di inizio e fine.

##  <a name="setrelatedvariable"></a>  CBaseTransition::SetRelatedVariable

Stabilisce una relazione tra la variabile di animazione e di transizione.

```
void SetRelatedVariable(CAnimationVariable* pVariable);
```

### <a name="parameters"></a>Parametri

*pVariable*<br/>
Puntatore alla variabile di animazione correlati.

### <a name="remarks"></a>Note

Stabilisce una relazione tra la variabile di animazione e di transizione. Una transizione può essere applicata solo a una variabile.

##  <a name="transition_type_enumeration"></a>  Enumerazione CBaseTransition::TRANSITION_TYPE

Definisce i tipi di transizione attualmente supportati dall'implementazione MFC di API di animazione di Windows.

```
enum TRANSITION_TYPE;
```

### <a name="remarks"></a>Note

Un tipo di transizione è impostato nel costruttore della transizione specifica. Ad esempio, CSinusoidalTransitionFromRange imposta il tipo su SINUSOIDAL_FROM_RANGE.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
