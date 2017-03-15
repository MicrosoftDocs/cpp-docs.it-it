---
title: "Metodo Semaphore::Lock | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "corewrappers/Microsoft::WRL::Wrappers::Semaphore::Lock"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Lock (metodo)"
ms.assetid: 0eef6ede-dc7d-4f09-a6c8-2f7d39d65bfa
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Metodo Semaphore::Lock
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Attendere l'oggetto corrente o l'oggetto semaforo associato all'handle specificato, è in stato segnalato o è trascorso l'intervallo di timeout specificato.  
  
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
 Handle per un oggetto semaforo.  
  
## <a name="return-value"></a>Valore restituito  
 Un Details::SyncLockWithStatusT\<HandleTraits::SemaphoreTraits>  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Spazio dei nomi:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
[Semaphore (classe)](../windows/semaphore-class.md)
 