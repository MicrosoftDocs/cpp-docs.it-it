---
title: "Metodo Mutex::Lock | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "corewrappers/Microsoft::WRL::Wrappers::Mutex::Lock"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Lock (metodo)"
ms.assetid: 61d95072-b690-441e-a080-0bf94a733141
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Metodo Mutex::Lock
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Attendere l'oggetto corrente o l'oggetto Mutex associato all'handle specificato, rilascia la mutex o è trascorso l'intervallo di timeout specificato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
SyncLock Lock(  
   DWORD milliseconds = INFINITE  
);  
  
static SyncLock Lock(  
   HANDLE h,  
   DWORD milliseconds = INFINITE  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `milliseconds`  
 L'intervallo di timeout, in millisecondi. Il valore predefinito è INFINITE, attende indefinitamente.  
  
 `h`  
 L'handle di un oggetto Mutex.  
  
## <a name="return-value"></a>Valore restituito  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Spazio dei nomi:** Microsoft::WRL::Wrappers
 
 ## <a name="see-also"></a>Vedere anche
 [Mutex (classe)](../windows/mutex-class1.md)