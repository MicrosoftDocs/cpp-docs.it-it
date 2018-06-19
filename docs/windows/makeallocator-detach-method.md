---
title: 'Metodo makeallocator:: Detach | Documenti Microsoft'
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
ms.openlocfilehash: 50afca04492c29aa526f7a004c6e0f725022e9ba
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33876969"
---
# <a name="makeallocatordetach-method"></a>Metodo MakeAllocator::Detach
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
__forceinline void Detach();  
```  
  
## <a name="remarks"></a>Note  
 Rimuove l'associazione di memoria allocata per il [allocare](../windows/makeallocator-allocate-method.md) metodo dall'oggetto MakeAllocator corrente.  
  
 Se si chiama Detach(), è responsabile per l'eliminazione della memoria fornita dal metodo di allocazione.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** FTM.  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [MakeAllocator (classe)](../windows/makeallocator-class.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)