---
title: 'Metodo criticalsection:: lock | Microsoft Docs'
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
ms.openlocfilehash: ee66017edabf80349bf2960f7cb2ca2654c8c4cc
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39643579"
---
# <a name="criticalsectionlock-method"></a>Metodo CriticalSection::Lock
Attende che la proprietà dell'oggetto specificato sezione critica. La funzione restituisce quando il thread chiamante è concessa la proprietà.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
SyncLock Lock();  
  
   static SyncLock Lock(  
   _In_ CRITICAL_SECTION* cs  
);  
```  
  
### <a name="parameters"></a>Parametri  
 *cs*  
 Un oggetto specificato dall'utente sezione critica.  
  
## <a name="return-value"></a>Valore restituito  
 Un oggetto di blocco che può essere utilizzato per sbloccare la sezione critica corrente.  
  
## <a name="remarks"></a>Note  
 Il primo **blocco** function viene applicata l'oggetto corrente di sezione critica. La seconda **blocco** function viene applicata a una sezione critica specificato dall'utente.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CriticalSection](../windows/criticalsection-class.md)