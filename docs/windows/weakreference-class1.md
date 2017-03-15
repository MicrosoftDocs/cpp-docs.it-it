---
title: "Classe WeakReference | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "implements/Microsoft::WRL::Details::WeakReference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "WeakReference (classe)"
ms.assetid: 3f4c956b-dbbd-49b1-8cfa-9509a9956c97
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Classe WeakReference
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura WRL e non può essere utilizzata direttamente dal proprio codice.  
  
## Sintassi  
  
```  
class WeakReference;  
```  
  
## Note  
 Rappresenta un *riferimento debole* che può essere utilizzato con Windows Runtime o COM classico.  Un riferimento debole rappresenta un oggetto che può o non può essere accessibile.  
  
 Un oggetto `WeakReference` mantiene un *riferimento forte*, ossia un puntatore ad un oggetto e *riferimento forte al conteggio*, ovvero il numero di copie di riferimento forte che sono distribuite con il metodo Resolve\(\).  Mentre il conteggio dei riferimenti forti è diverso da zero, il riferimento forte è valido e l'oggetto è accessibile.  Quando il conteggio dei riferimenti forti diventa zero, il riferimento forte non è valido e l'oggetto è inaccessibile.  
  
 Un oggetto WeakReference viene generalmente utilizzato per rappresentare un oggetto la cui l'esistenza è controllata da un thread o da un'applicazione esterna.  Ad esempio, costruire un oggetto WeakReference da un riferimento ad un oggetto file.  Finchè il file rimane aperto, il riferimento forte è valido.  Ma se il file viene chiuso, il riferimento forte non è più valido.  
  
 i metodi WeakReference sono thread\-safe.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore WeakReference::WeakReference](../windows/weakreference-weakreference-constructor.md)|Inizializza una nuova istanza della classe WeakReference.|  
|[Distruttore WeakReference::~WeakReference](../windows/weakreference-tilde-weakreference-destructor.md)|De\-inizializza \(elimina\) l'istanza corrente della classe WeakReference.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo WeakReference::DecrementStrongReference](../windows/weakreference-decrementstrongreference-method.md)|Decremente il conteggio dei riferimenti forti dell'oggetto WeakReference corrente.|  
|[Metodo WeakReference::IncrementStrongReference](../windows/weakreference-incrementstrongreference-method.md)|Incrementa il conteggio dei riferimenti forti dell'oggetto WeakReference corrente.|  
|[Metodo WeakReference::Resolve](../windows/weakreference-resolve-method.md)|Imposta il puntatore specificato con il valore corrente dei riferimenti forti se il conteggio è diverso da zero.|  
|[Metodo WeakReference::SetUnknown](../windows/weakreference-setunknown-method.md)|Imposta il riferimento forte dell'oggetto WeakReference corrente al puntatore all'interfaccia specificato.|  
  
## Gerarchia di ereditarietà  
 `WeakReference`  
  
## Requisiti  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)