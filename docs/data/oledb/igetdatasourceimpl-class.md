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
ms.openlocfilehash: 596dd2ea7f65040ae526662974d210c1f99a0cf2
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80210613"
---
# <a name="igetdatasourceimpl-class"></a>Classe IGetDataSourceImpl

Fornisce un'implementazione dell'oggetto [IGetDataSource](/previous-versions/windows/desktop/ms709721(v=vs.85)) .

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
class ATL_NO_VTABLE IGetDataSourceImpl : public IGetDataSource
```

### <a name="parameters"></a>Parametri

*T*<br/>
Classe derivata da `IGetDataSourceImpl`.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldb.h

## <a name="members"></a>Members

### <a name="interface-methods"></a>Metodi di interfaccia

|||
|-|-|
|[GetDataSource](#getdatasource)|Restituisce un puntatore a interfaccia sull'oggetto origine dati che ha creato la sessione.|

## <a name="remarks"></a>Osservazioni

Si tratta di un'interfaccia obbligatoria della sessione per ottenere un puntatore di interfaccia all'oggetto origine dati.

## <a name="igetdatasourceimplgetdatasource"></a><a name="getdatasource"></a>IGetDataSourceImpl:: GetDataSource

Restituisce un puntatore a interfaccia sull'oggetto origine dati che ha creato la sessione.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(GetDataSource)(REFIID riid,
   IUnknown ** ppDataSource);
```

#### <a name="parameters"></a>Parametri

Vedere [IGetDataSource:: GetDataSource](/previous-versions/windows/desktop/ms725443(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

### <a name="remarks"></a>Osservazioni

Utile se è necessario accedere alle proprietà nell'oggetto origine dati.

## <a name="see-also"></a>Vedere anche

[Modelli di provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)
