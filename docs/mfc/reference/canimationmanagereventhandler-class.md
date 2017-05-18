---
title: Classe CAnimationManagerEventHandler | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CAnimationManagerEventHandler
- AFXANIMATIONCONTROLLER/CAnimationManagerEventHandler
- AFXANIMATIONCONTROLLER/CAnimationManagerEventHandler::CAnimationManagerEventHandler
- AFXANIMATIONCONTROLLER/CAnimationManagerEventHandler::CreateInstance
- AFXANIMATIONCONTROLLER/CAnimationManagerEventHandler::OnManagerStatusChanged
- AFXANIMATIONCONTROLLER/CAnimationManagerEventHandler::SetAnimationController
dev_langs:
- C++
helpviewer_keywords:
- CAnimationManagerEventHandler class
ms.assetid: 6089ec07-e661-4805-b227-823b4652aade
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: e62d676c073998718b4df47223d1679b1187d66e
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="canimationmanagereventhandler-class"></a>Classe CAnimationManagerEventHandler
Implementa un callback, chiamato dall'API di animazione quando viene modificato uno stato di gestione animazione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CAnimationManagerEventHandler : public CUIAnimationManagerEventHandlerBase<CAnimationManagerEventHandler>;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationManagerEventHandler::CAnimationManagerEventHandler](#canimationmanagereventhandler)|Costruisce un oggetto `CAnimationManagerEventHandler`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationManagerEventHandler::CreateInstance](#createinstance)|Crea un'istanza di `CAnimationManagerEventHandler` oggetto.|  
|[CAnimationManagerEventHandler::OnManagerStatusChanged](#onmanagerstatuschanged)|Chiamato quando viene modificato uno stato di gestione animazione. Esegue l'override di `CUIAnimationManagerEventHandlerBase::OnManagerStatusChanged`.|  
|[CAnimationManagerEventHandler::SetAnimationController](#setanimationcontroller)|Archivia un puntatore al controller di animazione l'invio di eventi.|  
  
## <a name="remarks"></a>Note  
 Questo gestore eventi viene creato e passato al metodo IUIAnimationManager:: SetManagerEventHandler, quando si chiama CAnimationController:: EnableAnimationManagerEvent.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CUIAnimationCallbackBase`  
  
 `CUIAnimationManagerEventHandlerBase`  
  
 `CAnimationManagerEventHandler`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxanimationcontroller.h  
  
##  <a name="canimationmanagereventhandler"></a>CAnimationManagerEventHandler::CAnimationManagerEventHandler  
 [!INCLUDE[dev10_sp1required](../../mfc/reference/includes/dev10_sp1required_md.md)]  
  
 Costruisce un oggetto CAnimationManagerEventHandler.  
  
```  
CAnimationManagerEventHandler();
```  
  
##  <a name="createinstance"></a>CAnimationManagerEventHandler::CreateInstance  
 [!INCLUDE[dev10_sp1required](../../mfc/reference/includes/dev10_sp1required_md.md)]  
  
 Crea un'istanza dell'oggetto CAnimationManagerEventHandler.  
  
```  
static COM_DECLSPEC_NOTHROW HRESULT CreateInstance(
    CAnimationController* pAnimationController,  
    IUIAnimationManagerEventHandler** ppManagerEventHandler);
```  
  
### <a name="parameters"></a>Parametri  
 `pAnimationController`  
 Puntatore al controller di animazione che riceverà gli eventi.  
  
 `ppManagerEventHandler`  
 Output. Se il metodo ha esito positivo, contiene un puntatore all'oggetto COM che consente di gestire gli aggiornamenti di stato a Gestione animazione.  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.  
  
##  <a name="onmanagerstatuschanged"></a>CAnimationManagerEventHandler::OnManagerStatusChanged  
 [!INCLUDE[dev10_sp1required](../../mfc/reference/includes/dev10_sp1required_md.md)]  
  
 Chiamato quando viene modificato uno stato di gestione animazione.  
  
```  
IFACEMETHOD(OnManagerStatusChanged)(
  UI_ANIMATION_MANAGER_STATUS newStatus,
  UI_ANIMATION_MANAGER_STATUS previousStatus);
```  
  
### <a name="parameters"></a>Parametri  
 `newStatus`  
 Nuovo stato.  
  
 `previousStatus`  
 Stato precedente.  
  
### <a name="return-value"></a>Valore restituito  
 Implementazione corrente restituisce sempre S_OK;  
  
##  <a name="setanimationcontroller"></a>CAnimationManagerEventHandler::SetAnimationController  
 [!INCLUDE[dev10_sp1required](../../mfc/reference/includes/dev10_sp1required_md.md)]  
  
 Archivia un puntatore al controller di animazione l'invio di eventi.  
  
```  
void SetAnimationController(CAnimationController* pAnimationController);
```  
  
### <a name="parameters"></a>Parametri  
 `pAnimationController`  
 Puntatore al controller di animazione che riceverà gli eventi.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)

