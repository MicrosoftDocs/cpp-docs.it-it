---
title: 'Metodo criticalsection:: lock | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: corewrappers/Microsoft::WRL::Wrappers::CriticalSection::Lock
dev_langs: C++
helpviewer_keywords: Lock method
ms.assetid: 37cb184c-e13c-49ef-b6a0-13908a956414
caps.latest.revision: "3"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: af996faeebd0fcddb85993badd71ceecd32d494e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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