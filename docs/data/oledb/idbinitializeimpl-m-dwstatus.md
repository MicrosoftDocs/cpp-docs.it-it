---
title: 'Idbinitializeimpl:: M_dwstatus | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ATL::IDBInitializeImpl::m_dwStatus
- IDBInitializeImpl.m_dwStatus
- ATL.IDBInitializeImpl.m_dwStatus
- IDBInitializeImpl::m_dwStatus
- IDBInitializeImpl<T>::m_dwStatus
- ATL.IDBInitializeImpl<T>.m_dwStatus
- ATL::IDBInitializeImpl<T>::m_dwStatus
- m_dwStatus
dev_langs: C++
helpviewer_keywords: m_dwStatus
ms.assetid: 7621ccff-ca60-4b75-9c6a-c104bd0e2038
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: c54cc1d91916e23e432faf8e407400b0985e3285
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="idbinitializeimplmdwstatus"></a>IDBInitializeImpl::m_dwStatus
Flag dell'origine dati.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
DWORD m_dwStatus;  
  
```  
  
## <a name="remarks"></a>Note  
 Questi flag specificare o indicano lo stato di vari attributi per l'oggetto origine dati. Contiene uno o più dei seguenti `enum` valori:  
  
```  
enum DATASOURCE_FLAGS {  
    DSF_MASK_INIT     = 0xFFFFF00F,  
    DSF_PERSIST_DIRTY = 0x00000001,  
    DSF_INITIALIZED   = 0x00000010,  
};  
```  
  
|||  
|-|-|  
|**DSF_MASK_INIT**|Una maschera per abilitare il ripristino dello stato non inizializzato.|  
|**DSF_PERSIST_DIRTY**|Impostato se l'oggetto origine dati richiede la persistenza (ovvero, se sono state apportate modifiche).|  
|**DSF_INITIALIZED**|Impostato se l'origine dati è stata inizializzata.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe IDBInitializeImpl](../../data/oledb/idbinitializeimpl-class.md)   
 [Idbinitializeimpl:: Idbinitializeimpl](../../data/oledb/idbinitializeimpl-idbinitializeimpl.md)   
 [IDBInitializeImpl::Uninitialize](../../data/oledb/idbinitializeimpl-uninitialize.md)