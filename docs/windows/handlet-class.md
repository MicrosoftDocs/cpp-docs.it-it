---
title: "Classe HandleT | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::HandleT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "HandleT (classe)"
ms.assetid: 3822b32a-a426-4d94-a54d-919d4df60ee2
caps.latest.revision: 3
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe HandleT
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Rappresenta un handle per un oggetto .  
  
## Sintassi  
  
```  
template <  
   typename HandleTraits  
>  
class HandleT;  
```  
  
#### Parametri  
 `HandleTraits`  
 Un'istanza della struttura [HandleTraits](../windows/handletraits-structure.md) che definisce le caratteristiche comuni di un handle.  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`Traits`|Un sinonimo per `HandleTraits`.|  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore HandleT::HandleT](../windows/handlet-handlet-constructor.md)|Inizializza una nuova istanza della classe HandleT.|  
|[Distruttore HandleT::~HandleT](../windows/handlet-tilde-handlet-destructor.md)|De\-inizializza un'istanza della classe HandleT.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo HandleT::Attach](../windows/handlet-attach-method.md)|Associa l'handle specificato con l'oggetto HandleT corrente.|  
|[Metodo HandleT::Close](../windows/handlet-close-method.md)|Chiude l'oggetto HandleT corrente.|  
|[Metodo HandleT::Detach](../windows/handlet-detach-method.md)|Annulla l'associazione dell'oggetto HandleT corrente con l'handle sottostante.|  
|[Metodo HandleT::Get](../windows/handlet-get-method.md)|Ottiene il valore dell'handle sottostante.|  
|[Metodo HandleT::IsValid](../windows/handlet-isvalid-method.md)|Indica se l'oggetto HandleT corrente rappresenta l'handle.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo HandleT::InternalClose](../windows/handlet-internalclose-method.md)|Chiude l'oggetto HandleT corrente.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore HandleT::operator\=](../windows/handlet-operator-assign-operator.md)|Sposta il valore dell'oggetto HandleT specificato sll'oggetto HandleT corrente.|  
  
### Membri di dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Membro dati HandleT::handle\_](../windows/handlet-handle-data-member.md)|Contiene l'handle rappresentato dall'oggetto HandleT.|  
  
## Gerarchia di ereditarietà  
 `HandleT`  
  
## Requisiti  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## Vedere anche  
 [Metodo Microsoft::WRL::Wrappers](../windows/microsoft-wrl-wrappers-namespace.md)