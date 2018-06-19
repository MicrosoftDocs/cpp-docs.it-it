---
title: 'Membro dati factorycache:: cookie | Documenti Microsoft'
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
ms.openlocfilehash: 27daf229da4c6707afcbf97f7ab8ce08cd8ce900
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33874447"
---
# <a name="factorycachecookie-data-member"></a>Membro dati FactoryCache::cookie
Supporta l'infrastruttura di libreria di modelli di Windows Runtime C++ e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
union {   
   WINRT_REGISTRATION_COOKIE winrt;  
   DWORD com;   
} cookie;  
```  
  
## <a name="remarks"></a>Note  
 Contiene un valore che identifica un oggetto di classe di Windows Runtime o COM registrato e viene successivamente utilizzato per annullare la registrazione dell'oggetto.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Implements  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [FactoryCache (struttura)](../windows/factorycache-structure.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)