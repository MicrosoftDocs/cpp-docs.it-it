---
title: 'CAccessorBase:: Isautoaccessor | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- IsAutoAccessor
- CAccessorBase.IsAutoAccessor
- CAccessorBase::IsAutoAccessor
dev_langs:
- C++
helpviewer_keywords:
- IsAutoAccessor method
ms.assetid: c330da15-2947-4050-ad00-8f776adc58fb
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 168956019b419f80e8d630e58960b9ba2d07a761
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
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