---
title: Operatore hstringreference::&lt; operatore | Microsoft Docs
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
ms.openlocfilehash: 489d97252dcb4d20b7ef2f8557991a4e6016743d
ms.sourcegitcommit: 4586bfc32d8bc37ab08b24816d7fad5df709bfa3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/07/2018
ms.locfileid: "39605532"
---
# <a name="hstringreferenceoperatorlt-operator"></a>Operatore hstringreference::&lt; operatore
Indica se il primo parametro è minore di secondo parametro.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
inline bool operator<(  
    const HStringReference& lhs,   
    const HStringReference& rhs) throw()  
```  
  
### <a name="parameters"></a>Parametri  
 *sul lato sinistro*  
 Il primo parametro da confrontare. *LHS* può essere un riferimento a un **HStringReference**.  
  
 *rhs*  
 Il secondo parametro da confrontare.  *rhs* può essere un riferimento a un **HStringReference**.  
  
## <a name="return-value"></a>Valore restituito  
 **true** se il *lhs* parametro è minore del *rhs* parametro; in caso contrario, **false**.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Classe HStringReference](../windows/hstringreference-class.md)