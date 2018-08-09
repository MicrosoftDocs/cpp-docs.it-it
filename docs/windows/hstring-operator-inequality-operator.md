---
title: 'Hstring:: operator! = (operatore) | Microsoft Docs'
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
ms.openlocfilehash: e3fabc0dcbbc31a1707d1823fb1ec49a53aca6d3
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40015875"
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
  
### <a name="parameters"></a>Parametri  
 *sul lato sinistro*  
 Il primo parametro da confrontare. *LHS* può essere un **HString** o `HStringReference` oggetto o un handle HSTRING.  
  
 *rhs*  
 Il secondo parametro da confrontare. *rhs* può essere un' **HString** o `HStringReference` oggetto o un handle HSTRING.  
  
## <a name="return-value"></a>Valore restituito  
 **true** se il *lhs* e *rhs* parametri non sono uguali; in caso contrario, **false**.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Classe HString](../windows/hstring-class.md)