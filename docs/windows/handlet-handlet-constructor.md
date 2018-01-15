---
title: 'Costruttore handlet:: Handlet | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: corewrappers/Microsoft::WRL::Wrappers::HandleT::HandleT
dev_langs: C++
helpviewer_keywords: HandleT, constructor
ms.assetid: 4def6891-7e53-46f1-a197-a80e10744dd5
caps.latest.revision: "3"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: b72db4fb44191340b71c8bff26018221650ae34b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="handlethandlet-constructor"></a>Costruttore HandleT::HandleT
Inizializza una nuova istanza della classe HandleT.  
  
## <a name="syntax"></a>Sintassi  
  
```  
explicit HandleT(  
   typename HandleTraits::Type h =   
      HandleTraits::GetInvalidValue()  
);  
  
HandleT(  
   _Inout_ HandleT&& h  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `h`  
 Un handle.  
  
## <a name="remarks"></a>Note  
 Il primo costruttore inizializza un oggetto HandleT che non è un handle valido per un oggetto. Il secondo costruttore crea un nuovo oggetto HandleT dal parametro `h`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Classe HandleT](../windows/handlet-class.md)