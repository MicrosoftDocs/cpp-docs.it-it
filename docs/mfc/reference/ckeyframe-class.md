---
description: 'Altre informazioni su: Classe CKeyFrame'
title: Classe CKeyFrame
ms.date: 11/04/2016
f1_keywords:
- CKeyFrame
- AFXANIMATIONCONTROLLER/CKeyFrame
- AFXANIMATIONCONTROLLER/CKeyFrame::CKeyFrame
- AFXANIMATIONCONTROLLER/CKeyFrame::AddToStoryboard
- AFXANIMATIONCONTROLLER/CKeyFrame::AddToStoryboardAfterTransition
- AFXANIMATIONCONTROLLER/CKeyFrame::AddToStoryboardAtOffset
- AFXANIMATIONCONTROLLER/CKeyFrame::GetExistingKeyframe
- AFXANIMATIONCONTROLLER/CKeyFrame::GetOffset
- AFXANIMATIONCONTROLLER/CKeyFrame::GetTransition
- AFXANIMATIONCONTROLLER/CKeyFrame::m_offset
- AFXANIMATIONCONTROLLER/CKeyFrame::m_pExistingKeyFrame
- AFXANIMATIONCONTROLLER/CKeyFrame::m_pTransition
helpviewer_keywords:
- CKeyFrame [MFC], CKeyFrame
- CKeyFrame [MFC], AddToStoryboard
- CKeyFrame [MFC], AddToStoryboardAfterTransition
- CKeyFrame [MFC], AddToStoryboardAtOffset
- CKeyFrame [MFC], GetExistingKeyframe
- CKeyFrame [MFC], GetOffset
- CKeyFrame [MFC], GetTransition
- CKeyFrame [MFC], m_offset
- CKeyFrame [MFC], m_pExistingKeyFrame
- CKeyFrame [MFC], m_pTransition
ms.assetid: d050a562-20f6-4c65-8ce5-ccb3aef1a20e
ms.openlocfilehash: ec6aa45484965afbf0c636a1eed26a3d4a63e426
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97236880"
---
# <a name="ckeyframe-class"></a>Classe CKeyFrame

Rappresenta un fotogramma chiave di animazione.

## <a name="syntax"></a>Sintassi

```
class CKeyFrame : public CBaseKeyFrame;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CKeyFrame:: CKeyFrame](#ckeyframe)|Di overload. Costruisce un fotogramma chiave che dipende da un altro fotogramma chiave.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CKeyFrame:: AddToStoryboard](#addtostoryboard)|Aggiunge un fotogramma chiave a uno storyboard. Esegue l'override di [CBaseKeyFrame:: AddToStoryboard](../../mfc/reference/cbasekeyframe-class.md#addtostoryboard).|
|[CKeyFrame:: AddToStoryboardAfterTransition](#addtostoryboardaftertransition)|Aggiunge un fotogramma chiave allo storyboard dopo la transizione.|
|[CKeyFrame:: AddToStoryboardAtOffset](#addtostoryboardatoffset)|Aggiunge un fotogramma chiave allo storyboard in corrispondenza dell'offset.|
|[CKeyFrame:: GetExistingKeyframe](#getexistingkeyframe)|Restituisce un puntatore a un fotogramma chiave da cui dipende questo fotogramma chiave.|
|[CKeyFrame:: GetOffset](#getoffset)|Restituisce un offset da un altro fotogramma chiave.|
|[CKeyFrame:: GetTransition](#gettransition)|Restituisce un puntatore a una transizione da cui dipende questo fotogramma chiave.|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Description|
|----------|-----------------|
|[CKeyFrame:: m_offset](#m_offset)|Specifica l'offset del fotogramma chiave da un fotogramma chiave archiviato in m_pExistingKeyFrame.|
|[CKeyFrame:: m_pExistingKeyFrame](#m_pexistingkeyframe)|Archivia un puntatore a un keframe esistente. Questo fotogramma chiave viene aggiunto allo storyboard con m_offset al fotogramma chiave esistente.|
|[CKeyFrame:: m_pTransition](#m_ptransition)|Archivia un puntatore alla trasposizione che inizia in corrispondenza di questo fotogramma chiave.|

## <a name="remarks"></a>Commenti

Questa classe implementa un fotogramma chiave di animazione. Un fotogramma chiave rappresenta un momento nel tempo all'interno di uno storyboard e può essere usato per specificare l'ora di inizio e di fine delle transizioni. Un fotogramma chiave può essere basato su un altro fotogramma chiave e avere un offset (in secondi), oppure può essere basato su una transizione e rappresentare un momento nel tempo in cui termina questa transizione.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CBaseKeyFrame](../../mfc/reference/cbasekeyframe-class.md)

[CKeyFrame](../../mfc/reference/ckeyframe-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

## <a name="ckeyframeaddtostoryboard"></a><a name="addtostoryboard"></a> CKeyFrame:: AddToStoryboard

Aggiunge un fotogramma chiave a uno storyboard.

```
virtual BOOL AddToStoryboard(
    IUIAnimationStoryboard* pStoryboard,
    BOOL bDeepAdd);
```

### <a name="parameters"></a>Parametri

*pStoryboard*<br/>
Puntatore a uno storyboard.

*bDeepAdd*<br/>
Specifica se aggiungere un fotogramma chiave o una transizione in modo ricorsivo.

### <a name="return-value"></a>Valore restituito

TRUE se il fotogramma chiave è stato aggiunto correttamente.

### <a name="remarks"></a>Commenti

Questo metodo aggiunge un fotogramma chiave allo storyboard. Se dipende da altro fotogramma chiave o transizione e bDeepAdd è TRUE, questo metodo tenta di aggiungerli in modo ricorsivo.

## <a name="ckeyframeaddtostoryboardaftertransition"></a><a name="addtostoryboardaftertransition"></a> CKeyFrame:: AddToStoryboardAfterTransition

Aggiunge un fotogramma chiave allo storyboard dopo la transizione.

```
BOOL AddToStoryboardAfterTransition(
    IUIAnimationStoryboard* pStoryboard,
    BOOL bDeepAdd);
```

### <a name="parameters"></a>Parametri

*pStoryboard*<br/>
Puntatore a uno storyboard.

*bDeepAdd*<br/>
Specifica se aggiungere una transizione in modo ricorsivo.

### <a name="return-value"></a>Valore restituito

TRUE se il fotogramma chiave è stato aggiunto correttamente.

### <a name="remarks"></a>Commenti

Questa funzione viene chiamata dal Framework per aggiungere un fotogramma chiave allo storyboard dopo la transizione.

## <a name="ckeyframeaddtostoryboardatoffset"></a><a name="addtostoryboardatoffset"></a> CKeyFrame:: AddToStoryboardAtOffset

Aggiunge un fotogramma chiave allo storyboard in corrispondenza dell'offset.

```
virtual BOOL AddToStoryboardAtOffset(
    IUIAnimationStoryboard* pStoryboard,
    BOOL bDeepAdd);
```

### <a name="parameters"></a>Parametri

*pStoryboard*<br/>
Puntatore a uno storyboard.

*bDeepAdd*<br/>
Specifica se aggiungere un fotogramma chiave questo fotogramma chiave dipenda in modo ricorsivo.

### <a name="return-value"></a>Valore restituito

TRUE se il fotogramma chiave è stato aggiunto correttamente.

### <a name="remarks"></a>Commenti

Questa funzione viene chiamata dal Framework per aggiungere un fotogramma chiave allo storyboard in corrispondenza dell'offset.

## <a name="ckeyframeckeyframe"></a><a name="ckeyframe"></a> CKeyFrame:: CKeyFrame

Costruisce un fotogramma chiave che dipende da una transizione.

```
CKeyFrame(CBaseTransition* pTransition);

CKeyFrame(
    CBaseKeyFrame* pKeyframe,
    UI_ANIMATION_SECONDS offset = 0.0);
```

### <a name="parameters"></a>Parametri

*pTransition*<br/>
Puntatore a una transizione.

*pKeyframe*<br/>
Puntatore al fotogramma chiave.

*offset*<br/>
Offset, in secondi, dal fotogramma chiave specificato da pKeyframe.

### <a name="remarks"></a>Commenti

Il fotogramma chiave costruito rappresenterà un momento nel tempo all'interno di uno storyboard al termine della transizione specificata.

## <a name="ckeyframegetexistingkeyframe"></a><a name="getexistingkeyframe"></a> CKeyFrame:: GetExistingKeyframe

Restituisce un puntatore a un fotogramma chiave da cui dipende questo fotogramma chiave.

```
CBaseKeyFrame* GetExistingKeyframe();
```

### <a name="return-value"></a>Valore restituito

Puntatore valido al fotogramma chiave o NULL se questo fotogramma chiave non dipende da un altro fotogramma chiave.

### <a name="remarks"></a>Commenti

Si tratta di una funzione di accesso a un fotogramma chiave da cui dipende questo fotogramma chiave.

## <a name="ckeyframegetoffset"></a><a name="getoffset"></a> CKeyFrame:: GetOffset

Restituisce un offset da un altro fotogramma chiave.

```
UI_ANIMATION_SECONDS GetOffset();
```

### <a name="return-value"></a>Valore restituito

Offset in secondi rispetto a un altro fotogramma chiave.

### <a name="remarks"></a>Commenti

Questo metodo deve essere chiamato per determinare un offset in secondi rispetto ad altri fotogrammi chiave.

## <a name="ckeyframegettransition"></a><a name="gettransition"></a> CKeyFrame:: GetTransition

Restituisce un puntatore a una transizione da cui dipende questo fotogramma chiave.

```
CBaseTransition* GetTransition();
```

### <a name="return-value"></a>Valore restituito

Puntatore valido alla transizione o NULL se il fotogramma chiave non dipende dalla transizione.

### <a name="remarks"></a>Commenti

Si tratta di una funzione di accesso a una transizione da cui dipende questo fotogramma chiave.

## <a name="ckeyframem_offset"></a><a name="m_offset"></a> CKeyFrame:: m_offset

Specifica l'offset del fotogramma chiave da un fotogramma chiave archiviato in m_pExistingKeyFrame.

```
UI_ANIMATION_SECONDS m_offset;
```

## <a name="ckeyframem_pexistingkeyframe"></a><a name="m_pexistingkeyframe"></a> CKeyFrame:: m_pExistingKeyFrame

Archivia un puntatore a un keframe esistente. Questo fotogramma chiave viene aggiunto allo storyboard con m_offset al fotogramma chiave esistente.

```
CBaseKeyFrame* m_pExistingKeyFrame;
```

## <a name="ckeyframem_ptransition"></a><a name="m_ptransition"></a> CKeyFrame:: m_pTransition

Archivia un puntatore alla trasposizione che inizia in corrispondenza di questo fotogramma chiave.

```
CBaseTransition* m_pTransition;
```

## <a name="see-also"></a>Vedi anche

[Classi](../../mfc/reference/mfc-classes.md)
