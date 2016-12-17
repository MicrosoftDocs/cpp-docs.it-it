---
title: "Costruttore SyncLockWithStatusT::SyncLockWithStatusT | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockWithStatusT::SyncLockWithStatusT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SyncLockWithStatusT, costruttore"
ms.assetid: 5d2fb820-ae1b-495f-8084-ebb4fecc3104
caps.latest.revision: 4
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Costruttore SyncLockWithStatusT::SyncLockWithStatusT
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura WRL e non può essere utilizzata direttamente dal proprio codice.  
  
## Sintassi  
  
```  
SyncLockWithStatusT(  
   _Inout_ SyncLockWithStatusT&& other  
);  
  
explicit SyncLockWithStatusT(  
   typename SyncTraits::Type sync,  
   DWORD status  
);  
```  
  
#### Parametri  
 `other`  
 Un riferimento\-rvalue a un altro oggetto di SyncLockWithStatusT.  
  
 `sync`  
 Un riferimento a un altro oggetto di SyncLockWithStatusT.  
  
 `status`  
 Il valore del membro [status\_](../windows/synclockwithstatust-status-data-member.md) del parametro `other` o del parametro `sync`.  
  
## Note  
 Inizializza una nuova istanza della classe SyncLockWithStatusT.  
  
 Il primo costruttore inizializza l'oggetto corrente di SyncLockWithStatusT da un altro SyncLockWithStatusT specificato dal parametro `other`quindi invalida altri oggetti di SyncLockWithStatusT.  Il secondo costruttore viene `protected`e inizializza l'oggetto corrente di SyncLockWithStatusT in uno stato non valido.  
  
## Requisiti  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers::Details  
  
## Vedere anche  
 [Classe SyncLockWithStatusT](../windows/synclockwithstatust-class.md)   
 [Metodo SyncLockWithStatusT::GetStatus](../windows/synclockwithstatust-getstatus-method.md)