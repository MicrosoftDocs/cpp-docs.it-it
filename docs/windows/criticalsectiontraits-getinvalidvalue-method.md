---
title: 'Metodo criticalsectiontraits:: Getinvalidvalue | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HandleTraits::CriticalSectionTraits::GetInvalidValue
dev_langs:
- C++
helpviewer_keywords:
- GetInvalidValue method
ms.assetid: 665f30a6-ca9c-4968-8c03-8f84e6b2329b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: d72c9dce0765029ee31e079315baec72afd16a46
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="criticalsectiontraitsgetinvalidvalue-method"></a>Metodo CriticalSectionTraits::GetInvalidValue
Un modello CriticalSection è specializzato in modo che il modello è sempre valido.  
  
## <a name="syntax"></a>Sintassi  
  
```  
inline static Type GetInvalidValue();  
```  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce sempre un puntatore a una sezione critica non valida.  
  
## <a name="remarks"></a>Note  
 Il *tipo* modificatore è definito come `typedef CRITICAL_SECTION* Type;`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers::HandleTraits  
  
## <a name="see-also"></a>Vedere anche  
 [Struttura CriticalSectionTraits](../windows/criticalsectiontraits-structure.md)