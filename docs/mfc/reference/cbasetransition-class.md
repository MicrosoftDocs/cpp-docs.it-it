---
title: Classe CBaseTransition | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
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
dev_langs:
- C++
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
caps.latest.revision: 17
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 4a770b6508067913aec51b8b3878f33e30eed4bb
ms.openlocfilehash: 2bb7fb5599e508656686637477b776ab7a9708d0
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

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
|[Enumerazione CBaseTransition::TRANSITION_TYPE](#transition_type_enumeration)|Definisce i tipi di transizione attualmente supportati dall'implementazione MFC di API di animazione Windows.|  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CBaseTransition::CBaseTransition](#cbasetransition)|Costruisce un oggetto di transizione di base.|  
|[CBaseTransition:: ~ CBaseTransition](#cbasetransition__~cbasetransition)|Distruttore. Chiamato quando viene eliminato un oggetto di transizione.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CBaseTransition::AddToStoryboard](#addtostoryboard)|Aggiunge una transizione a uno storyboard.|  
|[CBaseTransition::AddToStoryboardAtKeyframes](#addtostoryboardatkeyframes)|Aggiunge una transizione a uno storyboard.|  
|[CBaseTransition::Clear](#clear)|Versioni oggetto COM IUIAnimationTransition incapsulato.|  
|[CBaseTransition:: Create](#create)|Crea una transizione di COM.|  
|[CBaseTransition::GetEndKeyframe](#getendkeyframe)|Restituisce l'inizio del fotogramma chiave.|  
|[CBaseTransition::GetRelatedVariable](#getrelatedvariable)|Restituisce un puntatore alla variabile correlata.|  
|[CBaseTransition::GetStartKeyframe](#getstartkeyframe)|Restituisce l'inizio del fotogramma chiave.|  
|[CBaseTransition::GetTransition](#gettransition)|Di overload. Restituisce un puntatore all'oggetto di transizione COM sottostante.|  
|[CBaseTransition::GetType](#gettype)|Restituisce il tipo di transizione.|  
|[CBaseTransition::IsAdded](#isadded)|Indica se è stato aggiunto una transizione a uno storyboard.|  
|[CBaseTransition::](#setkeyframes)|Imposta i fotogrammi chiave per una transizione.|  
|[CBaseTransition::SetRelatedVariable](#setrelatedvariable)|Stabilisce una relazione tra la variabile di animazione e di transizione.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CBaseTransition::m_bAdded](#m_badded)|Specifica se è stato aggiunto una transizione a uno storyboard.|  
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
  
##  <a name="_dtorcbasetransition"></a>CBaseTransition:: ~ CBaseTransition  
 Distruttore. Chiamato quando viene eliminato un oggetto di transizione.  
  
```  
virtual ~CBaseTransition();
```  
  
##  <a name="addtostoryboard"></a>CBaseTransition::AddToStoryboard  
 Aggiunge una transizione a uno storyboard.  
  
```  
BOOL AddToStoryboard(IUIAnimationStoryboard* pStoryboard);
```  
  
### <a name="parameters"></a>Parametri  
 `pStoryboard`  
 Puntatore allo storyboard che aggiungerà un'animazione alla variabile correlata.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se è stato aggiunto transizione a uno storyboard.  
  
### <a name="remarks"></a>Note  
 Si applica la transizione alla variabile correlata nello storyboard. Se questa è la prima transizione applicata a questa variabile di questo storyboard, la transizione inizia all'inizio dello storyboard. In caso contrario, la transizione viene aggiunto alla transizione aggiunta più di recente alla variabile.  
  
##  <a name="addtostoryboardatkeyframes"></a>CBaseTransition::AddToStoryboardAtKeyframes  
 Aggiunge una transizione a uno storyboard.  
  
```  
BOOL AddToStoryboardAtKeyframes(IUIAnimationStoryboard* pStoryboard);
```  
  
### <a name="parameters"></a>Parametri  
 `pStoryboard`  
 Puntatore allo storyboard che aggiungerà un'animazione alla variabile correlata.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se è stato aggiunto transizione a uno storyboard.  
  
### <a name="remarks"></a>Note  
 Si applica la transizione alla variabile correlata nello storyboard. Se è stato specificato il fotogramma chiave di avvio, la transizione inizia in corrispondenza di questo fotogramma chiave. Se è stato specificato il fotogramma chiave finale, la transizione inizia in corrispondenza del fotogramma chiave iniziale ed e si ferma in corrispondenza del fotogramma chiave finale. Se la transizione è stata creata con un parametro di durata specificato, tale durata viene sovrascritto con il periodo di tempo tra i fotogrammi chiave iniziale e finale. Se è stato specificato alcun fotogramma chiave, la transizione viene aggiunto alla transizione aggiunta più di recente alla variabile.  
  
##  <a name="cbasetransition"></a>CBaseTransition::CBaseTransition  
 Costruisce un oggetto di transizione di base.  
  
```  
CBaseTransition();
```  
  
##  <a name="clear"></a>CBaseTransition::Clear  
 Versioni oggetto COM IUIAnimationTransition incapsulato.  
  
```  
void Clear();
```  
  
### <a name="remarks"></a>Note  
 Questo metodo deve essere chiamato dal metodo Create della classe derivata per evitare la perdita di interfaccia IUITransition.  
  
##  <a name="create"></a>CBaseTransition:: Create  
 Crea una transizione di COM.  
  
```  
virtual BOOL Create(
    IUIAnimationTransitionLibrary* pLibrary,  
    IUIAnimationTransitionFactory* pFactory) = 0;  
```  
  
### <a name="parameters"></a>Parametri  
 `pLibrary`  
 Puntatore alla raccolta di transizione, che crea le transizioni standard. Può essere NULL per le transizioni personalizzate.  
  
 `pFactory`  
 Puntatore alla transizione factory, che consente di creare transizioni personalizzate. Può essere NULL per le transizioni standard.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se è stato creato un oggetto COM di transizione. in caso contrario FALSE.  
  
### <a name="remarks"></a>Note  
 Si tratta di una funzione virtuale pura che deve essere sottoposto a override in una classe derivata. Viene chiamato dal framework per creare un'istanza di oggetto di transizione COM sottostante.  
  
##  <a name="getendkeyframe"></a>CBaseTransition::GetEndKeyframe  
 Restituisce l'inizio del fotogramma chiave.  
  
```  
CBaseKeyFrame* GetEndKeyframe();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore valido a un fotogramma chiave, o NULL se non deve essere inserita una transizione tra i fotogrammi chiave.  
  
### <a name="remarks"></a>Note  
 Questo metodo può essere utilizzato per accedere a un oggetto fotogramma chiave che è stato impostato precedentemente da SetKeyframes. È chiamato da codice di livello superiore quando le transizioni vengono aggiunti allo storyboard.  
  
##  <a name="getrelatedvariable"></a>CBaseTransition::GetRelatedVariable  
 Restituisce un puntatore alla variabile correlata.  
  
```  
CAnimationVariable* GetRelatedVariable();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore valido alla variabile di animazione, o NULL se non è stata impostata una variabile di animazione da SetRelatedVariable.  
  
### <a name="remarks"></a>Note  
 Si tratta di una funzione di accesso alla variabile di animazione correlati.  
  
##  <a name="getstartkeyframe"></a>CBaseTransition::GetStartKeyframe  
 Restituisce l'inizio del fotogramma chiave.  
  
```  
CBaseKeyFrame* GetStartKeyframe();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore valido a un fotogramma chiave, o NULL se una transizione non deve iniziare dopo un fotogramma chiave.  
  
### <a name="remarks"></a>Note  
 Questo metodo può essere utilizzato per accedere a un oggetto fotogramma chiave che è stato impostato precedentemente da SetKeyframes. È chiamato da codice di livello superiore quando le transizioni vengono aggiunti allo storyboard.  
  
##  <a name="gettransition"></a>CBaseTransition::GetTransition  
 Restituisce un puntatore all'oggetto di transizione COM sottostante.  
  
```  
IUIAnimationTransition* GetTransition(
    IUIAnimationTransitionLibrary* pLibrary,  
    IUIAnimationTransitionFactory* pFactory);  
  
IUIAnimationTransition* GetTransition();
```  
  
### <a name="parameters"></a>Parametri  
 `pLibrary`  
 Puntatore alla raccolta di transizione, che crea le transizioni standard. Può essere NULL per le transizioni personalizzate.  
  
 `pFactory`  
 Puntatore alla transizione factory, che consente di creare transizioni personalizzate. Può essere NULL per le transizioni standard.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore valido a IUIAnimationTransition o NULL se non è possibile creare la transizione sottostante.  
  
### <a name="remarks"></a>Note  
 Questo metodo restituisce un puntatore all'oggetto di transizione COM sottostante e la crea se necessario.  
  
##  <a name="gettype"></a>CBaseTransition::GetType  
 Restituisce il tipo di transizione.  
  
```  
TRANSITION_TYPE GetType() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Uno di TRANSITION_TYPE valori enumerati.  
  
### <a name="remarks"></a>Note  
 Questo metodo può essere utilizzato per identificare un oggetto di transizione dal relativo tipo. Il tipo è impostato in un costruttore in una classe derivata.  
  
##  <a name="isadded"></a>CBaseTransition::IsAdded  
 Indica se è stato aggiunto una transizione a uno storyboard.  
  
```  
BOOL IsAdded();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE se è stato aggiunto una transizione a uno storyboard, in caso contrario FALSE.  
  
### <a name="remarks"></a>Note  
 Questo flag viene impostato internamente quando il codice di livello superiore aggiunge transizioni allo storyboard.  
  
##  <a name="m_badded"></a>CBaseTransition::m_bAdded  
 Specifica se è stato aggiunto una transizione a uno storyboard.  
  
```  
BOOL m_bAdded;  
```  
  
##  <a name="m_pendkeyframe"></a>CBaseTransition::m_pEndKeyframe  
 Archivia un puntatore al fotogramma chiave che specifica la fine della transizione.  
  
```  
CBaseKeyFrame* m_pEndKeyframe;  
```  
  
##  <a name="m_prelatedvariable"></a>CBaseTransition::m_pRelatedVariable  
 Puntatore a una variabile di animazione, viene aggiunta un'animazione con la transizione archiviata in m_transition.  
  
```  
CAnimationVariable* m_pRelatedVariable;  
```  
  
##  <a name="m_pstartkeyframe"></a>CBaseTransition::m_pStartKeyframe  
 Archivia un puntatore al fotogramma chiave che specifica l'inizio della transizione.  
  
```  
CBaseKeyFrame* m_pStartKeyframe;  
```  
  
##  <a name="m_transition"></a>CBaseTransition::m_transition  
 Archivia un puntatore a IUIAnimationTransition. NULL se non è stato creato un oggetto COM di transizione.  
  
```  
ATL::CComPtr<IUIAnimationTransition> m_transition;  
```  
  
##  <a name="m_type"></a>CBaseTransition::m_type  
 Archivia il tipo di transizione.  
  
```  
TRANSITION_TYPE m_type;  
```  
  
##  <a name="setkeyframes"></a>CBaseTransition::  
 Imposta i fotogrammi chiave per una transizione.  
  
```  
void SetKeyframes(
    CBaseKeyFrame* pStart = NULL,  
    CBaseKeyFrame* pEnd = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `pStart`  
 Fotogramma chiave che specifica l'inizio della transizione.  
  
 `pEnd`  
 Fotogramma chiave che specifica la fine della transizione.  
  
### <a name="remarks"></a>Note  
 Questo metodo indica alla transizione di iniziare dopo il fotogramma chiave specificato e, facoltativamente, se in sospeso non è NULL, terminare prima del fotogramma chiave specificato. Se la transizione è stata creata con un parametro di durata specificato, tale durata viene sovrascritto con il periodo di tempo tra i fotogrammi chiave iniziale e finale.  
  
##  <a name="setrelatedvariable"></a>CBaseTransition::SetRelatedVariable  
 Stabilisce una relazione tra la variabile di animazione e di transizione.  
  
```  
void SetRelatedVariable(CAnimationVariable* pVariable);
```  
  
### <a name="parameters"></a>Parametri  
 `pVariable`  
 Puntatore alla variabile di animazione correlati.  
  
### <a name="remarks"></a>Note  
 Stabilisce una relazione tra la variabile di animazione e di transizione. Una transizione può essere applicata solo a una variabile.  
  
##  <a name="transition_type_enumeration"></a>Enumerazione CBaseTransition::TRANSITION_TYPE  
 Definisce i tipi di transizione attualmente supportati dall'implementazione MFC di API di animazione Windows.  
  
```  
enum TRANSITION_TYPE;  
```  
  
### <a name="remarks"></a>Note  
 Un tipo di transizione è impostato nel costruttore di una transizione specifica. Ad esempio, CSinusoidalTransitionFromRange imposta il tipo su SINUSOIDAL_FROM_RANGE.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)

