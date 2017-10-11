---
title: Classe CBaseKeyFrame | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
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
dev_langs:
- C++
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
caps.latest.revision: 17
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 4a770b6508067913aec51b8b3878f33e30eed4bb
ms.openlocfilehash: 33c964dac3541df90fea98f71a13e9b99d85a232
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

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
|[CBaseKeyFrame:: AddToStoryboard](#addtostoryboard)|Aggiunge un fotogramma chiave allo storyboard.|  
|[CBaseKeyFrame::GetAnimationKeyframe](#getanimationkeyframe)|Restituisce il valore del fotogramma chiave sottostante.|  
|[CBaseKeyFrame::IsAdded](#isadded)|Indica se è stato aggiunto un fotogramma chiave allo storyboard.|  
|[CBaseKeyFrame::IsKeyframeAtOffset](#iskeyframeatoffset)|Specifica se il fotogramma chiave deve essere aggiunto allo storyboard offset o dopo la transizione.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CBaseKeyFrame::m_bAdded](#m_badded)|Specifica se è stato aggiunto questo fotogramma chiave di uno storyboard.|  
|[CBaseKeyFrame::m_bIsKeyframeAtOffset](#m_biskeyframeatoffset)|Specifica se questo fotogramma chiave deve essere aggiunto allo storyboard in un offset da un altro fotogramma chiave esistente o alla fine di qualche transizione.|  
|[CBaseKeyFrame::m_keyframe](#m_keyframe)|Rappresenta un fotogramma chiave API di animazione Windows. Quando non viene inizializzato un fotogramma chiave è impostato per il valore UI_ANIMATION_KEYFRAME_STORYBOARD_START predefinito.|  
  
## <a name="remarks"></a>Note  
 Incapsula la variabile UI_ANIMATION_KEYFRAME. Funge da classe base per qualsiasi implementazione del fotogramma chiave. Un fotogramma chiave rappresenta un istante nel tempo all'interno di uno storyboard e può essere usato per specificare l'ora di inizio e fine delle transizioni. Esistono due tipi di fotogrammi chiave: i fotogrammi chiave aggiunti allo storyboard in corrispondenza dell'offset specificato (in tempo) o i fotogrammi chiave aggiunti dopo la transizione specificata. Poiché non è possibile conoscere la durata di alcune transizioni prima dell'inizio di animazione, i valori effettivi di alcuni fotogrammi chiave vengono determinati in fase di esecuzione solo. Perché i fotogrammi chiave potrebbero dipendere transizioni, che a loro volta dipendono dai fotogrammi chiave, è importante impedire ricorsioni infinite durante la compilazione di catene del fotogramma chiave.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CBaseKeyFrame`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxanimationcontroller.h  
  
##  <a name="addtostoryboard"></a>CBaseKeyFrame:: AddToStoryboard  
 Aggiunge un fotogramma chiave allo storyboard.  
  
```  
virtual BOOL AddToStoryboard(
    IUIAnimationStoryboard* pStoryboard,  
    BOOL bDeepAdd);
```  
  
### <a name="parameters"></a>Parametri  
 `pStoryboard`  
 Puntatore a uno storyboard.  
  
 `bDeepAdd`  
 Se questo parametro è TRUE e il fotogramma chiave da aggiungere dipende da un altro fotogramma chiave o una transizione, questo metodo tenta di aggiungere questo fotogramma chiave o una transizione allo storyboard prima.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il fotogramma chiave è stato aggiunto allo storyboard. in caso contrario FALSE.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato per aggiungere un fotogramma chiave allo storyboard.  
  
##  <a name="cbasekeyframe"></a>CBaseKeyFrame::CBaseKeyFrame  
 Costruisce un oggetto fotogramma chiave.  
  
```  
CBaseKeyFrame();
```  
  
##  <a name="getanimationkeyframe"></a>CBaseKeyFrame::GetAnimationKeyframe  
 Restituisce il valore del fotogramma chiave sottostante.  
  
```  
UI_ANIMATION_KEYFRAME GetAnimationKeyframe() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Fotogramma chiave corrente. Il valore predefinito è UI_ANIMATION_KEYFRAME_STORYBOARD_START.  
  
### <a name="remarks"></a>Note  
 Si tratta di una funzione di accesso per il valore del fotogramma chiave sottostante.  
  
##  <a name="isadded"></a>CBaseKeyFrame::IsAdded  
 Indica se è stato aggiunto un fotogramma chiave allo storyboard.  
  
```  
BOOL IsAdded() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se viene aggiunto un fotogramma chiave di uno storyboard; in caso contrario FALSE.  
  
### <a name="remarks"></a>Note  
 Nella classe base IsAdded restituisce sempre TRUE, ma viene sottoposto a override nelle classi derivate.  
  
##  <a name="iskeyframeatoffset"></a>CBaseKeyFrame::IsKeyframeAtOffset  
 Specifica se il fotogramma chiave deve essere aggiunto allo storyboard offset o dopo la transizione.  
  
```  
BOOL IsKeyframeAtOffset() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il fotogramma chiave deve essere aggiunto allo storyboard in corrispondenza di un offset specificato. FALSE se il fotogramma chiave deve essere aggiunto allo storyboard dopo la transizione.  
  
### <a name="remarks"></a>Note  
 Specifica se il fotogramma chiave deve essere aggiunto allo storyboard all'offset. L'offset o una transizione deve essere specificata in una classe derivata.  
  
##  <a name="m_badded"></a>CBaseKeyFrame::m_bAdded  
 Specifica se è stato aggiunto questo fotogramma chiave di uno storyboard.  
  
```  
BOOL m_bAdded;  
```  
  
##  <a name="m_biskeyframeatoffset"></a>CBaseKeyFrame::m_bIsKeyframeAtOffset  
 Specifica se questo fotogramma chiave deve essere aggiunto allo storyboard in un offset da un altro fotogramma chiave esistente o alla fine di qualche transizione.  
  
```  
BOOL m_bIsKeyframeAtOffset;  
```  
  
##  <a name="m_keyframe"></a>CBaseKeyFrame::m_keyframe  
 Rappresenta un fotogramma chiave API di animazione Windows. Quando non viene inizializzato un fotogramma chiave è impostato per il valore UI_ANIMATION_KEYFRAME_STORYBOARD_START predefinito.  
  
```  
UI_ANIMATION_KEYFRAME m_keyframe;  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)

