---
title: Classe CAnimationVariableIntegerChangeHandler | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CAnimationVariableIntegerChangeHandler
- AFXANIMATIONCONTROLLER/CAnimationVariableIntegerChangeHandler
- AFXANIMATIONCONTROLLER/CAnimationVariableIntegerChangeHandler::CAnimationVariableIntegerChangeHandler
- AFXANIMATIONCONTROLLER/CAnimationVariableIntegerChangeHandler::CreateInstance
- AFXANIMATIONCONTROLLER/CAnimationVariableIntegerChangeHandler::OnIntegerValueChanged
- AFXANIMATIONCONTROLLER/CAnimationVariableIntegerChangeHandler::SetAnimationController
dev_langs: C++
helpviewer_keywords:
- CAnimationVariableIntegerChangeHandler [MFC], CAnimationVariableIntegerChangeHandler
- CAnimationVariableIntegerChangeHandler [MFC], CreateInstance
- CAnimationVariableIntegerChangeHandler [MFC], OnIntegerValueChanged
- CAnimationVariableIntegerChangeHandler [MFC], SetAnimationController
ms.assetid: 6ac8e91b-e514-4ff6-babd-33f77c4b2b61
caps.latest.revision: "18"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 640c93d7c2b3102872296067c96faf750ebb3e96
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="canimationvariableintegerchangehandler-class"></a>Classe CAnimationVariableIntegerChangeHandler
Implementa un callback, chiamato dall'API di animazione quando viene modificato il valore di una variabile di animazione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CAnimationVariableIntegerChangeHandler : public CUIAnimationVariableIntegerChangeHandlerBase<CAnimationVariableIntegerChangeHandler>;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationVariableIntegerChangeHandler::CAnimationVariableIntegerChangeHandler](#canimationvariableintegerchangehandler)|Costruisce un oggetto `CAnimationVariableIntegerChangeHandler`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAnimationVariableIntegerChangeHandler::CreateInstance](#createinstance)|Crea un'istanza di `CAnimationVariableIntegerChangeHandler` callback.|  
|[CAnimationVariableIntegerChangeHandler::OnIntegerValueChanged](#onintegervaluechanged)|Chiamato quando viene modificato un valore di una variabile di animazione. Esegue l'override di `CUIAnimationVariableIntegerChangeHandlerBase::OnIntegerValueChanged`.|  
|[CAnimationVariableIntegerChangeHandler::SetAnimationController](#setanimationcontroller)|Archivia un puntatore al controller di animazione per eventi della route.|  
  
## <a name="remarks"></a>Note  
 Questo gestore eventi viene creato e passato al metodo IUIAnimationVariable:: SetVariableIntegerChangeHandler, quando si chiama CAnimationVariable:: EnableIntegerValueChangedEvent o CAnimationBaseObject:: EnableIntegerValueChangedEvent (che consente di Questo evento per tutte le variabili di animazione incapsulate in un oggetto di animazione).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [Classi MFC](../../mfc/reference/mfc-classes.md)  
  
 `CUIAnimationCallbackBase`  
  
 `CUIAnimationVariableIntegerChangeHandlerBase`  
  
 `CAnimationVariableIntegerChangeHandler`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxanimationcontroller.h  
  
##  <a name="canimationvariableintegerchangehandler"></a>CAnimationVariableIntegerChangeHandler::CAnimationVariableIntegerChangeHandler  
 Costruisce un oggetto CAnimationVariableIntegerChangeHandler.  
  
```  
CAnimationVariableIntegerChangeHandler ();
```  
  
##  <a name="createinstance"></a>CAnimationVariableIntegerChangeHandler::CreateInstance  
 Crea un'istanza di callback CAnimationVariableIntegerChangeHandler.  
  
```  
static COM_DECLSPEC_NOTHROW HRESULT CreateInstance(
    CAnimationController* pAnimationController,  
    IUIAnimationVariableIntegerChangeHandler** ppHandler);
```  
  
### <a name="parameters"></a>Parametri  
 `pAnimationController`  
 Puntatore al controller di animazione che riceverà gli eventi.  
  
 `ppHandler`  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.  
  
##  <a name="onintegervaluechanged"></a>CAnimationVariableIntegerChangeHandler::OnIntegerValueChanged  
 Chiamato quando viene modificato un valore di una variabile di animazione.  
  
```  
IFACEMETHOD(OnIntegerValueChanged) (
    __in IUIAnimationStoryboard* storyboard,
    __in IUIAnimationVariable* variable,
    __in INT32 newValue,
    __in INT32 previousValue);
```  
  
### <a name="parameters"></a>Parametri  
 `storyboard`  
 Lo storyboard che è la variabile di animazione.  
  
 `variable`  
 La variabile di animazione che è stata aggiornata.  
  
 `newValue`  
 Il nuovo valore arrotondato.  
  
 `previousValue`  
 Il valore arrotondato precedente.  
  
### <a name="return-value"></a>Valore restituito  
 S_OK se il metodo ha esito positivo. in caso contrario E_FAIL.  
  
##  <a name="setanimationcontroller"></a>CAnimationVariableIntegerChangeHandler::SetAnimationController  
 Archivia un puntatore al controller di animazione per eventi della route.  
  
```  
void SetAnimationController(CAnimationController* pAnimationController);
```  
  
### <a name="parameters"></a>Parametri  
 `pAnimationController`  
 Puntatore al controller di animazione che riceverà gli eventi.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)
