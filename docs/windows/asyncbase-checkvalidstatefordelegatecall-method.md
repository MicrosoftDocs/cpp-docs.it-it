---
title: 'Metodo asyncbase:: Checkvalidstatefordelegatecall | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- async/Microsoft::WRL::AsyncBase::CheckValidStateForDelegateCall
dev_langs:
- C++
helpviewer_keywords:
- CheckValidStateForDelegateCall method
ms.assetid: d997ebe7-2378-4e74-a379-f0f85e6922f0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: a03f0dcb8f6d35c1d5fc8aec5bf1cc899d575861
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39653072"
---
# <a name="asyncbasecheckvalidstatefordelegatecall-method"></a>Metodo AsyncBase::CheckValidStateForDelegateCall
Verifica se le proprietà di delegato possono essere modificate nello stato asincrono corrente.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
inline HRESULT CheckValidStateForDelegateCall();  
```  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se le proprietà di delegato possono essere modificate. in caso contrario, E_ILLEGAL_METHOD_CALL.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Async. h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe AsyncBase](../windows/asyncbase-class.md)