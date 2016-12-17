---
title: "Costruttore SyncLockT::SyncLockT | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockT::SyncLockT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SyncLockT, costruttore"
ms.assetid: 713dfd9f-7369-4d86-b4a0-8b32c184d89b
caps.latest.revision: 4
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Costruttore SyncLockT::SyncLockT
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura WRL e non può essere utilizzata direttamente dal proprio codice.  
  
## Sintassi  
  
```  
SyncLockT(  
   _Inout_ SyncLockT&& other  
);  
  
explicit SyncLockT(  
   typename SyncTraits::Type sync = SyncTraits::GetInvalidValue()  
);  
```  
  
#### Parametri  
 `other`  
 Un riferimento\-rvalue a un altro oggetto di SyncLockT.  
  
 `sync`  
 Un riferimento a un altro oggetto di SyncLockWithStatusT.  
  
## Note  
 Inizializza una nuova istanza della classe SyncLockT.  
  
 Il primo costruttore inizializza l'oggetto corrente di SyncLockT da un altro SyncLockT specificato dal parametro `other`quindi invalida altri oggetti di SyncLockT.  Il secondo costruttore viene `protected`e inizializza l'oggetto corrente di SyncLockT in uno stato non valido.  
  
## Requisiti  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers::Details  
  
## Vedere anche  
 [Classe SyncLockT](../windows/synclockt-class.md)