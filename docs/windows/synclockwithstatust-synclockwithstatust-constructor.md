---
title: 'Costruttore synclockwithstatust:: Synclockwithstatust | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockWithStatusT::SyncLockWithStatusT
dev_langs:
- C++
helpviewer_keywords:
- SyncLockWithStatusT, constructor
ms.assetid: 5d2fb820-ae1b-495f-8084-ebb4fecc3104
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 21ce2054cabf257594cb3fa376236b9a1e504a59
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39647755"
---
# <a name="synclockwithstatustsynclockwithstatust-constructor"></a>Costruttore SyncLockWithStatusT::SyncLockWithStatusT
Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.  
  
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
  
### <a name="parameters"></a>Parametri  
 *other*  
 Un riferimento rvalue a un altro **SyncLockWithStatusT** oggetto.  
  
 *sync*  
 Un riferimento a un'altra **SyncLockWithStatusT** oggetto.  
  
 *status*  
 Il valore della [Status](../windows/synclockwithstatust-status-data-member.md) membro dati del *altri* parametro o i *sincronizzazione* parametro.  
  
## <a name="remarks"></a>Note  
 Inizializza una nuova istanza di **SyncLockWithStatusT** classe.  
  
 Il primo costruttore inizializza l'oggetto corrente **SyncLockWithStatusT** da un altro oggetto **SyncLockWithStatusT** specificato dal parametro *altri*e quindi Invalida l'altra **SyncLockWithStatusT** oggetto. Il secondo costruttore viene **protette**e la inizializza corrente **SyncLockWithStatusT** oggetto da uno stato non valido.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Classe SyncLockWithStatusT](../windows/synclockwithstatust-class.md)   
 [Metodo SyncLockWithStatusT::GetStatus](../windows/synclockwithstatust-getstatus-method.md)