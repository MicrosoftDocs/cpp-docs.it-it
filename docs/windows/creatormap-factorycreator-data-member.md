---
title: 'Membro dati creatormap:: FactoryCreator | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: module/Microsoft::WRL::Details::CreatorMap::factoryCreator
dev_langs: C++
helpviewer_keywords: factoryCreator data member
ms.assetid: c9aac363-8f38-4cfd-9605-1e6ac74c5097
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 6e80b63a82a37350595e673e5f57b9e508d0bf9a
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="creatormapfactorycreator-data-member"></a>Membro dati CreatorMap::factoryCreator
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
HRESULT (*factoryCreator)(  
   unsigned int* currentflags,  
   const CreatorMap* entry,  
   REFIID iidClassFactory,  
 IUnknown** factory);  
```  
  
## <a name="parameters"></a>Parametri  
 `currentflags`  
 Uno del [RuntimeClassType](../windows/runtimeclasstype-enumeration.md) enumeratori.  
  
 `entry`  
 Un CreatorMap.  
  
 `iidClassFactory`  
 L'ID di interfaccia di una class factory.  
  
 `factory`  
 Al termine dell'operazione, l'indirizzo di una class factory.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se riesce; in caso contrario, HRESULT indica un errore.  
  
## <a name="remarks"></a>Note  
 Crea una factory per il CreatorMap specificato.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** module.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [CreatorMap (struttura)](../windows/creatormap-structure.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)