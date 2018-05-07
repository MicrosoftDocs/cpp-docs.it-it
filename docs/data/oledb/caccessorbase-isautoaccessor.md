---
title: 'CAccessorBase:: Isautoaccessor | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- IsAutoAccessor
- CAccessorBase.IsAutoAccessor
- CAccessorBase::IsAutoAccessor
dev_langs:
- C++
helpviewer_keywords:
- IsAutoAccessor method
ms.assetid: c330da15-2947-4050-ad00-8f776adc58fb
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: fabf5d182b6fb0eb993300e241ae76e1b61f5cef
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="caccessorbaseisautoaccessor"></a>CAccessorBase::IsAutoAccessor
Restituisce true se i dati vengono recuperati automaticamente per la funzione di accesso durante un'operazione di spostamento.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
      bool IsAutoAccessor(ULONG nAccessor) const;  
```  
  
#### <a name="parameters"></a>Parametri  
 `nAccessor`  
 [in] Numero di offset uguale a zero per la funzione di accesso.  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce **true** se la funzione di accesso è un sia automatica o meno. Negli altri casi, viene restituito **false**.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CAccessorBase](../../data/oledb/caccessorbase-class.md)