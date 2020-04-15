---
title: Classe CBaseKeyFrame
ms.date: 11/04/2016
f1_keywords:
- CBaseKeyFrame
- AFXANIMATIONCONTROLLER/CBaseKeyFrame
- AFXANIMATIONCONTROLLER/CBaseKeyFrame::CBaseKeyFrame
- AFXANIMATIONCONTROLLER/CBaseKeyFrame::AddToStoryboard
- AFXANIMATIONCONTROLLER/CBaseKeyFrame::GetAnimationKeyframe
- AFXANIMATIONCONTROLLER/CBaseKeyFrame::IsAdded
- AFXANIMATIONCONTROLLER/CBaseKeyFrame::IsKeyframeAtOffset
- AFXANIMATIONCONTROLLER/CBaseKeyFrame::m_bAdded
- AFXANIMATIONCONTROLLER/CBaseKeyFrame::m_bIsKeyframeAtOffset
- AFXANIMATIONCONTROLLER/CBaseKeyFrame::m_keyframe
helpviewer_keywords:
- CBaseKeyFrame [MFC], CBaseKeyFrame
- CBaseKeyFrame [MFC], AddToStoryboard
- CBaseKeyFrame [MFC], GetAnimationKeyframe
- CBaseKeyFrame [MFC], IsAdded
- CBaseKeyFrame [MFC], IsKeyframeAtOffset
- CBaseKeyFrame [MFC], m_bAdded
- CBaseKeyFrame [MFC], m_bIsKeyframeAtOffset
- CBaseKeyFrame [MFC], m_keyframe
ms.assetid: 285a2eff-e7c4-43be-b5aa-737727e6866d
ms.openlocfilehash: 3fcd55f6a157f4b837090a3608fb509b870aae5d
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81352995"
---
# <a name="cbasekeyframe-class"></a>Classe CBaseKeyFrame

Implementa la funzionalità di base di un fotogramma chiave.

## <a name="syntax"></a>Sintassi

```
class CBaseKeyFrame : public CObject;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CBaseKeyFrame::CBaseKeyFrame](#cbasekeyframe)|Costruisce un oggetto fotogramma chiave.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CBaseKeyFrame::AddToStoryboardCBaseKeyFrame::AddToStoryboard](#addtostoryboard)|Aggiunge un fotogramma chiave allo storyboard.|
|[CBaseKeyFrame::GetAnimationKeyframe](#getanimationkeyframe)|Restituisce il valore del fotogramma chiave sottostante.|
|[CBaseKeyFrame::IsAdded](#isadded)|Indica se un fotogramma chiave è stato aggiunto allo storyboard.|
|[CBaseKeyFrame::IsKeyframeAtOffset](#iskeyframeatoffset)|Specifica se il fotogramma chiave deve essere aggiunto allo storyboard in corrispondenza dell'offset o dopo la transizione.|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Descrizione|
|----------|-----------------|
|[CBaseKeyFrame::m_bAdded](#m_badded)|Specifica se questo fotogramma chiave è stato aggiunto a uno storyboard.|
|[CBaseKeyFrame::m_bIsKeyframeAtOffset](#m_biskeyframeatoffset)|Specifica se questo fotogramma chiave deve essere aggiunto allo storyboard in corrispondenza di un offset da un altro fotogramma chiave esistente o alla fine di una transizione.|
|[CBaseKeyFrame::m_keyframe](#m_keyframe)|Rappresenta un fotogramma chiave dell'API di animazione di Windows. Quando un fotogramma chiave non viene inizializzato, viene impostato sul valore predefinito UI_ANIMATION_KEYFRAME_STORYBOARD_START.|

## <a name="remarks"></a>Osservazioni

Incapsula UI_ANIMATION_KEYFRAME variabile. Funge da classe base per qualsiasi implementazione di fotogrammi chiave. Un fotogramma chiave rappresenta un momento nel tempo all'interno di uno storyboard e può essere utilizzato per specificare l'ora di inizio e di fine delle transizioni. Esistono due tipi di fotogrammi chiave: i fotogrammi chiave aggiunti allo storyboard in corrispondenza dell'offset specificato (nel tempo) o i fotogrammi chiave aggiunti dopo la transizione specificata. Poiché le durate di alcune transizioni non possono essere note prima dell'inizio dell'animazione, i valori effettivi di alcuni fotogrammi chiave vengono determinati solo in fase di esecuzione. Poiché i fotogrammi chiave possono dipendere dalle transizioni, che a loro volta dipendono dai fotogrammi chiave, è importante evitare ricorrenze infinite durante la creazione di catene di fotogrammi chiave.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CBaseKeyFrame`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

## <a name="cbasekeyframeaddtostoryboard"></a><a name="addtostoryboard"></a>CBaseKeyFrame::AddToStoryboardCBaseKeyFrame::AddToStoryboard

Aggiunge un fotogramma chiave allo storyboard.

```
virtual BOOL AddToStoryboard(
    IUIAnimationStoryboard* pStoryboard,
    BOOL bDeepAdd);
```

### <a name="parameters"></a>Parametri

*pStoryboard*<br/>
Puntatore a uno storyboard.

*bAdd*<br/>
Se questo parametro è TRUE e il fotogramma chiave aggiunto dipende da un altro fotogramma chiave o transizione, questo metodo tenta di aggiungere prima questo fotogramma chiave o transizione allo storyboard.

### <a name="return-value"></a>Valore restituito

TRUESe il fotogramma chiave è stato aggiunto allo storyboard correttamente. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questo metodo viene chiamato per aggiungere un fotogramma chiave allo storyboard.

## <a name="cbasekeyframecbasekeyframe"></a><a name="cbasekeyframe"></a>CBaseKeyFrame::CBaseKeyFrame

Costruisce un oggetto fotogramma chiave.

```
CBaseKeyFrame();
```

## <a name="cbasekeyframegetanimationkeyframe"></a><a name="getanimationkeyframe"></a>CBaseKeyFrame::GetAnimationKeyframe

Restituisce il valore del fotogramma chiave sottostante.

```
UI_ANIMATION_KEYFRAME GetAnimationKeyframe() const;
```

### <a name="return-value"></a>Valore restituito

Un fotogramma chiave corrente. Il valore predefinito è UI_ANIMATION_KEYFRAME_STORYBOARD_START.

### <a name="remarks"></a>Osservazioni

Si tratta di una funzione di accesso al valore del fotogramma chiave sottostante.

## <a name="cbasekeyframeisadded"></a><a name="isadded"></a>CBaseKeyFrame::IsAdded

Indica se un fotogramma chiave è stato aggiunto allo storyboard.

```
BOOL IsAdded() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe un fotogramma chiave viene aggiunto a uno storyboard. otehrwise FALSO.

### <a name="remarks"></a>Osservazioni

Nella classe base IsAdded restituisce sempre TRUE, ma viene sottoposto a override nelle classi derivate.

## <a name="cbasekeyframeiskeyframeatoffset"></a><a name="iskeyframeatoffset"></a>CBaseKeyFrame::IsKeyframeAtOffset

Specifica se il fotogramma chiave deve essere aggiunto allo storyboard in corrispondenza dell'offset o dopo la transizione.

```
BOOL IsKeyframeAtOffset() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe il fotogramma chiave deve essere aggiunto allo storyboard in corrispondenza di un offset specificato. FALSE se il fotogramma chiave deve essere aggiunto allo storyboard dopo una transizione.

### <a name="remarks"></a>Osservazioni

Specifica se il fotogramma chiave deve essere aggiunto allo storyboard in corrispondenza dell'offset. L'offset o la transizione deve essere specificata in una classe derivata.

## <a name="cbasekeyframem_badded"></a><a name="m_badded"></a>CBaseKeyFrame::m_bAdded

Specifica se questo fotogramma chiave è stato aggiunto a uno storyboard.

```
BOOL m_bAdded;
```

## <a name="cbasekeyframem_biskeyframeatoffset"></a><a name="m_biskeyframeatoffset"></a>CBaseKeyFrame::m_bIsKeyframeAtOffset

Specifica se questo fotogramma chiave deve essere aggiunto allo storyboard in corrispondenza di un offset da un altro fotogramma chiave esistente o alla fine di una transizione.

```
BOOL m_bIsKeyframeAtOffset;
```

## <a name="cbasekeyframem_keyframe"></a><a name="m_keyframe"></a>CBaseKeyFrame::m_keyframe

Rappresenta un fotogramma chiave dell'API di animazione di Windows. Quando un fotogramma chiave non viene inizializzato, viene impostato sul valore predefinito UI_ANIMATION_KEYFRAME_STORYBOARD_START.

```
UI_ANIMATION_KEYFRAME m_keyframe;
```

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
