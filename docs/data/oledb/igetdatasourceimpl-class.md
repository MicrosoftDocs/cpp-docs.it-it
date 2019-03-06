---
title: Classe IGetDataSourceImpl
ms.date: 11/04/2016
f1_keywords:
- IGetDataSourceImpl
- ATL.IGetDataSourceImpl<T>
- ATL.IGetDataSourceImpl
- ATL::IGetDataSourceImpl
- ATL::IGetDataSourceImpl<T>
- GetDataSource
- IGetDataSourceImpl.GetDataSource
- IGetDataSourceImpl::GetDataSource
helpviewer_keywords:
- IGetDataSourceImpl class
- GetDataSource method
ms.assetid: d63f3178-d663-4f01-8c09-8aab2dd6805a
ms.openlocfilehash: bb4147bda64e86770e133e10a60efa567cee7719
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57414070"
---
# <a name="igetdatasourceimpl-class"></a>Classe IGetDataSourceImpl

Fornisce un'implementazione del [IGetDataSource](/previous-versions/windows/desktop/ms709721(v=vs.85)) oggetto.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
class ATL_NO_VTABLE IGetDataSourceImpl : public IGetDataSource
```

### <a name="parameters"></a>Parametri

*T*<br/>
La classe, derivata da `IGetDataSourceImpl`.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldb.h

## <a name="members"></a>Membri

### <a name="interface-methods"></a>Metodi di interfaccia

|||
|-|-|
|[GetDataSource](#getdatasource)|Restituisce un puntatore a interfaccia sull'oggetto origine dati che ha creato la sessione.|

## <a name="remarks"></a>Note

Questa è un'interfaccia obbligatoria nella sessione per ottenere un puntatore a interfaccia per l'oggetto origine dati.

## <a name="getdatasource"></a> IGetDataSourceImpl::GetDataSource

Restituisce un puntatore a interfaccia sull'oggetto origine dati che ha creato la sessione.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(GetDataSource)(REFIID riid,
   IUnknown ** ppDataSource);
```

#### <a name="parameters"></a>Parametri

Visualizzare [IGetDataSource::GetDataSource](/previous-versions/windows/desktop/ms725443(v=vs.85)) nel *riferimento per programmatori OLE DB*.

### <a name="remarks"></a>Note

È utile se si desidera accedere alle proprietà nell'oggetto origine dati.

## <a name="see-also"></a>Vedere anche

[Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)