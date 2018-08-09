---
title: FactoryCache (struttura) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Details::FactoryCache
dev_langs:
- C++
helpviewer_keywords:
- FactoryCache structure
ms.assetid: 624544e6-0989-47f6-a3e9-edb60e1ee6d4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 8a09128bd334fc6e0987e39eaf51c19aadce34ea
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39647547"
---
# <a name="factorycache-structure"></a>FactoryCache (struttura)
Supporta l'infrastruttura di libreria modelli C++ per Windows Runtime e non deve essere usato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
struct FactoryCache;  
```  
  
## <a name="remarks"></a>Note  
 Contiene il percorso di una class factory e un valore che identifica un oggetto registrato wrt o oggetto di classe COM.  
  
## <a name="members"></a>Membri  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Membro dati FactoryCache::cookie](../windows/factorycache-cookie-data-member.md)|Contiene un valore che identifica un oggetto di classe di Windows Runtime o COM registrato e viene successivamente utilizzato per annullare la registrazione dell'oggetto.|  
|[Membro dati FactoryCache::factory](../windows/factorycache-factory-data-member.md)|Punta a una class factory COM o Windows Runtime.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `FactoryCache`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** module.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)