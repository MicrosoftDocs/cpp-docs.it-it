---
title: Classe IDBCreateCommandImpl
ms.date: 11/04/2016
f1_keywords:
- ATL::IDBCreateCommandImpl
- IDBCreateCommandImpl
- ATL.IDBCreateCommandImpl
- IDBCreateCommandImpl.CreateCommand
- IDBCreateCommandImpl::CreateCommand
helpviewer_keywords:
- IDBCreateCommandImpl class
- CreateCommand method
ms.assetid: eac4755e-1668-42e1-958e-a35620c385ae
ms.openlocfilehash: 4a4978401ba90e3a7a91ac40cc1b0668adf12ee8
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80210717"
---
# <a name="idbcreatecommandimpl-class"></a>Classe IDBCreateCommandImpl

Fornisce un'implementazione dell'interfaccia [IDBCreateCommand](/previous-versions/windows/desktop/ms711625(v=vs.85)) .

## <a name="syntax"></a>Sintassi

```cpp
template <class T, class CommandClass >
class ATL_NO_VTABLE IDBCreateCommandImpl
   : public IDBCreateCommand
```

### <a name="parameters"></a>Parametri

*T*<br/>
Oggetto della sessione derivato da `IDBCreateCommandImpl`.

*CommandClass*<br/>
Classe Command.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldb.h

## <a name="members"></a>Members

### <a name="interface-methods"></a>Metodi di interfaccia

|||
|-|-|
|[CreateCommand](#createcommand)|Crea un nuovo comando.|

## <a name="remarks"></a>Osservazioni

Interfaccia facoltativa nell'oggetto Session per ottenere un nuovo comando.

## <a name="idbcreatecommandimplcreatecommand"></a><a name="createcommand"></a>IDBCreateCommandImpl:: CreateCommand

Crea un nuovo comando e restituisce l'interfaccia richiesta.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(CreateCommand)(IUnknown * pUnkOuter,
   REFIID riid,
   IUnknown ** ppvCommand);
```

#### <a name="parameters"></a>Parametri

Vedere [IDBCreateCommand:: CreateCommand](/previous-versions/windows/desktop/ms709772(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

Alcuni parametri corrispondono ai parametri di *riferimento di OLE DB Programmer* con nomi diversi, descritti in `IDBCreateCommand::CreateCommand`:

|Parametri del modello di OLE DB|Parametri *di riferimento di OLE DB Programmer*|
|--------------------------------|------------------------------------------------|
|*ppvCommand*|*ppCommand*|

## <a name="see-also"></a>Vedere anche

[Modelli di provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)
