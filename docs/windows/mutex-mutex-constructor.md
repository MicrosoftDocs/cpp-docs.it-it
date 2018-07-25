---
title: 'Costruttore mutex:: mutex | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::Mutex::Mutex
dev_langs:
- C++
helpviewer_keywords:
- Mutex, constructor
ms.assetid: 504afcdc-775a-4c98-a06f-4fb4663eba3f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: bb7782e44fc8598ca3b806ef922f8d0840765e28
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33876456"
---
# <a name="mutexmutex-constructor"></a>Costruttore Mutex::Mutex
Inizializza una nuova istanza della classe Mutex.  
  
## <a name="syntax"></a>Sintassi  
  
```  
explicit Mutex(  
   HANDLE h  
);  
  
Mutex(  
   _Inout_ Mutex&& h  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `h`  
 Un handle o un riferimento rvalue a un handle, a un oggetto Mutex.  
  
## <a name="remarks"></a>Note  
 Il primo costruttore inizializza un oggetto Mutex dall'handle specificato. Il secondo costruttore inizializza un oggetto Mutex dall'handle specificato e viene spostato l'oggetto Mutex corrente la proprietà del mutex.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers
 
 ## <a name="see-also"></a>Vedere anche
 [Mutex (classe)](../windows/mutex-class1.md)