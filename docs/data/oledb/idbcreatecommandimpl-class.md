---
description: 'Altre informazioni su: classe IDBCreateCommandImpl'
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
ms.openlocfilehash: aaa9e84b66bd8bcb93fa418eed56a3cdadd31d6f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97287346"
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
Oggetto della sessione derivato da `IDBCreateCommandImpl` .

*CommandClass*<br/>
Classe Command.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldb.h

## <a name="members"></a>Membri

### <a name="interface-methods"></a>Metodi di interfaccia

| Nome | Description |
|-|-|
|[CreateCommand](#createcommand)|Crea un nuovo comando.|

## <a name="remarks"></a>Commenti

Interfaccia facoltativa nell'oggetto Session per ottenere un nuovo comando.

## <a name="idbcreatecommandimplcreatecommand"></a><a name="createcommand"></a> IDBCreateCommandImpl:: CreateCommand

Crea un nuovo comando e restituisce l'interfaccia richiesta.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(CreateCommand)(IUnknown * pUnkOuter,
   REFIID riid,
   IUnknown ** ppvCommand);
```

#### <a name="parameters"></a>Parametri

Vedere [IDBCreateCommand:: CreateCommand](/previous-versions/windows/desktop/ms709772(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

Alcuni parametri corrispondono ai parametri di *riferimento di OLE DB Programmer* con nomi diversi, descritti in `IDBCreateCommand::CreateCommand` :

|Parametri del modello di OLE DB|Parametri *di riferimento di OLE DB Programmer*|
|--------------------------------|------------------------------------------------|
|*ppvCommand*|*ppCommand*|

## <a name="see-also"></a>Vedi anche

[Modelli di provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura del modello di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)
