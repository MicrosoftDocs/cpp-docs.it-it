---
title: Classe IDBCreateSessionImpl | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- IDBCreateSessionImpl
- ATL.IDBCreateSessionImpl
- ATL::IDBCreateSessionImpl
dev_langs: C++
helpviewer_keywords: IDBCreateSessionImpl class
ms.assetid: 48c02c5c-8362-45ac-af8e-bb119cf8c5c7
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 42f10a8df7fbf881b98287e5f9224517ed7160ed
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="idbcreatesessionimpl-class"></a>Classe IDBCreateSessionImpl
Fornisce un'implementazione per il [IDBCreateSession](https://msdn.microsoft.com/en-us/library/ms724076.aspx) interfaccia.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <class T, class SessionClass>  
class ATL_NO_VTABLE IDBCreateSessionImpl   
   : public IDBCreateSession  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 LA CLASSE, DERIVATA DA  
  
 `SessionClass`  
 L'oggetto di sessione.  
  
## <a name="members"></a>Membri  
  
### <a name="interface-methods"></a>Metodi di interfaccia  
  
|||  
|-|-|  
|[CreateSession](../../data/oledb/idbcreatesessionimpl-createsession.md)|Crea una nuova sessione dall'oggetto di origine dati e restituisce l'interfaccia richiesta per la sessione appena creata.|  
  
## <a name="remarks"></a>Note  
 Un'interfaccia obbligatoria per gli oggetti origine dati.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)