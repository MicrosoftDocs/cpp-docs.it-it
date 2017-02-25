---
title: "Classe invalid_link_target | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "concrt/concurrency::invalid_link_target"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "invalid_link_target (classe)"
ms.assetid: 33b64885-34d8-4d4e-a893-02e9f19c958e
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 19
---
# Classe invalid_link_target
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Questa classe viene descritta un'eccezione generata quando il metodo di `link_target` di blocco di messaggistica viene chiamato e il blocco di messaggistica non può accedere al database di destinazione.  Ciò può essere il risultato di superare il numero di collegamenti che il blocco di messaggistica viene concessa o qualsiasi tentativo di collegare due volte una destinazione specifica alla stessa origine.  
  
## Sintassi  
  
```  
class invalid_link_target : public std::exception;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore invalid\_link\_target::invalid\_link\_target](../Topic/invalid_link_target::invalid_link_target%20Constructor.md)|Di overload.  Costruisce un oggetto `invalid_link_target`.|  
  
## Gerarchia di ereditarietà  
 `exception`  
  
 `invalid_link_target`  
  
## Requisiti  
 **Header:** concrt.h  
  
 Concorrenza di**Spazio dei nomi:**  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Blocchi dei messaggi asincroni](../../../parallel/concrt/asynchronous-message-blocks.md)