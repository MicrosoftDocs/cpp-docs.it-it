---
title: 'Membro dati creatormap:: ActivationID | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: module/Microsoft::WRL::Details::CreatorMap::activationId
dev_langs: C++
helpviewer_keywords: activationId data member
ms.assetid: 77518b76-6e6a-4b48-8e2e-a4c7c67769e0
caps.latest.revision: "5"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 9d1bd0e310f5c0bc4afcb967dc141776aeb236fe
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="creatormapactivationid-data-member"></a>Membro dati CreatorMap::activationId
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
union {   
   const IID* clsid;  
   const wchar_t* (*getRuntimeName)();  
} activationId;  
```  
  
## <a name="parameters"></a>Parametri  
 `clsid`  
 ID di interfaccia.  
  
 `getRuntimeName`  
 Una funzione che recupera il nome di runtime di Windows di un oggetto.  
  
## <a name="remarks"></a>Note  
 Rappresenta un ID di oggetto che è identificato da un ID di classe COM classico o un nome di runtime di Windows.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** module.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [CreatorMap (struttura)](../windows/creatormap-structure.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)