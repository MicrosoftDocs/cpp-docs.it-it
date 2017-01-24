---
title: "Classe norm | Microsoft Docs"
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
  - "amp_short_vectors/Concurrency::graphics::norm"
dev_langs: 
  - "C++"
ms.assetid: 73002f3d-c25e-4119-bcd3-4c46c9b6abf1
caps.latest.revision: 8
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe norm
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Rappresenta un numero norm.  Ogni elemento è un numero a virgola mobile compreso fra \[\- 1.0f, 1.0f\].  
  
## Sintassi  
  
```  
class norm;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore norm::norm](../Topic/norm::norm%20Constructor.md)|Di overload.  Costruttore predefinito.  Inizializza a 0.0f.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|Operatore norm::operator\-||  
|Operatore norm::operator\-\-||  
|Operatore float norm::operator|Operatori di conversione.  Convertire il numero norm in un valore a virgola mobile.|  
|Operatore norm::operator\*\=||  
|Operatore norm::operator\/\=||  
|Operatore norm::operator\+\+||  
|Operatore norm::operator\+\=||  
|Operatore norm::operator\=||  
|Operatore norm::operator\-\=||  
  
## Gerarchia di ereditarietà  
 `norm`  
  
## Requisiti  
 **Intestazione:** amp\_short\_vectors.h  
  
 **Spazio dei nomi:** Concurrency::graphics  
  
## Vedere anche  
 [Spazio dei nomi Concurrency::graphics](../../../parallel/amp/reference/concurrency-graphics-namespace.md)