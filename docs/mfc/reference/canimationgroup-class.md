---
title: Classe CAnimationGroup | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CAnimationGroup
- AFXANIMATIONCONTROLLER/CAnimationGroup
- AFXANIMATIONCONTROLLER/CAnimationGroup::CAnimationGroup
- AFXANIMATIONCONTROLLER/CAnimationGroup::Animate
- AFXANIMATIONCONTROLLER/CAnimationGroup::ApplyTransitions
- AFXANIMATIONCONTROLLER/CAnimationGroup::FindAnimationObject
- AFXANIMATIONCONTROLLER/CAnimationGroup::GetGroupID
- AFXANIMATIONCONTROLLER/CAnimationGroup::RemoveKeyframes
- AFXANIMATIONCONTROLLER/CAnimationGroup::RemoveTransitions
- AFXANIMATIONCONTROLLER/CAnimationGroup::Schedule
- AFXANIMATIONCONTROLLER/CAnimationGroup::SetAutodestroyTransitions
- AFXANIMATIONCONTROLLER/CAnimationGroup::AddKeyframes
- AFXANIMATIONCONTROLLER/CAnimationGroup::AddTransitions
- AFXANIMATIONCONTROLLER/CAnimationGroup::CreateTransitions
- AFXANIMATIONCONTROLLER/CAnimationGroup::m_bAutoclearTransitions
- AFXANIMATIONCONTROLLER/CAnimationGroup::m_bAutodestroyAnimationObjects
- AFXANIMATIONCONTROLLER/CAnimationGroup::m_bAutodestroyKeyframes
- AFXANIMATIONCONTROLLER/CAnimationGroup::m_lstAnimationObjects
- AFXANIMATIONCONTROLLER/CAnimationGroup::m_lstKeyFrames
- AFXANIMATIONCONTROLLER/CAnimationGroup::m_pStoryboard
- AFXANIMATIONCONTROLLER/CAnimationGroup::m_nGroupID
- AFXANIMATIONCONTROLLER/CAnimationGroup::m_pParentController
dev_langs:
- C++
helpviewer_keywords:
- CAnimationGroup [MFC], CAnimationGroup
- CAnimationGroup [MFC], Animate
- CAnimationGroup [MFC], ApplyTransitions
- CAnimationGroup [MFC], FindAnimationObject
- CAnimationGroup [MFC], GetGroupID
- CAnimationGroup [MFC], RemoveKeyframes
- CAnimationGroup [MFC], RemoveTransitions
- CAnimationGroup [MFC], Schedule
- CAnimationGroup [MFC], SetAutodestroyTransitions
- CAnimationGroup [MFC], AddKeyframes
- CAnimationGroup [MFC], AddTransitions
- CAnimationGroup [MFC], CreateTransitions
- CAnimationGroup [MFC], m_bAutoclearTransitions
- CAnimationGroup [MFC], m_bAutodestroyAnimationObjects
- CAnimationGroup [MFC], m_bAutodestroyKeyframes
- CAnimationGroup [MFC], m_lstAnimationObjects
- CAnimationGroup [MFC], m_lstKeyFrames
- CAnimationGroup [MFC], m_pStoryboard
- CAnimationGroup [MFC], m_nGroupID
- CAnimationGroup [MFC], m_pParentController
ms.assetid: 8bc18ceb-33a2-41d0-9731-71811adacab7
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 2d047940ac1ef3103168aa40b53c726ce0767b52
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="canimationgroup-class"></a>Classe CAnimationGroup
Implementa un gruppo di animazione, che combina uno storyboard per animazioni, gli oggetti di animazione e transizioni per definire un'animazione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CAnimationGroup;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationGroup::CAnimationGroup](#canimationgroup)|Costruisce un gruppo di animazione.|  
|[CAnimationGroup:: ~ CAnimationGroup](#canimationgroup__~canimationgroup)|Distruttore. Chiamato quando viene eliminato un gruppo di animazione.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationGroup:: animate](#animate)|Aggiunge un'animazione a un gruppo.|  
|[CAnimationGroup::ApplyTransitions](#applytransitions)|Applica le transizioni per gli oggetti di animazione.|  
|[CAnimationGroup::FindAnimationObject](#findanimationobject)|Trova un oggetto di animazione che contiene la variabile di animazione specificato.|  
|[CAnimationGroup::GetGroupID](#getgroupid)|Restituisce l'ID del gruppo.|  
|[CAnimationGroup::RemoveKeyframes](#removekeyframes)|Rimuove ed elimina facoltativamente tutti i fotogrammi chiave che appartengono a un gruppo di animazione.|  
|[CAnimationGroup::RemoveTransitions](#removetransitions)|Rimuove le transizioni tra gli oggetti di animazione che appartengono a un gruppo di animazione.|  
|[CAnimationGroup::Schedule](#schedule)|Pianifica un'animazione all'ora specificata.|  
|[CAnimationGroup::SetAutodestroyTransitions](#setautodestroytransitions)|Indirizza transizioni di eliminazione di tutti gli oggetti di animazione che appartengono al gruppo automaticamente.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationGroup::AddKeyframes](#addkeyframes)|Classe helper che aggiunge i fotogrammi chiave a uno storyboard.|  
|[CAnimationGroup::AddTransitions](#addtransitions)|Classe helper che aggiunge le transizioni di uno storyboard.|  
|[CAnimationGroup::CreateTransitions](#createtransitions)|Classe helper che crea oggetti di transizione COM.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationGroup::m_bAutoclearTransitions](#m_bautocleartransitions)|Specifica la modalità cancellare le transizioni tra gli oggetti di animazione che appartengono al gruppo. Se questo membro è TRUE, le transizioni vengono rimosse automaticamente quando è stata pianificata un'animazione. In caso contrario, è necessario rimuovere manualmente le transizioni.|  
|[CAnimationGroup::](#m_bautodestroyanimationobjects)|Specifica come eliminare gli oggetti di animazione. Se questo parametro è TRUE, gli oggetti di animazione verranno eliminati automaticamente quando viene eliminato il gruppo. In caso contrario gli oggetti di animazione devono essere eliminati manualmente. Il valore predefinito è FALSE. Impostare questo valore su TRUE solo se tutti gli oggetti di animazione che appartengono al gruppo vengono allocati in modo dinamico mediante l'operatore new.|  
|[CAnimationGroup::m_bAutodestroyKeyframes](#m_bautodestroykeyframes)|Specifica come eliminare i fotogrammi chiave. Se questo valore è TRUE, tutti i fotogrammi chiave vengono rimossi e distrutti; in caso contrario vengono rimossi solo dall'elenco. Il valore predefinito è TRUE.|  
|[CAnimationGroup::m_lstAnimationObjects](#m_lstanimationobjects)|Contiene un elenco di oggetti di animazione.|  
|[CAnimationGroup::m_lstKeyFrames](#m_lstkeyframes)|Contiene un elenco di fotogrammi chiave.|  
|[CAnimationGroup::m_pStoryboard](#m_pstoryboard)|Punta a storyboard per animazioni. Questo puntatore è valido solo dopo la chiamata su Animate.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|nome|Descrizione|  
|----------|-----------------|  
|[CAnimationGroup::m_nGroupID](#m_ngroupid)|Identificatore univoco del gruppo di animazione.|  
|[CAnimationGroup::m_pParentController](#m_pparentcontroller)|Puntatore al controller di animazione che appartiene a questo gruppo.|  
  
## <a name="remarks"></a>Note  
 I gruppi di animazione vengono creati automaticamente dal controller di animazione (CAnimationController) quando si aggiungono oggetti di animazione usando CAnimationController:: AddAnimationObject. Un gruppo di animazione è identificato da GroupID, che viene in genere utilizzato come parametro per modificare i gruppi di animazione. GroupID viene preso dal primo oggetto di animazione viene aggiunto a un nuovo gruppo di animazione. Dopo aver chiamato CAnimationController:: AnimateGroup e accessibili tramite il membro pubblico m_pStoryboard, viene creato uno storyboard per animazioni incapsulato.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CAnimationGroup`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxanimationcontroller.h  
  
##  <a name="_dtorcanimationgroup"></a>CAnimationGroup:: ~ CAnimationGroup  
 Distruttore. Chiamato quando viene eliminato un gruppo di animazione.  
  
```  
~CAnimationGroup();
```  
  
##  <a name="addkeyframes"></a>CAnimationGroup::AddKeyframes  
 Classe helper che aggiunge i fotogrammi chiave a uno storyboard.  
  
```  
void AddKeyframes(IUIAnimationStoryboard* pStoryboard, BOOL bAddDeep);
```  
  
### <a name="parameters"></a>Parametri  
 `pStoryboard`  
 Un puntatore a un oggetto COM dello storyboard.  
  
 `bAddDeep`  
 Specifica se questo metodo aggiunge ai fotogrammi chiave storyboard che dipendono da altri fotogrammi chiave.  
  
##  <a name="addtransitions"></a>CAnimationGroup::AddTransitions  
 Classe helper che aggiunge le transizioni di uno storyboard.  
  
```  
void AddTransitions(
    IUIAnimationStoryboard* pStoryboard,  
    BOOL bDependOnKeyframes);
```  
  
### <a name="parameters"></a>Parametri  
 `pStoryboard`  
 Un puntatore a un oggetto COM dello storyboard.  
  
 `bDependOnKeyframes`  
  
##  <a name="animate"></a>CAnimationGroup:: animate  
 Aggiunge un'animazione a un gruppo.  
  
```  
BOOL Animate(
    IUIAnimationManager* pManager,  
    IUIAnimationTimer* pTimer,  
    BOOL bScheduleNow);
```  
  
### <a name="parameters"></a>Parametri  
 `pManager`  
 `pTimer`  
 `bScheduleNow`  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il metodo ha esito positivo. in caso contrario FALSE.  
  
### <a name="remarks"></a>Note  
 Questo metodo consente di creare uno storyboard interno, crea e applica le transizioni e pianifica un'animazione se bScheduleNow è TRUE. Se bScheduleNow è FALSE, è necessario chiamare pianificazione per avviare l'animazione all'ora specificata.  
  
##  <a name="applytransitions"></a>CAnimationGroup::ApplyTransitions  
 Applica le transizioni per gli oggetti di animazione.  
  
```  
void ApplyTransitions();
```  
  
### <a name="remarks"></a>Note  
 Questo metodo effettua un'ASSERZIONE in modalità di debug se storyboard non è stato creato. Crea tutte le transizioni prima, quindi aggiunge "statici" fotogrammi chiave (fotogrammi chiave che dipendono dagli offset), aggiunge transizioni che non dipendono da fotogrammi chiave, aggiunge i fotogrammi chiave a seconda delle transizioni e gli altri fotogrammi chiave e infine aggiunge transizioni che dipendono da fotogrammi chiave .  
  
##  <a name="canimationgroup"></a>CAnimationGroup::CAnimationGroup  
 Costruisce un gruppo di animazione.  
  
```  
CAnimationGroup(CAnimationController* pParentController, UINT32 nGroupID);
```  
  
### <a name="parameters"></a>Parametri  
 `pParentController`  
 Puntatore al controller di animazione che crea un gruppo.  
  
 `nGroupID`  
 Specifica l'ID del gruppo.  
  
##  <a name="createtransitions"></a>CAnimationGroup::CreateTransitions  
 Classe helper che crea oggetti di transizione COM.  
  
```  
BOOL CreateTransitions();
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE è il metodo ha esito positivo, FALSE in caso contrario.  
  
##  <a name="findanimationobject"></a>CAnimationGroup::FindAnimationObject  
 Trova un oggetto di animazione che contiene la variabile di animazione specificato.  
  
```  
CAnimationBaseObject* FindAnimationObject(IUIAnimationVariable* pVariable);
```  
  
### <a name="parameters"></a>Parametri  
 `pVariable`  
 Puntatore alla variabile di animazione.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore all'oggetto di animazione, o NULL se non trova l'oggetto di animazione.  
  
##  <a name="getgroupid"></a>CAnimationGroup::GetGroupID  
 Restituisce l'ID del gruppo.  
  
```  
UINT32 GetGroupID() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un identificatore del gruppo.  
  
##  <a name="m_bautocleartransitions"></a>CAnimationGroup::m_bAutoclearTransitions  
 Specifica la modalità cancellare le transizioni tra gli oggetti di animazione che appartengono al gruppo. Se questo membro è TRUE, le transizioni vengono rimosse automaticamente quando è stata pianificata un'animazione. In caso contrario, è necessario rimuovere manualmente le transizioni.  
  
```  
BOOL m_bAutoclearTransitions;  
```  
  
##  <a name="m_bautodestroyanimationobjects"></a>CAnimationGroup::  
 Specifica come eliminare gli oggetti di animazione. Se questo parametro è TRUE, gli oggetti di animazione verranno eliminati automaticamente quando viene eliminato il gruppo. In caso contrario gli oggetti di animazione devono essere eliminati manualmente. Il valore predefinito è FALSE. Impostare questo valore su TRUE solo se tutti gli oggetti di animazione che appartengono al gruppo vengono allocati in modo dinamico mediante l'operatore new.  
  
```  
BOOL m_bAutodestroyAnimationObjects;  
```  
  
##  <a name="m_bautodestroykeyframes"></a>CAnimationGroup::m_bAutodestroyKeyframes  
 Specifica come eliminare i fotogrammi chiave. Se questo valore è TRUE, tutti i fotogrammi chiave vengono rimossi e distrutti; in caso contrario vengono rimossi solo dall'elenco. Il valore predefinito è TRUE.  
  
```  
BOOL m_bAutodestroyKeyframes;  
```  
  
##  <a name="m_lstanimationobjects"></a>CAnimationGroup::m_lstAnimationObjects  
 Contiene un elenco di oggetti di animazione.  
  
```  
CObList m_lstAnimationObjects;  
```  
  
##  <a name="m_lstkeyframes"></a>CAnimationGroup::m_lstKeyFrames  
 Contiene un elenco di fotogrammi chiave.  
  
```  
CObList m_lstKeyFrames;  
```  
  
##  <a name="m_ngroupid"></a>CAnimationGroup::m_nGroupID  
 Identificatore univoco del gruppo di animazione.  
  
```  
UINT32 m_nGroupID;  
```  
  
##  <a name="m_pparentcontroller"></a>CAnimationGroup::m_pParentController  
 Puntatore al controller di animazione che appartiene a questo gruppo.  
  
```  
CAnimationController* m_pParentController;  
```  
  
##  <a name="m_pstoryboard"></a>CAnimationGroup::m_pStoryboard  
 Punta a storyboard per animazioni. Questo puntatore è valido solo dopo la chiamata su Animate.  
  
```  
ATL::CComPtr<IUIAnimationStoryboard> m_pStoryboard;  
```  
  
##  <a name="removekeyframes"></a>CAnimationGroup::RemoveKeyframes  
 Rimuove ed elimina facoltativamente tutti i fotogrammi chiave che appartengono a un gruppo di animazione.  
  
```  
void RemoveKeyframes();
```  
  
### <a name="remarks"></a>Note  
 Se il membro m_bAutodestroyKeyframes è TRUE, i fotogrammi chiave vengono rimossi e quindi eliminato definitivamente, in caso contrario vengono rimossi solo dall'elenco interno dei fotogrammi chiave.  
  
##  <a name="removetransitions"></a>CAnimationGroup::RemoveTransitions  
 Rimuove le transizioni tra gli oggetti di animazione che appartengono a un gruppo di animazione.  
  
```  
void RemoveTransitions();
```  
  
### <a name="remarks"></a>Note  
 Se il flag m_bAutoclearTransitions è impostato su TRUE, questo metodo esegue un ciclo per tutti gli oggetti di animazione che appartengono al gruppo e chiama CAnimationObject::ClearTransitions(FALSE).  
  
##  <a name="schedule"></a>CAnimationGroup::Schedule  
 Pianifica un'animazione all'ora specificata.  
  
```  
BOOL Schedule(IUIAnimationTimer* pTimer, UI_ANIMATION_SECONDS time);
```  
  
### <a name="parameters"></a>Parametri  
 `pTimer`  
 Puntatore al timer di animazione.  
  
 `time`  
 Specifica l'ora a pianificare l'animazione.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il metodo ha esito positivo. FALSE se il metodo ha esito negativo o se l'animazione non è stata chiamata con bScheduleNow impostato su FALSE.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per pianificare un'animazione all'ora specificata. È necessario chiamare Animate con bScheduleNow impostato su FALSE prima.  
  
##  <a name="setautodestroytransitions"></a>CAnimationGroup::SetAutodestroyTransitions  
 Indirizza transizioni di eliminazione di tutti gli oggetti di animazione che appartengono al gruppo automaticamente.  
  
```  
void SetAutodestroyTransitions(BOOL bAutoDestroy = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `bAutoDestroy`  
 Specifica la modalità di transizioni di eliminazione.  
  
### <a name="remarks"></a>Note  
 Impostare questo valore su FALSE solo se vengono allocate le transizioni nello stack. Il valore predefinito è TRUE, pertanto si consiglia di allocare oggetti di transizione utilizzando l'operatore new.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)
