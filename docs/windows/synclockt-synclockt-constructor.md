---
title: 'Costruttore synclockt:: Synclockt | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockT::SyncLockT
dev_langs:
- C++
helpviewer_keywords:
- SyncLockT, constructor
ms.assetid: 713dfd9f-7369-4d86-b4a0-8b32c184d89b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: c3353df1a73821a2009aeba2367f1892b06aba5b
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33889842"
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