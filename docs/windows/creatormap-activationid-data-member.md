---
title: 'Membro dati creatormap:: ActivationID | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Details::CreatorMap::activationId
dev_langs:
- C++
helpviewer_keywords:
- activationId data member
ms.assetid: 77518b76-6e6a-4b48-8e2e-a4c7c67769e0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 9c4ff889f808eda00e5b2ce426cd800678b4829f
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33881796"
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
 **Intestazione:** Implements  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [CreatorMap (struttura)](../windows/creatormap-structure.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)