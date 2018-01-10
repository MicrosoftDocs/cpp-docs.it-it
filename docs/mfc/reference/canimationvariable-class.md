---
title: Classe CAnimationVariable | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
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
dev_langs: C++
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
caps.latest.revision: "17"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: a90db931ca53687c42263df6a4112eb478059227
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
|[CAnimationVariable::SetDefaultValue](#setdefaultvalue)|Imposta il valore predefinito e rilascia l'oggetto COM IUIAnimationVariable.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationVariable::SetParentAnimationObject](#setparentanimationobject)|Imposta la relazione tra una variabile di animazione e un oggetto di animazione.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationVariable::m_bAutodestroyTransitions](#m_bautodestroytransitions)|Specifica se gli oggetti di transizione correlati devono essere eliminati.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|nome|Descrizione|  
|----------|-----------------|  
|[CAnimationVariable::m_dblDefaultValue](#m_dbldefaultvalue)|Specifica il valore predefinito, che viene propagato a IUIAnimationVariable.|  
|[CAnimationVariable::m_lstTransitions](#m_lsttransitions)|Contiene un elenco di transizioni che animare questa variabile di animazione.|  
|[CAnimationVariable::m_pParentObject](#m_pparentobject)|Puntatore a un oggetto di animazione che incapsula questa variabile di animazione.|  
|[CAnimationVariable::m_variable](#m_variable)|Archivia un puntatore a un oggetto COM IUIAnimationVariable. NULL se l'oggetto COM non è ancora stato creato o creazione non riuscita.|  
  
## <a name="remarks"></a>Note  
 La classe CAnimationVariable incapsula un oggetto COM IUIAnimationVariable. Contiene inoltre un elenco di transizioni da applicare alla variabile di animazione in uno storyboard. Oggetti CAnimationVariable sono incorporati per gli oggetti di animazione, che possono rappresentare un'applicazione di un valore di un'animazione, punto, le dimensioni, colore e rettangolo.  
  
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
 Puntatore a una transizione da aggiungere.  
  
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
 TRUE se questo metodo aggiunge le transizioni che dipendono da fotogrammi chiave.  
  
### <a name="remarks"></a>Note  
 Questo metodo aggiunge transizioni dall'elenco interno allo storyboard. Viene chiamato dal codice di livello superiore più volte per aggiungere le transizioni che non dipendono da fotogrammi chiave e aggiungere le transizioni che dipendono da fotogrammi chiave. Se la variabile di animazione sottostante oggetto COM non è stata creata, questo metodo crea in questa fase.  
  
##  <a name="canimationvariable"></a>CAnimationVariable::CAnimationVariable  
 Costruisce un oggetto variabile di animazione.  
  
```  
CAnimationVariable(DOUBLE dblDefaultValue = 0.0);
```  
  
### <a name="parameters"></a>Parametri  
 `dblDefaultValue`  
 Specifica il valore predefinito.  
  
### <a name="remarks"></a>Note  
 Costruisce un oggetto variabile di animazione e imposta il valore predefinito. Un valore predefinito viene utilizzato quando una variabile non viene aggiunta un'animazione o non può essere animata.  
  
##  <a name="cleartransitions"></a>CAnimationVariable::ClearTransitions  
 Cancella le transizioni.  
  
```  
void ClearTransitions(BOOL bAutodestroy);
```  
  
### <a name="parameters"></a>Parametri  
 `bAutodestroy`  
 Specifica se questo metodo deve eliminare gli oggetti di transizione.  
  
### <a name="remarks"></a>Note  
 Questo metodo rimuove tutte le transizioni dall'elenco interno delle transizioni. Se il flag bAutodestroy è TRUE o m_bAutodestroyTransitions è TRUE, vengono eliminate le transizioni. In caso contrario, il chiamante deve deallocare gli oggetti di transizione.  
  
##  <a name="create"></a>CAnimationVariable::Create  
 Crea l'oggetto COM variabile di animazione sottostante.  
  
```  
virtual BOOL Create(IUIAnimationManager* pManager);
```  
  
### <a name="parameters"></a>Parametri  
 `pManager`  
 Puntatore a Gestione animazione.  
  
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
 Questo metodo viene chiamato dal framework quando è necessario creare transizioni che sono stati aggiunti all'elenco di transizioni interno della variabile.  
  
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
 TRUE - abilitare evento, FALSE - disattivare l'evento.  
  
### <a name="remarks"></a>Note  
 Quando l'evento ValueChanged è abilitato, il framework chiama il metodo virtuale CAnimationController:: OnAnimationIntegerValueChanged. È necessario eseguirne l'override in una classe derivata da CAnimationController per elaborare questo evento. Questo metodo viene chiamato ogni volta che viene modificato il valore intero della variabile di animazione.  
  
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
 TRUE - abilitare evento, FALSE - disattivare l'evento.  
  
### <a name="remarks"></a>Note  
 Quando l'evento ValueChanged è abilitato, il framework chiama il metodo virtuale CAnimationController::. È necessario eseguirne l'override in una classe derivata da CAnimationController per elaborare questo evento. Questo metodo viene chiamato ogni volta che viene modificato il valore della variabile di animazione.  
  
##  <a name="getdefaultvalue"></a>CAnimationVariable::GetDefaultValue  
 Restituisce il valore predefinito.  
  
```  
DOUBLE GetDefaultValue() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il valore predefinito.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione per ottenere il valore predefinito della variabile di animazione. Nel costruttore o dal metodo SetDefaultValue, è possibile impostare il valore predefinito.  
  
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
 Un puntatore valido a un oggetto COM IUIAnimationVariable oppure NULL se non è stata creata la variabile di animazione o non è possibile creare.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione per accedere all'oggetto COM IUIAnimationVariable sottostante e chiamarne i metodi direttamente, se necessario.  
  
##  <a name="m_bautodestroytransitions"></a>CAnimationVariable::m_bAutodestroyTransitions  
 Specifica se gli oggetti di transizione correlati devono essere eliminati.  
  
```  
BOOL m_bAutodestroyTransitions;  
```  
  
### <a name="remarks"></a>Note  
 Impostare questo valore su true per forza l'eliminazione di oggetti di transizione quando vengono rimossi dall'elenco interno delle transizioni. Se questo valore è FALSE, le transizioni devono essere eliminate dall'applicazione chiamante. L'elenco di transizioni è sempre deselezionata dopo che è stata pianificata un'animazione. Il valore predefinito è FALSE.  
  
##  <a name="m_dbldefaultvalue"></a>CAnimationVariable::m_dblDefaultValue  
 Specifica il valore predefinito, che viene propagato a IUIAnimationVariable.  
  
```  
DOUBLE m_dblDefaultValue;  
```  
  
##  <a name="m_lsttransitions"></a>CAnimationVariable::m_lstTransitions  
 Contiene un elenco di transizioni che animare questa variabile di animazione.  
  
```  
CObList m_lstTransitions;  
```  
  
##  <a name="m_pparentobject"></a>CAnimationVariable::m_pParentObject  
 Puntatore a un oggetto di animazione che incapsula questa variabile di animazione.  
  
```  
CAnimationBaseObject* m_pParentObject;  
```  
  
##  <a name="m_variable"></a>CAnimationVariable::m_variable  
 Archivia un puntatore a un oggetto COM IUIAnimationVariable. NULL se l'oggetto COM non è ancora stato creato o creazione non riuscita.  
  
```  
ATL::CComPtr<IUIAnimationVariable> m_variable;  
```  
  
##  <a name="setdefaultvalue"></a>CAnimationVariable::SetDefaultValue  
 Imposta il valore predefinito e rilascia l'oggetto COM IUIAnimationVariable.  
  
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
 Puntatore a un oggetto che contiene questa variabile di animazione.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato internamente per stabilire una relazione tra una variabile di animazione e un oggetto di animazione che lo incapsula.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)
