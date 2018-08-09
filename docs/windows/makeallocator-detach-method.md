---
title: 'Metodo makeallocator:: Detach | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::MakeAllocator::Detach
dev_langs:
- C++
helpviewer_keywords:
- Detach method
ms.assetid: 78012634-2dda-4ea2-9ffe-40f105d2fe47
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: b629ec70ed29866d0f8e37d9e6ce746fbfe6f117
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40018465"
---
# <a name="makeallocatordetach-method"></a>Metodo MakeAllocator::Detach
Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
__forceinline void Detach();  
```  
  
## <a name="remarks"></a>Note  
 Rimuove l'associazione di memoria allocata tramite il [Allocate](../windows/makeallocator-allocate-method.md) metodo dall'insieme corrente **MakeAllocator** oggetto.  
  
 Se si chiama **Detach()**, si è responsabile dell'eliminazione della memoria fornita dal `Allocate` (metodo).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Implements. h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [MakeAllocator (classe)](../windows/makeallocator-class.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)