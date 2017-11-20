---
title: Enumerazione RuntimeClassType | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: implements/Microsoft::WRL::RuntimeClassType
dev_langs: C++
helpviewer_keywords: RuntimeClassType enumeration
ms.assetid: d380712d-672e-4ea9-b7c5-cf9fa7dbb770
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 222f7d9ada76e43fa71658faa7c61e5369abd3db
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="runtimeclasstype-enumeration"></a>RuntimeClassType (enumerazione)
Specifica il tipo di [RuntimeClass](../windows/runtimeclass-class.md) istanza che è supportata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
enum RuntimeClassType;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="values"></a>Valori  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`ClassicCom`|Classe di runtime classica COM.|  
|`Delegate`|Equivalente a **ClassicCom**.|  
|`InhibitFtmBase`|Disabilita `FtmBase` supporto durante `__WRL_CONFIGURATION_LEGACY__` non è definito.|  
|`InhibitWeakReference`|Disabilita il supporto di riferimento debole.|  
|`WinRt`|Una classe di Windows Runtime.|  
|`WinRtClassicComMix`|Combinazione di `WinRt` e `ClassicCom`.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)