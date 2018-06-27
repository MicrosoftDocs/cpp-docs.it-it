---
title: Classe CAnimationVariable | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 207adbba4635b80ba7b60af53f920b1af376e93d
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36957299"
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
|[CAnimationVariable:: ~ CAnimationVariable](#canimationvariable__~canimationvariable)|Distruttore. Chiamata eseguita quando un oggetto CAnimationVariable viene eliminata definitivamente.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationVariable::AddTransition](#addtransition)|Aggiunge una transizione.|  
|[CAnimationVariable::ApplyTransitions](#applytransitions)|Aggiunge le transizioni dall'elenco interno allo storyboard.|  
|[CAnimationVariable::ClearTransitions](#cleartransitions)|Cancella le transizioni.|  
|[CAnimationVariable::Create](#create)|Crea l'oggetto COM di variabile sottostante di animazione.|  
|[CAnimationVariable::CreateTransitions](#createtransitions)|Crea tutte le transizioni da applicare a questa variabile di animazione.|  
|[CAnimationVariable:: EnableIntegerValueChangedEvent](#enableintegervaluechangedevent)|Abilita o disabilita l'evento IntegerValueChanged.|  
|[CAnimationVariable:: EnableValueChangedEvent](#enablevaluechangedevent)|Abilita o disabilita l'evento ValueChanged.|  
|[CAnimationVariable::GetDefaultValue](#getdefaultvalue)|Restituisce il valore predefinito.|  
|[CAnimationVariable:: GetParentAnimationObject](#getparentanimationobject)|Restituisce l'elemento padre oggetto di animazione.|  
|[CAnimationVariable::GetValue](#getvalue)|Di overload. Restituisce il valore corrente della variabile di animazione.|  
|[CAnimationVariable::GetVariable](#getvariable)|Restituisce un puntatore all'oggetto COM IUIAnimationVariable.|  
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
  
|nome|Descrizione|  
|----------|-----------------|  
|[CAnimationVariable::m_dblDefaultValue](#m_dbldefaultvalue)|Specifica il valore predefinito, che viene propagato a IUIAnimationVariable.|  
|[CAnimationVariable::m_lstTransitions](#m_lsttransitions)|Contiene un elenco di transizioni che animare questa variabile di animazione.|  
|[CAnimationVariable::m_pParentObject](#m_pparentobject)|Un puntatore a un oggetto di animazione che incapsula questa variabile di animazione.|  
|[CAnimationVariable::m_variable](#m_variable)|Archivia un puntatore a un oggetto COM IUIAnimationVariable. NULL se l'oggetto COM non è ancora stato creato, o se non è riuscita la creazione.|  
  
## <a name="remarks"></a>Note  
 La classe CAnimationVariable incapsula un oggetto COM IUIAnimationVariable. Contiene inoltre un elenco di transizioni da applicare alla variabile di animazione in uno storyboard. Gli oggetti CAnimationVariable sono incorporati a oggetti di animazione, che possono rappresentare un'applicazione un valore di un'animazione, punto, dimensione, colore e rettangolo.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CAnimationVariable`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxanimationcontroller.h  
  
##  <a name="_dtorcanimationvariable"></a>  CAnimationVariable:: ~ CAnimationVariable  
 Distruttore. Chiamata eseguita quando un oggetto CAnimationVariable viene eliminata definitivamente.  
  
```  
virtual ~CAnimationVariable();
```  
  
##  <a name="addtransition"></a>  CAnimationVariable::AddTransition  
 Aggiunge una transizione.  
  
```  
void AddTransition(CBaseTransition* pTransition);
```  
  
### <a name="parameters"></a>Parametri  
 *pTransition*  
 Un puntatore a una transizione da aggiungere.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato per aggiungere una transizione all'elenco interno di transizioni da applicare alla variabile di animazione. Questo elenco deve essere cancellato al momento è stata pianificata un'animazione.  
  
##  <a name="applytransitions"></a>  CAnimationVariable::ApplyTransitions  
 Aggiunge le transizioni dall'elenco interno allo storyboard.  
  
```  
void ApplyTransitions(
    CAnimationController* pController,  
    IUIAnimationStoryboard* pStoryboard,  
    BOOL bDependOnKeyframes);
```  
  
### <a name="parameters"></a>Parametri  
 *pController*  
 Puntatore al controller di animazione padre.  
  
 *pStoryboard*  
 Puntatore allo storyboard.  
  
 *bDependOnKeyframes*  
 TRUE se questo metodo aggiunge le transizioni che dipendono da fotogrammi chiave.  
  
### <a name="remarks"></a>Note  
 Questo metodo aggiunge le transizioni dall'elenco interno allo storyboard. Viene chiamato dal codice di livello superiore più volte per aggiungere le transizioni che non dipendono da fotogrammi chiave e aggiungere le transizioni che dipendono da fotogrammi chiave. Se la variabile di animazione sottostante oggetto COM non è stata creata, questo metodo crea in questa fase.  
  
##  <a name="canimationvariable"></a>  CAnimationVariable::CAnimationVariable  
 Costruisce un oggetto variabile di animazione.  
  
```  
CAnimationVariable(DOUBLE dblDefaultValue = 0.0);
```  
  
### <a name="parameters"></a>Parametri  
 *dblDefaultValue*  
 Specifica il valore predefinito.  
  
### <a name="remarks"></a>Note  
 Costruisce un oggetto variabile di animazione e imposta il valore predefinito. Un valore predefinito viene utilizzato quando una variabile non viene aggiunta un'animazione o non può essere animata.  
  
##  <a name="cleartransitions"></a>  CAnimationVariable::ClearTransitions  
 Cancella le transizioni.  
  
```  
void ClearTransitions(BOOL bAutodestroy);
```  
  
### <a name="parameters"></a>Parametri  
 *flag bAutodestroy*  
 Specifica se questo metodo deve eliminare gli oggetti di transizione.  
  
### <a name="remarks"></a>Note  
 Questo metodo rimuove tutte le transizioni dall'elenco interno delle transizioni. Se il flag bAutodestroy è impostata su TRUE o m_bAutodestroyTransitions è impostata su TRUE, vengono eliminate le transizioni. In caso contrario, il chiamante deve deallocare gli oggetti di transizione.  
  
##  <a name="create"></a>  CAnimationVariable::Create  
 Crea l'oggetto COM di variabile sottostante di animazione.  
  
```  
virtual BOOL Create(IUIAnimationManager* pManager);
```  
  
### <a name="parameters"></a>Parametri  
 *pManager*  
 Puntatore a Gestione animazione.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se la variabile di animazione è stata creata correttamente; in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Questo metodo crea la variabile di animazione sottostante oggetto COM e imposta il valore predefinito.  
  
##  <a name="createtransitions"></a>  CAnimationVariable::CreateTransitions  
 Crea tutte le transizioni da applicare a questa variabile di animazione.  
  
```  
BOOL CreateTransitions(
    IUIAnimationTransitionLibrary* pLibrary,  
    IUIAnimationTransitionFactory* \*not used*\);
```  
  
### <a name="parameters"></a>Parametri  
*pLibrary*  
 Un puntatore a un [IUIAnimationTransitionLibrary interfaccia](https://msdn.microsoft.com/library/windows/desktop/dd371897), che definisce una raccolta di transizioni standard.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se le transizioni sono state create correttamente. in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato dal framework quando è necessario creare le transizioni che sono stati aggiunti all'elenco interno della variabile di transizioni.  
  
##  <a name="enableintegervaluechangedevent"></a>  CAnimationVariable:: EnableIntegerValueChangedEvent  
 Abilita o disabilita l'evento IntegerValueChanged.  
  
```  
void EnableIntegerValueChangedEvent (
    CAnimationController* pController,  
    BOOL bEnable);
```  
  
### <a name="parameters"></a>Parametri  
 *pController*  
 Un puntatore al controller padre.  
  
 *bAttivare il*  
 TRUE: abilitare evento, FALSE - disattivare l'evento.  
  
### <a name="remarks"></a>Note  
 Quando l'evento ValueChanged è abilitato, il framework chiama il metodo virtuale CAnimationController:: OnAnimationIntegerValueChanged. È necessario eseguirne l'override in una classe derivata da CAnimationController per elaborare questo evento. Questo metodo viene chiamato ogni volta che viene modificato il valore intero della variabile di animazione.  
  
##  <a name="enablevaluechangedevent"></a>  CAnimationVariable:: EnableValueChangedEvent  
 Abilita o disabilita l'evento ValueChanged.  
  
```  
void EnableValueChangedEvent (
    CAnimationController* pController,  
    BOOL bEnable);
```  
  
### <a name="parameters"></a>Parametri  
 *pController*  
 Un puntatore al controller padre.  
  
 *bAttivare il*  
 TRUE: abilitare evento, FALSE - disattivare l'evento.  
  
### <a name="remarks"></a>Note  
 Quando l'evento ValueChanged è abilitato, il framework chiama il metodo virtuale CAnimationController::. È necessario eseguirne l'override in una classe derivata da CAnimationController per elaborare questo evento. Questo metodo viene chiamato ogni volta che viene modificato il valore della variabile di animazione.  
  
##  <a name="getdefaultvalue"></a>  CAnimationVariable::GetDefaultValue  
 Restituisce il valore predefinito.  
  
```  
DOUBLE GetDefaultValue() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il valore predefinito.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione per ottenere il valore predefinito della variabile di animazione. Il valore predefinito può essere impostato nel costruttore o dal metodo SetDefaultValue.  
  
##  <a name="getparentanimationobject"></a>  CAnimationVariable:: GetParentAnimationObject  
 Restituisce l'elemento padre oggetto di animazione.  
  
```  
CAnimationBaseObject* GetParentAnimationObject();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore all'oggetto di animazione padre, se è stata stabilita una relazione, in caso contrario NULL.  
  
### <a name="remarks"></a>Note  
 Questo metodo può essere chiamato per recuperare un puntatore a un oggetto di animazione padre (un contenitore).  
  
##  <a name="getvalue"></a>  CAnimationVariable::GetValue  
 Restituisce il valore corrente della variabile di animazione.  
  
```  
HRESULT GetValue(DOUBLE& dblValue);  
HRESULT GetValue(INT32& nValue);
```  
  
### <a name="parameters"></a>Parametri  
 *dblValue*  
 Il valore corrente della variabile di animazione.  
  
 *nValore*  
 Il valore corrente della variabile di animazione.  
  
### <a name="return-value"></a>Valore restituito  
 S_OK se il valore è stato ottenuto correttamente o variabile di animazione sottostante non è stata creata. Codice di errore HRESULT in caso contrario.  
  
### <a name="remarks"></a>Note  
 Questo metodo può essere chiamato per recuperare il valore corrente della variabile di animazione. Se l'oggetto COM sottostante non è stato creato, dblValue conterrà un valore predefinito, quando la funzione restituisce.  
  
##  <a name="getvariable"></a>  CAnimationVariable::GetVariable  
 Restituisce un puntatore all'oggetto COM IUIAnimationVariable.  
  
```  
IUIAnimationVariable* GetVariable();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore valido a un oggetto COM IUIAnimationVariable oppure NULL se la variabile di animazione non è stata creata o non è possibile creare.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione per accedere all'oggetto COM IUIAnimationVariable sottostante e chiamarne i metodi direttamente, se necessario.  
  
##  <a name="m_bautodestroytransitions"></a>  CAnimationVariable::m_bAutodestroyTransitions  
 Specifica se gli oggetti di transizione correlati devono essere eliminati.  
  
```  
BOOL m_bAutodestroyTransitions;  
```  
  
### <a name="remarks"></a>Note  
 Impostare questo valore su true per l'eliminazione di forza degli oggetti di transizione quando vengono rimossi dall'elenco interno delle transizioni. Se questo valore è FALSE, le transizioni devono essere eliminate dall'applicazione chiamante. L'elenco di transizioni sempre viene cancellata dopo che è stata pianificata un'animazione. Il valore predefinito è FALSE.  
  
##  <a name="m_dbldefaultvalue"></a>  CAnimationVariable::m_dblDefaultValue  
 Specifica il valore predefinito, che viene propagato a IUIAnimationVariable.  
  
```  
DOUBLE m_dblDefaultValue;  
```  
  
##  <a name="m_lsttransitions"></a>  CAnimationVariable::m_lstTransitions  
 Contiene un elenco di transizioni che animare questa variabile di animazione.  
  
```  
CObList m_lstTransitions;  
```  
  
##  <a name="m_pparentobject"></a>  CAnimationVariable::m_pParentObject  
 Un puntatore a un oggetto di animazione che incapsula questa variabile di animazione.  
  
```  
CAnimationBaseObject* m_pParentObject;  
```  
  
##  <a name="m_variable"></a>  CAnimationVariable::m_variable  
 Archivia un puntatore a un oggetto COM IUIAnimationVariable. NULL se l'oggetto COM non è ancora stato creato, o se non è riuscita la creazione.  
  
```  
ATL::CComPtr<IUIAnimationVariable> m_variable;  
```  
  
##  <a name="setdefaultvalue"></a>  CAnimationVariable::SetDefaultValue  
 Imposta il valore predefinito e rilascia un oggetto COM IUIAnimationVariable.  
  
```  
void SetDefaultValue(DOUBLE dblDefaultValue);
```  
  
### <a name="parameters"></a>Parametri  
 *dblDefaultValue*  
 Specifica il nuovo valore predefinito.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per reimpostare il valore predefinito. Questo metodo rilascia l'oggetto COM IUIAnimationVariable interno, pertanto quando viene ricreata la variabile di animazione, l'oggetto COM sottostante ottiene il nuovo valore predefinito. Il valore predefinito è restituito da GetValue se non viene creato l'oggetto COM che rappresenta la variabile di animazione, o se la variabile non è stata animata.  
  
##  <a name="setparentanimationobject"></a>  CAnimationVariable::SetParentAnimationObject  
 Imposta la relazione tra una variabile di animazione e un oggetto di animazione.  
  
```  
void SetParentAnimationObject(CAnimationBaseObject* pParentObject);
```  
  
### <a name="parameters"></a>Parametri  
 *pParentObject*  
 Un puntatore a un oggetto di animazione che contiene questa variabile.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato internamente per stabilire una relazione tra una variabile di animazione e un oggetto di animazione che lo incapsula.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)
