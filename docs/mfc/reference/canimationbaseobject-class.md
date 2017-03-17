---
title: Classe CAnimationBaseObject | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- CAnimationBaseObject class
ms.assetid: 76b25917-940e-4eba-940f-31d270702603
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
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: c714c78b7017ed314b30f64df4bfceb587226c15
ms.lasthandoff: 02/24/2017

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
|[CAnimationBaseObject::CAnimationBaseObject](#canimationbaseobject)|Di overload. Costruisce un oggetto di animazione.|  
|[CAnimationBaseObject:: ~ CAnimationBaseObject](#canimationbaseobject__~canimationbaseobject)|Distruttore. Chiamato quando viene eliminato un oggetto di animazione.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationBaseObject:: ApplyTransitions](#applytransitions)|Aggiunge transizioni allo storyboard con variabile di animazione incapsulata.|  
|[CAnimationBaseObject::ClearTransitions](#cleartransitions)|Rimuove tutte le transizioni correlate.|  
|[CAnimationBaseObject::ContainsVariable](#containsvariable)|Determina se un oggetto di animazione contiene una variabile di animazione specifico.|  
|[CAnimationBaseObject::CreateTransitions](#createtransitions)|Crea le transizioni associate a un oggetto di animazione.|  
|[CAnimationBaseObject::DetachFromController](#detachfromcontroller)|Rimuove un oggetto di animazione dal controller di animazione padre.|  
|[CAnimationBaseObject:: EnableIntegerValueChangedEvent](#enableintegervaluechangedevent)|Imposta il gestore dell'evento Integer Value Changed.|  
|[CAnimationBaseObject:: EnableValueChangedEvent](#enablevaluechangedevent)|Imposta il valore modificato gestore dell'evento.|  
|[CAnimationBaseObject::GetAutodestroyTransitions](#getautodestroytransitions)|Indica se la transizione correlata vengono eliminati automaticamente.|  
|[CAnimationBaseObject::GetGroupID](#getgroupid)|Restituisce l'ID del gruppo corrente.|  
|[CAnimationBaseObject::GetObjectID](#getobjectid)|Restituisce l'ID dell'oggetto corrente.|  
|[CAnimationBaseObject::GetUserData](#getuserdata)|Restituisce i dati definiti dall'utente.|  
|[CAnimationBaseObject::SetAutodestroyTransitions](#setautodestroytransitions)|Imposta un flag che consente di ordinare per eliminare automaticamente le transizioni.|  
|[CAnimationBaseObject:: SetID](#setid)|Imposta nuovi ID.|  
|[CAnimationBaseObject::SetUserData](#setuserdata)|Imposta i dati definiti dall'utente.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationBaseObject:: GetAnimationVariableList](#getanimationvariablelist)|Raccoglie i puntatori alle variabili di animazione contenute.|  
|[CAnimationBaseObject::SetParentAnimationObjects](#setparentanimationobjects)|Stabilisce una relazione tra le variabili di animazione, contenute in un oggetto di animazione e il relativo contenitore.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationBaseObject::m_bAutodestroyTransitions](#m_bautodestroytransitions)|Specifica se le transizioni correlate devono essere eliminate automaticamente.|  
|[CAnimationBaseObject::m_dwUserData](#m_dwuserdata)|Vengono archiviati i dati definiti dall'utente.|  
|[CAnimationBaseObject::m_nGroupID](#m_ngroupid)|Specifica l'ID del gruppo dell'oggetto di animazione.|  
|[CAnimationBaseObject::m_nObjectID](#m_nobjectid)|Specifica l'ID oggetto dell'oggetto di animazione.|  
|[CAnimationBaseObject::m_pParentController](#m_pparentcontroller)|Puntatore al controller di animazione padre.|  
  
## <a name="remarks"></a>Note  
 Questa classe implementa metodi di base per tutti gli oggetti di animazione. Un oggetto di animazione può rappresentare un valore, punto, dimensione, un rettangolo o a colori in un'applicazione, nonché qualsiasi entità personalizzata. Gli oggetti di animazione vengono archiviati nei gruppi di animazione (vedere CAnimationGroup). Ciascun gruppo può essere animata separatamente e può essere considerato come un equivalente di storyboard. Un oggetto di animazione incapsula uno o più variabili di animazione (vedere CAnimationVariable), a seconda della relativa rappresentazione logica. Ad esempio, CAnimationRect contiene quattro variabili di animazione, una variabile per ogni lato del rettangolo. Ogni classe di oggetto di animazione espone un metodo AddTransition overload che deve essere usato per applicare le transizioni a variabili dell'animazione incapsulata. Un oggetto di animazione può essere identificato dall'ID di oggetto (facoltativamente) e dall'ID del gruppo. Un ID del gruppo è necessario per inserire un oggetto di animazione per il gruppo corretto, ma se non viene specificato un ID del gruppo, un oggetto viene inserito nel gruppo predefinito con ID 0. Se si chiama SetID con un GroupID diverso, un oggetto di animazione verrà spostato in un altro gruppo (un nuovo gruppo viene creato se necessario).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CAnimationBaseObject`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxanimationcontroller.h  
  
##  <a name="_dtorcanimationbaseobject"></a>CAnimationBaseObject:: ~ CAnimationBaseObject  
 Distruttore. Chiamato quando viene eliminato un oggetto di animazione.  
  
```  
virtual ~CAnimationBaseObject();
```  
  
##  <a name="applytransitions"></a>CAnimationBaseObject:: ApplyTransitions  
 Aggiunge transizioni allo storyboard con variabile di animazione incapsulata.  
  
```  
virtual BOOL ApplyTransitions(
    IUIAnimationStoryboard* pStoryboard,  
    BOOL bDependOnKeyframes);
```  
  
### <a name="parameters"></a>Parametri  
 `pStoryboard`  
 Un puntatore a uno storyboard.  
  
 `bDependOnKeyframes`  
 Questo metodo aggiunge solo le transizioni che dipendono dai fotogrammi chiave FALSE.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se le transizioni sono stati aggiunti.  
  
### <a name="remarks"></a>Note  
 Aggiunge le transizioni correlate, che sono state aggiunte con AddTransition (metodi di overload nelle classi derivate), in uno storyboard.  
  
##  <a name="canimationbaseobject"></a>CAnimationBaseObject::CAnimationBaseObject  
 Costruisce un oggetto di animazione.  
  
```  
CAnimationBaseObject();

 
CAnimationBaseObject(
    UINT32 nGroupID,  
    UINT32 nObjectID = (UINT32)-1,  
    DWORD dwUserData = 0);
```  
  
### <a name="parameters"></a>Parametri  
 `nGroupID`  
 Specifica l'ID del gruppo.  
  
 `nObjectID`  
 Specifica l'ID dell'oggetto.  
  
 `dwUserData`  
 Dati definiti dall'utente, che possono essere associati a oggetti di animazione e recuperati in seguito in fase di esecuzione.  
  
### <a name="remarks"></a>Note  
 Crea oggetti di un'animazione e assegna l'ID di oggetto predefinito (0) e ID del gruppo (0).  
  
##  <a name="cleartransitions"></a>CAnimationBaseObject::ClearTransitions  
 Rimuove tutte le transizioni correlate.  
  
```  
virtual void ClearTransitions(BOOL bAutodestroy);
```  
  
### <a name="parameters"></a>Parametri  
 `bAutodestroy`  
 Specifica se eliminare automaticamente gli oggetti di transizione o rimuoverli solo dall'elenco correlato.  
  
### <a name="remarks"></a>Note  
 Rimuove tutte le transizioni correlate e li elimina se il flag bAutodestroy o m_bAutodestroyTransitions è TRUE. Le transizioni devono essere eliminate automaticamente solo se non vengono allocate nello stack. Se il flag descritti in precedenza sono FALSE, le transizioni vengono rimossi solo dall'elenco interno di transizioni correlate.  
  
##  <a name="containsvariable"></a>CAnimationBaseObject::ContainsVariable  
 Determina se un oggetto di animazione contiene una variabile di animazione specifico.  
  
```  
virtual BOOL ContainsVariable(IUIAnimationVariable* pVariable);
```  
  
### <a name="parameters"></a>Parametri  
 `pVariable`  
 Puntatore alla variabile di animazione.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se è contenuta la variabile di animazione dell'oggetto di animazione. in caso contrario FALSE.  
  
### <a name="remarks"></a>Note  
 Questo metodo può essere utilizzato per determinare se una variabile di animazione specificata da pVariable è contenuta all'interno di un oggetto di animazione. Un oggetto di animazione, a seconda del tipo, può contenere più variabili di animazione. Ad esempio, CAnimationColor contiene tre variabili, uno per ogni componente di colore (rosso, verde e blu). Quando viene modificato un valore della variabile di animazione, l'API di animazione di Windows invia eventi ValueChanged o IntegerValueChanged (se abilitati) e il parametro di questo evento è un puntatore a interfaccia IUIAnimationVariable della variabile di animazione. Questo metodo consente di ottenere un puntatore all'animazione da un puntatore all'oggetto COM contenuto.  
  
##  <a name="createtransitions"></a>CAnimationBaseObject::CreateTransitions  
 Crea le transizioni associate a un oggetto di animazione.  
  
```  
BOOL CreateTransitions();
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se le transizioni sono state create correttamente. in caso contrario FALSE.  
  
### <a name="remarks"></a>Note  
 Esegue un ciclo per l'elenco delle variabili di animazione incapsulata in un oggetto di animazione derivato e crea le transizioni associate a ogni variabile di animazione.  
  
##  <a name="detachfromcontroller"></a>CAnimationBaseObject::DetachFromController  
 Rimuove un oggetto di animazione dal controller di animazione padre.  
  
```  
void DetachFromController();
```  
  
### <a name="remarks"></a>Note  
 Questo metodo viene utilizzato internamente.  
  
##  <a name="enableintegervaluechangedevent"></a>CAnimationBaseObject:: EnableIntegerValueChangedEvent  
 Imposta il gestore dell'evento Integer Value Changed.  
  
```  
virtual void EnableIntegerValueChangedEvent(
    CAnimationController* pController,  
    BOOL bEnable);
```  
  
### <a name="parameters"></a>Parametri  
 `pController`  
 Un puntatore a un controller padre.  
  
 `bEnable`  
 Specifica se abilitare o disabilitare l'evento Changed valore Integer.  
  
### <a name="remarks"></a>Note  
 Se il gestore dell'evento Integer Value Changed è abilitato, è possibile gestire questo evento nel metodo CAnimationController:: OnAnimationIntegerValueChanged che deve essere sottoposto a override in una classe derivata da CAnimationController. Questo metodo viene chiamato ogni volta che viene modificato il valore intero di animazione.  
  
##  <a name="enablevaluechangedevent"></a>CAnimationBaseObject:: EnableValueChangedEvent  
 Imposta il valore modificato gestore dell'evento.  
  
```  
virtual void EnableValueChangedEvent(
    CAnimationController* pController,  
    BOOL bEnable);
```  
  
### <a name="parameters"></a>Parametri  
 `pController`  
 Un puntatore a un controller padre.  
  
 `bEnable`  
 Specifica se abilitare o disabilitare l'evento di modifica di valore.  
  
### <a name="remarks"></a>Note  
 Se il gestore dell'evento valore modificato è abilitato, è possibile gestire questo evento nel metodo CAnimationController::, che deve essere sottoposto a override in una classe derivata da CAnimationController. Questo metodo viene chiamato ogni volta che viene modificato il valore di animazione.  
  
##  <a name="getanimationvariablelist"></a>CAnimationBaseObject:: GetAnimationVariableList  
 Raccoglie i puntatori alle variabili di animazione contenute.  
  
```  
virtual void GetAnimationVariableList(
    CList<CAnimationVariable*, 
    CAnimationVariable*>& lst) = 0;  
```  
  
### <a name="parameters"></a>Parametri  
 `lst`  
 Un elenco che deve essere compilato con le variabili di animazione contenute in un oggetto di animazione.  
  
### <a name="remarks"></a>Note  
 Si tratta di un metodo virtuale puro che deve essere sottoposto a override in una classe derivata. Un oggetto di animazione, a seconda del tipo, contiene una o più variabili di animazione. Ad esempio, CAnimationPoint contiene due variabili, per coordinate X e Y rispettivamente. La classe di base CAnimationBaseObject implementa alcuni metodi generici che agiscono su un elenco di variabili di animazione: ApplyTransitions, ClearTransitions, EnableValueChangedEvent, EnableIntegerValueChangedEvent. Questi metodi chiamare GetAnimationVariableList, che viene compilato in una classe derivata con variabili di animazione effettive contenute in un oggetto di animazione specifico, quindi a ciclo continuo l'elenco ed eseguono le azioni necessarie. Se si crea un oggetto di animazione personalizzata, è necessario aggiungere all'elenco tutte le variabili di animazione contenute in tale oggetto.  
  
##  <a name="getautodestroytransitions"></a>CAnimationBaseObject::GetAutodestroyTransitions  
 Indica se la transizione correlata vengono eliminati automaticamente.  
  
```  
BOOL GetAutodestroyTransitions() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Se TRUE, le transizioni correlate vengono eliminate automaticamente. Se FALSE, gli oggetti di transizione devono essere deallocati dall'applicazione chiamante.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita questo flag è TRUE. Impostare questo flag solo se è stata allocata una transizione nello stack e/o le transizioni devono essere deallocate dall'applicazione chiamante.  
  
##  <a name="getgroupid"></a>CAnimationBaseObject::GetGroupID  
 Restituisce l'ID del gruppo corrente.  
  
```  
UINT32 GetGroupID() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 ID del gruppo corrente.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per recuperare l'ID del gruppo. Del 0 se l'ID del gruppo non è stato impostato in modo esplicito nel costruttore o con SetID.  
  
##  <a name="getobjectid"></a>CAnimationBaseObject::GetObjectID  
 Restituisce l'ID dell'oggetto corrente.  
  
```  
UINT32 GetObjectID() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 ID dell'oggetto corrente.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per recuperare l'ID di oggetto. Del 0 se l'ID di oggetto non è stato impostato in modo esplicito nel costruttore o con SetID.  
  
##  <a name="getuserdata"></a>CAnimationBaseObject::GetUserData  
 Restituisce i dati definiti dall'utente.  
  
```  
DWORD GetUserData() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore di dati personalizzati.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per recuperare i dati personalizzati in fase di esecuzione. Il valore restituito sarà 0 se non è stato esplicitamente inizializzato nel costruttore o con SetUserData.  
  
##  <a name="m_bautodestroytransitions"></a>CAnimationBaseObject::m_bAutodestroyTransitions  
 Specifica se le transizioni correlate devono essere eliminate automaticamente.  
  
```  
BOOL m_bAutodestroyTransitions;  
```  
  
##  <a name="m_dwuserdata"></a>CAnimationBaseObject::m_dwUserData  
 Vengono archiviati i dati definiti dall'utente.  
  
```  
DWORD m_dwUserData;  
```  
  
##  <a name="m_ngroupid"></a>CAnimationBaseObject::m_nGroupID  
 Specifica l'ID del gruppo dell'oggetto di animazione.  
  
```  
UINT32 m_nGroupID;  
```  
  
##  <a name="m_nobjectid"></a>CAnimationBaseObject::m_nObjectID  
 Specifica l'ID oggetto dell'oggetto di animazione.  
  
```  
UINT32 m_nObjectID;  
```  
  
##  <a name="m_pparentcontroller"></a>CAnimationBaseObject::m_pParentController  
 Puntatore al controller di animazione padre.  
  
```  
CAnimationController* m_pParentController;  
```  
  
##  <a name="setautodestroytransitions"></a>CAnimationBaseObject::SetAutodestroyTransitions  
 Imposta un flag che consente di ordinare per eliminare automaticamente le transizioni.  
  
```  
void SetAutodestroyTransitions(BOOL bValue);
```  
  
### <a name="parameters"></a>Parametri  
 `bValue`  
 Specifica i flag di eliminazione automatica.  
  
### <a name="remarks"></a>Note  
 Impostare questo flag solo se sono stati allocati gli oggetti di transizione utilizzando l'operatore new. Se per qualche motivo gli oggetti di transizione vengono allocati nello stack, Elimina l'automobile flag deve essere FALSE. Per impostazione predefinita questo flag è TRUE.  
  
##  <a name="setid"></a>CAnimationBaseObject:: SetID  
 Imposta nuovi ID.  
  
```  
void SetID(
    UINT32 nObjectID,  
    UINT32 nGroupID = 0);
```  
  
### <a name="parameters"></a>Parametri  
 `nObjectID`  
 Specifica l'ID del nuovo oggetto.  
  
 `nGroupID`  
 Specifica l'ID del nuovo gruppo.  
  
### <a name="remarks"></a>Note  
 Consente di modificare l'ID dell'oggetto e ID del gruppo. Se il nuovo ID di gruppo è diverso dall'ID corrente, un oggetto di animazione viene spostato a un altro gruppo (un nuovo gruppo verrà creato, se necessario).  
  
##  <a name="setparentanimationobjects"></a>CAnimationBaseObject::SetParentAnimationObjects  
 Stabilisce una relazione tra le variabili di animazione, contenute in un oggetto di animazione e il relativo contenitore.  
  
```  
virtual void SetParentAnimationObjects();
```  
  
### <a name="remarks"></a>Note  
 Si tratta di un helper che può essere utilizzato per stabilire una relazione tra le variabili di animazione, contenute in un oggetto di animazione e il relativo contenitore. In un ciclo su variabili di animazione e imposta un puntatore a un oggetto di animazione padre per ogni variabile di animazione. Nell'implementazione corrente che di una relazione effettiva viene stabilita in CAnimationBaseObject:: ApplyTransitions, pertanto i puntatori all'indietro non vengono impostati finché non si chiama CAnimationGroup:: animate. Conoscere la relazione può essere utile quando si elaborano gli eventi ed è necessario ottenere un'animazione padre dell'oggetto da CAnimationVariable (utilizzare CAnimationVariable:: GetParentAnimationObject).  
  
##  <a name="setuserdata"></a>CAnimationBaseObject::SetUserData  
 Imposta i dati definiti dall'utente.  
  
```  
void SetUserData (DWORD dwUserData);
```  
  
### <a name="parameters"></a>Parametri  
 `dwUserData`  
 Specifica i dati personalizzati.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per associare dati personalizzati a un oggetto di animazione. Questi dati possono essere recuperati in un secondo momento in fase di esecuzione da GetUserData.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)

