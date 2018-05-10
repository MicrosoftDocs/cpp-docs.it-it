---
title: 'Comptr:: operator = = (operatore) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::ComPtr::operator==
dev_langs:
- C++
ms.assetid: 6a26e936-29d4-4b7d-b44a-7c575ad07509
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 703204541a05c260e77562729703677b98fb8e9d
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="comptroperator-operator"></a>Operatore ComPtr::operator==
Indica se due oggetti ComPtr sono uguali.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
bool operator==(  
   const ComPtr<T>& a,  
   const ComPtr<U>& b  
);  
  
bool operator==(  
   const ComPtr<T>& a,  
   decltype(__nullptr)  
);  
  
bool operator==(  
   decltype(__nullptr),  
   const ComPtr<T>& a  
);  
  
```  
  
#### <a name="parameters"></a>Parametri  
 `a`  
 Un riferimento a un oggetto ComPtr.  
  
 `b`  
 Un riferimento a un altro oggetto ComPtr.  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce l'operatore prima `true` se oggetto `a` è uguale all'oggetto `b`; in caso contrario, `false`.  
  
 Il secondo e terzo operatore yield `true` se oggetto `a` è uguale a `nullptr`; in caso contrario, `false`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Namespace Microsoft:: wrl](../windows/microsoft-wrl-namespace.md)   
 [Classe ComPtr](../windows/comptr-class.md)