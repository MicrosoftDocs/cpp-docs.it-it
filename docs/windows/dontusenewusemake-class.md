---
title: DontUseNewUseMake (classe) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::DontUseNewUseMake
dev_langs:
- C++
helpviewer_keywords:
- DontUseNewUseMake class
ms.assetid: 8b38d07b-fc14-4cea-afb9-4c1a7dde0093
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 32418b163cb31f5eaf20c9d2b3ff3a4b585850dd
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39644099"
---
# <a name="dontusenewusemake-class"></a>DontUseNewUseMake (classe)
Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
class DontUseNewUseMake;  
```  
  
## <a name="remarks"></a>Note  
 Impedisce usando l'operatore **nuove** in `RuntimeClass`. Di conseguenza, è necessario usare il [rendere funzione](../windows/make-function.md) invece.  
  
## <a name="members"></a>Membri  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore DontUseNewUseMake::operator new](../windows/dontusenewusemake-operator-new-operator.md)|Operatore di overload **nuove** e impedisce l'utilizzo `RuntimeClass`.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `DontUseNewUseMake`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Implements. h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)   
 [Funzione Make](../windows/make-function.md)