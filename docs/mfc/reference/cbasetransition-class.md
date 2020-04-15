---
title: Classe CBaseTransition
ms.date: 03/27/2019
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
ms.openlocfilehash: 8339785fd10fa3dcef1c0fb573310762dc2d2405
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81352839"
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
|[Enumerazione CBaseTransition::TRANSITION_TYPE](#transition_type_enumeration)|Definisce i tipi di transizione attualmente supportati dall'implementazione MFC dell'API di animazione di Windows.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Transizione Di Base::CBaseTransitionCBaseTransition::CBaseTransition](#cbasetransition)|Costruisce un oggetto di transizione di base.|
|[CBaseTransition:: CBaseTransition](#_dtorcbasetransition)|Distruttore. Chiamato quando un oggetto di transizione viene eliminato definitivamente.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CBaseTransition::AddToStoryboard](#addtostoryboard)|Aggiunge una transizione a uno storyboard.|
|[CBaseTransition::AddToStoryboardAtKeyframes](#addtostoryboardatkeyframes)|Aggiunge una transizione a uno storyboard.|
|[CBaseTransition::Clear](#clear)|Rilascia l'oggetto COM IUIAnimationTransition incapsulato.|
|[CBaseTransition::Create](#create)|Crea una transizione COM.|
|[CBaseTransition::GetEndKeyframe](#getendkeyframe)|Restituisce il fotogramma chiave iniziale.|
|[CBaseTransition::GetRelatedVariable](#getrelatedvariable)|Restituisce un puntatore alla variabile correlata.|
|[CBaseTransition::GetStartKeyframe](#getstartkeyframe)|Restituisce il fotogramma chiave iniziale.|
|[Transizione Di Base::GetTransition](#gettransition)|Di overload. Restituisce un puntatore all'oggetto di transizione COM sottostante.|
|[CBaseTransition::GetType](#gettype)|Restituisce il tipo di transizione.|
|[CBaseTransition::IsAdded](#isadded)|Indica se è stata aggiunta una transizione a uno storyboard.|
|[CBaseTransition::SetKeyframes](#setkeyframes)|Imposta i fotogrammi chiave per una transizione.|
|[CBaseTransition::SetRelatedVariable](#setrelatedvariable)|Stabilisce una relazione tra la variabile di animazione e la transizione.|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Descrizione|
|----------|-----------------|
|[CBaseTransition::m_bAdded](#m_badded)|Specifica se è stata aggiunta una transizione a uno storyboard.|
|[CBaseTransition::m_pEndKeyframe](#m_pendkeyframe)|Memorizza un puntatore al fotogramma chiave che specifica la fine della transizione.|
|[CBaseTransition::m_pRelatedVariable](#m_prelatedvariable)|Puntatore a una variabile di animazione, animata con la transizione archiviata in m_transition.|
|[CBaseTransition::m_pStartKeyframe](#m_pstartkeyframe)|Memorizza un puntatore al fotogramma chiave che specifica l'inizio della transizione.|
|[CBaseTransition::m_transition](#m_transition)|Archivia un puntatore a IUIAnimationTransition. NULL se non è stato creato un oggetto di transizione COM.|
|[CBaseTransition::m_type](#m_type)|Memorizza il tipo di transizione.|

## <a name="remarks"></a>Osservazioni

Questa classe incapsula l'interfaccia IUIAnimationTransition e funge da classe base per tutte le transizioni.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CBaseTransition`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

## <a name="cbasetransitioncbasetransition"></a><a name="_dtorcbasetransition"></a>CBaseTransition:: CBaseTransition

Distruttore. Chiamato quando un oggetto di transizione viene eliminato definitivamente.

```
virtual ~CBaseTransition();
```

## <a name="cbasetransitionaddtostoryboard"></a><a name="addtostoryboard"></a>CBaseTransition::AddToStoryboard

Aggiunge una transizione a uno storyboard.

```
BOOL AddToStoryboard(IUIAnimationStoryboard* pStoryboard);
```

### <a name="parameters"></a>Parametri

*pStoryboard*<br/>
Puntatore a storyboard, che animerà la variabile correlata.

### <a name="return-value"></a>Valore restituito

TRUE, se la transizione è stata aggiunta correttamente a uno storyboard.

### <a name="remarks"></a>Osservazioni

Applica la transizione alla variabile correlata nello storyboard. Se questa è la prima transizione applicata a questa variabile in questo storyboard, la transizione inizia all'inizio dello storyboard. In caso contrario, la transizione viene aggiunta alla transizione aggiunta più di recente alla variabile.

## <a name="cbasetransitionaddtostoryboardatkeyframes"></a><a name="addtostoryboardatkeyframes"></a>CBaseTransition::AddToStoryboardAtKeyframes

Aggiunge una transizione a uno storyboard.

```
BOOL AddToStoryboardAtKeyframes(IUIAnimationStoryboard* pStoryboard);
```

### <a name="parameters"></a>Parametri

*pStoryboard*<br/>
Puntatore a storyboard, che animerà la variabile correlata.

### <a name="return-value"></a>Valore restituito

TRUE, se la transizione è stata aggiunta correttamente a uno storyboard.

### <a name="remarks"></a>Osservazioni

Applica la transizione alla variabile correlata nello storyboard. Se è stato specificato il fotogramma chiave iniziale, la transizione inizia in corrispondenza di tale fotogramma chiave. Se è stato specificato il fotogramma chiave finale, la transizione inizia dal fotogramma chiave iniziale e si interrompe in corrispondenza del fotogramma chiave finale. Se la transizione è stata creata con un parametro duration specificato, tale durata viene sovrascritta con la durata del tempo tra i fotogrammi chiave iniziale e finale. Se non è stato specificato alcun fotogramma chiave, la transizione viene aggiunta alla transizione aggiunta più di recente alla variabile.

## <a name="cbasetransitioncbasetransition"></a><a name="cbasetransition"></a>Transizione Di Base::CBaseTransitionCBaseTransition::CBaseTransition

Costruisce un oggetto di transizione di base.

```
CBaseTransition();
```

## <a name="cbasetransitionclear"></a><a name="clear"></a>CBaseTransition::Clear

Rilascia l'oggetto COM IUIAnimationTransition incapsulato.

```
void Clear();
```

### <a name="remarks"></a>Osservazioni

Questo metodo deve essere chiamato dal metodo Create di una classe derivata per evitare perdite di interfaccia IUITransition.

## <a name="cbasetransitioncreate"></a><a name="create"></a>CBaseTransition::Create

Crea una transizione COM.

```
virtual BOOL Create(
    IUIAnimationTransitionLibrary* pLibrary,
    IUIAnimationTransitionFactory* pFactory) = 0;
```

### <a name="parameters"></a>Parametri

*pLibreria*<br/>
Puntatore alla libreria di transizioni, che crea transizioni standard. Può essere NULL per le transizioni personalizzate.

*pFactory*<br/>
Puntatore alla factory di transizione, che crea transizioni personalizzate. Può essere NULL per le transizioni standard.

### <a name="return-value"></a>Valore restituito

TRUESe un oggetto COM di transizione è stato creato correttamente. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Si tratta di una funzione virtuale pura che deve essere sottoposta a override in una classe derivata. Viene chiamato dal framework per creare un'istanza dell'oggetto di transizione COM sottostante.

## <a name="cbasetransitiongetendkeyframe"></a><a name="getendkeyframe"></a>CBaseTransition::GetEndKeyframe

Restituisce il fotogramma chiave iniziale.

```
CBaseKeyFrame* GetEndKeyframe();
```

### <a name="return-value"></a>Valore restituito

Puntatore valido a un fotogramma chiave oppure NULL se non deve essere inserita una transizione tra fotogrammi chiave.

### <a name="remarks"></a>Osservazioni

Questo metodo può essere utilizzato per accedere a un oggetto fotogrammi chiave precedentemente impostato da SetKeyframes. Viene chiamato dal codice di primo livello quando le transizioni vengono aggiunte allo storyboard.

## <a name="cbasetransitiongetrelatedvariable"></a><a name="getrelatedvariable"></a>CBaseTransition::GetRelatedVariable

Restituisce un puntatore alla variabile correlata.

```
CAnimationVariable* GetRelatedVariable();
```

### <a name="return-value"></a>Valore restituito

Puntatore valido alla variabile di animazione oppure NULL se una variabile di animazione non è stata impostata da SetRelatedVariable.

### <a name="remarks"></a>Osservazioni

Si tratta di una funzione di accesso alla variabile di animazione correlata.

## <a name="cbasetransitiongetstartkeyframe"></a><a name="getstartkeyframe"></a>CBaseTransition::GetStartKeyframe

Restituisce il fotogramma chiave iniziale.

```
CBaseKeyFrame* GetStartKeyframe();
```

### <a name="return-value"></a>Valore restituito

Puntatore valido a un fotogramma chiave oppure NULL se una transizione non deve iniziare dopo un fotogramma chiave.

### <a name="remarks"></a>Osservazioni

Questo metodo può essere utilizzato per accedere a un oggetto fotogrammi chiave precedentemente impostato da SetKeyframes. Viene chiamato dal codice di primo livello quando le transizioni vengono aggiunte allo storyboard.

## <a name="cbasetransitiongettransition"></a><a name="gettransition"></a>Transizione Di Base::GetTransition

Restituisce un puntatore all'oggetto di transizione COM sottostante.

```
IUIAnimationTransition* GetTransition(
    IUIAnimationTransitionLibrary* pLibrary,
    IUIAnimationTransitionFactory* pFactory);

IUIAnimationTransition* GetTransition();
```

### <a name="parameters"></a>Parametri

*pLibreria*<br/>
Puntatore alla libreria di transizioni, che crea transizioni standard. Può essere NULL per le transizioni personalizzate.

*pFactory*<br/>
Puntatore alla factory di transizione, che crea transizioni personalizzate. Può essere NULL per le transizioni standard.

### <a name="return-value"></a>Valore restituito

Puntatore valido a IUIAnimationTransition o NULL se non è possibile creare la transizione sottostante.

### <a name="remarks"></a>Osservazioni

Questo metodo restituisce un puntatore all'oggetto di transizione COM sottostante e lo crea se necessario.

## <a name="cbasetransitiongettype"></a><a name="gettype"></a>CBaseTransition::GetType

Restituisce il tipo di transizione.

```
TRANSITION_TYPE GetType() const;
```

### <a name="return-value"></a>Valore restituito

Uno dei TRANSITION_TYPE valori enumerati.

### <a name="remarks"></a>Osservazioni

Questo metodo può essere utilizzato per identificare un oggetto di transizione dal relativo tipo. Il tipo viene impostato in un costruttore in una classe derivata.

## <a name="cbasetransitionisadded"></a><a name="isadded"></a>CBaseTransition::IsAdded

Indica se è stata aggiunta una transizione a uno storyboard.

```
BOOL IsAdded();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se una transizione è stata aggiunta a uno storyboard, in caso contrario FALSE.

### <a name="remarks"></a>Osservazioni

Questo flag viene impostato internamente quando il codice di primo livello aggiunge transizioni allo storyboard.

## <a name="cbasetransitionm_badded"></a><a name="m_badded"></a>CBaseTransition::m_bAdded

Specifica se è stata aggiunta una transizione a uno storyboard.

```
BOOL m_bAdded;
```

## <a name="cbasetransitionm_pendkeyframe"></a><a name="m_pendkeyframe"></a>CBaseTransition::m_pEndKeyframe

Memorizza un puntatore al fotogramma chiave che specifica la fine della transizione.

```
CBaseKeyFrame* m_pEndKeyframe;
```

## <a name="cbasetransitionm_prelatedvariable"></a><a name="m_prelatedvariable"></a>CBaseTransition::m_pRelatedVariable

Puntatore a una variabile di animazione, animata con la transizione archiviata in m_transition.

```
CAnimationVariable* m_pRelatedVariable;
```

## <a name="cbasetransitionm_pstartkeyframe"></a><a name="m_pstartkeyframe"></a>CBaseTransition::m_pStartKeyframe

Memorizza un puntatore al fotogramma chiave che specifica l'inizio della transizione.

```
CBaseKeyFrame* m_pStartKeyframe;
```

## <a name="cbasetransitionm_transition"></a><a name="m_transition"></a>CBaseTransition::m_transition

Archivia un puntatore a IUIAnimationTransition. NULL se non è stato creato un oggetto di transizione COM.

```
ATL::CComPtr<IUIAnimationTransition> m_transition;
```

## <a name="cbasetransitionm_type"></a><a name="m_type"></a>CBaseTransition::m_type

Memorizza il tipo di transizione.

```
TRANSITION_TYPE m_type;
```

## <a name="cbasetransitionsetkeyframes"></a><a name="setkeyframes"></a>CBaseTransition::SetKeyframes

Imposta i fotogrammi chiave per una transizione.

```
void SetKeyframes(
    CBaseKeyFrame* pStart = NULL,
    CBaseKeyFrame* pEnd = NULL);
```

### <a name="parameters"></a>Parametri

*Pstart*<br/>
Un fotogramma chiave che specifica l'inizio della transizione.

*Pend*<br/>
Un fotogramma chiave che specifica la fine della transizione.

### <a name="remarks"></a>Osservazioni

Questo metodo indica alla transizione di iniziare dopo il fotogramma chiave specificato e, facoltativamente, se pEnd non è NULL, terminare prima del fotogramma chiave specificato. Se la transizione è stata creata con un parametro duration specificato, tale durata viene sovrascritta con la durata del tempo tra i fotogrammi chiave iniziale e finale.

## <a name="cbasetransitionsetrelatedvariable"></a><a name="setrelatedvariable"></a>CBaseTransition::SetRelatedVariable

Stabilisce una relazione tra la variabile di animazione e la transizione.

```
void SetRelatedVariable(CAnimationVariable* pVariable);
```

### <a name="parameters"></a>Parametri

*pVariabile*<br/>
Puntatore a una variabile di animazione correlata.

### <a name="remarks"></a>Osservazioni

Stabilisce una relazione tra la variabile di animazione e la transizione. Una transizione può essere applicata solo a una variabile.

## <a name="cbasetransitiontransition_type-enumeration"></a><a name="transition_type_enumeration"></a>Enumerazione CBaseTransition::TRANSITION_TYPE

Definisce i tipi di transizione attualmente supportati dall'implementazione MFC dell'API di animazione di Windows.

```
enum TRANSITION_TYPE;
```

### <a name="remarks"></a>Osservazioni

Un tipo di transizione viene impostato nel costruttore di una transizione specifica. Ad esempio, CSinusoidalTransitionFromRange imposta il tipo su SINUSOIDAL_FROM_RANGE.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
