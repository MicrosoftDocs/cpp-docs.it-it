---
title: Funzione TerminateMap | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Details::TerminateMap
dev_langs:
- C++
helpviewer_keywords:
- TerminateMap function
ms.assetid: 1c314a61-da5d-49bb-ac44-c34ee3c23b66
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: b4787fec0a6b4b9f55c500b66786372945d9a523
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33890349"
---
# <a name="terminatemap-function"></a>Funzione TerminateMap
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
inline bool TerminateMap(  
   _In_ ModuleBase *module,   
   _In_opt_z_ const wchar_t *serverName,   
    bool forceTerminate) throw()  
```  
  
## <a name="parameters"></a>Parametri  
 `module`  
 Oggetto [modulo](../windows/module-class.md).  
  
 `serverName`  
 Il nome di un subset di class factory del modulo specificato dal parametro `module`.  
  
 `forceTerminate`  
 `true` Per terminare la classe factory indipendentemente da essi sono attive; `false` non terminare la class factory se qualsiasi factory è attivo.  
  
## <a name="return-value"></a>Valore restituito  
 `true` Se sono state terminate tutti i class factory; in caso contrario, `false`.  
  
## <a name="remarks"></a>Note  
 Arresta la class factory del modulo specificato.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Implements  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)