---
title: 'Costruttore mutex:: mutex | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: corewrappers/Microsoft::WRL::Wrappers::Mutex::Mutex
dev_langs: C++
helpviewer_keywords: Mutex, constructor
ms.assetid: 504afcdc-775a-4c98-a06f-4fb4663eba3f
caps.latest.revision: "5"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: d2a0187c26f8f0a170881d0b683cb462a0a24b81
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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