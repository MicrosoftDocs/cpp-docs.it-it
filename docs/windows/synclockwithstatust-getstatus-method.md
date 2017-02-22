---
title: "Metodo SyncLockWithStatusT::GetStatus | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockWithStatusT::GetStatus"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetStatus (metodo)"
ms.assetid: d448b51d-a63d-40d9-a9ee-4aad3204118d
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Metodo SyncLockWithStatusT::GetStatus
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
DWORD GetStatus() const;  
```  
  
## <a name="return-value"></a>Valore restituito  
 Il risultato di un'operazione di attesa sull'oggetto che si basa sulla classe SyncLockWithStatusT, ad esempio un [Mutex](../windows/mutex-class1.md) o [semaforo](../windows/semaphore-class.md). Zero (0) indica che l'operazione di attesa restituito lo stato segnalato; in caso contrario, si verificato un altro stato, come valore di timeout è scaduto.  
  
## <a name="remarks"></a>Note  
 Recupera lo stato di attesa dell'oggetto SyncLockWithStatusT corrente.  
  
 La funzione GetStatus recupera il valore dell'oggetto sottostante [Status](../windows/synclockwithstatust-status-data-member.md) (membro dati). Quando un oggetto in base alla classe SyncLockWithStatusT esegue un'operazione di blocco, l'oggetto attende prima che l'oggetto diventi disponibile. Il risultato dell'operazione di attesa viene archiviato nel `status_` (membro dati). I possibili valori del `status_` (membro dati) sono i valori restituiti dell'operazione di attesa. Per ulteriori informazioni, vedere i valori restituiti di **WaitForSingleObjectEx()** funzione in MSDN Library.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Spazio dei nomi:** Microsoft::WRL::Wrappers::Details  
  
## <a name="see-also"></a>Vedere anche  
 [SyncLockWithStatusT (classe)](../windows/synclockwithstatust-class.md)