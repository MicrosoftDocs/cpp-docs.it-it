---
description: 'Altre informazioni su: classe CAnimationController'
title: Classe CAnimationController
ms.date: 03/27/2019
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
ms.openlocfilehash: 30754084ff62a06ef38d16e555ea32a585bb5b52
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97254755"
---
# <a name="canimationcontroller-class"></a>Classe CAnimationController

Implementa il controller di animazione che fornisce un'interfaccia centrale per la creazione e la gestione delle animazioni.

## <a name="syntax"></a>Sintassi

```
class CAnimationController : public CObject;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CAnimationController:: CAnimationController](#canimationcontroller)|Costruisce un controller di animazione.|
|[CAnimationController:: ~ CAnimationController](#_dtorcanimationcontroller)|Distruttore. Chiamato quando l'oggetto del controller di animazione viene eliminato definitivamente.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CAnimationController:: AddAnimationObject](#addanimationobject)|Aggiunge un oggetto animazione a un gruppo che appartiene al controller di animazione.|
|[CAnimationController:: AddKeyframeToGroup](#addkeyframetogroup)|Aggiunge un fotogramma chiave al gruppo.|
|[CAnimationController:: AnimateGroup](#animategroup)|Prepara un gruppo per l'esecuzione dell'animazione e, facoltativamente, lo pianifica.|
|[CAnimationController:: CleanUpGroup](#cleanupgroup)|Di overload. Chiamato dal Framework per pulire il gruppo quando l'animazione è stata pianificata.|
|[CAnimationController::CreateKeyframe](#createkeyframe)|Di overload. Crea un fotogramma chiave che dipende dalla transizione e lo aggiunge al gruppo specificato.|
|[CAnimationController:: EnableAnimationManagerEvent](#enableanimationmanagerevent)|Imposta o rilascia un gestore da chiamare quando lo stato di gestione animazioni viene modificato.|
|[CAnimationController:: EnableAnimationTimerEventHandler](#enableanimationtimereventhandler)|Imposta o rilascia un gestore per gli eventi di temporizzazione e il gestore per gli aggiornamenti temporizzati.|
|[CAnimationController:: EnablePriorityComparisonHandler](#enableprioritycomparisonhandler)|Imposta o rilascia il gestore del confronto di priorità da chiamare per determinare se uno storyboard pianificato può essere annullato, chiuso, tagliato o compresso.|
|[CAnimationController:: EnableStoryboardEventHandler](#enablestoryboardeventhandler)|Imposta o rilascia un gestore per gli eventi di stato e di aggiornamento dello storyboard.|
|[CAnimationController:: FindAnimationGroup](#findanimationgroup)|Di overload. Trova un gruppo di animazioni in base al relativo storyboard.|
|[CAnimationController:: FindAnimationObject](#findanimationobject)|Trova l'oggetto animazione contenente una variabile di animazione specificata.|
|[CAnimationController:: GetKeyframeStoryboardStart](#getkeyframestoryboardstart)|Restituisce un fotogramma chiave che identifica l'inizio dello storyboard.|
|[CAnimationController:: GetUIAnimationManager](#getuianimationmanager)|Fornisce l'accesso all'oggetto IUIAnimationManager incapsulato.|
|[CAnimationController:: GetUIAnimationTimer](#getuianimationtimer)|Fornisce l'accesso all'oggetto IUIAnimationTimer incapsulato.|
|[CAnimationController:: GetUITransitionFactory](#getuitransitionfactory)|Puntatore all'interfaccia IUIAnimationTransitionFactory o NULL se la creazione della libreria di transizione non è riuscita.|
|[CAnimationController:: GetUITransitionLibrary](#getuitransitionlibrary)|Fornisce l'accesso all'oggetto IUIAnimationTransitionLibrary incapsulato.|
|[CAnimationController:: IsAnimationInProgress](#isanimationinprogress)|Indica se almeno un gruppo sta eseguendo l'animazione.|
|[CAnimationController:: IsValid](#isvalid)|Indica se il controller di animazione è valido.|
|[CAnimationController:: OnAnimationIntegerValueChanged](#onanimationintegervaluechanged)|Chiamata eseguita dal framework quando viene modificato il valore intero della variabile di animazione.|
|[CAnimationController:: OnAnimationManagerStatusChanged](#onanimationmanagerstatuschanged)|Chiamata eseguita dal Framework in risposta all'evento StatusChanged da Gestione animazioni.|
|[CAnimationController:: OnAnimationTimerPostUpdate](#onanimationtimerpostupdate)|Chiamata eseguita dal Framework dopo il completamento di un aggiornamento dell'animazione.|
|[CAnimationController:: OnAnimationTimerPreUpdate](#onanimationtimerpreupdate)|Chiamata eseguita dal Framework prima dell'inizio dell'aggiornamento di un'animazione.|
|[CAnimationController:: OnAnimationTimerRenderingTooSlow](#onanimationtimerrenderingtooslow)|Chiamata eseguita dal framework quando la frequenza dei fotogrammi di rendering per un'animazione scende al di sotto di una frequenza di fotogrammi minima auspicabile.|
|[CAnimationController:: OnAnimationValueChanged](#onanimationvaluechanged)|Chiamata eseguita dal framework quando viene modificato il valore della variabile di animazione.|
|[CAnimationController:: OnBeforeAnimationStart](#onbeforeanimationstart)|Viene chiamato dal framework immediatamente prima della pianificazione dell'animazione.|
|[CAnimationController:: OnHasPriorityCancel](#onhasprioritycancel)|Chiamata eseguita dal framework per risolvere i conflitti di pianificazione.|
|[CAnimationController:: OnHasPriorityCompress](#onhasprioritycompress)|Chiamata eseguita dal framework per risolvere i conflitti di pianificazione.|
|[CAnimationController:: OnHasPriorityConclude](#onhaspriorityconclude)|Chiamata eseguita dal framework per risolvere i conflitti di pianificazione.|
|[CAnimationController:: OnHasPriorityTrim](#onhasprioritytrim)|Chiamata eseguita dal framework per risolvere i conflitti di pianificazione.|
|[CAnimationController:: OnStoryboardStatusChanged](#onstoryboardstatuschanged)|Chiamata eseguita dal framework quando lo stato dello storyboard è stato modificato.|
|[CAnimationController:: OnStoryboardUpdated](#onstoryboardupdated)|Chiamata eseguita dal framework quando lo storyboard è stato aggiornato.|
|[CAnimationController:: RemoveAllAnimationGroups](#removeallanimationgroups)|Rimuove tutti i gruppi di animazione dal controller di animazione.|
|[CAnimationController:: RemoveAnimationGroup](#removeanimationgroup)|Rimuove un gruppo di animazioni con ID specificato dal controller di animazione.|
|[CAnimationController:: RemoveAnimationObject](#removeanimationobject)|Rimuovere un oggetto animazione dal controller di animazione.|
|[CAnimationController:: RemoveTransitions](#removetransitions)|Rimuove le transizioni dagli oggetti di animazione che appartengono al gruppo specificato.|
|[CAnimationController:: ScheduleGroup](#schedulegroup)|Pianifica un'animazione.|
|[CAnimationController:: SetRelatedWnd](#setrelatedwnd)|Stabilisce una relazione tra il controller di animazione e una finestra.|
|[CAnimationController:: UpdateAnimationManager](#updateanimationmanager)|Indica al gestore delle animazioni di aggiornare i valori di tutte le variabili di animazione.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Description|
|----------|-----------------|
|[CAnimationController:: CleanUpGroup](#cleanupgroup)|Di overload. Helper che pulisce il gruppo.|
|[CAnimationController:: OnAfterSchedule](#onafterschedule)|Chiamata eseguita dal framework quando è stata appena pianificata un'animazione per il gruppo specificato.|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Description|
|----------|-----------------|
|[CAnimationController:: gkeyframeStoryboardStart](#g_keyframestoryboardstart)|Fotogramma chiave che rappresenta l'inizio dello storyboard.|
|[CAnimationController:: m_bIsValid](#m_bisvalid)|Specifica se un controller di animazione è valido o meno. Questo membro è impostato su FALSE se il sistema operativo corrente non supporta l'API di animazione di Windows.|
|[CAnimationController:: m_lstAnimationGroups](#m_lstanimationgroups)|Elenco di gruppi di animazione che appartengono a questo controller animazione.|
|[CAnimationController:: m_pAnimationManager](#m_panimationmanager)|Archivia un puntatore all'oggetto COM di gestione animazioni.|
|[CAnimationController:: m_pAnimationTimer](#m_panimationtimer)|Archivia un puntatore all'oggetto COM del timer di animazione.|
|[CAnimationController:: m_pRelatedWnd](#m_prelatedwnd)|Puntatore a un oggetto CWnd correlato, che può essere ridisegnato automaticamente quando lo stato di Animation Manager è stato modificato o si è verificato l'evento post-aggiornamento. Può essere NULL.|
|[CAnimationController:: m_pTransitionFactory](#m_ptransitionfactory)|Archivia un puntatore all'oggetto COM della factory di transizione.|
|[CAnimationController:: m_pTransitionLibrary](#m_ptransitionlibrary)|Archivia un puntatore all'oggetto COM della libreria di transizione.|

## <a name="remarks"></a>Commenti

La classe CAnimationController è la classe chiave che gestisce le animazioni. È possibile creare una o più istanze del controller di animazione in un'applicazione e, facoltativamente, connettere un'istanza del controller di animazione a un oggetto CWnd usando CAnimationController:: SetRelatedWnd. Questa connessione è necessaria per inviare automaticamente i messaggi di WM_PAINT alla finestra correlata quando lo stato di Animation Manager è stato modificato o il timer di animazione è stato aggiornato. Se non si abilita questa relazione, è necessario ricreare manualmente una finestra che visualizza un'animazione. A questo scopo, è possibile derivare una classe da CAnimationController ed eseguire l'override di OnAnimationManagerStatusChanged e/o OnAnimationTimerPostUpdate e invalidare una o più finestre quando necessario.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CAnimationController`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

## <a name="canimationcontrollercanimationcontroller"></a><a name="_dtorcanimationcontroller"></a> CAnimationController:: ~ CAnimationController

Distruttore. Chiamato quando l'oggetto del controller di animazione viene eliminato definitivamente.

```
virtual ~CAnimationController(void);
```

## <a name="canimationcontrolleraddanimationobject"></a><a name="addanimationobject"></a> CAnimationController:: AddAnimationObject

Aggiunge un oggetto animazione a un gruppo che appartiene al controller di animazione.

```
CAnimationGroup* AddAnimationObject(CAnimationBaseObject* pObject);
```

### <a name="parameters"></a>Parametri

*pObject*<br/>
Puntatore a un oggetto di animazione.

### <a name="return-value"></a>Valore restituito

Puntatore al gruppo di animazione nuovo o esistente in cui è stato aggiunto pObject se la funzione ha esito positivo; NULL se pObject è già stato aggiunto a un gruppo che appartiene a un altro controller di animazione.

### <a name="remarks"></a>Commenti

Chiamare questo metodo per aggiungere un oggetto animazione al controller animazione. Un oggetto verrà aggiunto a un gruppo in base all'oggetto GroupID (vedere CAnimationBaseObject:: SetId). Il controller di animazione creerà un nuovo gruppo se è il primo oggetto aggiunto con il GroupID specificato. Un oggetto animazione può essere aggiunto solo a un controller di animazione. Se è necessario aggiungere un oggetto a un altro controller, chiamare prima RemoveAnimationObject. Se si chiama SetId con New GroupID per un oggetto che è già stato aggiunto a un gruppo, l'oggetto verrà rimosso dal gruppo precedente e aggiunto a un altro gruppo con l'ID specificato.

## <a name="canimationcontrolleraddkeyframetogroup"></a><a name="addkeyframetogroup"></a> CAnimationController:: AddKeyframeToGroup

Aggiunge un fotogramma chiave al gruppo.

```
BOOL AddKeyframeToGroup(
    UINT32 nGroupID,
    CBaseKeyFrame* pKeyframe);
```

### <a name="parameters"></a>Parametri

*nGroupID*<br/>
Specifica l'ID gruppo.

*pKeyframe*<br/>
Puntatore a un fotogramma chiave.

### <a name="return-value"></a>Valore restituito

TRUE se la funzione ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

In genere non è necessario chiamare questo metodo, usare invece CAnimationController:: CreateKeyframe, che crea e aggiunge automaticamente il fotogramma chiave creato a un gruppo.

## <a name="canimationcontrolleranimategroup"></a><a name="animategroup"></a> CAnimationController:: AnimateGroup

Prepara un gruppo per l'esecuzione dell'animazione e, facoltativamente, lo pianifica.

```
BOOL AnimateGroup(
    UINT32 nGroupID,
    BOOL bScheduleNow = TRUE);
```

### <a name="parameters"></a>Parametri

*nGroupID*<br/>
Specifica GroupID.

*bScheduleNow*<br/>
Specifica se eseguire immediatamente l'animazione.

### <a name="return-value"></a>Valore restituito

TRUE se l'animazione è stata pianificata ed eseguita correttamente.

### <a name="remarks"></a>Commenti

Questo metodo esegue il lavoro effettivo creando storyboard, aggiungendo variabili di animazione, applicando transizioni e impostando fotogrammi chiave. È possibile ritardare la pianificazione se si imposta bScheduleNow su FALSE. In questo caso il gruppo specificato conterrà uno storyboard configurato per l'animazione. A questo punto è possibile configurare gli eventi per le variabili storyboard e Animation. Quando è effettivamente necessario eseguire l'animazione, chiamare CAnimationController:: ScheduleGroup.

## <a name="canimationcontrollercanimationcontroller"></a><a name="canimationcontroller"></a> CAnimationController:: CAnimationController

Costruisce un controller di animazione.

```
CAnimationController(void);
```

## <a name="canimationcontrollercleanupgroup"></a><a name="cleanupgroup"></a> CAnimationController:: CleanUpGroup

Chiamato dal Framework per pulire il gruppo quando l'animazione è stata pianificata.

```cpp
void CleanUpGroup(UINT32 nGroupID);
void CleanUpGroup(CAnimationGroup* pGroup);
```

### <a name="parameters"></a>Parametri

*nGroupID*<br/>
Specifica GroupID.

*pGroup*<br/>
Puntatore al gruppo di animazioni da pulire.

### <a name="remarks"></a>Commenti

Questo metodo rimuove tutte le transizioni e i fotogrammi chiave dal gruppo specificato, perché non sono rilevanti dopo che un'animazione è stata pianificata.

## <a name="canimationcontrollercreatekeyframe"></a><a name="createkeyframe"></a> CAnimationController:: CreateKeyframe

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

*nGroupID*<br/>
Specifica l'ID gruppo per cui viene creato il fotogramma chiave.

*pTransition*<br/>
Puntatore alla transizione. Il fotogramma chiave verrà inserito nello storyboard dopo questa transizione.

*pKeyframe*<br/>
Puntatore al fotogramma chiave di base per questo fotogramma chiave.

*offset*<br/>
Offset in secondi dal fotogramma chiave di base specificato da pKeyframe.

### <a name="return-value"></a>Valore restituito

Puntatore al fotogramma chiave appena creato se la funzione riesce.

### <a name="remarks"></a>Commenti

È possibile archiviare il puntatore restituito e basare gli altri fotogrammi chiave sul fotogramma chiave appena creato (vedere il secondo overload). Per avviare le transizioni di fotogrammi chiave, vedere CBaseTransition::SetKeyframes. Non è necessario eliminare i fotogrammi chiave creati in questo modo, poiché vengono eliminati automaticamente dai gruppi di animazioni. Prestare attenzione durante la creazione di fotogrammi chiave basati su altri fotogrammi chiave e transizioni ed evitare i riferimenti circolari.

## <a name="canimationcontrollerenableanimationmanagerevent"></a><a name="enableanimationmanagerevent"></a> CAnimationController:: EnableAnimationManagerEvent

Imposta o rilascia un gestore da chiamare quando lo stato di gestione animazioni viene modificato.

```
virtual BOOL EnableAnimationManagerEvent(BOOL bEnable = TRUE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
Specifica se impostare o rilasciare un gestore.

### <a name="return-value"></a>Valore restituito

TRUE se il gestore è stato impostato o rilasciato correttamente.

### <a name="remarks"></a>Commenti

Quando un gestore è impostato (abilitato), l'animazione Windows chiama OnAnimationManagerStatusChanged quando lo stato di gestione animazioni viene modificato.

## <a name="canimationcontrollerenableanimationtimereventhandler"></a><a name="enableanimationtimereventhandler"></a> CAnimationController:: EnableAnimationTimerEventHandler

Imposta o rilascia un gestore per gli eventi di temporizzazione e il gestore per gli aggiornamenti temporizzati.

```
virtual BOOL EnableAnimationTimerEventHandler(
    BOOL bEnable = TRUE,
    UI_ANIMATION_IDLE_BEHAVIOR idleBehavior = UI_ANIMATION_IDLE_BEHAVIOR_DISABLE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
Specifica se impostare o rilasciare i gestori.

*idleBehavior*<br/>
Specifica il comportamento inattivo per il gestore di aggiornamento del timer.

### <a name="return-value"></a>Valore restituito

TRUE se i gestori sono stati impostati o rilasciati correttamente; FALSE se questo metodo viene chiamato per la seconda volta senza rilasciare prima i gestori o se si verificano altri errori.

### <a name="remarks"></a>Commenti

Quando i gestori sono impostati (Enabled), l'API di animazione Windows chiama OnAnimationTimerPreUpdate, OnAnimationTimerPostUpdate, OnRenderingTooSlow metodi. È necessario abilitare i timer di animazione per consentire gli storyboard dell'aggiornamento dell'API di animazione Windows. In caso contrario, è necessario chiamare CAnimationController:: UpdateAnimationManager per indicare al gestore delle animazioni di aggiornare i valori di tutte le variabili di animazione.

## <a name="canimationcontrollerenableprioritycomparisonhandler"></a><a name="enableprioritycomparisonhandler"></a> CAnimationController:: EnablePriorityComparisonHandler

Imposta o rilascia il gestore del confronto di priorità da chiamare per determinare se uno storyboard pianificato può essere annullato, chiuso, tagliato o compresso.

```
virtual BOOL EnablePriorityComparisonHandler(DWORD dwHandlerType);
```

### <a name="parameters"></a>Parametri

*dwHandlerType*<br/>
Combinazione di flag di UI_ANIMATION_PHT_ (vedere la sezione Osservazioni), che specifica i gestori da impostare o rilasciare.

### <a name="return-value"></a>Valore restituito

TRUE se il gestore è stato impostato o rilasciato correttamente.

### <a name="remarks"></a>Commenti

Quando un gestore è impostato (abilitato), l'animazione Windows chiama i metodi virtuali seguenti a seconda di dwHandlerType: OnHasPriorityCancel, OnHasPriorityConclude, OnHasPriorityTrim, OnHasPriorityCompress. dwHandler può essere una combinazione dei flag seguenti: UI_ANIMATION_PHT_NONE-Release All Handlers UI_ANIMATION_PHT_CANCEL-set Cancel Comparison handler UI_ANIMATION_PHT_CONCLUDE-set terminate Comparison handler UI_ANIMATION_PHT_COMPRESS-set Compress Comparison handler UI_ANIMATION_PHT_TRIM-set Trim Comparison handler UI_ANIMATION_PHT_CANCEL_REMOVE-Remove Annulla confronto gestore UI_ANIMATION_PHT_CONCLUDE_REMOVE-Remove terminate Comparison handler UI_ANIMATION_PHT_COMPRESS_REMOVE-Remove Compress comparation handler UI_ANIMATION_PHT_TRIM_REMOVE- Rimuovi gestore di confronto Trim

## <a name="canimationcontrollerenablestoryboardeventhandler"></a><a name="enablestoryboardeventhandler"></a> CAnimationController:: EnableStoryboardEventHandler

Imposta o rilascia un gestore per gli eventi di stato e di aggiornamento dello storyboard.

```
virtual BOOL EnableStoryboardEventHandler(
    UINT32 nGroupID,
    BOOL bEnable = TRUE);
```

### <a name="parameters"></a>Parametri

*nGroupID*<br/>
Specifica l'ID gruppo.

*bEnable*<br/>
Specifica se impostare o rilasciare un gestore.

### <a name="return-value"></a>Valore restituito

TRUE se il gestore è stato impostato o rilasciato correttamente. FALSE se il gruppo di animazioni specificato è stato trovato o se l'animazione per il gruppo specificato non è stata avviata e il relativo storyboard interno è NULL.

### <a name="remarks"></a>Commenti

Quando un gestore è impostato (abilitato), l'API di animazione Windows chiama i metodi virtuali OnStoryboardStatusChanges e OnStoryboardUpdated. È necessario impostare un gestore dopo che è stato chiamato CAnimationController:: animate per il gruppo di animazioni specificato, perché crea l'oggetto IUIAnimationStoryboard incapsulato.

## <a name="canimationcontrollerfindanimationgroup"></a><a name="findanimationgroup"></a> CAnimationController:: FindAnimationGroup

Trova un gruppo di animazioni in base al relativo ID gruppo.

```
CAnimationGroup* FindAnimationGroup(UINT32 nGroupID);
CAnimationGroup* FindAnimationGroup(IUIAnimationStoryboard* pStoryboard);
```

### <a name="parameters"></a>Parametri

*nGroupID*<br/>
Specifica un GroupID.

*pStoryboard*<br/>
Puntatore a uno storyboard.

### <a name="return-value"></a>Valore restituito

Puntatore al gruppo di animazione o NULL se non viene trovato il gruppo con l'ID specificato.

### <a name="remarks"></a>Commenti

Utilizzare questo metodo per trovare un gruppo di animazioni in fase di esecuzione. Un gruppo viene creato e aggiunto all'elenco interno di gruppi di animazione quando viene aggiunto un primo oggetto di animazione con particolare GroupID al controller di animazione.

## <a name="canimationcontrollerfindanimationobject"></a><a name="findanimationobject"></a> CAnimationController:: FindAnimationObject

Trova l'oggetto animazione contenente una variabile di animazione specificata.

```
BOOL FindAnimationObject(
    IUIAnimationVariable* pVariable,
    CAnimationBaseObject** ppObject,
    CAnimationGroup** ppGroup);
```

### <a name="parameters"></a>Parametri

*pVariable*<br/>
Puntatore alla variabile di animazione.

*ppObject*<br/>
Output: Contiene un puntatore all'oggetto animazione o NULL.

*ppGroup*<br/>
Output: Contiene un puntatore al gruppo di animazione che contiene l'oggetto animazione o NULL.

### <a name="return-value"></a>Valore restituito

TRUE se l'oggetto è stato trovato; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Chiamato dai gestori eventi quando è necessario trovare un oggetto animazione dalla variabile di animazione in ingresso.

## <a name="canimationcontrollergkeyframestoryboardstart"></a><a name="g_keyframestoryboardstart"></a> CAnimationController:: gkeyframeStoryboardStart

Fotogramma chiave che rappresenta l'inizio dello storyboard.

```
static CBaseKeyFrame gkeyframeStoryboardStart;
```

## <a name="canimationcontrollergetkeyframestoryboardstart"></a><a name="getkeyframestoryboardstart"></a> CAnimationController:: GetKeyframeStoryboardStart

Restituisce un fotogramma chiave che identifica l'inizio dello storyboard.

```
static CBaseKeyFrame* GetKeyframeStoryboardStart();
```

### <a name="return-value"></a>Valore restituito

Puntatore al fotogramma chiave di base, che identifica l'inizio dello storyboard.

### <a name="remarks"></a>Commenti

Ottenere questo fotogramma chiave per basare qualsiasi altra fotogrammi chiave o transizioni nel momento in cui viene avviato uno storyboard.

## <a name="canimationcontrollergetuianimationmanager"></a><a name="getuianimationmanager"></a> CAnimationController:: GetUIAnimationManager

Fornisce l'accesso all'oggetto IUIAnimationManager incapsulato.

```
IUIAnimationManager* GetUIAnimationManager();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia IUIAnimationManager o NULL se la creazione del gestore animazione non è riuscita.

### <a name="remarks"></a>Commenti

Se il sistema operativo corrente non supporta l'API di animazione Windows, questo metodo restituisce NULL e dopo che tutte le chiamate successive su CAnimationController:: IsValid restituiscono FALSE. Potrebbe essere necessario accedere a IUIAnimationManager per chiamare i metodi di interfaccia, che non sono incapsulati dal controller di animazione.

## <a name="canimationcontrollergetuianimationtimer"></a><a name="getuianimationtimer"></a> CAnimationController:: GetUIAnimationTimer

Fornisce l'accesso all'oggetto IUIAnimationTimer incapsulato.

```
IUIAnimationTimer* GetUIAnimationTimer();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia IUIAnimationTimer o NULL se la creazione del timer di animazione non è riuscita.

### <a name="remarks"></a>Commenti

Se il sistema operativo corrente non supporta l'API di animazione Windows, questo metodo restituisce NULL e dopo che tutte le chiamate successive su CAnimationController:: IsValid restituiscono FALSE.

## <a name="canimationcontrollergetuitransitionfactory"></a><a name="getuitransitionfactory"></a> CAnimationController:: GetUITransitionFactory

Puntatore all'interfaccia IUIAnimationTransitionFactory o NULL se la creazione della libreria di transizione non è riuscita.

```
IUIAnimationTransitionFactory* GetUITransitionFactory();
```

### <a name="return-value"></a>Valore restituito

Puntatore a IUIAnimationTransitionFactory o NULL se la creazione della factory di transizione non è riuscita.

### <a name="remarks"></a>Commenti

Se il sistema operativo corrente non supporta l'API di animazione Windows, questo metodo restituisce NULL e dopo che tutte le chiamate successive su CAnimationController:: IsValid restituiscono FALSE.

## <a name="canimationcontrollergetuitransitionlibrary"></a><a name="getuitransitionlibrary"></a> CAnimationController:: GetUITransitionLibrary

Fornisce l'accesso all'oggetto IUIAnimationTransitionLibrary incapsulato.

```
IUIAnimationTransitionLibrary* GetUITransitionLibrary();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia IUIAnimationTransitionLibrary o NULL se la creazione della libreria di transizione non è riuscita.

### <a name="remarks"></a>Commenti

Se il sistema operativo corrente non supporta l'API di animazione Windows, questo metodo restituisce NULL e dopo che tutte le chiamate successive su CAnimationController:: IsValid restituiscono FALSE.

## <a name="canimationcontrollerisanimationinprogress"></a><a name="isanimationinprogress"></a> CAnimationController:: IsAnimationInProgress

Indica se almeno un gruppo sta eseguendo l'animazione.

```
virtual BOOL IsAnimationInProgress();
```

### <a name="return-value"></a>Valore restituito

TRUE se è in corso un'animazione per il controller animazione. in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Verifica lo stato di gestione animazioni e restituisce TRUE se lo stato è UI_ANIMATION_MANAGER_BUSY.

## <a name="canimationcontrollerisvalid"></a><a name="isvalid"></a> CAnimationController:: IsValid

Indica se il controller di animazione è valido.

```
BOOL IsValid() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se il controller di animazione è valido. in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Questo metodo restituisce FALSE solo se l'API di animazione Windows non è supportata nel sistema operativo corrente e la creazione di Animation Manager non è riuscita perché non è registrata. È necessario chiamare GetUIAnimationManager almeno una volta dopo l'inizializzazione delle librerie COM per provocare l'impostazione di questo flag.

## <a name="canimationcontrollerm_bisvalid"></a><a name="m_bisvalid"></a> CAnimationController:: m_bIsValid

Specifica se un controller di animazione è valido o meno. Questo membro è impostato su FALSE se il sistema operativo corrente non supporta l'API di animazione di Windows.

```
BOOL m_bIsValid;
```

## <a name="canimationcontrollerm_lstanimationgroups"></a><a name="m_lstanimationgroups"></a> CAnimationController:: m_lstAnimationGroups

Elenco di gruppi di animazione che appartengono a questo controller animazione.

```
CList<CAnimationGroup*, CAnimationGroup*> m_lstAnimationGroups;
```

## <a name="canimationcontrollerm_panimationmanager"></a><a name="m_panimationmanager"></a> CAnimationController:: m_pAnimationManager

Archivia un puntatore all'oggetto COM di gestione animazioni.

```
ATL::CComPtr<IUIAnimationManager> m_pAnimationManager;
```

## <a name="canimationcontrollerm_panimationtimer"></a><a name="m_panimationtimer"></a> CAnimationController:: m_pAnimationTimer

Archivia un puntatore all'oggetto COM del timer di animazione.

```
ATL::CComPtr<IUIAnimationTimer> m_pAnimationTimer;
```

## <a name="canimationcontrollerm_prelatedwnd"></a><a name="m_prelatedwnd"></a> CAnimationController:: m_pRelatedWnd

Puntatore a un oggetto CWnd correlato, che può essere ridisegnato automaticamente quando lo stato di Animation Manager è stato modificato o si è verificato l'evento post-aggiornamento. Può essere NULL.

```
CWnd* m_pRelatedWnd;
```

## <a name="canimationcontrollerm_ptransitionfactory"></a><a name="m_ptransitionfactory"></a> CAnimationController:: m_pTransitionFactory

Archivia un puntatore all'oggetto COM della factory di transizione.

```
ATL::CComPtr<IUIAnimationTransitionFactory> m_pTransitionFactory;
```

## <a name="canimationcontrollerm_ptransitionlibrary"></a><a name="m_ptransitionlibrary"></a> CAnimationController:: m_pTransitionLibrary

Archivia un puntatore all'oggetto COM della libreria di transizione.

```
ATL::CComPtr<IUIAnimationTransitionLibrary> m_pTransitionLibrary;
```

## <a name="canimationcontrolleronafterschedule"></a><a name="onafterschedule"></a> CAnimationController:: OnAfterSchedule

Chiamata eseguita dal framework quando è stata appena pianificata un'animazione per il gruppo specificato.

```
virtual void OnAfterSchedule(CAnimationGroup* pGroup);
```

### <a name="parameters"></a>Parametri

*pGroup*<br/>
Puntatore a un gruppo di animazioni, che è stato pianificato.

### <a name="remarks"></a>Commenti

L'implementazione predefinita rimuove i fotogrammi chiave dal gruppo specificato e le transizioni dalle variabili di animazione che appartengono al gruppo specificato. Può essere sottoposto a override in una classe derivata per eseguire azioni aggiuntive durante la pianificazione dell'animazione.

## <a name="canimationcontrolleronanimationintegervaluechanged"></a><a name="onanimationintegervaluechanged"></a> CAnimationController:: OnAnimationIntegerValueChanged

Chiamata eseguita dal framework quando viene modificato il valore intero della variabile di animazione.

```
virtual void OnAnimationIntegerValueChanged(
    CAnimationGroup* pGroup,
    CAnimationBaseObject* pObject,
    IUIAnimationVariable* variable,
    INT32 newValue,
    INT32 prevValue);
```

### <a name="parameters"></a>Parametri

*pGroup*<br/>
Puntatore a un gruppo di animazioni che contiene un oggetto di animazione il cui valore è stato modificato.

*pObject*<br/>
Puntatore a un oggetto di animazione contenente una variabile di animazione il cui valore è stato modificato.

*variable*<br/>
Puntatore a una variabile di animazione.

*newValue*<br/>
Specifica un nuovo valore.

*prevValue*<br/>
Specifica il valore precedente.

### <a name="remarks"></a>Commenti

Questo metodo viene chiamato se si abilitano eventi variabili di animazione con EnableIntegerValueChangedEvent chiamato per una variabile di animazione o un oggetto Animation specifico. Può essere sottoposto a override in una classe derivata per eseguire azioni specifiche dell'applicazione.

## <a name="canimationcontrolleronanimationmanagerstatuschanged"></a><a name="onanimationmanagerstatuschanged"></a> CAnimationController:: OnAnimationManagerStatusChanged

Chiamata eseguita dal Framework in risposta all'evento StatusChanged da Gestione animazioni.

```
virtual void OnAnimationManagerStatusChanged(
    UI_ANIMATION_MANAGER_STATUS newStatus,
    UI_ANIMATION_MANAGER_STATUS previousStatus);
```

### <a name="parameters"></a>Parametri

*newStatus*<br/>
Nuovo stato di gestione animazioni.

*previousStatus*<br/>
Stato precedente di gestione animazioni.

### <a name="remarks"></a>Commenti

Questo metodo viene chiamato se si abilitano eventi di Animation Manager con EnableAnimationManagerEvent. Può essere sottoposto a override in una classe derivata per eseguire azioni specifiche dell'applicazione. L'implementazione predefinita aggiorna una finestra correlata se è stata impostata con SetRelatedWnd.

## <a name="canimationcontrolleronanimationtimerpostupdate"></a><a name="onanimationtimerpostupdate"></a> CAnimationController:: OnAnimationTimerPostUpdate

Chiamata eseguita dal Framework dopo il completamento di un aggiornamento dell'animazione.

```
virtual void OnAnimationTimerPostUpdate();
```

### <a name="remarks"></a>Commenti

Questo metodo viene chiamato se si abilitano i gestori eventi del timer utilizzando EnableAnimationTimerEventHandler. Può essere sottoposto a override in una classe derivata per eseguire azioni specifiche dell'applicazione.

## <a name="canimationcontrolleronanimationtimerpreupdate"></a><a name="onanimationtimerpreupdate"></a> CAnimationController:: OnAnimationTimerPreUpdate

Chiamata eseguita dal Framework prima dell'inizio dell'aggiornamento di un'animazione.

```
virtual void OnAnimationTimerPreUpdate();
```

### <a name="remarks"></a>Commenti

Questo metodo viene chiamato se si abilitano i gestori eventi del timer utilizzando EnableAnimationTimerEventHandler. Può essere sottoposto a override in una classe derivata per eseguire azioni specifiche dell'applicazione.

## <a name="canimationcontrolleronanimationtimerrenderingtooslow"></a><a name="onanimationtimerrenderingtooslow"></a> CAnimationController:: OnAnimationTimerRenderingTooSlow

Chiamata eseguita dal framework quando la frequenza dei fotogrammi di rendering per un'animazione scende al di sotto di una frequenza di fotogrammi minima auspicabile.

```
virtual void OnAnimationTimerRenderingTooSlow(UINT32 fps);
```

### <a name="parameters"></a>Parametri

*fps*<br/>
Frequenza dei fotogrammi corrente in frame al secondo.

### <a name="remarks"></a>Commenti

Questo metodo viene chiamato se si abilitano i gestori eventi del timer utilizzando EnableAnimationTimerEventHandler. Può essere sottoposto a override in una classe derivata per eseguire azioni specifiche dell'applicazione. La frequenza dei fotogrammi minima desiderata viene specificata chiamando IUIAnimationTimer:: SetFrameRateThreshold.

## <a name="canimationcontrolleronanimationvaluechanged"></a><a name="onanimationvaluechanged"></a> CAnimationController:: OnAnimationValueChanged

Chiamata eseguita dal framework quando viene modificato il valore della variabile di animazione.

```
virtual void OnAnimationValueChanged(
    CAnimationGroup* pGroup,
    CAnimationBaseObject* pObject,
    IUIAnimationVariable* variable,
    DOUBLE newValue,
    DOUBLE prevValue);
```

### <a name="parameters"></a>Parametri

*pGroup*<br/>
Puntatore a un gruppo di animazioni che contiene un oggetto di animazione il cui valore è stato modificato.

*pObject*<br/>
Puntatore a un oggetto di animazione contenente una variabile di animazione il cui valore è stato modificato.

*variable*<br/>
Puntatore a una variabile di animazione.

*newValue*<br/>
Specifica un nuovo valore.

*prevValue*<br/>
Specifica il valore precedente.

### <a name="remarks"></a>Commenti

Questo metodo viene chiamato se si abilitano eventi variabili di animazione con EnableValueChangedEvent chiamato per una variabile di animazione o un oggetto Animation specifico. Può essere sottoposto a override in una classe derivata per eseguire azioni specifiche dell'applicazione.

## <a name="canimationcontrolleronbeforeanimationstart"></a><a name="onbeforeanimationstart"></a> CAnimationController:: OnBeforeAnimationStart

Viene chiamato dal framework immediatamente prima della pianificazione dell'animazione.

```
virtual void OnBeforeAnimationStart(CAnimationGroup* pGroup);
```

### <a name="parameters"></a>Parametri

*pGroup*<br/>
Puntatore a un gruppo di animazione la cui animazione sta per iniziare.

### <a name="remarks"></a>Commenti

Questa chiamata viene instradata a CWnd correlati e può essere sottoposta a override in una classe derivata per eseguire eventuali azioni aggiuntive prima che l'animazione venga avviata per il gruppo specificato.

## <a name="canimationcontrolleronhasprioritycancel"></a><a name="onhasprioritycancel"></a> CAnimationController:: OnHasPriorityCancel

Chiamata eseguita dal framework per risolvere i conflitti di pianificazione.

```
virtual BOOL OnHasPriorityCancel(
    CAnimationGroup* pGroupScheduled,
    CAnimationGroup* pGroupNew,
    UI_ANIMATION_PRIORITY_EFFECT priorityEffect);
```

### <a name="parameters"></a>Parametri

*pGroupScheduled*<br/>
Il gruppo cui appartiene lo storyboard attualmente pianificato.

*pGroupNew*<br/>
Il gruppo cui appartiene il nuovo storyboard la cui pianificazione è in conflitto con lo storyboard pianificato di proprietà di pGroupScheduled.

*priorityEffect*<br/>
Potenziale effetto su pGroupNew se pGroupScheduled dispone di una priorità più alta.

### <a name="return-value"></a>Valore restituito

Deve restituire TRUE se lo storyboard di proprietà di pGroupNew è prioritario. Deve restituire FALSE se lo storyboard di proprietà di pGroupScheduled è prioritario.

### <a name="remarks"></a>Commenti

Questo metodo viene chiamato se si abilitano eventi di confronto della priorità usando CAnimationController:: EnablePriorityComparisonHandler e si specifica UI_ANIMATION_PHT_CANCEL. Può essere sottoposto a override in una classe derivata per eseguire azioni specifiche dell'applicazione. Per ulteriori informazioni sulla [gestione dei conflitti](/windows/win32/api/uianimation/nf-uianimation-iuianimationprioritycomparison-haspriority), vedere la documentazione dell'API Windows Animation.

## <a name="canimationcontrolleronhasprioritycompress"></a><a name="onhasprioritycompress"></a> CAnimationController:: OnHasPriorityCompress

Chiamata eseguita dal framework per risolvere i conflitti di pianificazione.

```
virtual BOOL OnHasPriorityCompress(
    CAnimationGroup* pGroupScheduled,
    CAnimationGroup* pGroupNew,
    UI_ANIMATION_PRIORITY_EFFECT priorityEffect);
```

### <a name="parameters"></a>Parametri

*pGroupScheduled*<br/>
Il gruppo cui appartiene lo storyboard attualmente pianificato.

*pGroupNew*<br/>
Il gruppo cui appartiene il nuovo storyboard la cui pianificazione è in conflitto con lo storyboard pianificato di proprietà di pGroupScheduled.

*priorityEffect*<br/>
Potenziale effetto su pGroupNew se pGroupScheduled dispone di una priorità più alta.

### <a name="return-value"></a>Valore restituito

Deve restituire TRUE se lo storyboard di proprietà di pGroupNew è prioritario. Deve restituire FALSE se lo storyboard di proprietà di pGroupScheduled è prioritario.

### <a name="remarks"></a>Commenti

Questo metodo viene chiamato se si abilitano eventi di confronto della priorità usando CAnimationController:: EnablePriorityComparisonHandler e si specifica UI_ANIMATION_PHT_COMPRESS. Può essere sottoposto a override in una classe derivata per eseguire azioni specifiche dell'applicazione. Per ulteriori informazioni sulla [gestione dei conflitti](/windows/win32/api/uianimation/nf-uianimation-iuianimationprioritycomparison-haspriority), vedere la documentazione dell'API Windows Animation.

## <a name="canimationcontrolleronhaspriorityconclude"></a><a name="onhaspriorityconclude"></a> CAnimationController:: OnHasPriorityConclude

Chiamata eseguita dal framework per risolvere i conflitti di pianificazione.

```
virtual BOOL OnHasPriorityConclude(
    CAnimationGroup* pGroupScheduled,
    CAnimationGroup* pGroupNew,
    UI_ANIMATION_PRIORITY_EFFECT priorityEffect);
```

### <a name="parameters"></a>Parametri

*pGroupScheduled*<br/>
Il gruppo cui appartiene lo storyboard attualmente pianificato.

*pGroupNew*<br/>
Il gruppo cui appartiene il nuovo storyboard la cui pianificazione è in conflitto con lo storyboard pianificato di proprietà di pGroupScheduled.

*priorityEffect*<br/>
Potenziale effetto su pGroupNew se pGroupScheduled dispone di una priorità più alta.

### <a name="return-value"></a>Valore restituito

Deve restituire TRUE se lo storyboard di proprietà di pGroupNew è prioritario. Deve restituire FALSE se lo storyboard di proprietà di pGroupScheduled è prioritario.

### <a name="remarks"></a>Commenti

Questo metodo viene chiamato se si abilitano eventi di confronto della priorità usando CAnimationController:: EnablePriorityComparisonHandler e si specifica UI_ANIMATION_PHT_CONCLUDE. Può essere sottoposto a override in una classe derivata per eseguire azioni specifiche dell'applicazione. Per ulteriori informazioni sulla [gestione dei conflitti](/windows/win32/api/uianimation/nf-uianimation-iuianimationprioritycomparison-haspriority), vedere la documentazione dell'API Windows Animation.

## <a name="canimationcontrolleronhasprioritytrim"></a><a name="onhasprioritytrim"></a> CAnimationController:: OnHasPriorityTrim

Chiamata eseguita dal framework per risolvere i conflitti di pianificazione.

```
virtual BOOL OnHasPriorityTrim(
    CAnimationGroup* pGroupScheduled,
    CAnimationGroup* pGroupNew,
    UI_ANIMATION_PRIORITY_EFFECT priorityEffect);
```

### <a name="parameters"></a>Parametri

*pGroupScheduled*<br/>
Il gruppo cui appartiene lo storyboard attualmente pianificato.

*pGroupNew*<br/>
Il gruppo cui appartiene il nuovo storyboard la cui pianificazione è in conflitto con lo storyboard pianificato di proprietà di pGroupScheduled.

*priorityEffect*<br/>
Potenziale effetto su pGroupNew se pGroupScheduled dispone di una priorità più alta.

### <a name="return-value"></a>Valore restituito

Deve restituire TRUE se lo storyboard di proprietà di pGroupNew è prioritario. Deve restituire FALSE se lo storyboard di proprietà di pGroupScheduled è prioritario.

### <a name="remarks"></a>Commenti

Questo metodo viene chiamato se si abilitano eventi di confronto della priorità usando CAnimationController:: EnablePriorityComparisonHandler e si specifica UI_ANIMATION_PHT_TRIM. Può essere sottoposto a override in una classe derivata per eseguire azioni specifiche dell'applicazione. Per ulteriori informazioni sulla [gestione dei conflitti](/windows/win32/api/uianimation/nf-uianimation-iuianimationprioritycomparison-haspriority), vedere la documentazione dell'API Windows Animation.

## <a name="canimationcontrolleronstoryboardstatuschanged"></a><a name="onstoryboardstatuschanged"></a> CAnimationController:: OnStoryboardStatusChanged

Chiamata eseguita dal framework quando lo stato dello storyboard è stato modificato.

```
virtual void OnStoryboardStatusChanged(
    CAnimationGroup* pGroup,
    UI_ANIMATION_STORYBOARD_STATUS newStatus,
    UI_ANIMATION_STORYBOARD_STATUS previousStatus);
```

### <a name="parameters"></a>Parametri

*pGroup*<br/>
Puntatore a un gruppo di animazioni proprietario dello storyboard il cui stato è stato modificato.

*newStatus*<br/>
Specifica il nuovo stato.

*previousStatus*<br/>
Specifica lo stato precedente.

### <a name="remarks"></a>Commenti

Questo metodo viene chiamato se si abilitano eventi Storyboard usando CAnimationController:: EnableStoryboardEventHandler. Può essere sottoposto a override in una classe derivata per eseguire azioni specifiche dell'applicazione.

## <a name="canimationcontrolleronstoryboardupdated"></a><a name="onstoryboardupdated"></a> CAnimationController:: OnStoryboardUpdated

Chiamata eseguita dal framework quando lo storyboard è stato aggiornato.

```
virtual void OnStoryboardUpdated(CAnimationGroup* pGroup);
```

### <a name="parameters"></a>Parametri

*pGroup*<br/>
Puntatore a un gruppo proprietario dello storyboard.

### <a name="remarks"></a>Commenti

Questo metodo viene chiamato se si abilitano eventi Storyboard usando CAnimationController:: EnableStoryboardEventHandler. Può essere sottoposto a override in una classe derivata per eseguire azioni specifiche dell'applicazione.

## <a name="canimationcontrollerremoveallanimationgroups"></a><a name="removeallanimationgroups"></a> CAnimationController:: RemoveAllAnimationGroups

Rimuove tutti i gruppi di animazione dal controller di animazione.

```cpp
void RemoveAllAnimationGroups();
```

### <a name="remarks"></a>Commenti

Tutti i gruppi verranno eliminati e il relativo puntatore, se archiviato a livello di applicazione, deve essere invalidato. Se CAnimationGroup:: m_bAutodestroyAnimationObjects per un gruppo eliminato è TRUE, verranno eliminati tutti gli oggetti di animazione che appartengono a tale gruppo; in caso contrario, i relativi riferimenti al controller di animazione padre verranno impostati su NULL e potranno essere aggiunti a un altro controller.

## <a name="canimationcontrollerremoveanimationgroup"></a><a name="removeanimationgroup"></a> CAnimationController:: RemoveAnimationGroup

Rimuove un gruppo di animazioni con ID specificato dal controller di animazione.

```cpp
void RemoveAnimationGroup(UINT32 nGroupID);
```

### <a name="parameters"></a>Parametri

*nGroupID*<br/>
Specifica l'ID del gruppo di animazione.

### <a name="remarks"></a>Commenti

Questo metodo rimuove un gruppo di animazioni dall'elenco interno di gruppi e lo elimina, pertanto se è stato archiviato un puntatore a tale gruppo di animazione, è necessario invalidarlo. Se CAnimationGroup:: m_bAutodestroyAnimationObjects è TRUE, tutti gli oggetti di animazione che appartengono a tale gruppo verranno eliminati. in caso contrario, i relativi riferimenti al controller di animazione padre verranno impostati su NULL e potranno essere aggiunti a un altro controller.

## <a name="canimationcontrollerremoveanimationobject"></a><a name="removeanimationobject"></a> CAnimationController:: RemoveAnimationObject

Rimuovere un oggetto animazione dal controller di animazione.

```cpp
void RemoveAnimationObject(
    CAnimationBaseObject* pObject,
    BOOL bNoDelete = FALSE);
```

### <a name="parameters"></a>Parametri

*pObject*<br/>
Puntatore a un oggetto di animazione.

*bNoDelete*<br/>
Se questo parametro è TRUE, l'oggetto non verrà eliminato al momento della rimozione.

### <a name="remarks"></a>Commenti

Rimuove un oggetto animazione dal controller di animazione e dal gruppo di animazione. Chiamare questa funzione se un particolare oggetto non deve essere più animato o se è necessario spostare l'oggetto in un altro controller di animazione. Nell'ultimo caso, bNoDelete deve essere TRUE.

## <a name="canimationcontrollerremovetransitions"></a><a name="removetransitions"></a> CAnimationController:: RemoveTransitions

Rimuove le transizioni dagli oggetti di animazione che appartengono al gruppo specificato.

```cpp
void RemoveTransitions(UINT32 nGroupID);
```

### <a name="parameters"></a>Parametri

*nGroupID*<br/>
Specifica l'ID gruppo.

### <a name="remarks"></a>Commenti

Il gruppo esegue il ciclo sugli oggetti di animazione e chiama ClearTransitions (FALSE) per ogni oggetto di animazione. Questo metodo viene chiamato dal Framework dopo che è stata pianificata l'animazione.

## <a name="canimationcontrollerschedulegroup"></a><a name="schedulegroup"></a> CAnimationController:: ScheduleGroup

Pianifica un'animazione.

```
BOOL ScheduleGroup(
    UINT32 nGroupID,
    UI_ANIMATION_SECONDS time = 0.0);
```

### <a name="parameters"></a>Parametri

*nGroupID*<br/>
Specifica l'ID del gruppo di animazioni da pianificare.

*time*<br/>
Specifica il tempo di pianificazione.

### <a name="return-value"></a>Valore restituito

TRUE se l'animazione è stata pianificata correttamente. FALSE se lo storyboard non è stato creato o si verifica un altro errore.

### <a name="remarks"></a>Commenti

È necessario chiamare AnimateGroup con il parametro bScheduleNow impostato su FALSE Prior ScheduleGroup. È possibile specificare il tempo di animazione desiderato ottenuto da IUIAnimationTimer:: GetTime. Se il parametro time è 0,0, l'animazione viene pianificata per l'ora corrente.

## <a name="canimationcontrollersetrelatedwnd"></a><a name="setrelatedwnd"></a> CAnimationController:: SetRelatedWnd

Stabilisce una relazione tra il controller di animazione e una finestra.

```cpp
void SetRelatedWnd(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
Puntatore all'oggetto finestra da impostare.

### <a name="remarks"></a>Commenti

Se è impostato un oggetto CWnd correlato, il controller di animazione può aggiornarlo automaticamente (inviare WM_PAINT messaggio) quando lo stato di Animation Manager è stato modificato o si è verificato un evento di post-aggiornamento del timer.

## <a name="canimationcontrollerupdateanimationmanager"></a><a name="updateanimationmanager"></a> CAnimationController:: UpdateAnimationManager

Indica al gestore delle animazioni di aggiornare i valori di tutte le variabili di animazione.

```
virtual void UpdateAnimationManager();
```

### <a name="remarks"></a>Commenti

La chiamata di questo metodo fa avanzare il gestore delle animazioni all'ora corrente, modificando gli Stati degli storyboard in base alle esigenze e aggiornando eventuali variabili di animazione ai valori interpolati appropriati. Internamente questo metodo chiama IUIAnimationTimer:: getTime (timeNow) e IUIAnimationManager:: Update (timeNow). Eseguire l'override di questo metodo in una classe derivata per personalizzare questo comportamento.

## <a name="see-also"></a>Vedi anche

[Classi](../../mfc/reference/mfc-classes.md)
