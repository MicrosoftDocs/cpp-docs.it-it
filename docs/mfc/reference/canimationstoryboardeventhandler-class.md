---
title: Classe CAnimationStoryboardEventHandler | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- afxanimationcontroller/CAnimationStoryboardEventHandler
- CAnimationStoryboardEventHandler
dev_langs:
- C++
helpviewer_keywords:
- CAnimationStoryboardEventHandler class
ms.assetid: 10a7e86b-c02d-4124-9a2e-61ecf8ac62fc
caps.latest.revision: 18
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 5a0c6a1062330f952bb8fa52bc934f6754465513
ms.openlocfilehash: bda8b0c941fd833bf821b563f4ca59cab9598cb8
ms.lasthandoff: 02/24/2017

---
# <a name="canimationstoryboardeventhandler-class"></a>Classe CAnimationStoryboardEventHandler
Implementa un callback, chiamato dall'API di animazione quando viene modificato lo stato di uno storyboard o viene aggiornato uno storyboard.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CAnimationStoryboardEventHandler : public CUIAnimationStoryboardEventHandlerBase<CAnimationStoryboardEventHandler>;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationStoryboardEventHandler::CAnimationStoryboardEventHandler](#canimationstoryboardeventhandler)|Costruisce un oggetto `CAnimationStoryboardEventHandler`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationStoryboardEventHandler::CreateInstance](#createinstance)|Crea un'istanza di `CAnimationStoryboardEventHandler` callback.|  
|[CAnimationStoryboardEventHandler::OnStoryboardStatusChanged](#onstoryboardstatuschanged)|Gestisce `OnStoryboardStatusChanged` che si verificano quando cambia lo stato di uno storyboard (esegue l'override di `CUIAnimationStoryboardEventHandlerBase::OnStoryboardStatusChanged`.)|  
|[CAnimationStoryboardEventHandler::OnStoryboardUpdated](#onstoryboardupdated)|Gestisce `OnStoryboardUpdated` che si verificano quando viene aggiornato uno storyboard (esegue l'override di `CUIAnimationStoryboardEventHandlerBase::OnStoryboardUpdated`.)|  
|[CAnimationStoryboardEventHandler::SetAnimationController](#setanimationcontroller)|Archivia un puntatore al controller di animazione l'invio di eventi.|  
  
## <a name="remarks"></a>Note  
 Questo gestore eventi viene creato e passato a `IUIAnimationStoryboard::SetStoryboardEventHandler` (metodo), quando si chiama `CAnimationController::EnableStoryboardEventHandler`.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CUIAnimationCallbackBase`  
  
 `CUIAnimationStoryboardEventHandlerBase`  
  
 `CAnimationStoryboardEventHandler`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxanimationcontroller.h  
  
##  <a name="a-namecanimationstoryboardeventhandlera--canimationstoryboardeventhandlercanimationstoryboardeventhandler"></a><a name="canimationstoryboardeventhandler"></a>CAnimationStoryboardEventHandler::CAnimationStoryboardEventHandler  
 Costruisce un oggetto CAnimationStoryboardEventHandler.  
  
```  
CAnimationStoryboardEventHandler();
```  
  
##  <a name="a-namecreateinstancea--canimationstoryboardeventhandlercreateinstance"></a><a name="createinstance"></a>CAnimationStoryboardEventHandler::CreateInstance  
 Crea un'istanza di callback CAnimationStoryboardEventHandler.  
  
```  
static COM_DECLSPEC_NOTHROW HRESULT CreateInstance(
    CAnimationController* pAnimationController,  
    IUIAnimationStoryboardEventHandler** ppHandler);
```  
  
### <a name="parameters"></a>Parametri  
 `pAnimationController`  
 Puntatore al controller di animazione che riceverà gli eventi.  
  
 `ppHandler`  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.  
  
##  <a name="a-nameonstoryboardstatuschangeda--canimationstoryboardeventhandleronstoryboardstatuschanged"></a><a name="onstoryboardstatuschanged"></a>CAnimationStoryboardEventHandler::OnStoryboardStatusChanged  
 Gestisce eventi OnStoryboardStatusChanged che si verificano quando cambia lo stato di uno storyboard  
  
```  
IFACEMETHOD(OnStoryboardStatusChanged) (
    __in IUIAnimationStoryboard* storyboard,
    __in UI_ANIMATION_STORYBOARD_STATUS newStatus,
    __in UI_ANIMATION_STORYBOARD_STATUS previousStatus);
```  
  
### <a name="parameters"></a>Parametri  
 `storyboard`  
 Puntatore allo storyboard il cui stato è stato modificato.  
  
 `newStatus`  
 Specifica lo stato dello storyboard di nuovo.  
  
 `previousStatus`  
 Specifica lo stato precedente di uno storyboard.  
  
### <a name="return-value"></a>Valore restituito  
 S_OK se il metodo ha esito positivo; in caso contrario E_FAIL.  
  
##  <a name="a-nameonstoryboardupdateda--canimationstoryboardeventhandleronstoryboardupdated"></a><a name="onstoryboardupdated"></a>CAnimationStoryboardEventHandler::OnStoryboardUpdated  
 Gestisce eventi OnStoryboardUpdated che si verificano quando viene aggiornato uno storyboard  
  
```  
IFACEMETHOD(OnStoryboardUpdated) (__in IUIAnimationStoryboard* storyboard);
```  
  
### <a name="parameters"></a>Parametri  
 `storyboard`  
 Puntatore allo storyboard, che è stato aggiornato.  
  
### <a name="return-value"></a>Valore restituito  
 S_OK se il metodo ha esito positivo; in caso contrario E_FAIL.  
  
##  <a name="a-namesetanimationcontrollera--canimationstoryboardeventhandlersetanimationcontroller"></a><a name="setanimationcontroller"></a>CAnimationStoryboardEventHandler::SetAnimationController  
 Archivia un puntatore al controller di animazione l'invio di eventi.  
  
```  
void SetAnimationController(CAnimationController* pAnimationController);
```  
  
### <a name="parameters"></a>Parametri  
 `pAnimationController`  
 Puntatore al controller di animazione che riceverà gli eventi.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)

