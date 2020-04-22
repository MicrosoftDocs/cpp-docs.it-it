---
title: Classe CAnimationGroup
ms.date: 03/27/2019
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
ms.openlocfilehash: 14ac32524436ff46449171ad90599e60f63dff2a
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81750160"
---
# <a name="canimationgroup-class"></a>Classe CAnimationGroup

Implementa un gruppo di animazioni, che combina uno storyboard di animazione, oggetti di animazione e transizioni per definire un'animazione.

## <a name="syntax"></a>Sintassi

```
class CAnimationGroup;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Gruppo CAnimationGroup::CAnimationGroup](#canimationgroup)|Costruisce un gruppo di animazione.|
|[CAnimationGroup:: : CAnimationGroup](#_dtorcanimationgroup)|Distruttore. Chiamato quando un gruppo di animazione viene eliminato definitivamente.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAnimationGroup::Animate](#animate)|Aggiunge un'animazione a un gruppo.|
|[Gruppo CAnimationGroup::ApplyTransitions](#applytransitions)|Applica le transizioni agli oggetti di animazione.|
|[Gruppo Di Animazione::FindAnimationObject](#findanimationobject)|Trova un oggetto di animazione che contiene la variabile di animazione specificata.|
|[Gruppo CAnimationGroup::GetGroupIDCAnimationGroup::GetGroupID](#getgroupid)|Restituisce GroupID.|
|[Fotogrammi CAnimationGroup::RemoveKey](#removekeyframes)|Rimuove e facoltativamente elimina tutti i fotogrammi chiave che appartengono a un gruppo di animazioni.|
|[Gruppo CAnimationGroup::RemoveTransitions](#removetransitions)|Rimuove le transizioni dagli oggetti di animazione che appartengono a un gruppo di animazioni.|
|[CAnimationGroup::Pianificazione](#schedule)|Pianifica un'animazione all'ora specificata.|
|[Gruppo CAnimationGroup::SetAutodestroyTransitions](#setautodestroytransitions)|Indirizza tutti gli oggetti di animazione che appartengono al gruppo di eliminare automaticamente le transizioni.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[Fotogrammi CAnimationGroup::AddKey](#addkeyframes)|Helper che aggiunge fotogrammi chiave a uno storyboard.|
|[Gruppo Di Animazione::AddTransitions](#addtransitions)|Helper che aggiunge transizioni a uno storyboard.|
|[Gruppo Di Transizione::CreateTransitions](#createtransitions)|Helper che crea oggetti di transizione COM.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Gruppo CAnimationGroup::m_bAutoclearTransitions](#m_bautocleartransitions)|Specifica come cancellare le transizioni dagli oggetti di animazione che appartengono al gruppo. Se questo membro è TRUE, le transizioni vengono rimosse automaticamente quando è stata pianificata un'animazione. In caso contrario, è necessario rimuovere manualmente le transizioni.|
|[Gruppo CAnimationGroup::m_bAutodestroyAnimationObjects](#m_bautodestroyanimationobjects)|Specifica come eliminare gli oggetti di animazione. Se questo parametro è TRUE, gli oggetti di animazione verranno eliminati automaticamente quando il gruppo viene eliminato. In caso contrario, gli oggetti di animazione devono essere distrutti manualmente. Il valore predefinito è FALSE. Impostare questo valore su TRUE solo se tutti gli oggetti di animazione che appartengono al gruppo vengono allocati dinamicamente con operator new.|
|[CAnimationGroup::m_bAutodestroyKeyframes](#m_bautodestroykeyframes)|Specifica come distruggere i fotogrammi chiave. Se questo valore è TRUE, tutti i fotogrammi chiave vengono rimossi ed eliminati; in caso contrario vengono rimossi solo dall'elenco. Il valore predefinito è TRUE.|
|[Gruppo CAnimationGroup::m_lstAnimationObjects](#m_lstanimationobjects)|Contiene un elenco di oggetti di animazione.|
|[Gruppo CAnimationGroup::m_lstKeyFrames](#m_lstkeyframes)|Contiene un elenco di fotogrammi chiave.|
|[Gruppo CAnimationGroup::m_pStoryboard](#m_pstoryboard)|Punta allo storyboard di animazione. Questo puntatore è valido solo dopo la chiamata su Animate.|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Descrizione|
|----------|-----------------|
|[CAnimationGroup::m_nGroupID](#m_ngroupid)|Identificatore univoco del gruppo di animazioni.|
|[Gruppo CAnimationGroup::m_pParentController](#m_pparentcontroller)|Puntatore a controller di animazione a cui appartiene questo gruppo.|

## <a name="remarks"></a>Osservazioni

Animation groups are created automatically by animation controller (CAnimationController) when you add animation objects using CAnimationController::AddAnimationObject. Un gruppo di animazione è identificato da GroupID, che in genere viene utilizzato come parametro per modificare i gruppi di animazione. Il GroupID viene derivato dal primo oggetto di animazione aggiunto a un nuovo gruppo di animazione. Uno storyboard di animazione incapsulato viene creato dopo aver chiamato CAnimationController::AnimateGroup ed è possibile accedervi tramite membro pubblico m_pStoryboard.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CAnimationGroup`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

## <a name="canimationgroupcanimationgroup"></a><a name="_dtorcanimationgroup"></a>CAnimationGroup:: : CAnimationGroup

Distruttore. Chiamato quando un gruppo di animazione viene eliminato definitivamente.

```
~CAnimationGroup();
```

## <a name="canimationgroupaddkeyframes"></a><a name="addkeyframes"></a>Fotogrammi CAnimationGroup::AddKey

Helper che aggiunge fotogrammi chiave a uno storyboard.

```cpp
void AddKeyframes(IUIAnimationStoryboard* pStoryboard, BOOL bAddDeep);
```

### <a name="parameters"></a>Parametri

*pStoryboard*<br/>
Puntatore a un oggetto COM storyboard.

*bAddDeep*<br/>
Specifica se questo metodo deve essere aggiunto ai fotogrammi chiave dello storyboard che dipendono da altri fotogrammi chiave.

## <a name="canimationgroupaddtransitions"></a><a name="addtransitions"></a>Gruppo Di Animazione::AddTransitions

Helper che aggiunge transizioni a uno storyboard.

```cpp
void AddTransitions(
    IUIAnimationStoryboard* pStoryboard,
    BOOL bDependOnKeyframes);
```

### <a name="parameters"></a>Parametri

*pStoryboard*<br/>
Puntatore a un oggetto COM storyboard.

*bUncionKeyframes*

## <a name="canimationgroupanimate"></a><a name="animate"></a>CAnimationGroup::Animate

Aggiunge un'animazione a un gruppo.

```
BOOL Animate(
    IUIAnimationManager* pManager,
    IUIAnimationTimer* pTimer,
    BOOL bScheduleNow);
```

### <a name="parameters"></a>Parametri

*pManager*<br/>
*pTimer*
*bScheduleNow*

### <a name="return-value"></a>Valore restituito

TRUESe il metodo ha esito positivo. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questo metodo crea uno storyboard interno, crea e applica transizioni e pianifica un'animazione se bScheduleNow è TRUE. Se bScheduleNow è FALSE, è necessario chiamare Schedule per avviare l'animazione all'ora specificata.

## <a name="canimationgroupapplytransitions"></a><a name="applytransitions"></a>Gruppo CAnimationGroup::ApplyTransitions

Applica le transizioni agli oggetti di animazione.

```cpp
void ApplyTransitions();
```

### <a name="remarks"></a>Osservazioni

Questo metodo ASSERTS in modalità di debug se non è stato creato lo storyboard. Crea prima tutte le transizioni, quindi aggiunge fotogrammi chiave "statici" (fotogrammi chiave che dipendono dagli offset), aggiunge transizioni che non dipendono da fotogrammi chiave, aggiunge fotogrammi chiave a seconda delle transizioni e di altri fotogrammi chiave e infine aggiunge transizioni che dipendono dai fotogrammi chiave.

## <a name="canimationgroupcanimationgroup"></a><a name="canimationgroup"></a>Gruppo CAnimationGroup::CAnimationGroup

Costruisce un gruppo di animazione.

```
CAnimationGroup(CAnimationController* pParentController, UINT32 nGroupID);
```

### <a name="parameters"></a>Parametri

*pParentController (pParentController)*<br/>
Puntatore a controller di animazione che crea un gruppo.

*nId gruppo*<br/>
Specifica GroupID.

## <a name="canimationgroupcreatetransitions"></a><a name="createtransitions"></a>Gruppo Di Transizione::CreateTransitions

Helper che crea oggetti di transizione COM.

```
BOOL CreateTransitions();
```

### <a name="return-value"></a>Valore restituito

TRUE è il metodo ha esito positivo, in caso contrario FALSE.

## <a name="canimationgroupfindanimationobject"></a><a name="findanimationobject"></a>Gruppo Di Animazione::FindAnimationObject

Trova un oggetto di animazione che contiene la variabile di animazione specificata.

```
CAnimationBaseObject* FindAnimationObject(IUIAnimationVariable* pVariable);
```

### <a name="parameters"></a>Parametri

*pVariabile*<br/>
Puntatore alla variabile di animazione.

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto di animazione o NULL se l'oggetto di animazione non viene trovato.

## <a name="canimationgroupgetgroupid"></a><a name="getgroupid"></a>Gruppo CAnimationGroup::GetGroupIDCAnimationGroup::GetGroupID

Restituisce GroupID.

```
UINT32 GetGroupID() const;
```

### <a name="return-value"></a>Valore restituito

Identificatore di gruppo.

## <a name="canimationgroupm_bautocleartransitions"></a><a name="m_bautocleartransitions"></a>Gruppo CAnimationGroup::m_bAutoclearTransitions

Specifica come cancellare le transizioni dagli oggetti di animazione che appartengono al gruppo. Se questo membro è TRUE, le transizioni vengono rimosse automaticamente quando è stata pianificata un'animazione. In caso contrario, è necessario rimuovere manualmente le transizioni.

```
BOOL m_bAutoclearTransitions;
```

## <a name="canimationgroupm_bautodestroyanimationobjects"></a><a name="m_bautodestroyanimationobjects"></a>Gruppo CAnimationGroup::m_bAutodestroyAnimationObjects

Specifica come eliminare gli oggetti di animazione. Se questo parametro è TRUE, gli oggetti di animazione verranno eliminati automaticamente quando il gruppo viene eliminato. In caso contrario, gli oggetti di animazione devono essere distrutti manualmente. Il valore predefinito è FALSE. Impostare questo valore su TRUE solo se tutti gli oggetti di animazione che appartengono al gruppo vengono allocati dinamicamente con operator new.

```
BOOL m_bAutodestroyAnimationObjects;
```

## <a name="canimationgroupm_bautodestroykeyframes"></a><a name="m_bautodestroykeyframes"></a>CAnimationGroup::m_bAutodestroyKeyframes

Specifica come distruggere i fotogrammi chiave. Se questo valore è TRUE, tutti i fotogrammi chiave vengono rimossi ed eliminati; in caso contrario vengono rimossi solo dall'elenco. Il valore predefinito è TRUE.

```
BOOL m_bAutodestroyKeyframes;
```

## <a name="canimationgroupm_lstanimationobjects"></a><a name="m_lstanimationobjects"></a>Gruppo CAnimationGroup::m_lstAnimationObjects

Contiene un elenco di oggetti di animazione.

```
CObList m_lstAnimationObjects;
```

## <a name="canimationgroupm_lstkeyframes"></a><a name="m_lstkeyframes"></a>Gruppo CAnimationGroup::m_lstKeyFrames

Contiene un elenco di fotogrammi chiave.

```
CObList m_lstKeyFrames;
```

## <a name="canimationgroupm_ngroupid"></a><a name="m_ngroupid"></a>CAnimationGroup::m_nGroupID

Identificatore univoco del gruppo di animazioni.

```
UINT32 m_nGroupID;
```

## <a name="canimationgroupm_pparentcontroller"></a><a name="m_pparentcontroller"></a>Gruppo CAnimationGroup::m_pParentController

Puntatore a controller di animazione a cui appartiene questo gruppo.

```
CAnimationController* m_pParentController;
```

## <a name="canimationgroupm_pstoryboard"></a><a name="m_pstoryboard"></a>Gruppo CAnimationGroup::m_pStoryboard

Punta allo storyboard di animazione. Questo puntatore è valido solo dopo la chiamata su Animate.

```
ATL::CComPtr<IUIAnimationStoryboard> m_pStoryboard;
```

## <a name="canimationgroupremovekeyframes"></a><a name="removekeyframes"></a>Fotogrammi CAnimationGroup::RemoveKey

Rimuove e facoltativamente elimina tutti i fotogrammi chiave che appartengono a un gruppo di animazioni.

```cpp
void RemoveKeyframes();
```

### <a name="remarks"></a>Osservazioni

Se m_bAutodestroyKeyframes membro è TRUE, i fotogrammi chiave vengono rimossi ed eliminati, altrimenti i fotogrammi chiave vengono semplicemente rimossi dall'elenco interno dei fotogrammi chiave.

## <a name="canimationgroupremovetransitions"></a><a name="removetransitions"></a>Gruppo CAnimationGroup::RemoveTransitions

Rimuove le transizioni dagli oggetti di animazione che appartengono a un gruppo di animazioni.

```cpp
void RemoveTransitions();
```

### <a name="remarks"></a>Osservazioni

Se m_bAutoclearTransitions flag è impostato su TRUE, questo metodo esegue un ciclo su tutti gli oggetti di animazione che appartengono al gruppo e chiama CAnimationObject::ClearTransitions(FALSE).

## <a name="canimationgroupschedule"></a><a name="schedule"></a>CAnimationGroup::Pianificazione

Pianifica un'animazione all'ora specificata.

```
BOOL Schedule(IUIAnimationTimer* pTimer, UI_ANIMATION_SECONDS time);
```

### <a name="parameters"></a>Parametri

*pTimer (in stile pTimer)*<br/>
Puntatore al timer di animazione.

*time*<br/>
Specifica il tempo di pianificazione dell'animazione.

### <a name="return-value"></a>Valore restituito

TRUESe il metodo ha esito positivo. FALSE se il metodo ha esito negativo o se Animate non è stato chiamato con bScheduleNow impostato su FALSE.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per pianificare un'animazione all'ora specificata. È necessario chiamare animate con bScheduleNow impostato su FALSE.

## <a name="canimationgroupsetautodestroytransitions"></a><a name="setautodestroytransitions"></a>Gruppo CAnimationGroup::SetAutodestroyTransitions

Indirizza tutti gli oggetti di animazione che appartengono al gruppo di eliminare automaticamente le transizioni.

```cpp
void SetAutodestroyTransitions(BOOL bAutoDestroy = TRUE);
```

### <a name="parameters"></a>Parametri

*bAutoDistruggi*<br/>
Specifica come eliminare le transizioni.

### <a name="remarks"></a>Osservazioni

Impostare questo valore su FALSE solo se si allocano transizioni nello stack. Il valore predefinito è TRUE, pertanto è consigliabile allocare gli oggetti di transizione utilizzando operator new.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
