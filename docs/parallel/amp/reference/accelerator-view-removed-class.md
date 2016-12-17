---
title: "Classe accelerator_view_removed | Microsoft Docs"
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
  - "amprt/Concurrency::accelerator_view_removed"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "amprt/Concurrency::accelerator_view_removed (classe)"
ms.assetid: 262446de-311c-454e-a5ed-e2aaced0d88a
caps.latest.revision: 6
caps.handback.revision: 2
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe accelerator_view_removed
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

L'eccezione che viene generata quando una chiamata sottostante di DirectX ha esito negativo a causa del meccanismo di rilevamento e di ripristino del timeout di Windows.  
  
## Sintassi  
  
```  
class accelerator_view_removed : public runtime_exception;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore accelerator\_view\_removed::accelerator\_view\_removed](../Topic/accelerator_view_removed::accelerator_view_removed%20Constructor.md)|Inizializza una nuova istanza della classe `accelerator_view_removed`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo accelerator\_view\_removed::get\_view\_removed\_reason](../Topic/accelerator_view_removed::get_view_removed_reason%20Method.md)|Restituisce un codice di errore HRESULT che indica la causa della rimozione dell'oggetto `accelerator_view`.|  
  
## Gerarchia di ereditarietà  
 `exception`  
  
 `runtime_exception`  
  
 `out_of_memory`  
  
## Requisiti  
 **Intestazione:** amprt.h  
  
 **Spazio dei nomi:** Concurrency  
  
## Vedere anche  
 [Spazio dei nomi Concurrency \(C\+\+ AMP\)](../../../parallel/amp/reference/concurrency-namespace-cpp-amp.md)