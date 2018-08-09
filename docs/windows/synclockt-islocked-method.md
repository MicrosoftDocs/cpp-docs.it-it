---
title: 'Metodo synclockt:: IsLocked | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockT::IsLocked
dev_langs:
- C++
helpviewer_keywords:
- IsLocked method
ms.assetid: a81fea43-f99a-4708-812a-7fd6af500d3d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 5bfbd3418af731edf826debd9d6663095be706b8
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39641519"
---
# <a name="synclocktislocked-method"></a>Metodo SyncLockT::IsLocked
Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
bool IsLocked() const;  
```  
  
## <a name="return-value"></a>Valore restituito  
 **true** se il **SyncLockT** oggetto è bloccato; in caso contrario, **false**.  
  
## <a name="remarks"></a>Note  
 Indica se l'oggetto corrente **SyncLockT** oggetto proprietario di una risorsa, ovvero, il **SyncLockT** oggetto è *bloccato*.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Classe SyncLockT](../windows/synclockt-class.md)