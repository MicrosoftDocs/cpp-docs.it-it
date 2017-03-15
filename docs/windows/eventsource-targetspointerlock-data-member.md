---
title: "Membro dati EventSource::targetsPointerLock_ | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "event/Microsoft::WRL::EventSource::targetsPointerLock_"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "targetsPointerLock_ (membro dati)"
ms.assetid: 8f08409f-5262-4be7-9cf1-2ed15f19684a
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Membro dati EventSource::targetsPointerLock_
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Sincronizza l'accesso ai membri dati interni, anche quando vengono aggiunti i gestori eventi per questo EventSource, rimosso o richiamato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
Wrappers::SRWLock targetsPointerLock_;  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Event. h  
  
 **Spazio dei nomi:** Microsoft::WRL
 
 ## <a name="see-also"></a>Vedere anche
 [EventSource (classe)](../windows/eventsource-class.md)