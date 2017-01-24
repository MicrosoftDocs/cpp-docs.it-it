---
title: "Classe di eventi (Libreria modelli C++ per Windows Runtime) | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::Event"
dev_langs: 
  - "C++"
ms.assetid: 55dfc9fc-62d4-4bb2-9d85-5b6dd88569e8
caps.latest.revision: 4
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe di eventi (Libreria modelli C++ per Windows Runtime)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Rappresenta un evento.  
  
## Sintassi  
  
```  
class Event : public HandleT<HandleTraits::EventTraits>;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore Event::Event \(Libreria modelli C\+\+ per Windows Runtime\)](../windows/event-event-constructor-windows-runtime-cpp-template-library.md)|Inizializza una nuova istanza della classe evento.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore Event::operator\=](../windows/event-operator-assign-operator.md)|Assegna il riferimento Event specifico all'istanza Event corrente.|  
  
## Gerarchia di ereditarietà  
 `HandleT`  
  
 `Event`  
  
## Requisiti  
 **Intestazione:** corewrappers.h  
  
 **Spazio dei nomi:** Microsoft::WRL::Wrappers  
  
## Vedere anche  
 [Metodo Microsoft::WRL::Wrappers](../windows/microsoft-wrl-wrappers-namespace.md)