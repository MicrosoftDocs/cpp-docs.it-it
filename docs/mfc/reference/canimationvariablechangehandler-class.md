---
title: Classe CAnimationVariableChangeHandler | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
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
- CAnimationVariableChangeHandler class
ms.assetid: 2ea4996d-5c04-4dfc-be79-d42d55050795
caps.latest.revision: 19
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
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 46c4eb9210b69c527375b12100ab7cc22fef0176
ms.lasthandoff: 02/24/2017

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
|[CAnimationVariableChangeHandler::SetAnimationController](#setanimationcontroller)|Archivia un puntatore al controller di animazione l'invio di eventi.|  
  
## <a name="remarks"></a>Note  
 Questo gestore eventi viene creato e passato a `IUIAnimationVariable::SetVariableChangeHandler` (metodo), quando si chiama `CAnimationVariable::EnableValueChangedEvent` o `CAnimationBaseObject::EnableValueChangedEvent` (che consente questo evento per tutte le variabili di animazione incapsulate in un oggetto di animazione).  
  
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
 Archivia un puntatore al controller di animazione l'invio di eventi.  
  
```  
void SetAnimationController(CAnimationController* pAnimationController);
```  
  
### <a name="parameters"></a>Parametri  
 `pAnimationController`  
 Puntatore al controller di animazione che riceverà gli eventi.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)

