---
title: 'Operatore hstringreference:: Operator = = | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HStringReference::operator==
dev_langs:
- C++
ms.assetid: cad3d52d-cd67-4194-a270-5239b1121a09
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 7620cee350ab69f55737e6336b275218a70b6891
ms.sourcegitcommit: 4586bfc32d8bc37ab08b24816d7fad5df709bfa3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/07/2018
ms.locfileid: "39607713"
---
# <a name="hstringreferenceoperator-operator"></a>Operatore HStringReference::Operator==
Indica se i due parametri sono uguali.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
inline bool operator==(  
               const HStringReference& lhs,   
               const HStringReference& rhs) throw()  
  
inline bool operator==(  
               const HSTRING& lhs,   
               const HStringReference& rhs) throw()  
  
inline bool operator==(  
               const HStringReference& lhs,   
               const HSTRING& rhs) throw()  
```  
  
### <a name="parameters"></a>Parametri  
 *sul lato sinistro*  
 Il primo parametro da confrontare. *LHS* può essere un **HStringReference** oggetto o un handle HSTRING.  
  
 *rhs*  
 Il secondo parametro da confrontare.  *rhs* può essere un **HStringReference** oggetto o un handle HSTRING.  
  
## <a name="return-value"></a>Valore restituito  
 **true** se il *lhs* e *rhs* parametri sono uguali; in caso contrario, **false**.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Classe HStringReference](../windows/hstringreference-class.md)