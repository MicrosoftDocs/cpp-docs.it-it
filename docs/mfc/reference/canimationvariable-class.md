---
title: Classe CAnimationVariable | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- CAnimationVariable class
ms.assetid: 506e697e-31a8-4033-a27e-292f4d7b42d9
caps.latest.revision: 17
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 42513c841f6dc891369d7d6640ced1aa37f90e8e
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="canimationvariable-class"></a>Classe CAnimationVariable
Rappresenta una variabile di animazione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CAnimationVariable;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationVariable::CAnimationVariable](#canimationvariable)|Costruisce un oggetto variabile di animazione.|  
|[CAnimationVariable:: ~ CAnimationVariable](#canimationvariable__~canimationvariable)|Distruttore. Chiamato quando viene eliminato un oggetto CAnimationVariable.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationVariable::AddTransition](#addtransition)|Aggiunge una transizione.|  
|[CAnimationVariable::ApplyTransitions](#applytransitions)|Aggiunge transizioni dall'elenco interno allo storyboard.|  
|[CAnimationVariable::ClearTransitions](#cleartransitions)|Cancella le transizioni.|  
|[CAnimationVariable::Create](#create)|Crea l'oggetto COM variabile di animazione sottostante.|  
|[CAnimationVariable::CreateTransitions](#createtransitions)|Crea tutte le transizioni da applicare a questa variabile di animazione.|  
|[CAnimationVariable:: EnableIntegerValueChangedEvent](#enableintegervaluechangedevent)|Abilita o disabilita l'evento IntegerValueChanged.|  
|[CAnimationVariable:: EnableValueChangedEvent](#enablevaluechangedevent)|Abilita o disabilita l'evento ValueChanged.|  
|[CAnimationVariable::GetDefaultValue](#getdefaultvalue)|Restituisce il valore predefinito.|  
|[CAnimationVariable:: GetParentAnimationObject](#getparentanimationobject)|Restituisce l'elemento padre oggetto di animazione.|  
|[CAnimationVariable::GetValue](#getvalue)|Di overload. Restituisce il valore corrente della variabile di animazione.|  
|[CAnimationVariable::GetVariable](#getvariable)|Restituisce un puntatore a un oggetto COM IUIAnimationVariable.|  
|[CAnimationVariable::SetDefaultValue](#setdefaultvalue)|Imposta il valore predefinito e rilascia un oggetto COM IUIAnimationVariable.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationVariable::SetParentAnimationObject](#setparentanimationobject)|Imposta la relazione tra una variabile di animazione e un oggetto di animazione.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationVariable::m_bAutodestroyTransitions](#m_bautodestroytransitions)|Specifica se gli oggetti di transizione correlati devono essere eliminati.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationVariable::m_dblDefaultValue](#m_dbldefaultvalue)|Specifica il valore predefinito, che viene propagato in IUIAnimationVariable.|  
|[CAnimationVariable::m_lstTransitions](#m_lsttransitions)|Contiene un elenco di transizioni che animano questa variabile di animazione.|  
|[CAnimationVariable::m_pParentObject](#m_pparentobject)|Un puntatore a un oggetto di animazione che incapsula questa variabile di animazione.|  
|[CAnimationVariable::m_variable](#m_variable)|Archivia un puntatore a un oggetto COM IUIAnimationVariable. NULL se l'oggetto COM non è ancora stata creata o creazione non riuscita.|  
  
## <a name="remarks"></a>Note  
 La classe CAnimationVariable incapsula un oggetto COM IUIAnimationVariable. Contiene inoltre un elenco di transizioni da applicare alla variabile di animazione in uno storyboard. Oggetti CAnimationVariable sono incorporati per gli oggetti di animazione, che possono rappresentare un'applicazione un valore animato, punto, le dimensioni, colore e rettangolo.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CAnimationVariable`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxanimationcontroller.h  
  
##  <a name="_dtorcanimationvariable"></a>CAnimationVariable:: ~ CAnimationVariable  
 Distruttore. Chiamato quando viene eliminato un oggetto CAnimationVariable.  
  
```  
virtual ~CAnimationVariable();
```  
  
##  <a name="addtransition"></a>CAnimationVariable::AddTransition  
 Aggiunge una transizione.  
  
```  
void AddTransition(CBaseTransition* pTransition);
```  
  
### <a name="parameters"></a>Parametri  
 `pTransition`  
 Un puntatore a una transizione da aggiungere.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato per aggiungere una transizione all'elenco interno di transizioni da applicare alla variabile di animazione. Questo elenco deve essere cancellato quando è stata pianificata un'animazione.  
  
##  <a name="applytransitions"></a>CAnimationVariable::ApplyTransitions  
 Aggiunge transizioni dall'elenco interno allo storyboard.  
  
```  
void ApplyTransitions(
    CAnimationController* pController,  
    IUIAnimationStoryboard* pStoryboard,  
    BOOL bDependOnKeyframes);
```  
  
### <a name="parameters"></a>Parametri  
 `pController`  
 Puntatore al controller di animazione padre.  
  
 `pStoryboard`  
 Puntatore allo storyboard.  
  
 `bDependOnKeyframes`  
 TRUE se questo metodo aggiunge le transizioni che dipendono dai fotogrammi chiave.  
  
### <a name="remarks"></a>Note  
 Questo metodo aggiunge transizioni dall'elenco interno allo storyboard. Viene chiamato da codice di livello superiore più volte per aggiungere le transizioni che non dipendono dai fotogrammi chiave e aggiungere le transizioni che dipendono dai fotogrammi chiave. Se non è stata creata la variabile di animazione sottostante oggetto COM, questo metodo crea in questa fase.  
  
##  <a name="canimationvariable"></a>CAnimationVariable::CAnimationVariable  
 Costruisce un oggetto variabile di animazione.  
  
```  
CAnimationVariable(DOUBLE dblDefaultValue = 0.0);
```  
  
### <a name="parameters"></a>Parametri  
 `dblDefaultValue`  
 Specifica il valore predefinito.  
  
### <a name="remarks"></a>Note  
 Costruisce un oggetto variabile di animazione e imposta il valore predefinito. Un valore predefinito viene utilizzato quando una variabile non è animata o non possono essere animata.  
  
##  <a name="cleartransitions"></a>CAnimationVariable::ClearTransitions  
 Cancella le transizioni.  
  
```  
void ClearTransitions(BOOL bAutodestroy);
```  
  
### <a name="parameters"></a>Parametri  
 `bAutodestroy`  
 Specifica se questo metodo deve eliminare gli oggetti di transizione.  
  
### <a name="remarks"></a>Note  
 Questo metodo rimuove tutte le transizioni dall'elenco interno di transizioni. Se il flag bAutodestroy è TRUE o m_bAutodestroyTransitions è TRUE, vengono eliminate le transizioni. In caso contrario, il chiamante deve deallocare gli oggetti di transizione.  
  
##  <a name="create"></a>CAnimationVariable::Create  
 Crea l'oggetto COM variabile di animazione sottostante.  
  
```  
virtual BOOL Create(IUIAnimationManager* pManager);
```  
  
### <a name="parameters"></a>Parametri  
 `pManager`  
 Un puntatore a Gestione animazione.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se la variabile di animazione è stata creata correttamente; in caso contrario FALSE.  
  
### <a name="remarks"></a>Note  
 Questo metodo crea la variabile di animazione sottostante oggetto COM e imposta il valore predefinito.  
  
##  <a name="createtransitions"></a>CAnimationVariable::CreateTransitions  
 Crea tutte le transizioni da applicare a questa variabile di animazione.  
  
```  
BOOL CreateTransitions(
    IUIAnimationTransitionLibrary* pLibrary,  
    IUIAnimationTransitionFactory* \*not used*\);
```  
  
### <a name="parameters"></a>Parametri  
`pLibrary`  
 Un puntatore a un [IUIAnimationTransitionLibrary interfaccia](https://msdn.microsoft.com/library/windows/desktop/dd371897), che definisce una raccolta di transizioni standard.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se le transizioni sono state create correttamente. in caso contrario FALSE.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato dal framework quando è necessario creare transizioni che sono state aggiunte all'elenco interno della variabile di transizione.  
  
##  <a name="enableintegervaluechangedevent"></a>CAnimationVariable:: EnableIntegerValueChangedEvent  
 Abilita o disabilita l'evento IntegerValueChanged.  
  
```  
void EnableIntegerValueChangedEvent (
    CAnimationController* pController,  
    BOOL bEnable);
```  
  
### <a name="parameters"></a>Parametri  
 `pController`  
 Puntatore al controller padre.  
  
 `bEnable`  
 TRUE - abilitare evento, FALSE - disabilitare evento.  
  
### <a name="remarks"></a>Note  
 Quando l'evento ValueChanged è abilitato, il framework chiama il metodo virtuale CAnimationController:: OnAnimationIntegerValueChanged. È necessario eseguirne l'override in una classe derivata da CAnimationController per elaborare l'evento. Questo metodo viene chiamato ogni volta che viene modificato il valore intero della variabile di animazione.  
  
##  <a name="enablevaluechangedevent"></a>CAnimationVariable:: EnableValueChangedEvent  
 Abilita o disabilita l'evento ValueChanged.  
  
```  
void EnableValueChangedEvent (
    CAnimationController* pController,  
    BOOL bEnable);
```  
  
### <a name="parameters"></a>Parametri  
 `pController`  
 Puntatore al controller padre.  
  
 `bEnable`  
 TRUE - abilitare evento, FALSE - disabilitare evento.  
  
### <a name="remarks"></a>Note  
 Quando l'evento ValueChanged è abilitato, il framework chiama il metodo virtuale CAnimationController::. È necessario eseguirne l'override in una classe derivata da CAnimationController per elaborare l'evento. Questo metodo viene chiamato ogni volta che viene modificato il valore della variabile di animazione.  
  
##  <a name="getdefaultvalue"></a>CAnimationVariable::GetDefaultValue  
 Restituisce il valore predefinito.  
  
```  
DOUBLE GetDefaultValue() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il valore predefinito.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione per ottenere il valore predefinito della variabile di animazione. Il valore predefinito può essere impostato nel costruttore o dal metodo SetDefaultValue.  
  
##  <a name="getparentanimationobject"></a>CAnimationVariable:: GetParentAnimationObject  
 Restituisce l'elemento padre oggetto di animazione.  
  
```  
CAnimationBaseObject* GetParentAnimationObject();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore all'oggetto di animazione padre, se è stata stabilita una relazione, in caso contrario NULL.  
  
### <a name="remarks"></a>Note  
 Questo metodo può essere chiamato per recuperare un puntatore a un oggetto di animazione padre (un contenitore).  
  
##  <a name="getvalue"></a>CAnimationVariable::GetValue  
 Restituisce il valore corrente della variabile di animazione.  
  
```  
HRESULT GetValue(DOUBLE& dblValue);  
HRESULT GetValue(INT32& nValue);
```  
  
### <a name="parameters"></a>Parametri  
 `dblValue`  
 Il valore corrente della variabile di animazione.  
  
 `nValue`  
 Il valore corrente della variabile di animazione.  
  
### <a name="return-value"></a>Valore restituito  
 S_OK se il valore è stato ottenuto o variabile di animazione sottostante non è stata creata. Codice di errore HRESULT in caso contrario.  
  
### <a name="remarks"></a>Note  
 Questo metodo può essere chiamato per recuperare il valore corrente della variabile di animazione. Se l'oggetto COM sottostante non è stato creato, dblValue conterrà un valore predefinito, quando la funzione restituisce.  
  
##  <a name="getvariable"></a>CAnimationVariable::GetVariable  
 Restituisce un puntatore a un oggetto COM IUIAnimationVariable.  
  
```  
IUIAnimationVariable* GetVariable();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore valido a un oggetto COM IUIAnimationVariable o NULL se non è stata creata la variabile di animazione o non è possibile creare.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione per accedere all'oggetto COM IUIAnimationVariable sottostante e chiamarne i metodi direttamente, se necessario.  
  
##  <a name="m_bautodestroytransitions"></a>CAnimationVariable::m_bAutodestroyTransitions  
 Specifica se gli oggetti di transizione correlati devono essere eliminati.  
  
```  
BOOL m_bAutodestroyTransitions;  
```  
  
### <a name="remarks"></a>Note  
 Impostare questo valore su true per forzare l'eliminazione di oggetti di transizione quando vengono rimossi dall'elenco interno di transizioni. Se questo valore è FALSE le transizioni devono essere eliminate dall'applicazione chiamante. L'elenco di transizioni sempre viene cancellata dopo che è stata pianificata un'animazione. Il valore predefinito è FALSE.  
  
##  <a name="m_dbldefaultvalue"></a>CAnimationVariable::m_dblDefaultValue  
 Specifica il valore predefinito, che viene propagato in IUIAnimationVariable.  
  
```  
DOUBLE m_dblDefaultValue;  
```  
  
##  <a name="m_lsttransitions"></a>CAnimationVariable::m_lstTransitions  
 Contiene un elenco di transizioni che animano questa variabile di animazione.  
  
```  
CObList m_lstTransitions;  
```  
  
##  <a name="m_pparentobject"></a>CAnimationVariable::m_pParentObject  
 Un puntatore a un oggetto di animazione che incapsula questa variabile di animazione.  
  
```  
CAnimationBaseObject* m_pParentObject;  
```  
  
##  <a name="m_variable"></a>CAnimationVariable::m_variable  
 Archivia un puntatore a un oggetto COM IUIAnimationVariable. NULL se l'oggetto COM non è ancora stata creata o creazione non riuscita.  
  
```  
ATL::CComPtr<IUIAnimationVariable> m_variable;  
```  
  
##  <a name="setdefaultvalue"></a>CAnimationVariable::SetDefaultValue  
 Imposta il valore predefinito e rilascia un oggetto COM IUIAnimationVariable.  
  
```  
void SetDefaultValue(DOUBLE dblDefaultValue);
```  
  
### <a name="parameters"></a>Parametri  
 `dblDefaultValue`  
 Specifica il nuovo valore predefinito.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per reimpostare il valore predefinito. Questo metodo rilascia l'oggetto COM IUIAnimationVariable interno, pertanto quando viene ricreata la variabile di animazione, l'oggetto COM sottostante ottiene il nuovo valore predefinito. Il valore predefinito è restituito da GetValue se non viene creato l'oggetto COM che rappresenta la variabile di animazione, o se la variabile non è stata animata.  
  
##  <a name="setparentanimationobject"></a>CAnimationVariable::SetParentAnimationObject  
 Imposta la relazione tra una variabile di animazione e un oggetto di animazione.  
  
```  
void SetParentAnimationObject(CAnimationBaseObject* pParentObject);
```  
  
### <a name="parameters"></a>Parametri  
 `pParentObject`  
 Un puntatore a un oggetto di animazione che contiene questa variabile.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato internamente per stabilire una relazione uno a uno tra una variabile di animazione e un oggetto di animazione che lo incapsula.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)

