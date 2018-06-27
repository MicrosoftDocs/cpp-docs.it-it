---
title: Classe CAnimationVariableIntegerChangeHandler | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CAnimationVariableIntegerChangeHandler
- AFXANIMATIONCONTROLLER/CAnimationVariableIntegerChangeHandler
- AFXANIMATIONCONTROLLER/CAnimationVariableIntegerChangeHandler::CAnimationVariableIntegerChangeHandler
- AFXANIMATIONCONTROLLER/CAnimationVariableIntegerChangeHandler::CreateInstance
- AFXANIMATIONCONTROLLER/CAnimationVariableIntegerChangeHandler::OnIntegerValueChanged
- AFXANIMATIONCONTROLLER/CAnimationVariableIntegerChangeHandler::SetAnimationController
dev_langs:
- C++
helpviewer_keywords:
- CAnimationVariableIntegerChangeHandler [MFC], CAnimationVariableIntegerChangeHandler
- CAnimationVariableIntegerChangeHandler [MFC], CreateInstance
- CAnimationVariableIntegerChangeHandler [MFC], OnIntegerValueChanged
- CAnimationVariableIntegerChangeHandler [MFC], SetAnimationController
ms.assetid: 6ac8e91b-e514-4ff6-babd-33f77c4b2b61
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: fae1d569f49a50d3b7281e86c72fd12c69b40832
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36956359"
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
|[CAnimationVariableIntegerChangeHandler::OnIntegerValueChanged](#onintegervaluechanged)|Chiamato quando viene modificato un valore di una variabile di animazione. Esegue l'override`CUIAnimationVariableIntegerChangeHandlerBase::OnIntegerValueChanged`.|  
|[CAnimationVariableIntegerChangeHandler::SetAnimationController](#setanimationcontroller)|Archivia un puntatore accessibile al controller di animazione di eventi della route.|  
  
## <a name="remarks"></a>Note  
 Questo gestore eventi viene creato e passato al metodo IUIAnimationVariable:: SetVariableIntegerChangeHandler, quando si chiama CAnimationVariable:: EnableIntegerValueChangedEvent o CAnimationBaseObject:: EnableIntegerValueChangedEvent (consentendo Questo evento per tutte le variabili di animazione incapsulate in un oggetto di animazione).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [Classi MFC](../../mfc/reference/mfc-classes.md)  
  
 `CUIAnimationCallbackBase`  
  
 `CUIAnimationVariableIntegerChangeHandlerBase`  
  
 `CAnimationVariableIntegerChangeHandler`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxanimationcontroller.h  
  
##  <a name="canimationvariableintegerchangehandler"></a>  CAnimationVariableIntegerChangeHandler::CAnimationVariableIntegerChangeHandler  
 Costruisce un oggetto CAnimationVariableIntegerChangeHandler.  
  
```  
CAnimationVariableIntegerChangeHandler ();
```  
  
##  <a name="createinstance"></a>  CAnimationVariableIntegerChangeHandler::CreateInstance  
 Crea un'istanza di callback CAnimationVariableIntegerChangeHandler.  
  
```  
static COM_DECLSPEC_NOTHROW HRESULT CreateInstance(
    CAnimationController* pAnimationController,  
    IUIAnimationVariableIntegerChangeHandler** ppHandler);
```  
  
### <a name="parameters"></a>Parametri  
 *pAnimationController*  
 Puntatore al controller di animazione che riceverà gli eventi.  
  
 *ppHandler*  
  
### <a name="return-value"></a>Valore restituito  
 Se il metodo ha esito positivo, viene restituito S_OK. In caso contrario, restituirà un codice di errore HRESULT.  
  
##  <a name="onintegervaluechanged"></a>  CAnimationVariableIntegerChangeHandler::OnIntegerValueChanged  
 Chiamato quando viene modificato un valore di una variabile di animazione.  
  
```  
IFACEMETHOD(OnIntegerValueChanged) (
    __in IUIAnimationStoryboard* storyboard,
    __in IUIAnimationVariable* variable,
    __in INT32 newValue,
    __in INT32 previousValue);
```  
  
### <a name="parameters"></a>Parametri  
 *storyboard*  
 Lo storyboard che è la variabile di animazione.  
  
 *Variabile*  
 La variabile di animazione che è stata aggiornata.  
  
 *newValue*  
 Il nuovo valore arrotondato.  
  
 *previousValue*  
 Il precedente valore arrotondato.  
  
### <a name="return-value"></a>Valore restituito  
 S_OK se il metodo ha esito positivo; in caso contrario E_FAIL.  
  
##  <a name="setanimationcontroller"></a>  CAnimationVariableIntegerChangeHandler::SetAnimationController  
 Archivia un puntatore accessibile al controller di animazione di eventi della route.  
  
```  
void SetAnimationController(CAnimationController* pAnimationController);
```  
  
### <a name="parameters"></a>Parametri  
 *pAnimationController*  
 Puntatore al controller di animazione che riceverà gli eventi.  
  
## <a name="see-also"></a>Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)
