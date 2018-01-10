---
title: 'Operatore comptrref:: Operator = = | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: client/Microsoft::WRL::Details::ComPtrRef::operator==
dev_langs: C++
ms.assetid: 95fcf781-b473-4317-88cd-e938778d3c3e
caps.latest.revision: "5"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: ea2fd557c9ae7da6c696ab8f8174ad8610a9174b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="comptrrefoperator-operator"></a>Operatore ComPtrRef::operator==
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
bool operator==(  
   const Details::ComPtrRef<ComPtr<T>>& a,  
   const Details::ComPtrRef<ComPtr<U>>& b  
);  
  
bool operator==(  
   const Details::ComPtrRef<ComPtr<T>>& a,  
   decltype(__nullptr)  
);  
  
bool operator==(  
   decltype(__nullptr),  
   const Details::ComPtrRef<ComPtr<T>>& a  
);  
  
bool operator==(  
   const Details::ComPtrRef<ComPtr<T>>& a,  
   void* b  
);  
  
bool operator==(  
   void* b,  
   const Details::ComPtrRef<ComPtr<T>>& a  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `a`  
 Un riferimento a un oggetto ComPtrRef.  
  
 `b`  
 Un riferimento a un altro oggetto ComPtrRef o un puntatore a un tipo anonimo (`void*`).  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce l'operatore prima `true` se oggetto `a` è uguale all'oggetto `b`; in caso contrario, `false`.  
  
 Il secondo e terzo operatore yield `true` se oggetto `a` è uguale a `nullptr`; in caso contrario, `false`.  
  
 Gli operatori quarto e quinto yield `true` se oggetto `a` è uguale all'oggetto `b`; in caso contrario, `false`.  
  
## <a name="remarks"></a>Note  
 Indica se due oggetti ComPtrRef sono uguali.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Namespace Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)   
 [Classe ComPtrRef](../windows/comptrref-class.md)