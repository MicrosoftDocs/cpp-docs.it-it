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
ms.openlocfilehash: d36c924d30bd728fcd54b6cdf6805ade25e20b5c
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57296605"
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
|[CBaseKeyFrame::AddToStoryboard](#addtostoryboard)|Aggiunge un fotogramma chiave nello storyboard.|
|[CBaseKeyFrame::GetAnimationKeyframe](#getanimationkeyframe)|Restituisce il valore del fotogramma chiave sottostante.|
|[CBaseKeyFrame::IsAdded](#isadded)|Indica se un fotogramma chiave è stato aggiunto allo storyboard.|
|[CBaseKeyFrame::IsKeyframeAtOffset](#iskeyframeatoffset)|Specifica se il fotogramma chiave deve essere aggiunto allo storyboard in corrispondenza dell'offset o dopo la transizione.|

### <a name="protected-data-members"></a>Membri dati protetti

|nome|Descrizione|
|----------|-----------------|
|[CBaseKeyFrame::m_bAdded](#m_badded)|Specifica se questo fotogramma chiave è stata aggiunta a uno storyboard.|
|[CBaseKeyFrame::m_bIsKeyframeAtOffset](#m_biskeyframeatoffset)|Specifica se questo fotogramma chiave deve essere aggiunto allo storyboard in un offset da un altro fotogramma chiave esistente o alla fine di alcuni transizione.|
|[CBaseKeyFrame::m_keyframe](#m_keyframe)|Rappresenta un fotogramma chiave API di animazione di Windows. Quando non viene inizializzato un fotogramma chiave viene impostata sul valore predefinito UI_ANIMATION_KEYFRAME_STORYBOARD_START.|

## <a name="remarks"></a>Note

Incapsula la variabile UI_ANIMATION_KEYFRAME. Funge da classe base per qualsiasi implementazione di fotogramma chiave. Un fotogramma chiave rappresenta un momento specifico all'interno di uno storyboard e può essere utilizzato per specificare l'ora di inizio e fine delle transizioni. Esistono due tipi di fotogrammi chiave: i fotogrammi chiave aggiunti allo storyboard in corrispondenza dell'offset specificato (in time) o aggiunti dopo la transizione specificata i fotogrammi chiave. Poiché non è possibile conoscere la durata di alcuni transizioni prima animazione viene avviata, i valori effettivi di alcuni fotogrammi chiave vengono determinati in fase di esecuzione solo. Perché i fotogrammi chiave potrebbero dipendere transizioni, che a loro volta dipendono dai fotogrammi chiave, è importante evitare ricorsioni infiniti durante la compilazione di catene di fotogramma chiave.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CBaseKeyFrame`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

##  <a name="addtostoryboard"></a>  CBaseKeyFrame::AddToStoryboard

Aggiunge un fotogramma chiave nello storyboard.

```
virtual BOOL AddToStoryboard(
    IUIAnimationStoryboard* pStoryboard,
    BOOL bDeepAdd);
```

### <a name="parameters"></a>Parametri

*pStoryboard*<br/>
Puntatore a uno storyboard.

*bDeepAdd*<br/>
Se questo parametro è TRUE e il fotogramma chiave da aggiungere dipende da un altro fotogramma chiave o una transizione, questo metodo prova ad aggiungere questo fotogramma chiave o una transizione allo storyboard prima di tutto.

### <a name="return-value"></a>Valore restituito

TRUE se fotogramma chiave è stato aggiunto correttamente; allo storyboard in caso contrario, FALSE.

### <a name="remarks"></a>Note

Questo metodo viene chiamato per aggiungere un fotogramma chiave nello storyboard.

##  <a name="cbasekeyframe"></a>  CBaseKeyFrame::CBaseKeyFrame

Costruisce un oggetto fotogramma chiave.

```
CBaseKeyFrame();
```

##  <a name="getanimationkeyframe"></a>  CBaseKeyFrame::GetAnimationKeyframe

Restituisce il valore del fotogramma chiave sottostante.

```
UI_ANIMATION_KEYFRAME GetAnimationKeyframe() const;
```

### <a name="return-value"></a>Valore restituito

Un fotogramma chiave corrente. Il valore predefinito è UI_ANIMATION_KEYFRAME_STORYBOARD_START.

### <a name="remarks"></a>Note

Si tratta di una funzione di accesso per il valore del fotogramma chiave sottostante.

##  <a name="isadded"></a>  CBaseKeyFrame::IsAdded

Indica se un fotogramma chiave è stato aggiunto allo storyboard.

```
BOOL IsAdded() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se un fotogramma chiave viene aggiunto a uno storyboard; in caso contrario FALSE.

### <a name="remarks"></a>Note

Nella classe base IsAdded restituisce sempre TRUE, ma ne viene eseguito l'override nelle classi derivate.

##  <a name="iskeyframeatoffset"></a>  CBaseKeyFrame::IsKeyframeAtOffset

Specifica se il fotogramma chiave deve essere aggiunto allo storyboard in corrispondenza dell'offset o dopo la transizione.

```
BOOL IsKeyframeAtOffset() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se il fotogramma chiave deve essere aggiunti allo storyboard con un offset specificato. FALSO se il fotogramma chiave deve essere aggiunti alla storyboard dopo la transizione.

### <a name="remarks"></a>Note

Specifica se il fotogramma chiave deve essere aggiunto allo storyboard in corrispondenza dell'offset. L'offset o una transizione deve essere specificata in una classe derivata.

##  <a name="m_badded"></a>  CBaseKeyFrame::m_bAdded

Specifica se questo fotogramma chiave è stata aggiunta a uno storyboard.

```
BOOL m_bAdded;
```

##  <a name="m_biskeyframeatoffset"></a>  CBaseKeyFrame::m_bIsKeyframeAtOffset

Specifica se questo fotogramma chiave deve essere aggiunto allo storyboard in un offset da un altro fotogramma chiave esistente o alla fine di alcuni transizione.

```
BOOL m_bIsKeyframeAtOffset;
```

##  <a name="m_keyframe"></a>  CBaseKeyFrame::m_keyframe

Rappresenta un fotogramma chiave API di animazione di Windows. Quando non viene inizializzato un fotogramma chiave viene impostata sul valore predefinito UI_ANIMATION_KEYFRAME_STORYBOARD_START.

```
UI_ANIMATION_KEYFRAME m_keyframe;
```

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
