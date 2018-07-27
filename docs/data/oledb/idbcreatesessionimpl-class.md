---
title: Classe IDBCreateSessionImpl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- IDBCreateSessionImpl
- ATL.IDBCreateSessionImpl
- ATL::IDBCreateSessionImpl
- IDBCreateSessionImpl::CreateSession
- IDBCreateSessionImpl.CreateSession
- CreateSession
dev_langs:
- C++
helpviewer_keywords:
- IDBCreateSessionImpl class
- CreateSession method
ms.assetid: 48c02c5c-8362-45ac-af8e-bb119cf8c5c7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 02701b03de074823da3cc7fcd229056195fd9a85
ms.sourcegitcommit: b0d6777cf4b580d093eaf6104d80a888706e7578
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/26/2018
ms.locfileid: "39269459"
---
# <a name="idbcreatesessionimpl-class"></a>Classe IDBCreateSessionImpl
Fornisce un'implementazione per il [IDBCreateSession](https://msdn.microsoft.com/library/ms724076.aspx) interfaccia.  
  
## <a name="syntax"></a>Sintassi

```cpp
template <class T, class SessionClass>  
class ATL_NO_VTABLE IDBCreateSessionImpl   
   : public IDBCreateSession  
```  
  
### <a name="parameters"></a>Parametri  
 *T*  
 CLASSE, DERIVATA DA  
  
 *SessionClass*  
 L'oggetto di sessione.  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h 
  
## <a name="members"></a>Membri  
  
### <a name="interface-methods"></a>Metodi di interfaccia  
  
|||  
|-|-|  
|[CreateSession](#createsession)|Crea una nuova sessione dall'oggetto origine dati e restituisce l'interfaccia richiesta nella sessione appena creata.|  
  
## <a name="remarks"></a>Note  
 Un'interfaccia obbligatoria per gli oggetti origine dati.  

## <a name="createsession"></a> Idbcreatesessionimpl:: CreateSession
Crea una nuova sessione dall'oggetto origine dati e restituisce l'interfaccia richiesta nella sessione appena creata.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp
      STDMETHOD(CreateSession)(IUnknown * pUnkOuter,   
   REFIID riid,   
   IUnknown ** ppDBSession);  
```  
  
#### <a name="parameters"></a>Parametri  
 Visualizzare [IDBCreateSession:: CreateSession](https://msdn.microsoft.com/library/ms714942.aspx) nel *riferimento per programmatori OLE DB*.   
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)
