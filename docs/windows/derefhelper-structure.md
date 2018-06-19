---
title: DerefHelper (struttura) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- async/Microsoft::WRL::Details::DerefHelper
dev_langs:
- C++
helpviewer_keywords:
- DerefHelper structure
ms.assetid: 86ded58b-c3ee-4a4f-bb86-4f67b895d427
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: ad7af9f507a29531b14ff75aa97e0aee327db380
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33871367"
---
# <a name="derefhelper-structure"></a>DerefHelper (struttura)
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <  
   typename T  
>  
struct DerefHelper;  
  
template <  
   typename T  
>  
struct DerefHelper<T*>;  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Un parametro di modello.  
  
## <a name="remarks"></a>Note  
 Rappresenta un puntatore dereferenziato al `T*` parametro di modello.  
  
 DerefHelper viene utilizzato in un'espressione, ad esempio: `ComPtr<Details::DerefHelper<ProgressTraits::Arg1Type>::DerefType> operationInterface;`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`DerefType`|Identificatore del parametro di modello dereferenziato `T*`.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `DerefHelper`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Async. h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)