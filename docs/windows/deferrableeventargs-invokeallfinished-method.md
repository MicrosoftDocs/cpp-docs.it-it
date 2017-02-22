---
title: "Metodo DeferrableEventArgs::InvokeAllFinished | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
ms.assetid: 86b45205-3edb-4134-9cd0-ed7a7b4c3b1a
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 3
---
# Metodo DeferrableEventArgs::InvokeAllFinished
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Chiamato per indicare il completamento dell'elaborazione per la gestione di un evento posticipato.  
  
## Sintassi  
  
```cpp  
void InvokeAllFinished()  
```  
  
## Note  
 Prima di chiamare questo metodo attendere che l'origine evento chiami [InvokeAll](../windows/eventsource-invokeall-method.md).  Se si chiama questo metodo, si eviteranno ulteriori rinvii e si forzerà l'esecuzione del gestore di completamento se non sono stati eseguiti rinvii.  
  
 Per un esempio di codice, vedere [Classe DeferrableEventArgs](../windows/deferrableeventargs-class.md).  
  
## Requisiti  
 **Intestazione:** event.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## Vedere anche  
 [Classe DeferrableEventArgs](../windows/deferrableeventargs-class.md)   
 [Metodo EventSource::InvokeAll](../windows/eventsource-invokeall-method.md)