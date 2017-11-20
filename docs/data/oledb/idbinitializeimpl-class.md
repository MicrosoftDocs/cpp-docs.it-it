---
title: Classe IDBInitializeImpl | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ATL.IDBInitializeImpl<T>
- ATL::IDBInitializeImpl<T>
- IDBInitializeImpl
- ATL::IDBInitializeImpl
- ATL.IDBInitializeImpl
dev_langs: C++
helpviewer_keywords: IDBInitializeImpl class
ms.assetid: e4182f81-0443-44f5-a0d3-e7e075d6f883
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: a7a51023f167eee5fbd4082486409f4e11a15547
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="idbinitializeimpl-class"></a>Classe IDBInitializeImpl
Fornisce un'implementazione per il [IDBInitialize](https://msdn.microsoft.com/en-us/library/ms713706.aspx) interfaccia.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <class T>  
class ATL_NO_VTABLE IDBInitializeImpl : public IDBInitialize  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La classe, derivata da `IDBInitializeImpl`.  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[IDBInitializeImpl](../../data/oledb/idbinitializeimpl-idbinitializeimpl.md)|Costruttore.|  
  
### <a name="interface-methods"></a>Metodi di interfaccia  
  
|||  
|-|-|  
|[Inizializzare](../../data/oledb/idbinitializeimpl-initialize.md)|Avvia il provider.|  
|[Annullare l'inizializzazione](../../data/oledb/idbinitializeimpl-uninitialize.md)|Arresta il provider.|  
  
### <a name="data-members"></a>Membri di dati  
  
|||  
|-|-|  
|[m_dwStatus](../../data/oledb/idbinitializeimpl-m-dwstatus.md)|Flag dell'origine dati.|  
|[m_pCUtlPropInfo](../../data/oledb/idbinitializeimpl-m-pcutlpropinfo.md)|Un puntatore all'implementazione di informazioni di proprietà di database.|  
  
## <a name="remarks"></a>Note  
 Un'interfaccia obbligatoria in oggetti origine dati e l'interfaccia facoltativa sugli enumeratori.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)