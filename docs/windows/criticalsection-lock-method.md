---
title: 'Metodo criticalsection:: lock | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::CriticalSection::Lock
dev_langs:
- C++
helpviewer_keywords:
- Lock method
ms.assetid: 37cb184c-e13c-49ef-b6a0-13908a956414
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 3c873494a702802b8ead3dab9cac28557664f618
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="criticalsectionlock-method"></a>Metodo CriticalSection::Lock
Attende che la proprietà dell'oggetto specificato sezione critica. La funzione restituisce quando il thread chiamante viene concessa la proprietà.  
  
## <a name="syntax"></a>Sintassi  
  
```  
SyncLock Lock();  
  
   static SyncLock Lock(  
   _In_ CRITICAL_SECTION* cs  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `cs`  
 Un oggetto specificato dall'utente sezione critica.  
  
## <a name="return-value"></a>Valore restituito  
 Un oggetto di blocco che può essere usato per sbloccare la sezione critica corrente.  
  
## <a name="remarks"></a>Note  
 Il primo **blocco** function viene applicata l'oggetto corrente di sezione critica. Il secondo **blocco** function viene applicata a una sezione critica specificato dall'utente.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CriticalSection](../windows/criticalsection-class.md)