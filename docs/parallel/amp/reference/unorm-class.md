---
title: "Classe unorm | Microsoft Docs"
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
  - "amp_short_vectors/Concurrency::graphics::unorm"
  - "amp/Concurrency::graphics::unorm"
dev_langs: 
  - "C++"
ms.assetid: bc30bd20-6452-4d5f-9158-3b11c4c16ed2
caps.latest.revision: 8
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe unorm
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Rappresenta un numero unorm.  Ogni elemento è un numero a virgola mobile compreso tra \[0,0f, 1.0f\].  
  
## Sintassi  
  
```  
class unorm;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore unorm::unorm](../Topic/unorm::unorm%20Constructor.md)|Di overload.  Costruttore predefinito.  Inizializza a 0.0f.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|Operatore unorm::operator\-\-||  
|Operatore unorm::operator float|Operatori di conversione.  Convertire il numero unorm in un valore in virgola mobile.|  
|Operatore unorm::operator\*\=||  
|Operatore unorm::operator\/\=||  
|Operatore unorm::operator\+\+||  
|Operatore unorm::operator\+\=||  
|Operatore unorm::operator\=||  
|Operatore unorm::operator\-\=||  
  
## Gerarchia di ereditarietà  
 `unorm`  
  
## Requisiti  
 **Intestazione:** amp\_short\_vectors.h  
  
 **Spazio dei nomi:** Concurrency::graphics  
  
## Vedere anche  
 [Spazio dei nomi Concurrency::graphics](../../../parallel/amp/reference/concurrency-graphics-namespace.md)