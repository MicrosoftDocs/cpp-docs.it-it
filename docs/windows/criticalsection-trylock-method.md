---
title: 'Metodo criticalsection:: TryLock | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::CriticalSection::TryLock
dev_langs:
- C++
helpviewer_keywords:
- TryLock method
ms.assetid: 504bb87c-2cd0-4f54-b458-b3efb9789053
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: b4ee99d82212d0d6cdd610b4565bd9292a0265dc
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="criticalsectiontrylock-method"></a>Metodo CriticalSection::TryLock
Tenta di immettere una sezione critica senza bloccare. Se la chiamata ha esito positivo, il thread chiamante acquisisce la proprietà della sezione critica.  
  
## <a name="syntax"></a>Sintassi  
  
```  
SyncLock TryLock();  
  
static SyncLock TryLock(  
   _In_ CRITICAL_SECTION* cs  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `cs`  
 Un oggetto specificato dall'utente sezione critica.  
  
## <a name="return-value"></a>Valore restituito  
 Un valore diverso da zero se la sezione critica è stato immesso correttamente o il thread corrente è già proprietario della sezione critica. Zero in caso di un altro thread già proprietario della sezione critica.  
  
## <a name="remarks"></a>Note  
 Il primo **TryLock** funzione influisce l'oggetto corrente di sezione critica. Il secondo **TryLock** function viene applicata a una sezione critica specificato dall'utente.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CriticalSection](../windows/criticalsection-class.md)