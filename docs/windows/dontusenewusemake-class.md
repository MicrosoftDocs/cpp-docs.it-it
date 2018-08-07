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
ms.openlocfilehash: 351b38a002c470dcd3f53e8336e393f845fdb3cf
ms.sourcegitcommit: d5d6bb9945c3550b8e8864b22b3a565de3691fde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/06/2018
ms.locfileid: "39569569"
---
# <a name="dontusenewusemake-class"></a>DontUseNewUseMake (classe)
Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class DontUseNewUseMake;  
```  
  
## <a name="remarks"></a>Note  
 Impedisce usando l'operatore **nuovo** in RuntimeClass. Di conseguenza, è necessario usare il [rendere funzione](../windows/make-function.md) invece.  
  
## <a name="members"></a>Membri  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore DontUseNewUseMake::operator new](../windows/dontusenewusemake-operator-new-operator.md)|Operatore di overload **nuovo** e impedisce l'utilizzo di RuntimeClass.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `DontUseNewUseMake`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Implements. h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)   
 [Funzione Make](../windows/make-function.md)