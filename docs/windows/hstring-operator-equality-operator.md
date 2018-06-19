---
title: 'Hstring:: operator = = (operatore) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HString::operator==
dev_langs:
- C++
ms.assetid: 77ff4c1a-e62a-4256-bf9d-0f017137c630
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 5386636a348fdf7162e9b6d63f0e6dbc109bd655
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33876540"
---
# <a name="hstringoperator-operator"></a>Operatore HString::Operator==
Indica se i due parametri sono uguali.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
inline bool operator==(  
               const HString& lhs,   
               const HString& rhs) throw()  
  
inline bool operator==(  
                const HString& lhs,   
                const HStringReference& rhs) throw()  
  
inline bool operator==(  
                const HStringReference& lhs,   
                const HString& rhs) throw()  
  
inline bool operator==(  
                 const HSTRING& lhs,   
                 const HString& rhs) throw()  
  
inline bool operator==(  
                 const HString& lhs,   
                 const HSTRING& rhs) throw()  
  
```  
  
#### <a name="parameters"></a>Parametri  
 `lhs`  
 Il primo parametro da confrontare. `lhs` può essere un oggetto HString o HStringReference o un handle HSTRING.  
  
 `rhs`  
 Il secondo parametro da confrontare.`rhs` può essere un oggetto HString o HStringReference o un handle HSTRING.  
  
## <a name="return-value"></a>Valore restituito  
 `true` Se il `lhs` e `rhs` i parametri sono uguali; in caso contrario, `false`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Classe HString](../windows/hstring-class.md)