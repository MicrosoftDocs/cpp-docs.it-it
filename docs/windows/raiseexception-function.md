---
title: Funzione RaiseException | Documenti Microsoft
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
ms.openlocfilehash: 2af97ac13386db450318f4d1f384517a8dd77baf
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33882183"
---
# <a name="raiseexception-function"></a>RaiseException (funzione)
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
inline void __declspec(noreturn)   RaiseException(  
      HRESULT hr,   
      DWORD dwExceptionFlags = EXCEPTION_NONCONTINUABLE);  
```  
  
#### <a name="parameters"></a>Parametri  
 `hr`  
 Il codice di eccezione dell'eccezione da generare; ovvero, il valore HRESULT di un'operazione non riuscita.  
  
 `dwExceptionFlags`  
 Flag che indica un'eccezione critica (il valore del flag è zero) o noncontinuable eccezione (il valore del flag è diverso da zero). Per impostazione predefinita, l'eccezione è critico.  
  
## <a name="remarks"></a>Note  
 Genera un'eccezione nel thread chiamante.  
  
 Per ulteriori informazioni, vedere Windows **RaiseException** (funzione).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)