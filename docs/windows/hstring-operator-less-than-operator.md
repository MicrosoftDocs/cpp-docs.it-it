---
title: 'Hstring:: operator&lt; operatore | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HString::operator<
dev_langs:
- C++
ms.assetid: 48a051cb-4609-42be-b48c-d35fc99d1eab
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 8fae7195f048cd680be513bd54b635e2e1e9bbf7
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="hstringoperatorlt-operator"></a>Hstring:: operator&lt; (operatore)
Indica se il primo parametro è minore del secondo.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
inline bool operator<(  
    const HString& lhs,   
    const HString& rhs) throw()  
  
```  
  
#### <a name="parameters"></a>Parametri  
 `lhs`  
 Il primo parametro da confrontare. `lhs` può essere un riferimento a HString.  
  
 `rhs`  
 Il secondo parametro da confrontare. `rhs` può essere un riferimento a HString.  
  
## <a name="return-value"></a>Valore restituito  
 `true` Se il `lhs` parametro è minore di `rhs` parametro; in caso contrario, `false`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Classe HString](../windows/hstring-class.md)