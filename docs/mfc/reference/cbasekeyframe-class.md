---
description: 'Altre informazioni su: classe CBaseKeyFrame'
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
ms.openlocfilehash: 0bebd91183eab9be71e8df4928dc621565718cb9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97261257"
---
# <a name="cbasekeyframe-class"></a>Classe CBaseKeyFrame

Implementa la funzionalità di base di un fotogramma chiave.

## <a name="syntax"></a>Sintassi

```
class CBaseKeyFrame : public CObject;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CBaseKeyFrame:: CBaseKeyFrame](#cbasekeyframe)|Costruisce un oggetto fotogramma chiave.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CBaseKeyFrame:: AddToStoryboard](#addtostoryboard)|Aggiunge un fotogramma chiave allo storyboard.|
|[CBaseKeyFrame:: GetAnimationKeyframe](#getanimationkeyframe)|Restituisce il valore del fotogramma chiave sottostante.|
|[CBaseKeyFrame:: è stato aggiunto](#isadded)|Indica se un fotogramma chiave è stato aggiunto allo storyboard.|
|[CBaseKeyFrame:: IsKeyframeAtOffset](#iskeyframeatoffset)|Specifica se il fotogramma chiave deve essere aggiunto allo storyboard in corrispondenza dell'offset o dopo la transizione.|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Description|
|----------|-----------------|
|[CBaseKeyFrame:: m_bAdded](#m_badded)|Specifica se il fotogramma chiave è stato aggiunto a uno storyboard.|
|[CBaseKeyFrame:: m_bIsKeyframeAtOffset](#m_biskeyframeatoffset)|Specifica se il fotogramma chiave deve essere aggiunto allo storyboard in corrispondenza di un offset da un altro fotogramma chiave esistente o alla fine di una transizione.|
|[CBaseKeyFrame:: m_keyframe](#m_keyframe)|Rappresenta un fotogramma chiave dell'API di animazione Windows. Quando un fotogramma chiave non è inizializzato, viene impostato sul valore predefinito UI_ANIMATION_KEYFRAME_STORYBOARD_START.|

## <a name="remarks"></a>Commenti

Incapsula UI_ANIMATION_KEYFRAME variabile. Funge da classe base per qualsiasi implementazione del fotogramma chiave. Un fotogramma chiave rappresenta un momento nel tempo all'interno di uno storyboard e può essere usato per specificare l'ora di inizio e di fine delle transizioni. Sono disponibili due tipi di fotogrammi chiave: i fotogrammi chiave sono stati aggiunti allo storyboard in corrispondenza dell'offset specificato (nel tempo) oppure i fotogrammi chiave sono stati aggiunti dopo la transizione specificata. Poiché le durate di alcune transizioni non possono essere note prima che l'animazione venga avviata, i valori effettivi di alcuni fotogrammi chiave vengono determinati solo in fase di esecuzione. Poiché i fotogrammi chiave possono dipendere da transizioni, che a loro volta dipendono da fotogrammi chiave, è importante impedire ricorsioni infinite durante la compilazione di catene di fotogrammi chiave.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CBaseKeyFrame`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

## <a name="cbasekeyframeaddtostoryboard"></a><a name="addtostoryboard"></a> CBaseKeyFrame:: AddToStoryboard

Aggiunge un fotogramma chiave allo storyboard.

```
virtual BOOL AddToStoryboard(
    IUIAnimationStoryboard* pStoryboard,
    BOOL bDeepAdd);
```

### <a name="parameters"></a>Parametri

*pStoryboard*<br/>
Puntatore a uno storyboard.

*bDeepAdd*<br/>
Se questo parametro è TRUE e il fotogramma chiave aggiunto dipende da un altro fotogramma chiave o da una transizione, questo metodo tenta di aggiungere prima questo fotogramma chiave o la transizione allo storyboard.

### <a name="return-value"></a>Valore restituito

TRUE se il fotogramma chiave è stato aggiunto correttamente allo storyboard; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Questo metodo viene chiamato per aggiungere un fotogramma chiave allo storyboard.

## <a name="cbasekeyframecbasekeyframe"></a><a name="cbasekeyframe"></a> CBaseKeyFrame:: CBaseKeyFrame

Costruisce un oggetto fotogramma chiave.

```
CBaseKeyFrame();
```

## <a name="cbasekeyframegetanimationkeyframe"></a><a name="getanimationkeyframe"></a> CBaseKeyFrame:: GetAnimationKeyframe

Restituisce il valore del fotogramma chiave sottostante.

```
UI_ANIMATION_KEYFRAME GetAnimationKeyframe() const;
```

### <a name="return-value"></a>Valore restituito

Fotogramma chiave corrente. Il valore predefinito è UI_ANIMATION_KEYFRAME_STORYBOARD_START.

### <a name="remarks"></a>Commenti

Si tratta di una funzione di accesso al valore del fotogramma chiave sottostante.

## <a name="cbasekeyframeisadded"></a><a name="isadded"></a> CBaseKeyFrame:: è stato aggiunto

Indica se un fotogramma chiave è stato aggiunto allo storyboard.

```
BOOL IsAdded() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se un fotogramma chiave viene aggiunto a uno storyboard. otehrwise FALSE.

### <a name="remarks"></a>Commenti

Nella classe di base, l'oggetto restituisce sempre TRUE, ma viene sottoposto a override nelle classi derivate.

## <a name="cbasekeyframeiskeyframeatoffset"></a><a name="iskeyframeatoffset"></a> CBaseKeyFrame:: IsKeyframeAtOffset

Specifica se il fotogramma chiave deve essere aggiunto allo storyboard in corrispondenza dell'offset o dopo la transizione.

```
BOOL IsKeyframeAtOffset() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se il fotogramma chiave deve essere aggiunto allo storyboard in corrispondenza di un offset specificato. FALSE se il fotogramma chiave deve essere aggiunto allo storyboard dopo una transizione.

### <a name="remarks"></a>Commenti

Specifica se il fotogramma chiave deve essere aggiunto allo storyboard in corrispondenza dell'offset. È necessario specificare l'offset o la transizione in una classe derivata.

## <a name="cbasekeyframem_badded"></a><a name="m_badded"></a> CBaseKeyFrame:: m_bAdded

Specifica se il fotogramma chiave è stato aggiunto a uno storyboard.

```
BOOL m_bAdded;
```

## <a name="cbasekeyframem_biskeyframeatoffset"></a><a name="m_biskeyframeatoffset"></a> CBaseKeyFrame:: m_bIsKeyframeAtOffset

Specifica se il fotogramma chiave deve essere aggiunto allo storyboard in corrispondenza di un offset da un altro fotogramma chiave esistente o alla fine di una transizione.

```
BOOL m_bIsKeyframeAtOffset;
```

## <a name="cbasekeyframem_keyframe"></a><a name="m_keyframe"></a> CBaseKeyFrame:: m_keyframe

Rappresenta un fotogramma chiave dell'API di animazione Windows. Quando un fotogramma chiave non è inizializzato, viene impostato sul valore predefinito UI_ANIMATION_KEYFRAME_STORYBOARD_START.

```
UI_ANIMATION_KEYFRAME m_keyframe;
```

## <a name="see-also"></a>Vedi anche

[Classi](../../mfc/reference/mfc-classes.md)
