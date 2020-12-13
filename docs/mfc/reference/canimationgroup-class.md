---
description: 'Altre informazioni su: classe CAnimationGroup'
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
ms.openlocfilehash: 45fd49b95f73811f52795b87bf3de2dd004fa5ee
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97336793"
---
# <a name="canimationgroup-class"></a>Classe CAnimationGroup

Implementa un gruppo di animazioni, che combina uno storyboard dell'animazione, gli oggetti di animazione e le transizioni per definire un'animazione.

## <a name="syntax"></a>Sintassi

```
class CAnimationGroup;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CAnimationGroup:: CAnimationGroup](#canimationgroup)|Costruisce un gruppo di animazioni.|
|[CAnimationGroup:: ~ CAnimationGroup](#_dtorcanimationgroup)|Distruttore. Chiamato quando un gruppo di animazioni viene eliminato definitivamente.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CAnimationGroup:: animate](#animate)|Aggiunge un'animazione a un gruppo.|
|[CAnimationGroup:: ApplyTransitions](#applytransitions)|Applica le transizioni agli oggetti animazione.|
|[CAnimationGroup:: FindAnimationObject](#findanimationobject)|Trova un oggetto animation che contiene la variabile di animazione specificata.|
|[CAnimationGroup:: GetGroupID](#getgroupid)|Restituisce GroupID.|
|[CAnimationGroup:: RemoveKeyframes](#removekeyframes)|Rimuove ed elimina facoltativamente tutti i fotogrammi chiave che appartengono a un gruppo di animazione.|
|[CAnimationGroup:: RemoveTransitions](#removetransitions)|Rimuove le transizioni dagli oggetti di animazione che appartengono a un gruppo di animazione.|
|[CAnimationGroup:: Schedule](#schedule)|Pianifica un'animazione all'ora specificata.|
|[CAnimationGroup:: SetAutodestroyTransitions](#setautodestroytransitions)|Indica a tutti gli oggetti di animazione che appartengono al gruppo di eliminare automaticamente le transizioni.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Description|
|----------|-----------------|
|[CAnimationGroup:: AddKeyframes](#addkeyframes)|Helper che aggiunge fotogrammi chiave a uno storyboard.|
|[CAnimationGroup:: AddTransitions](#addtransitions)|Helper che aggiunge transizioni a uno storyboard.|
|[CAnimationGroup:: CreateTransitions](#createtransitions)|Helper che crea oggetti di transizione COM.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CAnimationGroup:: m_bAutoclearTransitions](#m_bautocleartransitions)|Specifica come cancellare le transizioni dagli oggetti di animazione che appartengono al gruppo. Se questo membro è TRUE, le transizioni vengono rimosse automaticamente quando è stata pianificata un'animazione. In caso contrario, è necessario rimuovere manualmente le transizioni.|
|[CAnimationGroup:: m_bAutodestroyAnimationObjects](#m_bautodestroyanimationobjects)|Specifica la modalità di eliminazione degli oggetti di animazione. Se questo parametro è TRUE, gli oggetti di animazione verranno eliminati automaticamente quando il gruppo viene eliminato definitivamente. In caso contrario, gli oggetti di animazione devono essere eliminati manualmente. Il valore predefinito è FALSE. Impostare questo valore su TRUE solo se tutti gli oggetti di animazione che appartengono al gruppo vengono allocati dinamicamente con operator new.|
|[CAnimationGroup:: m_bAutodestroyKeyframes](#m_bautodestroykeyframes)|Specifica come eliminare i fotogrammi chiave. Se questo valore è TRUE, tutti i fotogrammi chiave vengono rimossi ed eliminati. in caso contrario, vengono rimossi solo dall'elenco. Il valore predefinito è TRUE.|
|[CAnimationGroup:: m_lstAnimationObjects](#m_lstanimationobjects)|Contiene un elenco di oggetti di animazione.|
|[CAnimationGroup:: m_lstKeyFrames](#m_lstkeyframes)|Contiene un elenco di fotogrammi chiave.|
|[CAnimationGroup:: m_pStoryboard](#m_pstoryboard)|Punta allo storyboard dell'animazione. Questo puntatore è valido solo dopo la chiamata all'animazione.|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Description|
|----------|-----------------|
|[CAnimationGroup:: m_nGroupID](#m_ngroupid)|Identificatore univoco del gruppo di animazione.|
|[CAnimationGroup:: m_pParentController](#m_pparentcontroller)|Puntatore al controller di animazione a cui appartiene questo gruppo.|

## <a name="remarks"></a>Commenti

I gruppi di animazione vengono creati automaticamente dal controller di animazione (CAnimationController) quando si aggiungono oggetti animazione utilizzando CAnimationController:: AddAnimationObject. Un gruppo di animazione viene identificato da GroupID, che in genere viene utilizzato come parametro per modificare i gruppi di animazione. GroupID viene ricavato dal primo oggetto di animazione aggiunto a un nuovo gruppo di animazione. Uno storyboard di animazione incapsulato viene creato dopo la chiamata a CAnimationController:: AnimateGroup ed è possibile accedervi tramite un membro pubblico m_pStoryboard.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CAnimationGroup`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

## <a name="canimationgroupcanimationgroup"></a><a name="_dtorcanimationgroup"></a> CAnimationGroup:: ~ CAnimationGroup

Distruttore. Chiamato quando un gruppo di animazioni viene eliminato definitivamente.

```
~CAnimationGroup();
```

## <a name="canimationgroupaddkeyframes"></a><a name="addkeyframes"></a> CAnimationGroup:: AddKeyframes

Helper che aggiunge fotogrammi chiave a uno storyboard.

```cpp
void AddKeyframes(IUIAnimationStoryboard* pStoryboard, BOOL bAddDeep);
```

### <a name="parameters"></a>Parametri

*pStoryboard*<br/>
Puntatore a un oggetto COM dello storyboard.

*bAddDeep*<br/>
Specifica se questo metodo deve essere aggiunto ai fotogrammi chiave dello storyboard che dipendono da altri fotogrammi chiave.

## <a name="canimationgroupaddtransitions"></a><a name="addtransitions"></a> CAnimationGroup:: AddTransitions

Helper che aggiunge transizioni a uno storyboard.

```cpp
void AddTransitions(
    IUIAnimationStoryboard* pStoryboard,
    BOOL bDependOnKeyframes);
```

### <a name="parameters"></a>Parametri

*pStoryboard*<br/>
Puntatore a un oggetto COM dello storyboard.

*bDependOnKeyframes*

## <a name="canimationgroupanimate"></a><a name="animate"></a> CAnimationGroup:: animate

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

TRUE se il metodo ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Questo metodo crea uno storyboard interno, crea e Applica transizioni e pianifica un'animazione Se bScheduleNow è TRUE. Se bScheduleNow è FALSE, è necessario chiamare Schedule per avviare l'animazione all'ora specificata.

## <a name="canimationgroupapplytransitions"></a><a name="applytransitions"></a> CAnimationGroup:: ApplyTransitions

Applica le transizioni agli oggetti animazione.

```cpp
void ApplyTransitions();
```

### <a name="remarks"></a>Commenti

Questo metodo esegue l'ASSERZIONe in modalità debug se Storyboard non è stato creato. Crea innanzitutto tutte le transizioni, quindi aggiunge fotogrammi chiave "statici" (fotogrammi chiave che dipendono da offset), aggiunge transizioni che non dipendono da fotogrammi chiave, aggiunge fotogrammi chiave a seconda delle transizioni e di altri fotogrammi chiave e infine aggiunge transizioni che dipendono da fotogrammi chiave.

## <a name="canimationgroupcanimationgroup"></a><a name="canimationgroup"></a> CAnimationGroup:: CAnimationGroup

Costruisce un gruppo di animazioni.

```
CAnimationGroup(CAnimationController* pParentController, UINT32 nGroupID);
```

### <a name="parameters"></a>Parametri

*pParentController*<br/>
Puntatore al controller di animazione che crea un gruppo.

*nGroupID*<br/>
Specifica GroupID.

## <a name="canimationgroupcreatetransitions"></a><a name="createtransitions"></a> CAnimationGroup:: CreateTransitions

Helper che crea oggetti di transizione COM.

```
BOOL CreateTransitions();
```

### <a name="return-value"></a>Valore restituito

TRUE se il metodo ha esito positivo; in caso contrario, FALSE.

## <a name="canimationgroupfindanimationobject"></a><a name="findanimationobject"></a> CAnimationGroup:: FindAnimationObject

Trova un oggetto animation che contiene la variabile di animazione specificata.

```
CAnimationBaseObject* FindAnimationObject(IUIAnimationVariable* pVariable);
```

### <a name="parameters"></a>Parametri

*pVariable*<br/>
Puntatore alla variabile di animazione.

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto animazione oppure NULL se l'oggetto di animazione non viene trovato.

## <a name="canimationgroupgetgroupid"></a><a name="getgroupid"></a> CAnimationGroup:: GetGroupID

Restituisce GroupID.

```
UINT32 GetGroupID() const;
```

### <a name="return-value"></a>Valore restituito

Identificatore di gruppo.

## <a name="canimationgroupm_bautocleartransitions"></a><a name="m_bautocleartransitions"></a> CAnimationGroup:: m_bAutoclearTransitions

Specifica come cancellare le transizioni dagli oggetti di animazione che appartengono al gruppo. Se questo membro è TRUE, le transizioni vengono rimosse automaticamente quando è stata pianificata un'animazione. In caso contrario, è necessario rimuovere manualmente le transizioni.

```
BOOL m_bAutoclearTransitions;
```

## <a name="canimationgroupm_bautodestroyanimationobjects"></a><a name="m_bautodestroyanimationobjects"></a> CAnimationGroup:: m_bAutodestroyAnimationObjects

Specifica la modalità di eliminazione degli oggetti di animazione. Se questo parametro è TRUE, gli oggetti di animazione verranno eliminati automaticamente quando il gruppo viene eliminato definitivamente. In caso contrario, gli oggetti di animazione devono essere eliminati manualmente. Il valore predefinito è FALSE. Impostare questo valore su TRUE solo se tutti gli oggetti di animazione che appartengono al gruppo vengono allocati dinamicamente con operator new.

```
BOOL m_bAutodestroyAnimationObjects;
```

## <a name="canimationgroupm_bautodestroykeyframes"></a><a name="m_bautodestroykeyframes"></a> CAnimationGroup:: m_bAutodestroyKeyframes

Specifica come eliminare i fotogrammi chiave. Se questo valore è TRUE, tutti i fotogrammi chiave vengono rimossi ed eliminati. in caso contrario, vengono rimossi solo dall'elenco. Il valore predefinito è TRUE.

```
BOOL m_bAutodestroyKeyframes;
```

## <a name="canimationgroupm_lstanimationobjects"></a><a name="m_lstanimationobjects"></a> CAnimationGroup:: m_lstAnimationObjects

Contiene un elenco di oggetti di animazione.

```
CObList m_lstAnimationObjects;
```

## <a name="canimationgroupm_lstkeyframes"></a><a name="m_lstkeyframes"></a> CAnimationGroup:: m_lstKeyFrames

Contiene un elenco di fotogrammi chiave.

```
CObList m_lstKeyFrames;
```

## <a name="canimationgroupm_ngroupid"></a><a name="m_ngroupid"></a> CAnimationGroup:: m_nGroupID

Identificatore univoco del gruppo di animazione.

```
UINT32 m_nGroupID;
```

## <a name="canimationgroupm_pparentcontroller"></a><a name="m_pparentcontroller"></a> CAnimationGroup:: m_pParentController

Puntatore al controller di animazione a cui appartiene questo gruppo.

```
CAnimationController* m_pParentController;
```

## <a name="canimationgroupm_pstoryboard"></a><a name="m_pstoryboard"></a> CAnimationGroup:: m_pStoryboard

Punta allo storyboard dell'animazione. Questo puntatore è valido solo dopo la chiamata all'animazione.

```
ATL::CComPtr<IUIAnimationStoryboard> m_pStoryboard;
```

## <a name="canimationgroupremovekeyframes"></a><a name="removekeyframes"></a> CAnimationGroup:: RemoveKeyframes

Rimuove ed elimina facoltativamente tutti i fotogrammi chiave che appartengono a un gruppo di animazione.

```cpp
void RemoveKeyframes();
```

### <a name="remarks"></a>Commenti

Se m_bAutodestroyKeyframes membro è TRUE, i fotogrammi chiave vengono rimossi ed eliminati definitivamente, in caso contrario i fotogrammi chiave vengono rimossi dall'elenco interno di fotogrammi chiave.

## <a name="canimationgroupremovetransitions"></a><a name="removetransitions"></a> CAnimationGroup:: RemoveTransitions

Rimuove le transizioni dagli oggetti di animazione che appartengono a un gruppo di animazione.

```cpp
void RemoveTransitions();
```

### <a name="remarks"></a>Commenti

Se m_bAutoclearTransitions flag è impostato su TRUE, questo metodo esegue il ciclo di tutti gli oggetti di animazione che appartengono al gruppo e chiama CAnimationObject:: ClearTransitions (FALSE).

## <a name="canimationgroupschedule"></a><a name="schedule"></a> CAnimationGroup:: Schedule

Pianifica un'animazione all'ora specificata.

```
BOOL Schedule(IUIAnimationTimer* pTimer, UI_ANIMATION_SECONDS time);
```

### <a name="parameters"></a>Parametri

*pTimer*<br/>
Puntatore al timer di animazione.

*time*<br/>
Specifica il tempo necessario per pianificare l'animazione.

### <a name="return-value"></a>Valore restituito

TRUE se il metodo ha esito positivo; FALSE se il metodo ha esito negativo o se l'animazione non è stata chiamata con bScheduleNow impostato su FALSE.

### <a name="remarks"></a>Commenti

Chiamare questa funzione per pianificare un'animazione all'ora specificata. Per prima cosa, è necessario chiamare animate con bScheduleNow impostato su FALSE.

## <a name="canimationgroupsetautodestroytransitions"></a><a name="setautodestroytransitions"></a> CAnimationGroup:: SetAutodestroyTransitions

Indica a tutti gli oggetti di animazione che appartengono al gruppo di eliminare automaticamente le transizioni.

```cpp
void SetAutodestroyTransitions(BOOL bAutoDestroy = TRUE);
```

### <a name="parameters"></a>Parametri

*bAutoDestroy*<br/>
Specifica la modalità di eliminazione delle transizioni.

### <a name="remarks"></a>Commenti

Impostare questo valore su FALSE solo se si allocano transizioni nello stack. Il valore predefinito è TRUE, pertanto è consigliabile allocare gli oggetti Transition usando operator new.

## <a name="see-also"></a>Vedi anche

[Classi](../../mfc/reference/mfc-classes.md)
