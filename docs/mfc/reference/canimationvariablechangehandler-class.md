---
title: Classe CAnimationVariableChangeHandler | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CAnimationVariableChangeHandler
- AFXANIMATIONCONTROLLER/CAnimationVariableChangeHandler
- AFXANIMATIONCONTROLLER/CAnimationVariableChangeHandler::OnValueChanged
- AFXANIMATIONCONTROLLER/CAnimationVariableChangeHandler::SetAnimationController
dev_langs:
- C++
helpviewer_keywords:
- CAnimationVariableChangeHandler [MFC], OnValueChanged
- CAnimationVariableChangeHandler [MFC], SetAnimationController
ms.assetid: 2ea4996d-5c04-4dfc-be79-d42d55050795
caps.latest.revision: 19
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 4a770b6508067913aec51b8b3878f33e30eed4bb
ms.openlocfilehash: 6cab28e78b24333614eaeaa817f5aacbc59a1da5
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="canimationvariablechangehandler-class"></a>Classe CAnimationVariableChangeHandler
Implementa un callback, chiamato dall'API di animazione quando viene modificato il valore di una variabile di animazione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CAnimationVariableChangeHandler : public CUIAnimationVariableChangeHandlerBase<CAnimationVariableChangeHandler>;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CAnimationVariableChangeHandler::CAnimationVariableChangeHandler`|Costruisce un oggetto `CAnimationVariableChangeHandler`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CAnimationVariableChangeHandler::CreateInstance`|Crea un'istanza di `CAnimationVariableChangeHandler` oggetto.|  
|[CAnimationVariableChangeHandler::OnValueChanged](#onvaluechanged)|Chiamato quando viene modificato un valore di una variabile di animazione. Esegue l'override di `CUIAnimationVariableChangeHandlerBase::OnValueChanged`.|  
|[CAnimationVariableChangeHandler::SetAnimationController](#setanimationcontroller)|Archivia un puntatore al controller di animazione per eventi della route.|  
  
## <a name="remarks"></a>Note  
 Questo gestore eventi viene creato e passato a `IUIAnimationVariable::SetVariableChangeHandler` metodo, quando si chiama `CAnimationVariable::EnableValueChangedEvent` o `CAnimationBaseObject::EnableValueChangedEvent` (che consente di questo evento per tutte le variabili di animazione incapsulate in un oggetto di animazione).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CUIAnimationCallbackBase`  
  
 `CUIAnimationVariableChangeHandlerBase`  
  
 `CAnimationVariableChangeHandler`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxanimationcontroller.h  
  
##  <a name="onvaluechanged"></a>CAnimationVariableChangeHandler::OnValueChanged  
 Chiamato quando viene modificato un valore di una variabile di animazione.  
  
```  
IFACEMETHOD(OnValueChanged) (
    __in IUIAnimationStoryboard* storyboard,
    __in IUIAnimationVariable* variable,
    __in DOUBLE newValue,
    __in DOUBLE previousValue);
```  
  
### <a name="parameters"></a>Parametri  
 `storyboard`  
 Lo storyboard che è la variabile di animazione.  
  
 `variable`  
 La variabile di animazione che è stata aggiornata.  
  
 `newValue`  
 Nuovo valore.  
  
 `previousValue`  
 Il valore precedente.  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituisce un codice di errore HRESULT.  
  
##  <a name="setanimationcontroller"></a>CAnimationVariableChangeHandler::SetAnimationController  
 Archivia un puntatore al controller di animazione per eventi della route.  
  
```  
void SetAnimationController(CAnimationController* pAnimationController);
```  
  
### <a name="parameters"></a>Parametri  
 `pAnimationController`  
 Puntatore al controller di animazione che riceverà gli eventi.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)

