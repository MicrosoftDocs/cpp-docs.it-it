---
title: RemoveReference (struttura) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- internal/Microsoft::WRL::Details::RemoveReference
dev_langs:
- C++
helpviewer_keywords:
- RemoveReference structure
ms.assetid: 43ff91bb-815a-440e-b9fb-7dcbb7c863af
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 126394e3a63016eccf1f5451d032753bb8f81da8
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33881263"
---
# <a name="removereference-structure"></a>RemoveReference (struttura)
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<class T>  
struct RemoveReference;  
template<class T>  
struct RemoveReference<T&>;  
template<class T>  
struct RemoveReference<T&&>;  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Una classe.  
  
## <a name="remarks"></a>Note  
 Rimuove il tratto di tipo riferimento o di riferimento rvalue del parametro di modello di classe specificata.  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`Type`|Sinonimo del parametro di modello di classe.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `RemoveReference`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)