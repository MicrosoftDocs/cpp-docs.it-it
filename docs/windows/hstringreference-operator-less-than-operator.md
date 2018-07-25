---
title: 'Hstringreference:: operator&lt; operatore | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HStringReference::operator<
dev_langs:
- C++
ms.assetid: 55aa48e8-7c96-4123-9ebe-42b4cd8b9377
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 5b486157fb42883af724f2356e7f85701e405035
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33877293"
---
# <a name="hstringreferenceoperatorlt-operator"></a>Hstringreference:: operator&lt; (operatore)
Indica se il primo parametro è minore del secondo.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
inline bool operator<(  
    const HStringReference& lhs,   
    const HStringReference& rhs) throw()  
```  
  
#### <a name="parameters"></a>Parametri  
 `lhs`  
 Il primo parametro da confrontare. `lhs` può essere un riferimento a un HStringReference.  
  
 `rhs`  
 Il secondo parametro da confrontare.  `rhs` può essere un riferimento a un HStringReference.  
  
## <a name="return-value"></a>Valore restituito  
 `true` Se il `lhs` parametro è minore di `rhs` parametro; in caso contrario, `false`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Classe HStringReference](../windows/hstringreference-class.md)