---
title: Classe CAnimationGroup
ms.date: 11/04/2016
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
ms.openlocfilehash: 9be0a5b76f91ddf4dc3d1c4ff2816b7ffd5a1986
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57304379"
---
# <a name="canimationgroup-class"></a>Classe CAnimationGroup

Implementa un gruppo di animazione, che combina gli oggetti di animazione, uno storyboard per animazioni e transizioni per definire un'animazione.

## <a name="syntax"></a>Sintassi

```
class CAnimationGroup;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAnimationGroup::CAnimationGroup](#canimationgroup)|Crea un gruppo di animazione.|
|[CAnimationGroup::~CAnimationGroup](#canimationgroup__~canimationgroup)|Distruttore. Chiamato quando è in corso l'eliminazione di un gruppo di animazione.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAnimationGroup::Animate](#animate)|Aggiunge un'animazione a un gruppo.|
|[CAnimationGroup::ApplyTransitions](#applytransitions)|Applica le transizioni per gli oggetti di animazione.|
|[CAnimationGroup::FindAnimationObject](#findanimationobject)|Trova un oggetto di animazione che contiene la variabile di animazione specificato.|
|[CAnimationGroup::GetGroupID](#getgroupid)|Restituisce l'ID del gruppo.|
|[CAnimationGroup::RemoveKeyframes](#removekeyframes)|Rimuove e, facoltativamente, Elimina tutti i fotogrammi chiave che appartengono a un gruppo di animazione.|
|[CAnimationGroup::RemoveTransitions](#removetransitions)|Rimuove le transizioni tra gli oggetti di animazione che appartengono a un gruppo di animazione.|
|[CAnimationGroup::Schedule](#schedule)|Pianifica un'animazione all'ora specificata.|
|[CAnimationGroup::SetAutodestroyTransitions](#setautodestroytransitions)|Indirizza transizioni di eliminazione di tutti gli oggetti di animazione che appartengono al gruppo automaticamente.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CAnimationGroup::AddKeyframes](#addkeyframes)|Un helper che consente di aggiungere fotogrammi chiave di uno storyboard.|
|[CAnimationGroup::AddTransitions](#addtransitions)|Un helper che aggiunge le transizioni di uno storyboard.|
|[CAnimationGroup::CreateTransitions](#createtransitions)|Un helper che crea oggetti COM transizione.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAnimationGroup::m_bAutoclearTransitions](#m_bautocleartransitions)|Specifica come cancellare le transizioni tra gli oggetti di animazione che appartengono al gruppo. Se questo membro è TRUE, le transizioni vengono rimossi automaticamente quando è stata pianificata un'animazione. In caso contrario, è necessario rimuovere manualmente le transizioni.|
|[CAnimationGroup::m_bAutodestroyAnimationObjects](#m_bautodestroyanimationobjects)|Specifica come eliminare definitivamente gli oggetti di animazione. Se questo parametro è TRUE, verranno automaticamente distrutte gli oggetti di animazione quando viene eliminato il gruppo. In caso contrario, gli oggetti di animazione devono essere eliminati manualmente. Il valore predefinito è FALSE. Impostare questo valore su TRUE solo se tutti gli oggetti di animazione che appartengono al gruppo vengono allocati in modo dinamico con l'operatore new.|
|[CAnimationGroup::m_bAutodestroyKeyframes](#m_bautodestroykeyframes)|Specifica come eliminare definitivamente i fotogrammi chiave. Se questo valore è TRUE, tutti i fotogrammi chiave vengono rimossi e distrutto; in caso contrario, vengono rimossi solo dall'elenco. Il valore predefinito è TRUE.|
|[CAnimationGroup::m_lstAnimationObjects](#m_lstanimationobjects)|Contiene un elenco di oggetti di animazione.|
|[CAnimationGroup::m_lstKeyFrames](#m_lstkeyframes)|Contiene un elenco di fotogrammi chiave.|
|[CAnimationGroup::m_pStoryboard](#m_pstoryboard)|Punti da storyboard dell'animazione. Puntatore ' this ' è valido solo dopo la chiamata su Animate.|

### <a name="protected-data-members"></a>Membri dati protetti

|nome|Descrizione|
|----------|-----------------|
|[CAnimationGroup::m_nGroupID](#m_ngroupid)|Identificatore univoco del gruppo di animazione.|
|[CAnimationGroup::m_pParentController](#m_pparentcontroller)|Puntatore al controller di animazione che appartiene a questo gruppo.|

## <a name="remarks"></a>Note

Animazione gruppi vengono creati automaticamente dal controller di animazione (CAnimationController) quando si aggiungono oggetti animazione usando CAnimationController:: AddAnimationObject. Un gruppo di animazione è identificato da GroupID, che viene in genere utilizzato come un parametro per modificare i gruppi di animazione. GroupID da cui proviene il primo oggetto di animazione viene aggiunto a un nuovo gruppo di animazione. Dopo aver chiamato CAnimationController:: AnimateGroup e sono accessibili tramite m_pStoryboard membro pubblico, viene creato uno storyboard per animazioni incapsulato.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CAnimationGroup`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

##  <a name="_dtorcanimationgroup"></a>  CAnimationGroup::~CAnimationGroup

Distruttore. Chiamato quando è in corso l'eliminazione di un gruppo di animazione.

```
~CAnimationGroup();
```

##  <a name="addkeyframes"></a>  CAnimationGroup::AddKeyframes

Un helper che consente di aggiungere fotogrammi chiave di uno storyboard.

```
void AddKeyframes(IUIAnimationStoryboard* pStoryboard, BOOL bAddDeep);
```

### <a name="parameters"></a>Parametri

*pStoryboard*<br/>
Un puntatore a un oggetto COM dello storyboard.

*bAddDeep*<br/>
Specifica se questo metodo deve aggiungere ai fotogrammi chiave storyboard che dipendono da altri fotogrammi chiave.

##  <a name="addtransitions"></a>  CAnimationGroup::AddTransitions

Un helper che aggiunge le transizioni di uno storyboard.

```
void AddTransitions(
    IUIAnimationStoryboard* pStoryboard,
    BOOL bDependOnKeyframes);
```

### <a name="parameters"></a>Parametri

*pStoryboard*<br/>
Un puntatore a un oggetto COM dello storyboard.

*bDependOnKeyframes*

##  <a name="animate"></a>  CAnimationGroup::Animate

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

### <a name="remarks"></a>Note

Questo metodo crea uno storyboard interno, crea e applica le transizioni e pianifica un'animazione se bScheduleNow è TRUE. Se bScheduleNow è FALSE, è necessario chiamare pianificazione per avviare l'animazione all'ora specificata.

##  <a name="applytransitions"></a>  CAnimationGroup::ApplyTransitions

Applica le transizioni per gli oggetti di animazione.

```
void ApplyTransitions();
```

### <a name="remarks"></a>Note

Questo metodo effettua un'ASSERZIONE in modalità di debug se storyboard non è stato creato. Crea tutte le transizioni in primo luogo, quindi aggiunge i fotogrammi chiave "statici" (fotogrammi chiave che dipendono da offset), aggiunge le transizioni che non dipendono i fotogrammi chiave, aggiunge i fotogrammi chiave a seconda delle transizioni e altri fotogrammi chiave e infine aggiunge le transizioni che dipendono da fotogrammi chiave .

##  <a name="canimationgroup"></a>  CAnimationGroup::CAnimationGroup

Crea un gruppo di animazione.

```
CAnimationGroup(CAnimationController* pParentController, UINT32 nGroupID);
```

### <a name="parameters"></a>Parametri

*pParentController*<br/>
Puntatore al controller di animazione che crea un gruppo.

*nGroupID*<br/>
Consente di specificare GroupID.

##  <a name="createtransitions"></a>  CAnimationGroup::CreateTransitions

Un helper che crea oggetti COM transizione.

```
BOOL CreateTransitions();
```

### <a name="return-value"></a>Valore restituito

TRUE è il metodo ha esito positivo, in caso contrario FALSE.

##  <a name="findanimationobject"></a>  CAnimationGroup::FindAnimationObject

Trova un oggetto di animazione che contiene la variabile di animazione specificato.

```
CAnimationBaseObject* FindAnimationObject(IUIAnimationVariable* pVariable);
```

### <a name="parameters"></a>Parametri

*pVariable*<br/>
Puntatore alla variabile di animazione.

### <a name="return-value"></a>Valore restituito

Un puntatore all'oggetto di animazione, o NULL se l'oggetto di animazione non viene trovato.

##  <a name="getgroupid"></a>  CAnimationGroup::GetGroupID

Restituisce l'ID del gruppo.

```
UINT32 GetGroupID() const;
```

### <a name="return-value"></a>Valore restituito

Un identificatore di gruppo.

##  <a name="m_bautocleartransitions"></a>  CAnimationGroup::m_bAutoclearTransitions

Specifica come cancellare le transizioni tra gli oggetti di animazione che appartengono al gruppo. Se questo membro è TRUE, le transizioni vengono rimossi automaticamente quando è stata pianificata un'animazione. In caso contrario, è necessario rimuovere manualmente le transizioni.

```
BOOL m_bAutoclearTransitions;
```

##  <a name="m_bautodestroyanimationobjects"></a>  CAnimationGroup::m_bAutodestroyAnimationObjects

Specifica come eliminare definitivamente gli oggetti di animazione. Se questo parametro è TRUE, verranno automaticamente distrutte gli oggetti di animazione quando viene eliminato il gruppo. In caso contrario, gli oggetti di animazione devono essere eliminati manualmente. Il valore predefinito è FALSE. Impostare questo valore su TRUE solo se tutti gli oggetti di animazione che appartengono al gruppo vengono allocati in modo dinamico con l'operatore new.

```
BOOL m_bAutodestroyAnimationObjects;
```

##  <a name="m_bautodestroykeyframes"></a>  CAnimationGroup::m_bAutodestroyKeyframes

Specifica come eliminare definitivamente i fotogrammi chiave. Se questo valore è TRUE, tutti i fotogrammi chiave vengono rimossi e distrutto; in caso contrario, vengono rimossi solo dall'elenco. Il valore predefinito è TRUE.

```
BOOL m_bAutodestroyKeyframes;
```

##  <a name="m_lstanimationobjects"></a>  CAnimationGroup::m_lstAnimationObjects

Contiene un elenco di oggetti di animazione.

```
CObList m_lstAnimationObjects;
```

##  <a name="m_lstkeyframes"></a>  CAnimationGroup::m_lstKeyFrames

Contiene un elenco di fotogrammi chiave.

```
CObList m_lstKeyFrames;
```

##  <a name="m_ngroupid"></a>  CAnimationGroup::m_nGroupID

Identificatore univoco del gruppo di animazione.

```
UINT32 m_nGroupID;
```

##  <a name="m_pparentcontroller"></a>  CAnimationGroup::m_pParentController

Puntatore al controller di animazione che appartiene a questo gruppo.

```
CAnimationController* m_pParentController;
```

##  <a name="m_pstoryboard"></a>  CAnimationGroup::m_pStoryboard

Punti da storyboard dell'animazione. Puntatore ' this ' è valido solo dopo la chiamata su Animate.

```
ATL::CComPtr<IUIAnimationStoryboard> m_pStoryboard;
```

##  <a name="removekeyframes"></a>  CAnimationGroup::RemoveKeyframes

Rimuove e, facoltativamente, Elimina tutti i fotogrammi chiave che appartengono a un gruppo di animazione.

```
void RemoveKeyframes();
```

### <a name="remarks"></a>Note

Se il membro m_bAutodestroyKeyframes è TRUE, i fotogrammi chiave vengono rimosse ed eliminato definitivamente, in caso contrario, vengono rimossi solo dall'elenco interno dei fotogrammi chiave.

##  <a name="removetransitions"></a>  CAnimationGroup::RemoveTransitions

Rimuove le transizioni tra gli oggetti di animazione che appartengono a un gruppo di animazione.

```
void RemoveTransitions();
```

### <a name="remarks"></a>Note

Se il flag m_bAutoclearTransitions è impostato su TRUE, questo metodo scorre in ciclo tutti gli oggetti di animazione che appartengono al gruppo e chiama CAnimationObject::ClearTransitions(FALSE).

##  <a name="schedule"></a>  CAnimationGroup::Schedule

Pianifica un'animazione all'ora specificata.

```
BOOL Schedule(IUIAnimationTimer* pTimer, UI_ANIMATION_SECONDS time);
```

### <a name="parameters"></a>Parametri

*pTimer*<br/>
Puntatore al timer di animazione.

*time*<br/>
Specifica tempo per pianificare l'animazione.

### <a name="return-value"></a>Valore restituito

TRUE se il metodo ha esito positivo; FALSE se il metodo ha esito negativo o se aggiungere un'animazione non è stata chiamata con bScheduleNow impostata su FALSE.

### <a name="remarks"></a>Note

Chiamare questa funzione per pianificare un'animazione all'ora specificata. È necessario chiamare eseguire un'animazione con bScheduleNow impostata su FALSE prima di tutto.

##  <a name="setautodestroytransitions"></a>  CAnimationGroup::SetAutodestroyTransitions

Indirizza transizioni di eliminazione di tutti gli oggetti di animazione che appartengono al gruppo automaticamente.

```
void SetAutodestroyTransitions(BOOL bAutoDestroy = TRUE);
```

### <a name="parameters"></a>Parametri

*bAutoDestroy*<br/>
Specifica come eliminare definitivamente le transizioni.

### <a name="remarks"></a>Note

Impostare questo valore su FALSE solo se si allocano le transizioni nello stack. Il valore predefinito è TRUE, pertanto è consigliabile allocare oggetti di transizione utilizzando l'operatore new.

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
