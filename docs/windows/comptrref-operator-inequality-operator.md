---
title: Operatore comptrref::! = (operatore) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::Details::ComPtrRef::operator!=
dev_langs:
- C++
ms.assetid: ab3093cc-6fbd-4039-890a-6df1cde992b6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 3d5a6e7389215452177add30b587004c312aeae1
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="comptrrefoperator-operator"></a>Operatore ComPtrRef::operator!=
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
bool operator!=(  
   const Details::ComPtrRef<ComPtr<T>>& a,  
   const Details::ComPtrRef<ComPtr<U>>& b  
);  
  
bool operator!=(  
   const Details::ComPtrRef<ComPtr<T>>& a,  
   decltype(__nullptr)  
);  
  
bool operator!=(  
   decltype(__nullptr),  
   const Details::ComPtrRef<ComPtr<T>>& a  
);  
  
bool operator!=(  
   const Details::ComPtrRef<ComPtr<T>>& a,  
   void* b  
);  
  
bool operator!=(  
   void* b,  
   const Details::ComPtrRef<ComPtr<T>>& a  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `a`  
 Un riferimento a un oggetto ComPtrRef.  
  
 `b`  
 Un riferimento a un altro oggetto ComPtrRef o un puntatore a un oggetto anonimo (`void*`).  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce l'operatore prima `true` se oggetto `a` non è uguale all'oggetto `b`; in caso contrario, `false`.  
  
 Il secondo e terzo operatore yield `true` se oggetto `a` non è uguale a `nullptr`; in caso contrario, `false`.  
  
 Gli operatori quarto e quinto yield `true` se oggetto `a` non è uguale all'oggetto `b`; in caso contrario, `false`.  
  
## <a name="remarks"></a>Note  
 Indica se due oggetti ComPtrRef non sono uguali.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Namespace Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)   
 [Classe ComPtrRef](../windows/comptrref-class.md)