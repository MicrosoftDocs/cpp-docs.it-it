---
title: Struttura CloakedIid | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: implements/Microsoft::WRL::CloakedIid
dev_langs: C++
helpviewer_keywords: CloakedIid structure
ms.assetid: 82e0e377-ca3a-46bc-b850-ae2c46c15bb5
caps.latest.revision: "3"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: c61e005759af9b5fde4bfff407ed502a41c22a72
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cloakediid-structure"></a>CloakedIid (struttura)
Indica ai modelli RuntimeClass, Implements e ChainInterfaces che l'interfaccia specificata non è accessibile nell'elenco di IID.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<  
   typename T  
>  
struct CloakedIid : T;  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 L'interfaccia che è nascosta (mascherata).  
  
## <a name="remarks"></a>Note  
 Ecco un esempio di utilizzo CloakedIid: `struct MyRuntimeClass : RuntimeClass<CloakedIid<IMyCloakedInterface>> {}`.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `T`  
  
 `CloakedIid`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)