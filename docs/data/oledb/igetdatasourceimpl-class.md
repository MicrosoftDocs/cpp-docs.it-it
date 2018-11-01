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
ms.openlocfilehash: 75b95f871023d7bfdea198a69377b1f360ab115f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50637840"
---
# <a name="igetdatasourceimpl-class"></a>Classe IGetDataSourceImpl

Fornisce un'implementazione del [IGetDataSource](/previous-versions/windows/desktop/ms709721) oggetto.

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

## <a name="getdatasource"></a> Igetdatasourceimpl:: GetDatasource

Restituisce un puntatore a interfaccia sull'oggetto origine dati che ha creato la sessione.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(GetDataSource)(REFIID riid, 
   IUnknown ** ppDataSource);
```

#### <a name="parameters"></a>Parametri

Visualizzare [IGetDataSource::GetDataSource](/previous-versions/windows/desktop/ms725443) nel *riferimento per programmatori OLE DB*.

### <a name="remarks"></a>Note

È utile se si desidera accedere alle proprietà nell'oggetto origine dati.

## <a name="see-also"></a>Vedere anche

[Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)