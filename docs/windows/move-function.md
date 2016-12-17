---
title: "Funzione Move | Microsoft Docs"
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
  - "internal/Microsoft::WRL::Details::Move"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Move (funzione)"
ms.assetid: c9525426-97e8-4d8c-9877-b689d8a0dc67
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Funzione Move
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura WRL e non può essere utilizzata direttamente dal proprio codice.  
  
## Sintassi  
  
```  
template<  
   class T  
>  
inline typename RemoveReference<T>::Type&& Move(  
   _Inout_ T&& arg  
);  
```  
  
#### Parametri  
 `T`  
 Tipo dell'argomento.  
  
 `arg`  
 Un argomento da spostare.  
  
## Valore restituito  
 Parametro `arg` dopo che sono stati rimossi i tratti di riferimento rvalue o di riferimento, se presenti.  
  
## Note  
 Sposta l'argomento specificato da una posizione a un'altra.  
  
 Per ulteriori informazioni, vedere la sezione **Move Semantics** in [Dichiaratore di riferimento rvalue: &&](../cpp/rvalue-reference-declarator-amp-amp.md).  
  
## Requisiti  
 **Header:** internal.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)