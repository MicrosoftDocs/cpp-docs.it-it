---
title: 'Hstringreference:: operator! = (operatore) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: corewrappers/Microsoft::WRL::Wrappers::HStringReference::operator!=
dev_langs: C++
ms.assetid: 01ab6691-1fc7-4feb-85f0-fe795593a160
caps.latest.revision: "2"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 3c55b115c0a0d02df7cebbb9c91a828afcb6c81e
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="hstringreferenceoperator-operator"></a>Operatore HStringReference::Operator!=
Indica se i due parametri non sono uguali.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
inline bool operator==(  
               const HStringReference& lhs,   
               const HSTRING& rhs) throw()  
  
inline bool operator!=(  
               const HStringReference& lhs,   
               const HStringReference& rhs) throw()  
  
inline bool operator!=(  
               const HSTRING& lhs,   
               const HStringReference& rhs) throw()  
  
inline bool operator!=(  
               const HStringReference& lhs,   
               const HSTRING& rhs) throw()  
  
```  
  
#### <a name="parameters"></a>Parametri  
 `lhs`  
 Il primo parametro da confrontare. `lhs`può essere un oggetto HStringReference o un handle HSTRING.  
  
 `rhs`  
 Il secondo parametro da confrontare.  `rhs`può essere un oggetto HStringReference o un handle HSTRING.  
  
## <a name="return-value"></a>Valore restituito  
 `true`Se il `lhs` e `rhs` parametri non sono uguali; in caso contrario, `false`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Classe HStringReference](../windows/hstringreference-class.md)