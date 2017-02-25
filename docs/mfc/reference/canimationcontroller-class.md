---
title: "Classe CAnimationController | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CAnimationController"
  - "afxanimationcontroller/CAnimationController"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAnimationController (classe)"
ms.assetid: ed294c98-695e-40a6-b940-33ef1d40aa6b
caps.latest.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 19
---
# Classe CAnimationController
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Implementa il controller di animazione che fornisce un'interfaccia centrale per la creazione e la gestione delle animazioni.  
  
## Sintassi  
  
```  
class CAnimationController : public CObject;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationController::CAnimationController](../Topic/CAnimationController::CAnimationController.md)|Costruisce un controller di animazione.|  
|[CAnimationController::~CAnimationController](../Topic/CAnimationController::~CAnimationController.md)|Il distruttore.  Chiamato quando è in corso l'eliminazione di un oggetto del controller di animazione.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationController::AddAnimationObject](../Topic/CAnimationController::AddAnimationObject.md)|Aggiunge un oggetto di animazione a un gruppo che appartiene al controller di animazione.|  
|[CAnimationController::AddKeyframeToGroup](../Topic/CAnimationController::AddKeyframeToGroup.md)|Aggiunge un fotogramma chiave a un gruppo.|  
|[CAnimationController::AnimateGroup](../Topic/CAnimationController::AnimateGroup.md)|Prepara un gruppo per l'esecuzione dell'animazione e la pianifica facoltativamente.|  
|[CAnimationController::CleanUpGroup](../Topic/CAnimationController::CleanUpGroup.md)|Di overload.  Chiamato dal framework per pulire il gruppo quando l'animazione è stata pianificata.|  
|[CAnimationController::CreateKeyframe](../Topic/CAnimationController::CreateKeyframe.md)|Di overload.  Crea un fotogramma chiave che dipende dalla transizione e l'aggiunge al gruppo specificato.|  
|[CAnimationController::EnableAnimationManagerEvent](../Topic/CAnimationController::EnableAnimationManagerEvent.md)|Imposta o rilascia un gestore da chiamare quando cambia lo stato di Gestione animazione.|  
|[CAnimationController::EnableAnimationTimerEventHandler](../Topic/CAnimationController::EnableAnimationTimerEventHandler.md)|Imposta o rilascia un gestore per la temporizzazione degli eventi e un gestore per la temporizzazione degli aggiornamenti.|  
|[CAnimationController::EnablePriorityComparisonHandler](../Topic/CAnimationController::EnablePriorityComparisonHandler.md)|Imposta o rilascia il gestore di confronto prioritario da chiamare per determinare se uno storyboard programmato può essere annullato, concluso, tagliato o compresso.|  
|[CAnimationController::EnableStoryboardEventHandler](../Topic/CAnimationController::EnableStoryboardEventHandler.md)|Imposta o rilascia un gestore per lo stato dello storyboard e gli eventi di aggiornamento.|  
|[CAnimationController::FindAnimationGroup](../Topic/CAnimationController::FindAnimationGroup.md)|Di overload.  Trova un gruppo di animazione dal relativo storyboard.|  
|[CAnimationController::FindAnimationObject](../Topic/CAnimationController::FindAnimationObject.md)|Trova un oggetto di animazione che contiene una variabile di animazione specificata.|  
|[CAnimationController::GetKeyframeStoryboardStart](../Topic/CAnimationController::GetKeyframeStoryboardStart.md)|Restituisce un fotogramma chiave che identifica l'inizio dello storyboard.|  
|[CAnimationController::GetUIAnimationManager](../Topic/CAnimationController::GetUIAnimationManager.md)|Fornisce l'accesso all'oggetto IUIAnimationManager incapsulato.|  
|[CAnimationController::GetUIAnimationTimer](../Topic/CAnimationController::GetUIAnimationTimer.md)|Fornisce l'accesso all'oggetto IUIAnimationTimer incapsulato.|  
|[CAnimationController::GetUITransitionFactory](../Topic/CAnimationController::GetUITransitionFactory.md)|Puntatore all'interfaccia IUIAnimationTransitionFactory o NULL, se la creazione della libreria di transizione non è riuscita.|  
|[CAnimationController::GetUITransitionLibrary](../Topic/CAnimationController::GetUITransitionLibrary.md)|Fornisce l'accesso all'oggetto IUIAnimationTransitionLibrary incapsulato.|  
|[CAnimationController::IsAnimationInProgress](../Topic/CAnimationController::IsAnimationInProgress.md)|Indica se almeno un gruppo sta riproducendo l'animazione.|  
|[CAnimationController::IsValid](../Topic/CAnimationController::IsValid.md)|Indica se il controller di animazione è valido.|  
|[CAnimationController::OnAnimationIntegerValueChanged](../Topic/CAnimationController::OnAnimationIntegerValueChanged.md)|Chiamato dal framework quando il valore intero della variabile di animazione è stato modificato.|  
|[CAnimationController::OnAnimationManagerStatusChanged](../Topic/CAnimationController::OnAnimationManagerStatusChanged.md)|Chiamato dal framework in risposta all'evento StatusChanged da Gestione animazione.|  
|[CAnimationController::OnAnimationTimerPostUpdate](../Topic/CAnimationController::OnAnimationTimerPostUpdate.md)|Chiamato dal framework al termine dell'aggiornamento di un'animazione.|  
|[CAnimationController::OnAnimationTimerPreUpdate](../Topic/CAnimationController::OnAnimationTimerPreUpdate.md)|Chiamato dal framework prima dell'inizio dell'aggiornamento di un'animazione.|  
|[CAnimationController::OnAnimationTimerRenderingTooSlow](../Topic/CAnimationController::OnAnimationTimerRenderingTooSlow.md)|Chiamato dal framework quando la frequenza di rendering dei fotogrammi per un'animazione scende sotto la frequenza dei fotogrammi minima desiderabile.|  
|[CAnimationController::OnAnimationValueChanged](../Topic/CAnimationController::OnAnimationValueChanged.md)|Chiamato dal framework quando il valore della variabile di animazione è stato modificato.|  
|[CAnimationController::OnBeforeAnimationStart](../Topic/CAnimationController::OnBeforeAnimationStart.md)|Chiamato dal framework subito prima della pianificazione dell'animazione.|  
|[CAnimationController::OnHasPriorityCancel](../Topic/CAnimationController::OnHasPriorityCancel.md)|Chiamato dal framework per risolvere conflitti della pianificazione.|  
|[CAnimationController::OnHasPriorityCompress](../Topic/CAnimationController::OnHasPriorityCompress.md)|Chiamato dal framework per risolvere conflitti della pianificazione.|  
|[CAnimationController::OnHasPriorityConclude](../Topic/CAnimationController::OnHasPriorityConclude.md)|Chiamato dal framework per risolvere conflitti della pianificazione.|  
|[CAnimationController::OnHasPriorityTrim](../Topic/CAnimationController::OnHasPriorityTrim.md)|Chiamato dal framework per risolvere conflitti della pianificazione.|  
|[CAnimationController::OnStoryboardStatusChanged](../Topic/CAnimationController::OnStoryboardStatusChanged.md)|Chiamato dal framework quando è stato modificato lo stato dello storyboard.|  
|[CAnimationController::OnStoryboardUpdated](../Topic/CAnimationController::OnStoryboardUpdated.md)|Chiamato dal framework quando è stato aggiornato lo storyboard.|  
|[CAnimationController::RemoveAllAnimationGroups](../Topic/CAnimationController::RemoveAllAnimationGroups.md)|Rimuove tutti i gruppi di animazione dal controller di animazione.|  
|[CAnimationController::RemoveAnimationGroup](../Topic/CAnimationController::RemoveAnimationGroup.md)|Rimuove un gruppo di animazione con l'ID specificato dal controller di animazione.|  
|[CAnimationController::RemoveAnimationObject](../Topic/CAnimationController::RemoveAnimationObject.md)|Rimuovere un oggetto di animazione dal controller di animazione.|  
|[CAnimationController::RemoveTransitions](../Topic/CAnimationController::RemoveTransitions.md)|Rimuove le transizioni dagli oggetti di animazione che appartengono al gruppo specificato.|  
|[CAnimationController::ScheduleGroup](../Topic/CAnimationController::ScheduleGroup.md)|Pianifica un'animazione.|  
|[CAnimationController::SetRelatedWnd](../Topic/CAnimationController::SetRelatedWnd.md)|Stabilisce una relazione tra il controller di animazione e una finestra.|  
|[CAnimationController::UpdateAnimationManager](../Topic/CAnimationController::UpdateAnimationManager.md)|Indica a Gestione animazione di aggiornare i valori di tutte le variabili di animazione.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationController::CleanUpGroup](../Topic/CAnimationController::CleanUpGroup.md)|Di overload.  Supporto che pulisce il gruppo.|  
|[CAnimationController::OnAfterSchedule](../Topic/CAnimationController::OnAfterSchedule.md)|Chiamato dal framework quando un'animazione per il gruppo specificato è stata appena pianificata.|  
  
### Membri di dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationController::g\_KeyframeStoryboardStart](../Topic/CAnimationController::g_KeyframeStoryboardStart.md)|Fotogramma chiave che rappresenta l'inizio dello storyboard.|  
|[CAnimationController::m\_bIsValid](../Topic/CAnimationController::m_bIsValid.md)|Specifica se un controller dell'animazione è valido o meno.  Questo membro viene impostato su FALSE se il sistema operativo corrente non supporta l'API di animazione di Windows.|  
|[CAnimationController::m\_lstAnimationGroups](../Topic/CAnimationController::m_lstAnimationGroups.md)|Elenco di gruppi di animazione che appartengono a questo controller di animazione.|  
|[CAnimationController::m\_pAnimationManager](../Topic/CAnimationController::m_pAnimationManager.md)|Archivia un puntatore a un oggetto di Gestione animazione COM.|  
|[CAnimationController::m\_pAnimationTimer](../Topic/CAnimationController::m_pAnimationTimer.md)|Archivia un puntatore a un oggetto di Gestione animazione COM.|  
|[CAnimationController::m\_pRelatedWnd](../Topic/CAnimationController::m_pRelatedWnd.md)|Un puntatore a un oggetto CWnd correlato che può essere ridisegnato automaticamente dopo che lo stato di Gestione animazione è stato modificato oppure dopo che si è verificato un evento di post\-aggiornamento.  Può essere NULL.|  
|[CAnimationController::m\_pTransitionFactory](../Topic/CAnimationController::m_pTransitionFactory.md)|Archivia un puntatore all'oggetto COM della factory di transizione.|  
|[CAnimationController::m\_pTransitionLibrary](../Topic/CAnimationController::m_pTransitionLibrary.md)|Archivia un puntatore all'oggetto COM della libreria di transizione.|  
  
## Note  
 La classe CAnimationController è la classe principale che gestisce le animazioni.  È possibile creare uno o più istanze del controller dell'animazione in un'applicazione e, facoltativamente, collegare un'istanza del controller dell'animazione a un oggetto CWnd utilizzando CAnimationController::SetRelatedWnd.  Questa connessione è necessaria per inviare automaticamente messaggi WM\_PAINT alla finestra correlata quando lo stato di Gestione animazione è stato modificato o il timer di animazione è stato aggiornato.  Se non viene abilitata questa relazione, è necessario ridisegnare una finestra che visualizzi manualmente un'animazione.  Per questo scopo è possibile derivare una classe da CAnimationController ed eseguire l'override di OnAnimationManagerStatusChanged e\/o OnAnimationTimerPostUpdate e invalidare uno o più finestre quando necessario.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CAnimationController](../../mfc/reference/canimationcontroller-class.md)  
  
## Requisiti  
 **Intestazione:** afxanimationcontroller.h  
  
## Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)