---
title: 'Metodo synclockt:: IsLocked | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockT::IsLocked
dev_langs:
- C++
helpviewer_keywords:
- IsLocked method
ms.assetid: a81fea43-f99a-4708-812a-7fd6af500d3d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 067b3763e10b2bbb310b213f7d748e953ba2a902
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33888475"
---
# <a name="synclocktislocked-method"></a>Metodo SyncLockT::IsLocked
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
bool IsLocked() const;  
```  
  
## <a name="return-value"></a>Valore restituito  
 **true** se l'oggetto SyncLockT è bloccata; in caso contrario, **false**.  
  
## <a name="remarks"></a>Note  
 Indica se l'oggetto SyncLockT corrente appartiene a una risorsa. l'oggetto SyncLockT è *bloccato*.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Classe SyncLockT](../windows/synclockt-class.md)