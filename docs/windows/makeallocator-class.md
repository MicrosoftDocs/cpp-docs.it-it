---
title: "Classe MakeAllocator | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "implements/Microsoft::WRL::Details::MakeAllocator"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MakeAllocator (classe)"
ms.assetid: a1114615-abd7-4a56-9bc3-750c118f0fa1
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe MakeAllocator
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura WRL e non può essere utilizzata direttamente dal proprio codice.  
  
## Sintassi  
  
```  
  
template<  
   typename T,  
   bool hasWeakReferenceSupport =   
         !__is_base_of(RuntimeClassFlags<InhibitWeakReference>,   
   T)> , T)> class MakeAllocator;  
  
template<  
   typename T  
>  
class MakeAllocator<T, false>;  
  
template<  
   typename T  
>  
class MakeAllocator<T, true>;  
```  
  
#### Parametri  
 `T`  
 Un tipo di nome.  
  
 `hasWeakReferenceSupport`  
 `true` per allocare memoria per un oggetto che riferimenti deboli di supportare; `false` per allocare memoria per un oggetto che non supporta i riferimenti deboli.  
  
## Note  
 Alloca memoria per una classe activatable, con o senza supporto di riferimento debole.  
  
 Eseguire l'override della classe di MakeAllocator per implementare un modello di allocazione della memoria definito dall'utente.  
  
 MakeAllocator in genere utilizzato per impedire perdite di memoria se genera di un oggetto durante la costruzione.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore MakeAllocator::MakeAllocator](../windows/makeallocator-makeallocator-constructor.md)|Inizializza una nuova istanza della classe MakeAllocator.|  
|[Distruttore MakeAllocator::~MakeAllocator](../windows/makeallocator-tilde-makeallocator-destructor.md)|De\-inizializza l'istanza corrente della classe MakeAllocator.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo MakeAllocator::Allocate](../windows/makeallocator-allocate-method.md)|Alloca memoria e lo associa all'oggetto corrente di MakeAllocator.|  
|[Metodo MakeAllocator::Detach](../windows/makeallocator-detach-method.md)|Annulla l'associazione di memoria allocata con il metodo [Allocare](../windows/makeallocator-allocate-method.md) dall'oggetto corrente di MakeAllocator.|  
  
## Gerarchia di ereditarietà  
 `MakeAllocator`  
  
## Requisiti  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)