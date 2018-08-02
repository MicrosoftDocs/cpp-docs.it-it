---
title: 'Operatore comptrref:: Operator = = | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::Details::ComPtrRef::operator==
dev_langs:
- C++
ms.assetid: 95fcf781-b473-4317-88cd-e938778d3c3e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 606059712e60ba181998155b55ae02ba8b27c4da
ms.sourcegitcommit: 51f804005b8d921468775a0316de52ad39b77c3e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/02/2018
ms.locfileid: "39463954"
---
# <a name="comptrrefoperator-operator"></a>Operatore ComPtrRef::operator==
Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.  
  
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
 *a*  
 Un riferimento a un oggetto ComPtrRef.  
  
 *b*  
 Un riferimento a un altro oggetto ComPtrRef, o un puntatore a un tipo anonimo (`void*`).  
  
## <a name="return-value"></a>Valore restituito  
 Primo operatore rese **true** se oggetti *una* è uguale all'oggetto *b*; in caso contrario, **false**.  
  
 Il secondo e terzo operatore yield **true** se oggetti *una* è uguale a **nullptr**; in caso contrario, **false**.  
  
 Gli operatori quarto e quinto yield **true** se oggetti *una* è uguale all'oggetto *b*; in caso contrario, **false**.  
  
## <a name="remarks"></a>Note  
 Indica se due oggetti ComPtrRef sono uguali.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)   
 [Classe ComPtrRef](../windows/comptrref-class.md)