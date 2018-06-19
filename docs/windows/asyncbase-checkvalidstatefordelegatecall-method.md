---
title: 'Metodo asyncbase:: Checkvalidstatefordelegatecall | Documenti Microsoft'
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
ms.openlocfilehash: 81e3420304b0432f635d04a4892e7984dd38f144
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33859875"
---
# <a name="asyncbasecheckvalidstatefordelegatecall-method"></a>Metodo AsyncBase::CheckValidStateForDelegateCall
Verifica se è possono modificare le proprietà di delegato nello stato asincrono corrente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
inline HRESULT CheckValidStateForDelegateCall();  
```  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se le proprietà di delegato possono essere modificate. in caso contrario, E_ILLEGAL_METHOD_CALL.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Async. h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe AsyncBase](../windows/asyncbase-class.md)