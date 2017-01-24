---
title: "Classe bad_target | Microsoft Docs"
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
  - "concrt/concurrency::bad_target"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "bad_target (classe)"
ms.assetid: e6dcddbf-9217-4fac-ac7f-7b8b4781d2f5
caps.latest.revision: 19
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe bad_target
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Questa classe viene descritta un'eccezione generata quando un blocco di messaggistica viene fornito un puntatore a una destinazione non valido per l'operazione eseguita.  
  
## Sintassi  
  
```  
class bad_target : public std::exception;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore bad\_target::bad\_target](../Topic/bad_target::bad_target%20Constructor.md)|Di overload.  Costruisce un oggetto `bad_target`.|  
  
## Note  
 Questa eccezione viene generata in genere per i motivi come il tentativo di una destinazione a utilizzare un messaggio riservato per una destinazione diversa o come il rilascio di una prenotazione che non contiene.  
  
## Gerarchia di ereditarietà  
 `exception`  
  
 `bad_target`  
  
## Requisiti  
 **Header:** concrt.h  
  
 Concorrenza di**Spazio dei nomi:**  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Blocchi dei messaggi asincroni](../../../parallel/concrt/asynchronous-message-blocks.md)