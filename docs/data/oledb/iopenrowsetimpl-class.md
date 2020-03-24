---
title: Classe IOpenRowsetImpl
ms.date: 11/04/2016
f1_keywords:
- IOpenRowsetImpl
- IOpenRowsetImpl.CreateRowset
- IOpenRowsetImpl::CreateRowset
- OpenRowset
- IOpenRowsetImpl::OpenRowset
- IOpenRowsetImpl.OpenRowset
helpviewer_keywords:
- IOpenRowsetImpl class
- CreateRowset method
- OpenRowset method
ms.assetid: d259cedc-1db4-41cf-bc9f-5030907ab486
ms.openlocfilehash: 8ecbcd46e534baa73574f0930e1cbac4dbc49dfb
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80210535"
---
# <a name="iopenrowsetimpl-class"></a>Classe IOpenRowsetImpl

Fornisce l'implementazione per l'interfaccia `IOpenRowset`.

## <a name="syntax"></a>Sintassi

```cpp
template <class SessionClass>
class IOpenRowsetImpl : public IOpenRowset
```

### <a name="parameters"></a>Parametri

*SessionClass*<br/>
Classe derivata da `IOpenRowsetImpl`.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldb.h

## <a name="members"></a>Members

### <a name="methods"></a>Metodi

|||
|-|-|
|[CreateRowset](#createrowset)|Crea un oggetto set di righe. Non viene chiamato direttamente dall'utente.|
|[OpenRowset](#openrowset)|Apre e restituisce un set di righe che include tutte le righe di una singola tabella o indice di base. (Non in ATLDB. H|

## <a name="remarks"></a>Osservazioni

L'interfaccia [IOpenRowset](/previous-versions/windows/desktop/ms716946(v=vs.85)) è obbligatoria per un oggetto Session. Si apre e restituisce un set di righe che include tutte le righe di una singola tabella o indice di base.

## <a name="iopenrowsetimplcreaterowset"></a><a name="createrowset"></a>IOpenRowsetImpl:: CreateRowset

Crea un oggetto set di righe. Non viene chiamato direttamente dall'utente. Vedere [IOpenRowset:: OPENROWSET](/previous-versions/windows/desktop/ms716724(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB.*

### <a name="syntax"></a>Sintassi

```cpp
template template <class RowsetClass>
HRESULT CreateRowset(IUnknown* pUnkOuter,
   DBID* pTableID,
   DBID* pIndexID,
   REFIID riid,
   ULONG cPropertySets,
   DBPROPSET rgPropertySets[],
   IUnknown** ppRowset,
   RowsetClass*& pRowsetObj);
```

#### <a name="parameters"></a>Parametri

*RowsetClass*<br/>
Membro della classe modello che rappresenta la classe del set di righe dell'utente. Generalmente generato dalla procedura guidata.

*pRowsetObj*<br/>
out Puntatore a un oggetto set di righe. In genere, questo parametro non viene utilizzato, ma può essere utilizzato se è necessario eseguire più operazioni sul set di righe prima di passarlo a un oggetto COM. Il ciclo di vita di *pRowsetObj* è associato a *ppRowset*.

Per altri parametri, vedere [IOpenRowset:: OPENROWSET](/previous-versions/windows/desktop/ms716724(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB.*

## <a name="iopenrowsetimplopenrowset"></a><a name="openrowset"></a>IOpenRowsetImpl:: OpenRowset

Apre e restituisce un set di righe che include tutte le righe di una singola tabella o indice di base.

### <a name="syntax"></a>Sintassi

```cpp
HRESULT OpenRowset(IUnknown* pUnkOuter,
   DBID* pTableID,
   DBID* pIndexID,
   REFIID riid,
   ULONG cPropertySets,
   DBPROPSET rgPropertySets[],
   IUnknown** ppRowset);
```

#### <a name="parameters"></a>Parametri

Vedere [IOpenRowset:: OPENROWSET](/previous-versions/windows/desktop/ms716724(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

### <a name="remarks"></a>Osservazioni

Questo metodo non è stato trovato in ATLDB. H. Viene creato tramite la creazione guidata oggetto ATL quando si crea un provider.

## <a name="see-also"></a>Vedere anche

[Modelli di provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)
