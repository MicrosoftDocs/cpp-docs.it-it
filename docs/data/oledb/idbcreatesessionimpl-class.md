---
title: Classe IDBCreateSessionImpl
ms.date: 11/04/2016
f1_keywords:
- IDBCreateSessionImpl
- ATL.IDBCreateSessionImpl
- ATL::IDBCreateSessionImpl
- IDBCreateSessionImpl::CreateSession
- IDBCreateSessionImpl.CreateSession
- CreateSession
helpviewer_keywords:
- IDBCreateSessionImpl class
- CreateSession method
ms.assetid: 48c02c5c-8362-45ac-af8e-bb119cf8c5c7
ms.openlocfilehash: 0b15cd45ca63847e5489091226feba81a4040985
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50459423"
---
# <a name="idbcreatesessionimpl-class"></a>Classe IDBCreateSessionImpl

Fornisce un'implementazione per il [IDBCreateSession](/previous-versions/windows/desktop/ms724076) interfaccia.

## <a name="syntax"></a>Sintassi

```cpp
template <class T, class SessionClass>
class ATL_NO_VTABLE IDBCreateSessionImpl
   : public IDBCreateSession
```

### <a name="parameters"></a>Parametri

*T*<br/>
CLASSE, DERIVATA DA

*SessionClass*<br/>
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

Visualizzare [IDBCreateSession:: CreateSession](/previous-versions/windows/desktop/ms714942) nel *riferimento per programmatori OLE DB*.

## <a name="see-also"></a>Vedere anche

[Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)