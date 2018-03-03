---
title: 'Costruttore synclockwithstatust:: Synclockwithstatust | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockWithStatusT::SyncLockWithStatusT
dev_langs:
- C++
helpviewer_keywords:
- SyncLockWithStatusT, constructor
ms.assetid: 5d2fb820-ae1b-495f-8084-ebb4fecc3104
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: dc5be4a37182cb23b47a2511d2e7d5eb0ffa558a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="synclockwithstatustsynclockwithstatust-constructor"></a>Costruttore SyncLockWithStatusT::SyncLockWithStatusT
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
SyncLockWithStatusT(  
   _Inout_ SyncLockWithStatusT&& other  
);  
  
explicit SyncLockWithStatusT(  
   typename SyncTraits::Type sync,  
   DWORD status  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `other`  
 Un riferimento rvalue a un altro oggetto SyncLockWithStatusT.  
  
 `sync`  
 Un riferimento a un altro oggetto SyncLockWithStatusT.  
  
 `status`  
 Il valore della [Status](../windows/synclockwithstatust-status-data-member.md) membro dati di `other` parametro o `sync` parametro.  
  
## <a name="remarks"></a>Note  
 Inizializza una nuova istanza della classe SyncLockWithStatusT.  
  
 Il primo costruttore inizializza l'oggetto SyncLockWithStatusT corrente da un altro SyncLockWithStatusT specificato dal parametro `other`e quindi invalida l'altro oggetto SyncLockWithStatusT. Il secondo costruttore viene `protected`e inizializza l'oggetto SyncLockWithStatusT corrente a uno stato non valido.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers::Details  
  
## <a name="see-also"></a>Vedere anche  
 [SyncLockWithStatusT (classe)](../windows/synclockwithstatust-class.md)   
 [Metodo SyncLockWithStatusT::GetStatus](../windows/synclockwithstatust-getstatus-method.md)