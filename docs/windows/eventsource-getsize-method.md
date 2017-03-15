---
title: "Metodo EventSource::GetSize | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "event/Microsoft::WRL::EventSource::GetSize"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetSize (metodo)"
ms.assetid: 7825aab5-1a6b-465f-9159-3a6684142d1f
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Metodo EventSource::GetSize
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Recupera il numero di gestori di eventi associato all'oggetto EventSource corrente  
  
## <a name="syntax"></a>Sintassi  
  
```  
size_t GetSize() const;  
```  
  
## <a name="return-value"></a>Valore restituito  
 Il numero di gestori eventi in [targets](../windows/eventsource-targets-data-member.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Event. h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [EventSource (classe)](../windows/eventsource-class.md)