---
title: "Classe tile_barrier | Microsoft Docs"
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
  - "amp/Concurrency::tile_barrier"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "tile_barrier (classe)"
ms.assetid: b4ccdccb-0032-4e11-b7bd-dc9d43445dee
caps.latest.revision: 17
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe tile_barrier
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Sincronizza l'esecuzione dei thread che sono in esecuzione nel gruppo di thread \(la sezione\) utilizzando i metodi `wait`.  Solo il runtime può creare un'istanza di questa classe.  
  
## Sintassi  
  
```  
class tile_barrier;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore tile\_barrier::tile\_barrier](../Topic/tile_barrier::tile_barrier%20Constructor.md)|Inizializza una nuova istanza della classe `tile_barrier`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo tile\_barrier::wait](../Topic/tile_barrier::wait%20Method.md)|Indica a tutti i thread nel gruppo di thread \(sezione\) di arrestare l'esecuzione fino a quando tutti i thread nella sezione non hanno completato l'attesa.|  
|[Metodo tile\_barrier::wait\_with\_all\_memory\_fence](../Topic/tile_barrier::wait_with_all_memory_fence%20Method.md)|Blocca l'esecuzione di tutti i thread in una sezione finché tutti gli accessi alla memoria non sono stati completati e tutti i thread nella sezione non hanno raggiunto questa chiamata.|  
|[Metodo tile\_barrier::wait\_with\_global\_memory\_fence](../Topic/tile_barrier::wait_with_global_memory_fence%20Method.md)|Blocca l'esecuzione di tutti i thread in una sezione finché tutti gli accessi globali alla memoria non sono stati completati e tutti i thread nella sezione non hanno raggiunto questa chiamata.|  
|[Metodo tile\_barrier::wait\_with\_tile\_static\_memory\_fence](../Topic/tile_barrier::wait_with_tile_static_memory_fence%20Method.md)|Blocca l'esecuzione di tutti i thread in una sezione finché tutti gli accessi alla memoria `tile_static` non sono stati completati e tutti i thread nella sezione non hanno raggiunto questa chiamata.|  
  
## Gerarchia di ereditarietà  
 `tile_barrier`  
  
## Requisiti  
 **Intestazione:** amp.h  
  
 **Spazio dei nomi:** Concurrency  
  
## Vedere anche  
 [Spazio dei nomi Concurrency \(C\+\+ AMP\)](../../../parallel/amp/reference/concurrency-namespace-cpp-amp.md)