---
title: "Classe scoped_d3d_access_lock | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 0ad333e6-9839-4736-a722-16d95d70c4b1
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Classe scoped_d3d_access_lock
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Wrapper RAII per un blocco accesso di D3D su un oggetto accelerator\_view.  
  
## Sintassi  
  
```  
class scoped_d3d_access_lock;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore scoped\_d3d\_access\_lock::scoped\_d3d\_access\_lock](../Topic/scoped_d3d_access_lock::scoped_d3d_access_lock%20Constructor.md)|Di overload.  Costruisce un oggetto `scoped_d3d_access_lock`.  Il blocco viene rilasciato quando questo oggetto esce dall'ambito.|  
|[Distruttore scoped\_d3d\_access\_lock::~scoped\_d3d\_access\_lock](../Topic/scoped_d3d_access_lock::~scoped_d3d_access_lock%20Destructor.md)|Rilascia il blocco di accesso di D3D sull'oggetto `accelerator_view` associato.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore scoped\_d3d\_access\_lock::operator\=](../Topic/scoped_d3d_access_lock::operator=%20Operator.md)|Accetta la proprietà di un blocco da un altro `scoped_d3d_access_lock`.|  
  
## Gerarchia di ereditarietà  
 `scoped_d3d_access_lock`  
  
## Requisiti  
 **Intestazione:** amprt.h  
  
 **Spazio dei nomi:** concurrency::direct3d  
  
## Vedere anche  
 [Spazio dei nomi Concurrency::direct3d](../../../parallel/amp/reference/concurrency-direct3d-namespace.md)