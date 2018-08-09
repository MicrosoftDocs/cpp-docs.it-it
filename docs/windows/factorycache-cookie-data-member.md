---
title: 'Membro dati factorycache:: cookie | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Details::FactoryCache::cookie
dev_langs:
- C++
helpviewer_keywords:
- cookie data member
ms.assetid: b1bc79af-a896-4e3b-8afa-64733022eddf
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: f3636cdb2c30d08547fd9085141aa9283bdc85c7
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39652383"
---
# <a name="factorycachecookie-data-member"></a>Membro dati FactoryCache::cookie
Supporta l'infrastruttura di libreria modelli C++ per Windows Runtime e non deve essere usato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
union {   
   WINRT_REGISTRATION_COOKIE winrt;  
   DWORD com;   
} cookie;  
```  
  
## <a name="remarks"></a>Note  
 Contiene un valore che identifica un oggetto di classe di Windows Runtime o COM registrato e viene successivamente utilizzato per annullare la registrazione dell'oggetto.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** module.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [FactoryCache (struttura)](../windows/factorycache-structure.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)