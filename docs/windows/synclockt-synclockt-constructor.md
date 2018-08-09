---
title: 'Costruttore synclockt:: Synclockt | Microsoft Docs'
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
ms.openlocfilehash: ceaafd6230e6497ed2b7636ad5070141546cb8d6
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39648165"
---
# <a name="synclocktsynclockt-constructor"></a>Costruttore SyncLockT::SyncLockT
Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
SyncLockT(  
   _Inout_ SyncLockT&& other  
);  
  
explicit SyncLockT(  
   typename SyncTraits::Type sync = SyncTraits::GetInvalidValue()  
);  
```  
  
### <a name="parameters"></a>Parametri  
 *other*  
 Un riferimento rvalue a un altro **SyncLockT** oggetto.  
  
 *sync*  
 Un riferimento a un altro `SyncLockWithStatusT` oggetto.  
  
## <a name="remarks"></a>Note  
 Inizializza una nuova istanza di **SyncLockT** classe.  
  
 Il primo costruttore inizializza l'oggetto corrente **SyncLockT** da un altro oggetto **SyncLockT** oggetto specificato dal parametro *altri*e quindi invalida l'altri  **SyncLockT** oggetto. Il secondo costruttore viene **protette**e la inizializza corrente **SyncLockT** oggetto da uno stato non valido.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Classe SyncLockT](../windows/synclockt-class.md)