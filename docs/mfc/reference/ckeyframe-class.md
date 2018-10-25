---
title: Classe CKeyFrame | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 70301284e306a2d207876eead82ad787684809ce
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50055528"
---
# <a name="ckeyframe-class"></a>Classe CKeyFrame

Rappresenta un fotogramma chiave di animazione.

## <a name="syntax"></a>Sintassi

```
class CKeyFrame : public CBaseKeyFrame;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CKeyFrame::CKeyFrame](#ckeyframe)|Di overload. Costruisce un fotogramma chiave che dipende da altri fotogrammi chiave.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CKeyFrame::AddToStoryboard](#addtostoryboard)|Aggiunge un fotogramma chiave di uno storyboard. (Esegue l'override [CBaseKeyFrame:: AddToStoryboard](../../mfc/reference/cbasekeyframe-class.md#addtostoryboard).)|
|[CKeyFrame::AddToStoryboardAfterTransition](#addtostoryboardaftertransition)|Aggiunge un fotogramma chiave nello storyboard dopo la transizione.|
|[CKeyFrame::AddToStoryboardAtOffset](#addtostoryboardatoffset)|Aggiunge un fotogramma chiave per creare uno storyboard in corrispondenza dell'offset.|
|[CKeyFrame::GetExistingKeyframe](#getexistingkeyframe)|Restituisce un puntatore a un fotogramma chiave che dipende da questo fotogramma chiave.|
|[CKeyFrame::GetOffset](#getoffset)|Restituisce un offset da altri fotogrammi chiave.|
|[CKeyFrame::GetTransition](#gettransition)|Restituisce un puntatore a una transizione che dipende da questo fotogramma chiave.|

### <a name="protected-data-members"></a>Membri dati protetti

|nome|Descrizione|
|----------|-----------------|
|[CKeyFrame::m_offset](#m_offset)|Specifica l'offset di questo fotogramma chiave da un fotogramma chiave archiviato in m_pExistingKeyFrame.|
|[CKeyFrame::m_pExistingKeyFrame](#m_pexistingkeyframe)|Archivia un puntatore a un fotogramma chiave esistente. Questo fotogramma chiave viene aggiunta allo storyboard con m_offset al fotogramma chiave esistente.|
|[CKeyFrame::m_pTransition](#m_ptransition)|Archivia un puntatore a una transizione che inizia in corrispondenza di questo fotogramma chiave.|

## <a name="remarks"></a>Note

Questa classe implementa un fotogramma chiave di animazione. Un fotogramma chiave rappresenta un momento specifico all'interno di uno storyboard e può essere utilizzato per specificare l'ora di inizio e fine delle transizioni. Un fotogramma chiave può essere basato su altri fotogrammi chiave e avere un offset (in secondi), o può essere basato su una transizione e rappresenta un istante nel momento in cui termina questa transizione.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CBaseKeyFrame](../../mfc/reference/cbasekeyframe-class.md)

[CKeyFrame](../../mfc/reference/ckeyframe-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxanimationcontroller.h

##  <a name="addtostoryboard"></a>  CKeyFrame::AddToStoryboard

Aggiunge un fotogramma chiave di uno storyboard.

```
virtual BOOL AddToStoryboard(
    IUIAnimationStoryboard* pStoryboard,
    BOOL bDeepAdd);
```

### <a name="parameters"></a>Parametri

*pStoryboard*<br/>
Puntatore a uno storyboard.

*bDeepAdd è impostato su*<br/>
Specifica se aggiungere fotogrammi chiave o una transizione in modo ricorsivo.

### <a name="return-value"></a>Valore restituito

TRUE se fotogramma chiave è stato aggiunto correttamente.

### <a name="remarks"></a>Note

Questo metodo aggiunge un fotogramma chiave nello storyboard. Se dipende altri fotogrammi chiave o una transizione e bDeepAdd è impostato su TRUE, questo metodo prova a aggiungerli in modo ricorsivo.

##  <a name="addtostoryboardaftertransition"></a>  CKeyFrame::AddToStoryboardAfterTransition

Aggiunge un fotogramma chiave nello storyboard dopo la transizione.

```
BOOL AddToStoryboardAfterTransition(
    IUIAnimationStoryboard* pStoryboard,
    BOOL bDeepAdd);
```

### <a name="parameters"></a>Parametri

*pStoryboard*<br/>
Puntatore a uno storyboard.

*bDeepAdd è impostato su*<br/>
Se si desidera aggiungere in modo ricorsivo una transizione specifica.

### <a name="return-value"></a>Valore restituito

TRUE se fotogramma chiave è stato aggiunto correttamente.

### <a name="remarks"></a>Note

Questa funzione viene chiamata dal framework per aggiungere un fotogramma chiave nello storyboard dopo la transizione.

##  <a name="addtostoryboardatoffset"></a>  CKeyFrame::AddToStoryboardAtOffset

Aggiunge un fotogramma chiave per creare uno storyboard in corrispondenza dell'offset.

```
virtual BOOL AddToStoryboardAtOffset(
    IUIAnimationStoryboard* pStoryboard,
    BOOL bDeepAdd);
```

### <a name="parameters"></a>Parametri

*pStoryboard*<br/>
Puntatore a uno storyboard.

*bDeepAdd è impostato su*<br/>
Specifica se aggiungere un fotogramma chiave questo fotogramma chiave dipende da in modo ricorsivo.

### <a name="return-value"></a>Valore restituito

TRUE se fotogramma chiave è stato aggiunto correttamente.

### <a name="remarks"></a>Note

Questa funzione viene chiamata dal framework per aggiungere un fotogramma chiave per creare uno storyboard in corrispondenza dell'offset.

##  <a name="ckeyframe"></a>  CKeyFrame::CKeyFrame

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
Offset, in secondi dal fotogramma chiave specificato da pKeyframe.

### <a name="remarks"></a>Note

Al termine della transizione specificata, il fotogramma chiave costruito rappresenterà un momento specifico all'interno di uno storyboard.

##  <a name="getexistingkeyframe"></a>  CKeyFrame::GetExistingKeyframe

Restituisce un puntatore a un fotogramma chiave che dipende da questo fotogramma chiave.

```
CBaseKeyFrame* GetExistingKeyframe();
```

### <a name="return-value"></a>Valore restituito

Un puntatore valido a fotogramma chiave, o NULL se questo fotogramma chiave dipende da altri fotogrammi chiave.

### <a name="remarks"></a>Note

Si tratta di una funzione di accesso a un fotogramma chiave che dipende da questo fotogramma chiave.

##  <a name="getoffset"></a>  CKeyFrame::GetOffset

Restituisce un offset da altri fotogrammi chiave.

```
UI_ANIMATION_SECONDS GetOffset();
```

### <a name="return-value"></a>Valore restituito

Un offset espresso in secondi da altro fotogramma chiave.

### <a name="remarks"></a>Note

Questo metodo deve essere chiamato per determinare un offset espresso in secondi da altro fotogramma chiave.

##  <a name="gettransition"></a>  CKeyFrame::GetTransition

Restituisce un puntatore a una transizione che dipende da questo fotogramma chiave.

```
CBaseTransition* GetTransition();
```

### <a name="return-value"></a>Valore restituito

Un puntatore valido a una transizione o NULL se questo fotogramma chiave dipende transizione.

### <a name="remarks"></a>Note

Si tratta di una funzione di accesso a una transizione che dipende da questo fotogramma chiave.

##  <a name="m_offset"></a>  CKeyFrame::m_offset

Specifica l'offset di questo fotogramma chiave da un fotogramma chiave archiviato in m_pExistingKeyFrame.

```
UI_ANIMATION_SECONDS m_offset;
```

##  <a name="m_pexistingkeyframe"></a>  CKeyFrame::m_pExistingKeyFrame

Archivia un puntatore a un fotogramma chiave esistente. Questo fotogramma chiave viene aggiunta allo storyboard con m_offset al fotogramma chiave esistente.

```
CBaseKeyFrame* m_pExistingKeyFrame;
```

##  <a name="m_ptransition"></a>  CKeyFrame::m_pTransition

Archivia un puntatore a una transizione che inizia in corrispondenza di questo fotogramma chiave.

```
CBaseTransition* m_pTransition;
```

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)
