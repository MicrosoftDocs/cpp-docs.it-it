---
title: Enumerazione RuntimeClassType | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::RuntimeClassType
dev_langs:
- C++
helpviewer_keywords:
- RuntimeClassType enumeration
ms.assetid: d380712d-672e-4ea9-b7c5-cf9fa7dbb770
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 43ab0a738af4c6bc92d42c0884827b574946d2ea
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33892403"
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
 **Intestazione:** FTM.  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)