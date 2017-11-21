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
ms.openlocfilehash: cc55ab734229cc256f47185349ce79049d05723b
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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