---
title: "Costruttore Mutex::Mutex | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "corewrappers/Microsoft::WRL::Wrappers::Mutex::Mutex"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Mutex, costruttore"
ms.assetid: 504afcdc-775a-4c98-a06f-4fb4663eba3f
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Costruttore Mutex::Mutex
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

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
 Un handle, o un riferimento rvalue a un handle, a un oggetto Mutex.  
  
## <a name="remarks"></a>Note  
 Il primo costruttore inizializza un oggetto Mutex dall'handle specificato. Il secondo costruttore inizializza un oggetto Mutex dall'handle specificato e quindi passa la proprietà del mutex all'oggetto Mutex corrente.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Spazio dei nomi:** Microsoft::WRL::Wrappers
 
 ## <a name="see-also"></a>Vedere anche
 [Mutex (classe)](../windows/mutex-class1.md)