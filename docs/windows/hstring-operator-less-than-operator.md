---
title: Operatore hstring::&lt; operatore | Microsoft Docs
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
ms.openlocfilehash: 1bdc6d54a6c9b60036d7434edec960715db304e2
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40017682"
---
# <a name="hstringoperatorlt-operator"></a>Operatore hstring::&lt; operatore
Indica se il primo parametro è minore di secondo parametro.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
inline bool operator<(  
    const HString& lhs,   
    const HString& rhs) throw()  
```  
  
### <a name="parameters"></a>Parametri  
 *sul lato sinistro*  
 Il primo parametro da confrontare. *LHS* può essere un riferimento a un **HString**.  
  
 *rhs*  
 Il secondo parametro da confrontare. *rhs* può essere un riferimento a un **HString**.  
  
## <a name="return-value"></a>Valore restituito  
 **true** se il *lhs* parametro è minore del *rhs* parametro; in caso contrario, **false**.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Classe HString](../windows/hstring-class.md)