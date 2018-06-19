---
title: 'Hstring:: operator! = (operatore) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HString::operator!=
dev_langs:
- C++
ms.assetid: dcdd2aca-e7d6-4bf1-b2de-03efbb430a93
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 74fc15d10818d14467b866ec37c9e353348ce882
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33877031"
---
# <a name="hstringoperator-operator"></a>Operatore HString::Operator!=
Indica se i due parametri non sono uguali.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
inline bool operator!=( const HString& lhs,   
                        const HString& rhs) throw()  
  
inline bool operator!=( const HStringReference& lhs,   
                        const HString& rhs) throw()  
  
inline bool operator!=( const HString& lhs,   
                        const HStringReference& rhs) throw()  
  
inline bool operator!=( const HSTRING& lhs,   
                        const HString& rhs) throw()  
  
inline bool operator!=( const HString& lhs,   
                        const HSTRING& rhs) throw()  
```  
  
#### <a name="parameters"></a>Parametri  
 `lhs`  
 Il primo parametro da confrontare. `lhs` può essere un oggetto HString o HStringReference o un handle HSTRING.  
  
 `rhs`  
 Il secondo parametro da confrontare.`rhs` può essere un oggetto HString o HStringReference o un handle HSTRING.  
  
## <a name="return-value"></a>Valore restituito  
 `true` Se il `lhs` e `rhs` parametri non sono uguali; in caso contrario, `false`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Classe HString](../windows/hstring-class.md)