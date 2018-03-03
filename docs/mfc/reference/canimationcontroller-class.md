---
title: Classe CAnimationController | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CAnimationController
- AFXANIMATIONCONTROLLER/CAnimationController
- AFXANIMATIONCONTROLLER/CAnimationController::CAnimationController
- AFXANIMATIONCONTROLLER/CAnimationController::AddAnimationObject
- AFXANIMATIONCONTROLLER/CAnimationController::AddKeyframeToGroup
- AFXANIMATIONCONTROLLER/CAnimationController::AnimateGroup
- AFXANIMATIONCONTROLLER/CAnimationController::CleanUpGroup
- AFXANIMATIONCONTROLLER/CAnimationController::CreateKeyframe
- AFXANIMATIONCONTROLLER/CAnimationController::EnableAnimationManagerEvent
- AFXANIMATIONCONTROLLER/CAnimationController::EnableAnimationTimerEventHandler
- AFXANIMATIONCONTROLLER/CAnimationController::EnablePriorityComparisonHandler
- AFXANIMATIONCONTROLLER/CAnimationController::EnableStoryboardEventHandler
- AFXANIMATIONCONTROLLER/CAnimationController::FindAnimationGroup
- AFXANIMATIONCONTROLLER/CAnimationController::FindAnimationObject
- AFXANIMATIONCONTROLLER/CAnimationController::GetKeyframeStoryboardStart
- AFXANIMATIONCONTROLLER/CAnimationController::GetUIAnimationManager
- AFXANIMATIONCONTROLLER/CAnimationController::GetUIAnimationTimer
- AFXANIMATIONCONTROLLER/CAnimationController::GetUITransitionFactory
- AFXANIMATIONCONTROLLER/CAnimationController::GetUITransitionLibrary
- AFXANIMATIONCONTROLLER/CAnimationController::IsAnimationInProgress
- AFXANIMATIONCONTROLLER/CAnimationController::IsValid
- AFXANIMATIONCONTROLLER/CAnimationController::OnAnimationIntegerValueChanged
- AFXANIMATIONCONTROLLER/CAnimationController::OnAnimationManagerStatusChanged
- AFXANIMATIONCONTROLLER/CAnimationController::OnAnimationTimerPostUpdate
- AFXANIMATIONCONTROLLER/CAnimationController::OnAnimationTimerPreUpdate
- AFXANIMATIONCONTROLLER/CAnimationController::OnAnimationTimerRenderingTooSlow
- AFXANIMATIONCONTROLLER/CAnimationController::OnAnimationValueChanged
- AFXANIMATIONCONTROLLER/CAnimationController::OnBeforeAnimationStart
- AFXANIMATIONCONTROLLER/CAnimationController::OnHasPriorityCancel
- AFXANIMATIONCONTROLLER/CAnimationController::OnHasPriorityCompress
- AFXANIMATIONCONTROLLER/CAnimationController::OnHasPriorityConclude
- AFXANIMATIONCONTROLLER/CAnimationController::OnHasPriorityTrim
- AFXANIMATIONCONTROLLER/CAnimationController::OnStoryboardStatusChanged
- AFXANIMATIONCONTROLLER/CAnimationController::OnStoryboardUpdated
- AFXANIMATIONCONTROLLER/CAnimationController::RemoveAllAnimationGroups
- AFXANIMATIONCONTROLLER/CAnimationController::RemoveAnimationGroup
- AFXANIMATIONCONTROLLER/CAnimationController::RemoveAnimationObject
- AFXANIMATIONCONTROLLER/CAnimationController::RemoveTransitions
- AFXANIMATIONCONTROLLER/CAnimationController::ScheduleGroup
- AFXANIMATIONCONTROLLER/CAnimationController::SetRelatedWnd
- AFXANIMATIONCONTROLLER/CAnimationController::UpdateAnimationManager
- AFXANIMATIONCONTROLLER/CAnimationController::OnAfterSchedule
- AFXANIMATIONCONTROLLER/CAnimationController::gkeyframeStoryboardStart
- AFXANIMATIONCONTROLLER/CAnimationController::m_bIsValid
- AFXANIMATIONCONTROLLER/CAnimationController::m_lstAnimationGroups
- AFXANIMATIONCONTROLLER/CAnimationController::m_pAnimationManager
- AFXANIMATIONCONTROLLER/CAnimationController::m_pAnimationTimer
- AFXANIMATIONCONTROLLER/CAnimationController::m_pRelatedWnd
- AFXANIMATIONCONTROLLER/CAnimationController::m_pTransitionFactory
- AFXANIMATIONCONTROLLER/CAnimationController::m_pTransitionLibrary
dev_langs:
- C++
helpviewer_keywords:
- CAnimationController [MFC], CAnimationController
- CAnimationController [MFC], AddAnimationObject
- CAnimationController [MFC], AddKeyframeToGroup
- CAnimationController [MFC], AnimateGroup
- CAnimationController [MFC], CleanUpGroup
- CAnimationController [MFC], CreateKeyframe
- CAnimationController [MFC], EnableAnimationManagerEvent
- CAnimationController [MFC], EnableAnimationTimerEventHandler
- CAnimationController [MFC], EnablePriorityComparisonHandler
- CAnimationController [MFC], EnableStoryboardEventHandler
- CAnimationController [MFC], FindAnimationGroup
- CAnimationController [MFC], FindAnimationObject
- CAnimationController [MFC], GetKeyframeStoryboardStart
- CAnimationController [MFC], GetUIAnimationManager
- CAnimationController [MFC], GetUIAnimationTimer
- CAnimationController [MFC], GetUITransitionFactory
- CAnimationController [MFC], GetUITransitionLibrary
- CAnimationController [MFC], IsAnimationInProgress
- CAnimationController [MFC], IsValid
- CAnimationController [MFC], OnAnimationIntegerValueChanged
- CAnimationController [MFC], OnAnimationManagerStatusChanged
- CAnimationController [MFC], OnAnimationTimerPostUpdate
- CAnimationController [MFC], OnAnimationTimerPreUpdate
- CAnimationController [MFC], OnAnimationTimerRenderingTooSlow
- CAnimationController [MFC], OnAnimationValueChanged
- CAnimationController [MFC], OnBeforeAnimationStart
- CAnimationController [MFC], OnHasPriorityCancel
- CAnimationController [MFC], OnHasPriorityCompress
- CAnimationController [MFC], OnHasPriorityConclude
- CAnimationController [MFC], OnHasPriorityTrim
- CAnimationController [MFC], OnStoryboardStatusChanged
- CAnimationController [MFC], OnStoryboardUpdated
- CAnimationController [MFC], RemoveAllAnimationGroups
- CAnimationController [MFC], RemoveAnimationGroup
- CAnimationController [MFC], RemoveAnimationObject
- CAnimationController [MFC], RemoveTransitions
- CAnimationController [MFC], ScheduleGroup
- CAnimationController [MFC], SetRelatedWnd
- CAnimationController [MFC], UpdateAnimationManager
- CAnimationController [MFC], CleanUpGroup
- CAnimationController [MFC], OnAfterSchedule
- CAnimationController [MFC], gkeyframeStoryboardStart
- CAnimationController [MFC], m_bIsValid
- CAnimationController [MFC], m_lstAnimationGroups
- CAnimationController [MFC], m_pAnimationManager
- CAnimationController [MFC], m_pAnimationTimer
- CAnimationController [MFC], m_pRelatedWnd
- CAnimationController [MFC], m_pTransitionFactory
- CAnimationController [MFC], m_pTransitionLibrary
ms.assetid: ed294c98-695e-40a6-b940-33ef1d40aa6b
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 79343615b633b583775a482f0a9d2155e79ede10
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="canimationcontroller-class"></a>Classe CAnimationController
Implementa il controller di animazione che fornisce un'interfaccia centrale per la creazione e la gestione delle animazioni.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CAnimationController : public CObject;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationController::CAnimationController](#canimationcontroller)|Costruisce un controller di animazione.|  
|[CAnimationController:: ~ CAnimationController](#canimationcontroller__~canimationcontroller)|Distruttore. Chiamato quando viene eliminata definitivamente l'oggetto controller di animazione.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationController:: AddAnimationObject](#addanimationobject)|Aggiunge un oggetto di animazione a un gruppo cui appartiene il controller di animazione.|  
|[CAnimationController::AddKeyframeToGroup](#addkeyframetogroup)|Aggiunge un fotogramma chiave al gruppo.|  
|[CAnimationController:: AnimateGroup](#animategroup)|Prepara un gruppo per l'esecuzione di animazione e pianifica facoltativamente.|  
|[CAnimationController::CleanUpGroup](#cleanupgroup)|Di overload. Chiamato dal framework per pulire il gruppo di quando è stata pianificata l'animazione.|  
|[CAnimationController:: CreateKeyframe](#createkeyframe)|Di overload. Crea un fotogramma chiave che dipende dalla transizione e lo aggiunge al gruppo specificato.|  
|[CAnimationController:: EnableAnimationManagerEvent](#enableanimationmanagerevent)|Imposta o rilascia un gestore da chiamare quando viene modificato lo stato della gestione animazione.|  
|[CAnimationController::EnableAnimationTimerEventHandler](#enableanimationtimereventhandler)|Imposta o rilascia un gestore per gli eventi di temporizzazione e per gli aggiornamenti di intervallo.|  
|[CAnimationController:: EnablePriorityComparisonHandler](#enableprioritycomparisonhandler)|Imposta o rilascia il gestore di confronto di priorità da chiamare per determinare se uno storyboard pianificato può essere annullato, concluso, eliminato o compressi.|  
|[CAnimationController:: EnableStoryboardEventHandler](#enablestoryboardeventhandler)|Imposta o rilascia un gestore per gli eventi di stato e l'aggiornamento di uno storyboard.|  
|[CAnimationController::FindAnimationGroup](#findanimationgroup)|Di overload. Individua un gruppo di animazione tramite dello storyboard.|  
|[CAnimationController::FindAnimationObject](#findanimationobject)|Trova l'oggetto di animazione che contiene una variabile di animazione specificato.|  
|[CAnimationController::GetKeyframeStoryboardStart](#getkeyframestoryboardstart)|Restituisce un fotogramma chiave che identifica l'inizio dello storyboard.|  
|[CAnimationController::GetUIAnimationManager](#getuianimationmanager)|Fornisce l'accesso all'oggetto IUIAnimationManager incapsulato.|  
|[CAnimationController::GetUIAnimationTimer](#getuianimationtimer)|Fornisce l'accesso all'oggetto IUIAnimationTimer incapsulato.|  
|[CAnimationController::GetUITransitionFactory](#getuitransitionfactory)|Un puntatore a interfaccia IUIAnimationTransitionFactory o NULL se non è riuscita la creazione della libreria di transizione.|  
|[CAnimationController::GetUITransitionLibrary](#getuitransitionlibrary)|Fornisce l'accesso all'oggetto IUIAnimationTransitionLibrary incapsulato.|  
|[CAnimationController::IsAnimationInProgress](#isanimationinprogress)|Indica se almeno un gruppo sta riproducendo l'animazione.|  
|[CAnimationController:: IsValid](#isvalid)|Indica se i controller di animazione è valido.|  
|[CAnimationController:: OnAnimationIntegerValueChanged](#onanimationintegervaluechanged)|Chiamato dal framework quando viene modificato il valore intero della variabile di animazione.|  
|[CAnimationController::OnAnimationManagerStatusChanged](#onanimationmanagerstatuschanged)|Chiamato dal framework in risposta all'evento StatusChanged da Gestione animazione.|  
|[CAnimationController::OnAnimationTimerPostUpdate](#onanimationtimerpostupdate)|Al termine dell'aggiornamento di un'animazione, chiamato dal framework.|  
|[CAnimationController::OnAnimationTimerPreUpdate](#onanimationtimerpreupdate)|Chiamato dal framework prima dell'inizio aggiornamento di un'animazione.|  
|[CAnimationController::OnAnimationTimerRenderingTooSlow](#onanimationtimerrenderingtooslow)|Chiamato dal framework quando la frequenza dei fotogrammi per il rendering di un'animazione scende sotto una frequenza fotogrammi.|  
|[CAnimationController::](#onanimationvaluechanged)|Chiamato dal framework quando viene modificato valore della variabile di animazione.|  
|[CAnimationController::OnBeforeAnimationStart](#onbeforeanimationstart)|Chiamato dal framework destra prima che venga pianificata l'animazione.|  
|[CAnimationController::OnHasPriorityCancel](#onhasprioritycancel)|Chiamata eseguita dal framework per risolvere i conflitti di pianificazione.|  
|[CAnimationController::OnHasPriorityCompress](#onhasprioritycompress)|Chiamata eseguita dal framework per risolvere i conflitti di pianificazione.|  
|[CAnimationController::OnHasPriorityConclude](#onhaspriorityconclude)|Chiamata eseguita dal framework per risolvere i conflitti di pianificazione.|  
|[CAnimationController::OnHasPriorityTrim](#onhasprioritytrim)|Chiamata eseguita dal framework per risolvere i conflitti di pianificazione.|  
|[CAnimationController::OnStoryboardStatusChanged](#onstoryboardstatuschanged)|Chiamato dal framework quando viene modificato lo stato dello storyboard.|  
|[CAnimationController::OnStoryboardUpdated](#onstoryboardupdated)|Chiamato dal framework quando è stato aggiornato uno storyboard.|  
|[CAnimationController::RemoveAllAnimationGroups](#removeallanimationgroups)|Rimuove tutti i gruppi di animazione dal controller di animazione.|  
|[CAnimationController::RemoveAnimationGroup](#removeanimationgroup)|Rimuove un gruppo di animazione con l'ID specificato dal controller di animazione.|  
|[CAnimationController::RemoveAnimationObject](#removeanimationobject)|Rimuovere un oggetto di animazione dal controller di animazione.|  
|[CAnimationController::RemoveTransitions](#removetransitions)|Rimuove le transizioni tra gli oggetti di animazione che appartengono al gruppo specificato.|  
|[CAnimationController:: ScheduleGroup](#schedulegroup)|Pianifica un'animazione.|  
|[CAnimationController:: SetRelatedWnd](#setrelatedwnd)|Stabilisce una relazione tra i controller di animazione e una finestra.|  
|[CAnimationController:: UpdateAnimationManager](#updateanimationmanager)|Indica a Gestione animazione per aggiornare i valori di tutte le variabili di animazione.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationController::CleanUpGroup](#cleanupgroup)|Di overload. Classe helper che pulisce il gruppo.|  
|[CAnimationController::OnAfterSchedule](#onafterschedule)|Chiamato dal framework quando è appena stata pianificata un'animazione per il gruppo specificato.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|nome|Descrizione|  
|----------|-----------------|  
|[CAnimationController::gkeyframeStoryboardStart](#g_keyframestoryboardstart)|Fotogramma chiave che rappresenta l'inizio dello storyboard.|  
|[CAnimationController::m_bIsValid](#m_bisvalid)|Specifica se un controller di animazione è valido o meno. Questo membro è impostato su FALSE se il sistema operativo corrente non supporta l'API di animazione di Windows.|  
|[CAnimationController::m_lstAnimationGroups](#m_lstanimationgroups)|Un elenco di gruppi di animazioni che appartengono a questo controller di animazione.|  
|[CAnimationController::m_pAnimationManager](#m_panimationmanager)|Archivia un puntatore all'oggetto COM di gestione animazione.|  
|[CAnimationController::m_pAnimationTimer](#m_panimationtimer)|Archivia un puntatore all'oggetto COM di Timer di animazione.|  
|[CAnimationController::m_pRelatedWnd](#m_prelatedwnd)|Un puntatore a un oggetto CWnd correlato, che può essere ridisegnato automaticamente quando è stato modificato lo stato di gestione animazione o si è verificato un evento di aggiornamento successivo. Può essere NULL.|  
|[CAnimationController::m_pTransitionFactory](#m_ptransitionfactory)|Archivia un puntatore all'oggetto COM di Factory di transizione.|  
|[CAnimationController::m_pTransitionLibrary](#m_ptransitionlibrary)|Archivia un puntatore all'oggetto COM di libreria di transizione.|  
  
## <a name="remarks"></a>Note  
 La classe CAnimationController è la classe principale che gestisce le animazioni. È possibile creare uno o più istanze di controller di animazione in un'applicazione e, facoltativamente, collegare un'istanza del controller di animazione a un oggetto CWnd usando CAnimationController:: SetRelatedWnd. Questa connessione è necessario inviare automaticamente messaggi WM_PAINT alla finestra correlata quando è stato modificato lo stato di gestione animazione o è stato aggiornato il timer di animazione. Se non si attiva questa relazione, è necessario ridisegnare una finestra che mostra un'animazione manualmente. A questo scopo è possibile derivare una classe CAnimationController e override OnAnimationManagerStatusChanged e/o OnAnimationTimerPostUpdate e invalidare uno o più finestre quando necessario.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CAnimationController`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxanimationcontroller.h  
  
##  <a name="_dtorcanimationcontroller"></a>CAnimationController:: ~ CAnimationController  
 Distruttore. Chiamato quando viene eliminata definitivamente l'oggetto controller di animazione.  
  
```  
virtual ~CAnimationController(void);
```   
  
##  <a name="addanimationobject"></a>CAnimationController:: AddAnimationObject  
 Aggiunge un oggetto di animazione a un gruppo cui appartiene il controller di animazione.  
  
```  
CAnimationGroup* AddAnimationObject(CAnimationBaseObject* pObject);
```  
  
### <a name="parameters"></a>Parametri  
 `pObject`  
 Puntatore a un oggetto di animazione.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore al gruppo di animazione nuovo o esistente in cui è stato aggiunto pObject se funzione ha esito positivo; NULL se pObject è già stato aggiunto a un gruppo che appartiene a un altro controller di animazione.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per aggiungere un oggetto di animazione per il controller di animazione. Un oggetto verrà aggiunto a un gruppo in base GroupID dell'oggetto (vedere CAnimationBaseObject:: SetID). Se è il primo oggetto da aggiungere con l'ID specificato, il controller di animazione creerà un nuovo gruppo. Un oggetto di animazione può essere aggiunti al controller di uno animazione solo. Se è necessario aggiungere un oggetto in un altro controller, chiamare prima RemoveAnimationObject. Se si chiama SetID con nuovo GroupID per un oggetto che è stato già aggiunto a un gruppo, l'oggetto verrà rimosso dal gruppo precedente e aggiunto a un altro gruppo con ID specificato.  
  
##  <a name="addkeyframetogroup"></a>CAnimationController::AddKeyframeToGroup  
 Aggiunge un fotogramma chiave al gruppo.  
  
```  
BOOL AddKeyframeToGroup(
    UINT32 nGroupID,  
    CBaseKeyFrame* pKeyframe);
```  
  
### <a name="parameters"></a>Parametri  
 `nGroupID`  
 Specifica l'ID del gruppo.  
  
 `pKeyframe`  
 Puntatore a un fotogramma chiave.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se la funzione ha esito positivo. in caso contrario FALSE.  
  
### <a name="remarks"></a>Note  
 In genere non è necessario chiamare questo metodo, utilizzare invece CAnimationController:: CreateKeyframe che crea e aggiunge automaticamente il fotogramma chiave creato a un gruppo.  
  
##  <a name="animategroup"></a>CAnimationController:: AnimateGroup  
 Prepara un gruppo per l'esecuzione di animazione e pianifica facoltativamente.  
  
```  
BOOL AnimateGroup(
    UINT32 nGroupID,  
    BOOL bScheduleNow = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `nGroupID`  
 Specifica l'ID del gruppo.  
  
 `bScheduleNow`  
 Specifica se eseguire subito l'animazione.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se l'animazione è stata pianificata ed eseguita correttamente.  
  
### <a name="remarks"></a>Note  
 Questo metodo esegue il lavoro effettivo, la creazione di storyboard, aggiunta di variabili di animazione, l'applicazione delle transizioni e impostazione di fotogrammi chiave. È possibile ritardare la pianificazione se si imposta bScheduleNow su FALSE. In questo caso, il gruppo specificato conterrà uno storyboard che è stato configurato per l'animazione. A questo punto è possibile configurare gli eventi per le variabili di storyboard e animazione. Quando è effettivamente necessario eseguire la chiamata dell'animazione CAnimationController:: ScheduleGroup.  
  
##  <a name="canimationcontroller"></a>CAnimationController::CAnimationController  
 Costruisce un controller di animazione.  
  
```  
CAnimationController(void);
```   
  
##  <a name="cleanupgroup"></a>CAnimationController::CleanUpGroup  
 Chiamato dal framework per pulire il gruppo di quando è stata pianificata l'animazione.  
  
```  
void CleanUpGroup(UINT32 nGroupID);  
void CleanUpGroup(CAnimationGroup* pGroup);
```  
  
### <a name="parameters"></a>Parametri  
 `nGroupID`  
 Specifica l'ID del gruppo.  
  
 `pGroup`  
 Puntatore al gruppo di animazione per eseguire la pulizia.  
  
### <a name="remarks"></a>Note  
 Questo metodo rimuove tutte le transizioni e i fotogrammi chiave dal gruppo specificato, perché non sono rilevanti dopo che è stata pianificata un'animazione.  
  
##  <a name="createkeyframe"></a>CAnimationController:: CreateKeyframe  
 Crea un fotogramma chiave che dipende dalla transizione e lo aggiunge al gruppo specificato.  
  
```  
CKeyFrame* CreateKeyframe(
    UINT32 nGroupID,  
    CBaseTransition* pTransition);

 
CKeyFrame* CreateKeyframe(
    UINT32 nGroupID,  
    CBaseKeyFrame* pKeyframe,  
    UI_ANIMATION_SECONDS offset = 0.0);
```  
  
### <a name="parameters"></a>Parametri  
 `nGroupID`  
 Specifica l'ID gruppo per cui viene creato il fotogramma chiave.  
  
 `pTransition`  
 Puntatore alla transizione. Il fotogramma chiave verrà inserito nello storyboard dopo questa transizione.  
  
 `pKeyframe`  
 Puntatore al fotogramma chiave di base per questo fotogramma chiave.  
  
 `offset`  
 Offset in secondi dal fotogramma chiave di base specificato da pKeyframe.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore al fotogramma chiave appena creato se la funzione riesce.  
  
### <a name="remarks"></a>Note  
 È possibile archiviare il puntatore restituito e basare gli altri fotogrammi chiave sul fotogramma chiave appena creato (vedere il secondo overload). Per avviare le transizioni di fotogrammi chiave, vedere CBaseTransition::SetKeyframes. Non è necessario eliminare i fotogrammi chiave creati in questo modo, poiché vengono eliminati automaticamente dai gruppi di animazioni. Prestare attenzione durante la creazione di fotogrammi chiave basati su altri fotogrammi chiave e transizioni ed evitare i riferimenti circolari.  
  
##  <a name="enableanimationmanagerevent"></a>CAnimationController:: EnableAnimationManagerEvent  
 Imposta o rilascia un gestore da chiamare quando viene modificato lo stato della gestione animazione.  
  
```  
virtual BOOL EnableAnimationManagerEvent(BOOL bEnable = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `bEnable`  
 Specifica se impostare o rilasciare un gestore.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il gestore è stato correttamente impostato o rilasciato.  
  
### <a name="remarks"></a>Note  
 Quando è impostato un gestore (abilitato) animazione Windows chiama OnAnimationManagerStatusChanged quando cambia lo stato di gestione animazione.  
  
##  <a name="enableanimationtimereventhandler"></a>CAnimationController::EnableAnimationTimerEventHandler  
 Imposta o rilascia un gestore per gli eventi di temporizzazione e per gli aggiornamenti di intervallo.  
  
```  
virtual BOOL EnableAnimationTimerEventHandler(
    BOOL bEnable = TRUE,  
    UI_ANIMATION_IDLE_BEHAVIOR idleBehavior = UI_ANIMATION_IDLE_BEHAVIOR_DISABLE);
```  
  
### <a name="parameters"></a>Parametri  
 `bEnable`  
 Specifica se impostare o rilasciare i gestori.  
  
 `idleBehavior`  
 Specifica il comportamento inattivo per il gestore di aggiornamento del timer.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se i gestori sono stati correttamente impostati o rilasciati. FALSE se questo metodo viene chiamato per la seconda volta senza rilasciare prima i gestori o se qualsiasi altro errore.  
  
### <a name="remarks"></a>Note  
 Quando i gestori vengono impostati (abilitate) chiamate API di animazione Windows OnAnimationTimerPreUpdate, OnAnimationTimerPostUpdate, OnRenderingTooSlow metodi. È necessario abilitare i timer di animazione consentire l'API di animazione Windows update storyboard. In caso contrario, è necessario chiamare CAnimationController:: UpdateAnimationManager per indirizzare l'animazione manager per aggiornare i valori di tutte le variabili di animazione.  
  
##  <a name="enableprioritycomparisonhandler"></a>CAnimationController:: EnablePriorityComparisonHandler  
 Imposta o rilascia il gestore di confronto di priorità da chiamare per determinare se uno storyboard pianificato può essere annullato, concluso, eliminato o compressi.  
  
```  
virtual BOOL EnablePriorityComparisonHandler(DWORD dwHandlerType);
```  
  
### <a name="parameters"></a>Parametri  
 `dwHandlerType`  
 Una combinazione di UI_ANIMATION_PHT _ flag (vedere la sezione Osservazioni), che consente di specificare i gestori da impostare o rilasciare.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il gestore è stato correttamente impostato o rilasciato.  
  
### <a name="remarks"></a>Note  
 Quando è impostato un gestore (abilitato) animazione Windows chiama i metodi virtuali seguenti a seconda di dwHandlerType: OnHasPriorityCancel, OnHasPriorityConclude, OnHasPriorityTrim, OnHasPriorityCompress. dwHandler può essere una combinazione dei flag seguenti: UI_ANIMATION_PHT_NONE - versione tutti i gestori UI_ANIMATION_PHT_CANCEL - impostare Annulla gestore confronto UI_ANIMATION_PHT_CONCLUDE - impostare il gestore di confronto Conclude UI_ANIMATION_PHT_COMPRESS: set Comprimi confronto gestore UI_ANIMATION_PHT_TRIM - impostare il gestore di confronto Trim UI_ANIMATION_PHT_CANCEL_REMOVE - rimuovere il gestore di confronto Annulla UI_ANIMATION_PHT_CONCLUDE_REMOVE - rimuovere il gestore di confronto Conclude UI_ANIMATION_PHT_COMPRESS_ REMOVE - rimuove il gestore di confronto Compress UI_ANIMATION_PHT_TRIM_REMOVE - Rimuovi gestore confronto Trim  
  
##  <a name="enablestoryboardeventhandler"></a>CAnimationController:: EnableStoryboardEventHandler  
 Imposta o rilascia un gestore per gli eventi di stato e l'aggiornamento di uno storyboard.  
  
```  
virtual BOOL EnableStoryboardEventHandler(
    UINT32 nGroupID,  
    BOOL bEnable = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `nGroupID`  
 Specifica l'ID del gruppo.  
  
 `bEnable`  
 Specifica se impostare o rilasciare un gestore.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il gestore è stato correttamente impostato o rilasciato. FALSE se l'ora è possibile trovare il gruppo di animazione o animazione per il gruppo specificato non è stata avviata e il suo storyboard interno è NULL.  
  
### <a name="remarks"></a>Note  
 Quando è impostato un gestore API di animazione Windows (abilitato) chiama OnStoryboardStatusChanges e OnStoryboardUpdated metodi virtuali. Un gestore impostare dopo la chiamata a CAnimationController::Animate per il gruppo specificato di animazione, poiché crea un oggetto IUIAnimationStoryboard incapsulato.  
  
##  <a name="findanimationgroup"></a>CAnimationController::FindAnimationGroup  
 Trova il gruppo di un'animazione dal relativo ID del gruppo.  
  
```  
CAnimationGroup* FindAnimationGroup(UINT32 nGroupID);  
CAnimationGroup* FindAnimationGroup(IUIAnimationStoryboard* pStoryboard);
```  
  
### <a name="parameters"></a>Parametri  
 `nGroupID`  
 Specifica un ID di gruppo.  
  
 `pStoryboard`  
 Puntatore a uno storyboard.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore al gruppo di animazione o NULL se non è possibile trovare il gruppo con l'ID specificato.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per trovare un gruppo di animazione in fase di esecuzione. Un gruppo viene creato e aggiunto all'elenco interno dei gruppi di animazione quando viene aggiunto un primo oggetto di animazione con un determinato GroupID a controller di animazione.  
  
##  <a name="findanimationobject"></a>CAnimationController::FindAnimationObject  
 Trova l'oggetto di animazione che contiene una variabile di animazione specificato.  
  
```  
BOOL FindAnimationObject(
    IUIAnimationVariable* pVariable,  
    CAnimationBaseObject** ppObject,  
    CAnimationGroup** ppGroup);
```  
  
### <a name="parameters"></a>Parametri  
 `pVariable`  
 Puntatore alla variabile di animazione.  
  
 `ppObject`  
 Output. Contiene un puntatore all'oggetto di animazione o NULL.  
  
 `ppGroup`  
 Output. Contiene un puntatore al gruppo di animazione che contiene l'oggetto di animazione, o NULL.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se l'oggetto è stato trovato in caso contrario FALSE.  
  
### <a name="remarks"></a>Note  
 Chiamato dai gestori eventi quando è necessario per trovare un oggetto di animazione nella variabile di animazione in ingresso.  
  
##  <a name="g_keyframestoryboardstart"></a>CAnimationController::gkeyframeStoryboardStart  
 Fotogramma chiave che rappresenta l'inizio dello storyboard.  
  
```  
static CBaseKeyFrame gkeyframeStoryboardStart;  
```  
  
##  <a name="getkeyframestoryboardstart"></a>CAnimationController::GetKeyframeStoryboardStart  
 Restituisce un fotogramma chiave che identifica l'inizio dello storyboard.  
  
```  
static CBaseKeyFrame* GetKeyframeStoryboardStart();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore al fotogramma chiave di base, che identifica l'inizio dello storyboard.  
  
### <a name="remarks"></a>Note  
 Ottenere questo fotogramma chiave di base di altri fotogrammi chiave o le transizioni sul momento in cui ora di avvio di uno storyboard.  
  
##  <a name="getuianimationmanager"></a>CAnimationController::GetUIAnimationManager  
 Fornisce l'accesso all'oggetto IUIAnimationManager incapsulato.  
  
```  
IUIAnimationManager* GetUIAnimationManager();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a interfaccia IUIAnimationManager o NULL se non è riuscita la creazione di gestione animazione.  
  
### <a name="remarks"></a>Note  
 Se il sistema operativo corrente non supporta l'API di animazione Windows, questo metodo restituisce NULL e dopo che tutte le chiamate successive su CAnimationController:: IsValid restituiscono FALSE. Potrebbe essere necessario accedere a IUIAnimationManager per chiamare i metodi di interfaccia, non vengono eseguito il wrapping dal controller di animazione.  
  
##  <a name="getuianimationtimer"></a>CAnimationController::GetUIAnimationTimer  
 Fornisce l'accesso all'oggetto IUIAnimationTimer incapsulato.  
  
```  
IUIAnimationTimer* GetUIAnimationTimer();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a interfaccia IUIAnimationTimer o NULL se non è riuscita la creazione del timer di animazione.  
  
### <a name="remarks"></a>Note  
 Se il sistema operativo corrente non supporta l'API di animazione Windows, questo metodo restituisce NULL e dopo che tutte le chiamate successive su CAnimationController:: IsValid restituiscono FALSE.  
  
##  <a name="getuitransitionfactory"></a>CAnimationController::GetUITransitionFactory  
 Un puntatore a interfaccia IUIAnimationTransitionFactory o NULL se non è riuscita la creazione della libreria di transizione.  
  
```  
IUIAnimationTransitionFactory* GetUITransitionFactory();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a interfaccia IUIAnimationTransitionFactory o NULL se non è riuscita la creazione di factory di transizione.  
  
### <a name="remarks"></a>Note  
 Se il sistema operativo corrente non supporta l'API di animazione Windows, questo metodo restituisce NULL e dopo che tutte le chiamate successive su CAnimationController:: IsValid restituiscono FALSE.  
  
##  <a name="getuitransitionlibrary"></a>CAnimationController::GetUITransitionLibrary  
 Fornisce l'accesso all'oggetto IUIAnimationTransitionLibrary incapsulato.  
  
```  
IUIAnimationTransitionLibrary* GetUITransitionLibrary();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a interfaccia IUIAnimationTransitionLibrary o NULL se non è riuscita la creazione della libreria di transizione.  
  
### <a name="remarks"></a>Note  
 Se il sistema operativo corrente non supporta l'API di animazione Windows, questo metodo restituisce NULL e dopo che tutte le chiamate successive su CAnimationController:: IsValid restituiscono FALSE.  
  
##  <a name="isanimationinprogress"></a>CAnimationController::IsAnimationInProgress  
 Indica se almeno un gruppo sta riproducendo l'animazione.  
  
```  
virtual BOOL IsAnimationInProgress();
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se è presente un'animazione in esecuzione per questo controller di animazione; in caso contrario FALSE.  
  
### <a name="remarks"></a>Note  
 Controlla lo stato di gestione animazione e restituisce TRUE se lo stato è UI_ANIMATION_MANAGER_BUSY.  
  
##  <a name="isvalid"></a>CAnimationController:: IsValid  
 Indica se i controller di animazione è valido.  
  
```  
BOOL IsValid() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il controller di animazione è valido. in caso contrario FALSE.  
  
### <a name="remarks"></a>Note  
 Questo metodo restituisce FALSE solo se l'API di animazione Windows non è supportata nel sistema operativo e la creazione di gestione animazione corrente non è riuscita perché non è registrato. È necessario chiamare GetUIAnimationManager almeno una volta dopo l'inizializzazione delle librerie COM per determinare l'impostazione del flag.  
  
##  <a name="m_bisvalid"></a>CAnimationController::m_bIsValid  
 Specifica se un controller di animazione è valido o meno. Questo membro è impostato su FALSE se il sistema operativo corrente non supporta l'API di animazione di Windows.  
  
```  
BOOL m_bIsValid;  
```  
  
##  <a name="m_lstanimationgroups"></a>CAnimationController::m_lstAnimationGroups  
 Un elenco di gruppi di animazioni che appartengono a questo controller di animazione.  
  
```  
CList<CAnimationGroup*, CAnimationGroup*> m_lstAnimationGroups;  
```  
  
##  <a name="m_panimationmanager"></a>CAnimationController::m_pAnimationManager  
 Archivia un puntatore all'oggetto COM di gestione animazione.  
  
```  
ATL::CComPtr<IUIAnimationManager> m_pAnimationManager;  
```  
  
##  <a name="m_panimationtimer"></a>CAnimationController::m_pAnimationTimer  
 Archivia un puntatore all'oggetto COM di Timer di animazione.  
  
```  
ATL::CComPtr<IUIAnimationTimer> m_pAnimationTimer;  
```  
  
##  <a name="m_prelatedwnd"></a>CAnimationController::m_pRelatedWnd  
 Un puntatore a un oggetto CWnd correlato, che può essere ridisegnato automaticamente quando è stato modificato lo stato di gestione animazione o si è verificato un evento di aggiornamento successivo. Può essere NULL.  
  
```  
CWnd* m_pRelatedWnd;  
```  
  
##  <a name="m_ptransitionfactory"></a>CAnimationController::m_pTransitionFactory  
 Archivia un puntatore all'oggetto COM di Factory di transizione.  
  
```  
ATL::CComPtr<IUIAnimationTransitionFactory> m_pTransitionFactory;  
```  
  
##  <a name="m_ptransitionlibrary"></a>CAnimationController::m_pTransitionLibrary  
 Archivia un puntatore all'oggetto COM di libreria di transizione.  
  
```  
ATL::CComPtr<IUIAnimationTransitionLibrary> m_pTransitionLibrary;  
```  
  
##  <a name="onafterschedule"></a>CAnimationController::OnAfterSchedule  
 Chiamato dal framework quando è appena stata pianificata un'animazione per il gruppo specificato.  
  
```  
virtual void OnAfterSchedule(CAnimationGroup* pGroup);
```  
  
### <a name="parameters"></a>Parametri  
 `pGroup`  
 Puntatore a un gruppo di animazione, che è stato pianificato.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita rimuove il gruppo specificato di fotogrammi chiave e le transizioni dalle variabili di animazione che appartengono al gruppo specificato. Può essere sottoposto a override in una classe derivata per eseguire qualsiasi azione aggiuntiva durante la pianificazione dell'animazione.  
  
##  <a name="onanimationintegervaluechanged"></a>CAnimationController:: OnAnimationIntegerValueChanged  
 Chiamato dal framework quando viene modificato il valore intero della variabile di animazione.  
  
```  
virtual void OnAnimationIntegerValueChanged(
    CAnimationGroup* pGroup,  
    CAnimationBaseObject* pObject,  
    IUIAnimationVariable* variable,  
    INT32 newValue,  
    INT32 prevValue);
```  
  
### <a name="parameters"></a>Parametri  
 `pGroup`  
 Un puntatore a un gruppo di animazione che contiene un oggetto di animazione il cui valore è stato modificato.  
  
 `pObject`  
 Puntatore a un oggetto di animazione che contiene una variabile di animazione il cui valore è stato modificato.  
  
 `variable`  
 Puntatore a una variabile di animazione.  
  
 `newValue`  
 Specifica un nuovo valore.  
  
 `prevValue`  
 Specifica il valore precedente.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato se si abilitano eventi della variabile di animazione con EnableIntegerValueChangedEvent chiamato per una variabile di animazione specifica o un oggetto di animazione. Può essere sottoposto a override in una classe derivata per eseguire azioni specifiche dell'applicazione.  
  
##  <a name="onanimationmanagerstatuschanged"></a>CAnimationController::OnAnimationManagerStatusChanged  
 Chiamato dal framework in risposta all'evento StatusChanged da Gestione animazione.  
  
```  
virtual void OnAnimationManagerStatusChanged(
    UI_ANIMATION_MANAGER_STATUS newStatus,  
    UI_ANIMATION_MANAGER_STATUS previousStatus);
```  
  
### <a name="parameters"></a>Parametri  
 `newStatus`  
 Nuovo stato di gestione animazione.  
  
 `previousStatus`  
 Stato di gestione animazione precedente.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato se si abilitano eventi di gestione di animazione con EnableAnimationManagerEvent. Può essere sottoposto a override in una classe derivata per eseguire azioni specifiche dell'applicazione. L'implementazione predefinita aggiorna una finestra correlata se è stata impostata con SetRelatedWnd.  
  
##  <a name="onanimationtimerpostupdate"></a>CAnimationController::OnAnimationTimerPostUpdate  
 Al termine dell'aggiornamento di un'animazione, chiamato dal framework.  
  
```  
virtual void OnAnimationTimerPostUpdate();
```  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato se si abilita gestori di eventi timer utilizzando EnableAnimationTimerEventHandler. Può essere sottoposto a override in una classe derivata per eseguire azioni specifiche dell'applicazione.  
  
##  <a name="onanimationtimerpreupdate"></a>CAnimationController::OnAnimationTimerPreUpdate  
 Chiamato dal framework prima dell'inizio aggiornamento di un'animazione.  
  
```  
virtual void OnAnimationTimerPreUpdate();
```  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato se si abilita gestori di eventi timer utilizzando EnableAnimationTimerEventHandler. Può essere sottoposto a override in una classe derivata per eseguire azioni specifiche dell'applicazione.  
  
##  <a name="onanimationtimerrenderingtooslow"></a>CAnimationController::OnAnimationTimerRenderingTooSlow  
 Chiamato dal framework quando la frequenza dei fotogrammi per il rendering di un'animazione scende sotto una frequenza fotogrammi.  
  
```  
virtual void OnAnimationTimerRenderingTooSlow(UINT32 fps);
```  
  
### <a name="parameters"></a>Parametri  
 `fps`  
 La frequenza dei fotogrammi corrente in fotogrammi al secondo.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato se si abilita gestori di eventi timer utilizzando EnableAnimationTimerEventHandler. Può essere sottoposto a override in una classe derivata per eseguire azioni specifiche dell'applicazione. La frequenza dei fotogrammi auspicabile minimo viene specificata chiamando IUIAnimationTimer:: SetFrameRateThreshold.  
  
##  <a name="onanimationvaluechanged"></a>CAnimationController::  
 Chiamato dal framework quando viene modificato valore della variabile di animazione.  
  
```  
virtual void OnAnimationValueChanged(
    CAnimationGroup* pGroup,  
    CAnimationBaseObject* pObject,  
    IUIAnimationVariable* variable,  
    DOUBLE newValue,  
    DOUBLE prevValue);
```  
  
### <a name="parameters"></a>Parametri  
 `pGroup`  
 Un puntatore a un gruppo di animazione che contiene un oggetto di animazione il cui valore è stato modificato.  
  
 `pObject`  
 Puntatore a un oggetto di animazione che contiene una variabile di animazione il cui valore è stato modificato.  
  
 `variable`  
 Puntatore a una variabile di animazione.  
  
 `newValue`  
 Specifica un nuovo valore.  
  
 `prevValue`  
 Specifica il valore precedente.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato se si abilitano eventi della variabile di animazione con EnableValueChangedEvent chiamato per una variabile di animazione specifica o un oggetto di animazione. Può essere sottoposto a override in una classe derivata per eseguire azioni specifiche dell'applicazione.  
  
##  <a name="onbeforeanimationstart"></a>CAnimationController::OnBeforeAnimationStart  
 Chiamato dal framework destra prima che venga pianificata l'animazione.  
  
```  
virtual void OnBeforeAnimationStart(CAnimationGroup* pGroup);
```  
  
### <a name="parameters"></a>Parametri  
 `pGroup`  
 Puntatore a un gruppo di animazione cui animazione sta per essere avviato.  
  
### <a name="remarks"></a>Note  
 Questa chiamata viene indirizzata alla classe CWnd correlata e può essere sottoposto a override in una classe derivata per eseguire azioni aggiuntive prima dell'inizio dell'animazione per il gruppo specificato.  
  
##  <a name="onhasprioritycancel"></a>CAnimationController::OnHasPriorityCancel  
 Chiamata eseguita dal framework per risolvere i conflitti di pianificazione.  
  
```  
virtual BOOL OnHasPriorityCancel(
    CAnimationGroup* pGroupScheduled,  
    CAnimationGroup* pGroupNew,  
    UI_ANIMATION_PRIORITY_EFFECT priorityEffect);
```  
  
### <a name="parameters"></a>Parametri  
 `pGroupScheduled`  
 Il gruppo cui appartiene lo storyboard attualmente pianificato.  
  
 `pGroupNew`  
 Il gruppo cui appartiene il nuovo storyboard la cui pianificazione è in conflitto con lo storyboard pianificato di proprietà di pGroupScheduled.  
  
 `priorityEffect`  
 Potenziale effetto su pGroupNew se pGroupScheduled dispone di una priorità più alta.  
  
### <a name="return-value"></a>Valore restituito  
 Deve restituire TRUE se lo storyboard di proprietà di pGroupNew è prioritario. Deve restituire FALSE se lo storyboard di proprietà di pGroupScheduled è prioritario.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato se si abilitano eventi di confronto della priorità usando CAnimationController:: EnablePriorityComparisonHandler e si specifica UI_ANIMATION_PHT_CANCEL. Può essere sottoposto a override in una classe derivata per eseguire azioni specifiche dell'applicazione. Fare riferimento alla documentazione dell'API dell'animazione Windows per altre informazioni sulla gestione dei conflitti (http://msdn.microsoft.com/library/dd371759(VS.85).aspx).  
  
##  <a name="onhasprioritycompress"></a>CAnimationController::OnHasPriorityCompress  
 Chiamata eseguita dal framework per risolvere i conflitti di pianificazione.  
  
```  
virtual BOOL OnHasPriorityCompress(
    CAnimationGroup* pGroupScheduled,  
    CAnimationGroup* pGroupNew,  
    UI_ANIMATION_PRIORITY_EFFECT priorityEffect);
```  
  
### <a name="parameters"></a>Parametri  
 `pGroupScheduled`  
 Il gruppo cui appartiene lo storyboard attualmente pianificato.  
  
 `pGroupNew`  
 Il gruppo cui appartiene il nuovo storyboard la cui pianificazione è in conflitto con lo storyboard pianificato di proprietà di pGroupScheduled.  
  
 `priorityEffect`  
 Potenziale effetto su pGroupNew se pGroupScheduled dispone di una priorità più alta.  
  
### <a name="return-value"></a>Valore restituito  
 Deve restituire TRUE se lo storyboard di proprietà di pGroupNew è prioritario. Deve restituire FALSE se lo storyboard di proprietà di pGroupScheduled è prioritario.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato se si abilitano eventi di confronto della priorità usando CAnimationController:: EnablePriorityComparisonHandler e si specifica UI_ANIMATION_PHT_COMPRESS. Può essere sottoposto a override in una classe derivata per eseguire azioni specifiche dell'applicazione. Fare riferimento alla documentazione dell'API dell'animazione Windows per altre informazioni sulla gestione dei conflitti (http://msdn.microsoft.com/library/dd371759(VS.85).aspx).  
  
##  <a name="onhaspriorityconclude"></a>CAnimationController::OnHasPriorityConclude  
 Chiamata eseguita dal framework per risolvere i conflitti di pianificazione.  
  
```  
virtual BOOL OnHasPriorityConclude(
    CAnimationGroup* pGroupScheduled,  
    CAnimationGroup* pGroupNew,  
    UI_ANIMATION_PRIORITY_EFFECT priorityEffect);
```  
  
### <a name="parameters"></a>Parametri  
 `pGroupScheduled`  
 Il gruppo cui appartiene lo storyboard attualmente pianificato.  
  
 `pGroupNew`  
 Il gruppo cui appartiene il nuovo storyboard la cui pianificazione è in conflitto con lo storyboard pianificato di proprietà di pGroupScheduled.  
  
 `priorityEffect`  
 Potenziale effetto su pGroupNew se pGroupScheduled dispone di una priorità più alta.  
  
### <a name="return-value"></a>Valore restituito  
 Deve restituire TRUE se lo storyboard di proprietà di pGroupNew è prioritario. Deve restituire FALSE se lo storyboard di proprietà di pGroupScheduled è prioritario.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato se si abilitano eventi di confronto della priorità usando CAnimationController:: EnablePriorityComparisonHandler e si specifica UI_ANIMATION_PHT_CONCLUDE. Può essere sottoposto a override in una classe derivata per eseguire azioni specifiche dell'applicazione. Fare riferimento alla documentazione dell'API dell'animazione Windows per altre informazioni sulla gestione dei conflitti (http://msdn.microsoft.com/library/dd371759(VS.85).aspx).  
  
##  <a name="onhasprioritytrim"></a>CAnimationController::OnHasPriorityTrim  
 Chiamata eseguita dal framework per risolvere i conflitti di pianificazione.  
  
```  
virtual BOOL OnHasPriorityTrim(
    CAnimationGroup* pGroupScheduled,  
    CAnimationGroup* pGroupNew,  
    UI_ANIMATION_PRIORITY_EFFECT priorityEffect);
```  
  
### <a name="parameters"></a>Parametri  
 `pGroupScheduled`  
 Il gruppo cui appartiene lo storyboard attualmente pianificato.  
  
 `pGroupNew`  
 Il gruppo cui appartiene il nuovo storyboard la cui pianificazione è in conflitto con lo storyboard pianificato di proprietà di pGroupScheduled.  
  
 `priorityEffect`  
 Potenziale effetto su pGroupNew se pGroupScheduled dispone di una priorità più alta.  
  
### <a name="return-value"></a>Valore restituito  
 Deve restituire TRUE se lo storyboard di proprietà di pGroupNew è prioritario. Deve restituire FALSE se lo storyboard di proprietà di pGroupScheduled è prioritario.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato se si abilitano eventi di confronto della priorità usando CAnimationController:: EnablePriorityComparisonHandler e si specifica UI_ANIMATION_PHT_TRIM. Può essere sottoposto a override in una classe derivata per eseguire azioni specifiche dell'applicazione. Fare riferimento alla documentazione dell'API dell'animazione Windows per altre informazioni sulla gestione dei conflitti (http://msdn.microsoft.com/library/dd371759(VS.85).aspx).  
  
##  <a name="onstoryboardstatuschanged"></a>CAnimationController::OnStoryboardStatusChanged  
 Chiamato dal framework quando viene modificato lo stato dello storyboard.  
  
```  
virtual void OnStoryboardStatusChanged(
    CAnimationGroup* pGroup,  
    UI_ANIMATION_STORYBOARD_STATUS newStatus,  
    UI_ANIMATION_STORYBOARD_STATUS previousStatus);
```  
  
### <a name="parameters"></a>Parametri  
 `pGroup`  
 Un puntatore a un gruppo di animazione che possiede lo storyboard il cui stato è stato modificato.  
  
 `newStatus`  
 Specifica il nuovo stato.  
  
 `previousStatus`  
 Specifica lo stato precedente.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato se si abilitano eventi di storyboard usando CAnimationController:: EnableStoryboardEventHandler. Può essere sottoposto a override in una classe derivata per eseguire azioni specifiche dell'applicazione.  
  
##  <a name="onstoryboardupdated"></a>CAnimationController::OnStoryboardUpdated  
 Chiamato dal framework quando è stato aggiornato uno storyboard.  
  
```  
virtual void OnStoryboardUpdated(CAnimationGroup* pGroup);
```  
  
### <a name="parameters"></a>Parametri  
 `pGroup`  
 Un puntatore a un gruppo che possiede lo storyboard.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato se si abilitano eventi di storyboard usando CAnimationController:: EnableStoryboardEventHandler. Può essere sottoposto a override in una classe derivata per eseguire azioni specifiche dell'applicazione.  
  
##  <a name="removeallanimationgroups"></a>CAnimationController::RemoveAllAnimationGroups  
 Rimuove tutti i gruppi di animazione dal controller di animazione.  
  
```  
void RemoveAllAnimationGroups();
```  
  
### <a name="remarks"></a>Note  
 Tutti i gruppi sarà eliminato, il puntatore del mouse, se archiviati a livello di applicazione, deve essere invalidato. Se CAnimationGroup:: per un gruppo da eliminare è TRUE, verranno eliminati tutti gli oggetti di animazione che appartengono al gruppo; in caso contrario, i riferimenti al controller di animazione padre verranno impostati su NULL e possono essere aggiunti a un altro controller.  
  
##  <a name="removeanimationgroup"></a>CAnimationController::RemoveAnimationGroup  
 Rimuove un gruppo di animazione con l'ID specificato dal controller di animazione.  
  
```  
void RemoveAnimationGroup(UINT32 nGroupID);
```  
  
### <a name="parameters"></a>Parametri  
 `nGroupID`  
 Specifica l'ID del gruppo di animazione.  
  
### <a name="remarks"></a>Note  
 Questo metodo rimuove un gruppo di animazione dall'elenco interno dei gruppi e di eliminarlo, pertanto se è stato archiviato un puntatore a tale gruppo di animazione, deve essere invalidato. Se CAnimationGroup:: è TRUE, verranno eliminati tutti gli oggetti di animazione che appartengono al gruppo; in caso contrario, i riferimenti al controller di animazione padre verranno impostati su NULL e possono essere aggiunti a un altro controller.  
  
##  <a name="removeanimationobject"></a>CAnimationController::RemoveAnimationObject  
 Rimuovere un oggetto di animazione dal controller di animazione.  
  
```  
void RemoveAnimationObject(
    CAnimationBaseObject* pObject,  
    BOOL bNoDelete = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 `pObject`  
 Puntatore a un oggetto di animazione.  
  
 `bNoDelete`  
 Se questo parametro è impostato su TRUE l'oggetto non verrà eliminato al momento della rimozione.  
  
### <a name="remarks"></a>Note  
 Rimuove un oggetto di animazione da controller di animazione e il gruppo di animazione. Chiamare questa funzione, se un determinato oggetto non deve più essere animato, o se si desidera spostare l'oggetto a un altro controller di animazione. Nell'ultimo caso bNoDelete deve essere TRUE.  
  
##  <a name="removetransitions"></a>CAnimationController::RemoveTransitions  
 Rimuove le transizioni tra gli oggetti di animazione che appartengono al gruppo specificato.  
  
```  
void RemoveTransitions(UINT32 nGroupID);
```  
  
### <a name="parameters"></a>Parametri  
 `nGroupID`  
 Specifica l'ID del gruppo.  
  
### <a name="remarks"></a>Note  
 Il gruppo di cicli su oggetti di animazione e chiama ClearTransitions (false) per ogni oggetto di animazione. Questo metodo viene chiamato dal framework dopo che è stato pianificato l'animazione.  
  
##  <a name="schedulegroup"></a>CAnimationController:: ScheduleGroup  
 Pianifica un'animazione.  
  
```  
BOOL ScheduleGroup(
    UINT32 nGroupID,  
    UI_ANIMATION_SECONDS time = 0.0);
```  
  
### <a name="parameters"></a>Parametri  
 `nGroupID`  
 Specifica l'ID del gruppo da pianificare dell'animazione.  
  
 `time`  
 Specifica tempo di pianificazione.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se l'animazione è stata pianificata. FALSE se non è stato creato uno storyboard o si verificano altri errori.  
  
### <a name="remarks"></a>Note  
 È necessario chiamare AnimateGroup con il parametro bScheduleNow impostato su FALSE prima di ScheduleGroup. È possibile specificare il tempo di animazione desiderato ottenuto da IUIAnimationTimer::GetTime. Se il parametro ora è 0.0, l'animazione è pianificata per l'ora corrente.  
  
##  <a name="setrelatedwnd"></a>CAnimationController:: SetRelatedWnd  
 Stabilisce una relazione tra i controller di animazione e una finestra.  
  
```  
void SetRelatedWnd(CWnd* pWnd);
```  
  
### <a name="parameters"></a>Parametri  
 `pWnd`  
 Puntatore all'oggetto finestra da impostare.  
  
### <a name="remarks"></a>Note  
 Se un oggetto CWnd correlato è impostato, il controller di animazione verranno aggiornati automaticamente anche (Invia messaggio WM_PAINT) quando è stato modificato lo stato di gestione animazione o si è verificato un evento di aggiornamento successivo timer.  
  
##  <a name="updateanimationmanager"></a>CAnimationController:: UpdateAnimationManager  
 Indica a Gestione animazione per aggiornare i valori di tutte le variabili di animazione.  
  
```  
virtual void UpdateAnimationManager();
```  
  
### <a name="remarks"></a>Note  
 Chiamare che questo metodo fa avanzare la gestione di animazione all'ora corrente, modificare gli stati di storyboard in base alle esigenze e l'aggiornamento di qualsiasi variabile di animazione appropriati valori interpolati. Questo metodo chiama internamente IUIAnimationTimer:: getTime e IUIAnimationManager::Update(timeNow). Eseguire l'override di questo metodo in una classe derivata per personalizzare questo comportamento.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)
