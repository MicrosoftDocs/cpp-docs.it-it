---
title: Classe CKeyFrame | Documenti Microsoft
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
ms.openlocfilehash: 56fa354a46e40704ac063791931ca01d1386a558
ms.sourcegitcommit: f1b051abb1de3fe96350be0563aaf4e960da13c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/27/2018
ms.locfileid: "37038458"
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
|[CKeyFrame::AddToStoryboardAtOffset](#addtostoryboardatoffset)|Aggiunge un fotogramma chiave nello storyboard in corrispondenza dell'offset.|  
|[CKeyFrame::GetExistingKeyframe](#getexistingkeyframe)|Restituisce un puntatore a un fotogramma chiave che dipende da questo fotogramma chiave.|  
|[CKeyFrame::GetOffset](#getoffset)|Restituisce un offset da altro fotogramma chiave.|  
|[CKeyFrame::GetTransition](#gettransition)|Restituisce un puntatore a una transizione che dipende da questo fotogramma chiave.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|nome|Descrizione|  
|----------|-----------------|  
|[CKeyFrame::m_offset](#m_offset)|Specifica l'offset di questo fotogramma chiave da un fotogramma chiave archiviato in m_pExistingKeyFrame.|  
|[CKeyFrame::m_pExistingKeyFrame](#m_pexistingkeyframe)|Archivia un puntatore a un fotogramma chiave esistente. Viene aggiunto questo fotogramma chiave in uno storyboard con m_offset al fotogramma chiave esistente.|  
|[CKeyFrame::m_pTransition](#m_ptransition)|Archivia un puntatore a una transizione che inizia in corrispondenza di questo fotogramma chiave.|  
  
## <a name="remarks"></a>Note  
 Questa classe implementa un fotogramma chiave di animazione. Un fotogramma chiave rappresenta un istante nel tempo all'interno di uno storyboard e può essere usato per specificare l'ora di inizio e fine delle transizioni. Un fotogramma chiave può essere basato su altri fotogrammi chiave hanno offset (in secondi) da quest'ultimo, o può essere basato su una transizione e rappresenta un momento in cui termina questa transizione.  
  
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
 *pStoryboard*  
 Puntatore a uno storyboard.  
  
 *bDeepAdd è impostato su*  
 Specifica se aggiungere fotogrammi chiave o una transizione in modo ricorsivo.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se è stato aggiunto correttamente fotogramma chiave.  
  
### <a name="remarks"></a>Note  
 Questo metodo aggiunge un fotogramma chiave allo storyboard. Se dipende altri fotogrammi chiave o una transizione e bDeepAdd è impostato su TRUE, questo metodo tenta di aggiungerli in modo ricorsivo.  
  
##  <a name="addtostoryboardaftertransition"></a>  CKeyFrame::AddToStoryboardAfterTransition  
 Aggiunge un fotogramma chiave nello storyboard dopo la transizione.  
  
```  
BOOL AddToStoryboardAfterTransition(
    IUIAnimationStoryboard* pStoryboard,  
    BOOL bDeepAdd);
```  
  
### <a name="parameters"></a>Parametri  
 *pStoryboard*  
 Puntatore a uno storyboard.  
  
 *bDeepAdd è impostato su*  
 Specifica se aggiungere in modo ricorsivo una transizione.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se è stato aggiunto correttamente fotogramma chiave.  
  
### <a name="remarks"></a>Note  
 Questa funzione viene chiamata dal framework per aggiungere un fotogramma chiave nello storyboard dopo la transizione.  
  
##  <a name="addtostoryboardatoffset"></a>  CKeyFrame::AddToStoryboardAtOffset  
 Aggiunge un fotogramma chiave nello storyboard in corrispondenza dell'offset.  
  
```  
virtual BOOL AddToStoryboardAtOffset(
    IUIAnimationStoryboard* pStoryboard,  
    BOOL bDeepAdd);
```  
  
### <a name="parameters"></a>Parametri  
 *pStoryboard*  
 Puntatore a uno storyboard.  
  
 *bDeepAdd è impostato su*  
 Specifica se aggiungere un fotogramma chiave di questo fotogramma chiave dipende da in modo ricorsivo.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se è stato aggiunto correttamente fotogramma chiave.  
  
### <a name="remarks"></a>Note  
 Questa funzione viene chiamata dal framework per aggiungere un fotogramma chiave nello storyboard in corrispondenza dell'offset.  
  
##  <a name="ckeyframe"></a>  CKeyFrame::CKeyFrame  
 Costruisce un fotogramma chiave che dipende da una transizione.  
  
```  
CKeyFrame(CBaseTransition* pTransition);

 
CKeyFrame(
    CBaseKeyFrame* pKeyframe,  
    UI_ANIMATION_SECONDS offset = 0.0);
```  
  
### <a name="parameters"></a>Parametri  
 *pTransition*  
 Un puntatore a una transizione.  
  
 *pKeyframe*  
 Un puntatore al fotogramma chiave.  
  
 *offset*  
 Offset, in secondi dal fotogramma chiave specificato da pKeyframe.  
  
### <a name="remarks"></a>Note  
 Al termine della transizione specificata, il fotogramma chiave costruito rappresenterà un momento specifico all'interno di uno storyboard.  
  
##  <a name="getexistingkeyframe"></a>  CKeyFrame::GetExistingKeyframe  
 Restituisce un puntatore a un fotogramma chiave che dipende da questo fotogramma chiave.  
  
```  
CBaseKeyFrame* GetExistingKeyframe();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore valido a fotogramma chiave, o NULL se questo fotogramma chiave non dipende da altri fotogrammi chiave.  
  
### <a name="remarks"></a>Note  
 Si tratta di una funzione di accesso a un fotogramma chiave che dipende da questo fotogramma chiave.  
  
##  <a name="getoffset"></a>  CKeyFrame::GetOffset  
 Restituisce un offset da altro fotogramma chiave.  
  
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
 Archivia un puntatore a un fotogramma chiave esistente. Viene aggiunto questo fotogramma chiave in uno storyboard con m_offset al fotogramma chiave esistente.  
  
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
