---
title: 'Metodo InvokeHelper:: Invoke | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- event/Microsoft::WRL::Details::InvokeHelper::Invoke
dev_langs:
- C++
helpviewer_keywords:
- Invoke method
ms.assetid: 98618815-c30e-4699-b3dd-203c91b1bf3b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 8d3fc5ac67d6c03cef7f096f898db0e2f29d125c
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33882303"
---
# <a name="invokehelperinvoke-method"></a>Metodo InvokeHelper::Invoke
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
STDMETHOD(  
   Invoke  
)();  
STDMETHOD(  
   Invoke  
)(typename Traits;  
STDMETHOD(  
   Invoke  
)( typename Traits;  
STDMETHOD(  
   Invoke  
)( typename Traits;  
STDMETHOD(  
   Invoke  
)( typename Traits;  
STDMETHOD(  
   Invoke  
)( typename Traits;  
STDMETHOD(  
   Invoke  
)( typename Traits;  
STDMETHOD(  
   Invoke  
)( typename Traits;  
STDMETHOD(  
   Invoke  
)( typename Traits;  
STDMETHOD(  
   Invoke  
)( typename Traits;  
```  
  
#### <a name="parameters"></a>Parametri  
 `arg1`  
 Argomento 1.  
  
 `arg2`  
 Argomento 2.  
  
 `arg3`  
 Argomento 3.  
  
 `arg4`  
 Argomento 4.  
  
 `arg5`  
 Argomento 5.  
  
 `arg6`  
 Argomento 6.  
  
 `arg7`  
 Argomento 7.  
  
 `arg8`  
 Argomento 8.  
  
 `arg9`  
 Argomento 9.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se ha esito positivo. in caso contrario, HRESULT che descrive l'errore.  
  
## <a name="remarks"></a>Note  
 Chiama il gestore dell'evento la cui firma contiene il numero di argomenti specificato.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Event. h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [InvokeHelper (struttura)](../windows/invokehelper-structure.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)