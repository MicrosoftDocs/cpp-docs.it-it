---
title: RaiseException (funzione) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- internal/Microsoft::WRL::Details::RaiseException
dev_langs:
- C++
helpviewer_keywords:
- RaiseException function
ms.assetid: f9c74f6d-112a-4d2e-900f-622f795d5dbf
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: e93b7281b079918641bf36ebcd72968a98eb95ec
ms.sourcegitcommit: 4586bfc32d8bc37ab08b24816d7fad5df709bfa3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/07/2018
ms.locfileid: "39602666"
---
# <a name="raiseexception-function"></a>RaiseException (funzione)
Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
inline void __declspec(noreturn)   RaiseException(  
      HRESULT hr,   
      DWORD dwExceptionFlags = EXCEPTION_NONCONTINUABLE);  
```  
  
### <a name="parameters"></a>Parametri  
 *risorse umane*  
 Il codice di eccezione dell'eccezione generato; vale a dire, il valore HRESULT di un'operazione non riuscita.  
  
 *dwExceptionFlags*  
 Un flag che indica un'eccezione consentita (il valore del flag è zero) o eccezione noncontinuable (valore del flag è diverso da zero). Per impostazione predefinita, l'eccezione è critica.  
  
## <a name="remarks"></a>Note  
 Genera un'eccezione nel thread chiamante.  
  
 Per altre informazioni, vedere il Windows `RaiseException` (funzione).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** FTM  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)