---
title: 'Costruttore synclockt:: Synclockt | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockT::SyncLockT
dev_langs: C++
helpviewer_keywords: SyncLockT, constructor
ms.assetid: 713dfd9f-7369-4d86-b4a0-8b32c184d89b
caps.latest.revision: "4"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 9e2aa229b85c0d3e40b5f3736c9e5da451102775
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="synclocktsynclockt-constructor"></a>Costruttore SyncLockT::SyncLockT
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
SyncLockT(  
   _Inout_ SyncLockT&& other  
);  
  
explicit SyncLockT(  
   typename SyncTraits::Type sync = SyncTraits::GetInvalidValue()  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `other`  
 Un riferimento rvalue a un altro oggetto SyncLockT.  
  
 `sync`  
 Un riferimento a un altro oggetto SyncLockWithStatusT.  
  
## <a name="remarks"></a>Note  
 Inizializza una nuova istanza della classe SyncLockT.  
  
 Il primo costruttore inizializza l'oggetto SyncLockT corrente da un altro oggetto SyncLockT specificato dal parametro `other`e quindi invalida l'altro oggetto SyncLockT. Il secondo costruttore viene `protected`e inizializza l'oggetto SyncLockT corrente a uno stato non valido.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Classe SyncLockT](../windows/synclockt-class.md)