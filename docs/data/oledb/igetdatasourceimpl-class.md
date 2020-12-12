---
description: 'Altre informazioni su: classe IGetDataSourceImpl'
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
ms.openlocfilehash: 24cf83b7eb799882f1c7da42854899bcf46fddf2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97287268"
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
Classe derivata da `IGetDataSourceImpl` .

## <a name="requirements"></a>Requisiti

**Intestazione:** atldb.h

## <a name="members"></a>Membri

### <a name="interface-methods"></a>Metodi di interfaccia

| Nome | Description |
|-|-|
|[GetDataSource](#getdatasource)|Restituisce un puntatore a interfaccia sull'oggetto origine dati che ha creato la sessione.|

## <a name="remarks"></a>Commenti

Si tratta di un'interfaccia obbligatoria della sessione per ottenere un puntatore di interfaccia all'oggetto origine dati.

## <a name="igetdatasourceimplgetdatasource"></a><a name="getdatasource"></a> IGetDataSourceImpl:: GetDataSource

Restituisce un puntatore a interfaccia sull'oggetto origine dati che ha creato la sessione.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(GetDataSource)(REFIID riid,
   IUnknown ** ppDataSource);
```

#### <a name="parameters"></a>Parametri

Vedere [IGetDataSource:: GetDataSource](/previous-versions/windows/desktop/ms725443(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

### <a name="remarks"></a>Commenti

Utile se è necessario accedere alle proprietà nell'oggetto origine dati.

## <a name="see-also"></a>Vedi anche

[Modelli di provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura del modello di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)
