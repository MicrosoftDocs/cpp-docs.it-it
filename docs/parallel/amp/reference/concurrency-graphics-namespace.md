---
title: "Spazio dei nomi Concurrency::graphics | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "amp_graphics/Concurrency::graphics"
  - "amp_short_vectors/Concurrency::graphics"
dev_langs: 
  - "C++"
ms.assetid: 4529d3b1-d7da-4ffb-82bf-080915e0f23e
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 14
---
# Spazio dei nomi Concurrency::graphics
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Lo spazio dei nomi graphics fornisce tipi e funzioni progettati per la programmazione grafica.  
  
## Sintassi  
  
```  
namespace graphics;  
```  
  
## Membri  
  
### Spazi dei nomi  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Spazio dei nomi Concurrency::graphics::direct3d](../../../parallel/amp/reference/concurrency-graphics-direct3d-namespace.md)|Fornisce funzioni per l'interoperabilità di Direct3D.|  
  
### Definizioni typedef  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`uint`|Il tipo di elemento per [Classe uint\_2](../../../parallel/amp/reference/uint-2-class.md), [Classe uint\_3](../../../parallel/amp/reference/uint-3-class.md) e [Classe uint\_4](../../../parallel/amp/reference/uint-4-class.md).  Definita come `typedef unsigned int uint;`.|  
  
### Enumerazioni  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Enumerazione address\_mode](../Topic/address_mode%20Enumeration.md)|Specifica le modalità di indirizzamento supportate per il campionamento di trama.|  
|[Enumerazione filter\_mode](../Topic/filter_mode%20Enumeration.md)|Specifica le modalità di filtro supportate per il campionamento della trama.|  
  
### Classi  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Classe texture](../../../parallel/amp/reference/texture-class.md)|Una texture è un'aggregazione di dati in un accelerator\_view nel dominio della classe extent.  E' una raccolta di variabili, una per ogni elemento in un dominio della classe extent.  Ogni variabile contiene un valore che corrisponde al tipo primitivo C\+\+ \(unsigned int, int, float, double\), o tipo scalare norm, unorm \(definito in concurrency::graphics\) o tipi eligible short vector definiti in concurrency::graphics.|  
|[Classe writeonly\_texture\_view](../../../parallel/amp/reference/writeonly-texture-view-class.md)|Una writeonly\_texture\_view fornisce l'accesso a una texture in modalità writeonly.|  
|[Classe double\_2](../../../parallel/amp/reference/double-2-class.md)|Rappresenta un vettore short di 2 valori `double`.|  
|[Classe double\_3](../../../parallel/amp/reference/double-3-class.md)|Rappresenta un vettore short di 3 valori `double`.|  
|[Classe double\_4](../../../parallel/amp/reference/double-4-class.md)|Rappresenta un vettore short di 4 valori `double`.|  
|[Classe float\_2](../../../parallel/amp/reference/float-2-class.md)|Rappresenta un vettore short di 2 valori `float`.|  
|[Classe float\_3](../../../parallel/amp/reference/float-3-class.md)|Rappresenta un vettore short di 3 valori `float`.|  
|[Classe float\_4](../../../parallel/amp/reference/float-4-class.md)|Rappresenta un vettore short di 4 valori `float`.|  
|[Classe int\_2](../../../parallel/amp/reference/int-2-class.md)|Rappresenta un vettore short di 2 valori `int`.|  
|[Classe int\_3](../../../parallel/amp/reference/int-3-class.md)|Rappresenta un vettore short di 3 valori `int`.|  
|[Classe int\_4](../../../parallel/amp/reference/int-4-class.md)|Rappresenta un vettore short di 4 valori `int`.|  
|[Classe norm\_2](../../../parallel/amp/reference/norm-2-class.md)|Rappresenta un vettore short di 2 valori `norm`.|  
|[Classe norm\_3](../../../parallel/amp/reference/norm-3-class.md)|Rappresenta un vettore short di 3 valori `norm`.|  
|[Classe norm\_4](../../../parallel/amp/reference/norm-4-class.md)|Rappresenta un vettore short di 4 valori `norm`.|  
|[Classe uint\_2](../../../parallel/amp/reference/uint-2-class.md)|Rappresenta un vettore short di 2 valori `uint`.|  
|[Classe uint\_3](../../../parallel/amp/reference/uint-3-class.md)|Rappresenta un vettore short di 3 valori `uint`.|  
|[Classe uint\_4](../../../parallel/amp/reference/uint-4-class.md)|Rappresenta un vettore short di 4 valori `uint`.|  
|[Classe unorm\_2](../../../parallel/amp/reference/unorm-2-class.md)|Rappresenta un vettore short di 2 valori `unorm`.|  
|[Classe unorm\_3](../../../parallel/amp/reference/unorm-3-class.md)|Rappresenta un vettore short di 3 valori `unorm`.|  
|[Classe unorm\_4](../../../parallel/amp/reference/unorm-4-class.md)|Rappresenta un vettore short di 4 valori `unorm`.|  
|[Classe sampler](../../../parallel/amp/reference/sampler-class.md)|Rappresenta la configurazione del campionatore utilizzato per il campionamento di trama.|  
|[Struttura short\_vector](../../../parallel/amp/reference/short-vector-structure.md)|Fornisce un'implementazione di base di un vettore short di valori.|  
|[Struttura short\_vector\_traits](../../../parallel/amp/reference/short-vector-traits-structure.md)|Provvede al recupero della lunghezza e del tipo di un vettore short.|  
|[Classe texture\_view](../../../parallel/amp/reference/texture-view-class.md)|Fornisce accesso in lettura e scrittura a una trama.|  
  
### Funzioni  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Funzione copy](../Topic/copy%20Function.md)|Di overload.  Copia il contenuto della texture di origine nel buffer di destinazione dell'host.|  
|[Funzione copy\_async](../Topic/copy_async%20Function.md)|Di overload.  Copia in modo asincrono i contenuti della texture di origine nel buffer di destinazione dell'host.|  
  
## Requisiti  
 **Intestazione:** amp\_graphics.h  
  
 **Spazio dei nomi:** Concurrency  
  
## Vedere anche  
 [Spazio dei nomi Concurrency \(C\+\+ AMP\)](../../../parallel/amp/reference/concurrency-namespace-cpp-amp.md)