---
title: "Enumerazione queuing_mode | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "amprt/Concurrency::queuing_mode"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "queuing_mode (enumerazione)"
ms.assetid: 8c641054-906d-40b3-bbb4-f62af9356a14
caps.latest.revision: 12
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Enumerazione queuing_mode
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Specifica le modalità di accodamento supportate dall'acceleratore.  
  
## Sintassi  
  
```  
enum queuing_mode;  
```  
  
## Membri  
  
### Valori  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`queuing_mode_immediate`|Una modalità di accodamento che specifica che tutti i controlli, ad esempio, [Funzione parallel\_for\_each \(C\+\+ AMP\)](../Topic/parallel_for_each%20Function%20\(C++%20AMP\).md), vengono inviati al dispositivo acceleratore corrispondente non appena ritornano al chiamante.|  
|`queuing_mode_automatic`|Una modalità di accodamento che specifica che i comandi sono messi in una coda di comando che corrisponde all'oggetto [accelerator\_view](../../../parallel/amp/reference/accelerator-view-class.md) .  I comandi vengono inviati al dispositivo quando viene chiamato [accelerator\_view::flush](../Topic/accelerator_view::flush%20Method.md).|  
  
## Requisiti  
 **Intestazione:** amprt.h  
  
 **Spazio dei nomi:** Concurrency  
  
## Vedere anche  
 [Spazio dei nomi Concurrency \(C\+\+ AMP\)](../../../parallel/amp/reference/concurrency-namespace-cpp-amp.md)