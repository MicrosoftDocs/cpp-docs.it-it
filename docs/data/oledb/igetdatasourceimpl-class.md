---
title: Classe IGetDataSourceImpl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- IGetDataSourceImpl
- ATL.IGetDataSourceImpl<T>
- ATL.IGetDataSourceImpl
- ATL::IGetDataSourceImpl
- ATL::IGetDataSourceImpl<T>
- GetDataSource
- IGetDataSourceImpl.GetDataSource
- IGetDataSourceImpl::GetDataSource
dev_langs:
- C++
helpviewer_keywords:
- IGetDataSourceImpl class
- GetDataSource method
ms.assetid: d63f3178-d663-4f01-8c09-8aab2dd6805a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 9ecc830937e36e213177205549ee4dd4e989e0ed
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46118700"
---
# <a name="igetdatasourceimpl-class"></a>Classe IGetDataSourceImpl

Fornisce un'implementazione del [IGetDataSource](/previous-versions/windows/desktop/ms709721\(v=vs.85\)) oggetto.  
  
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

Visualizzare [IGetDataSource::GetDataSource](/previous-versions/windows/desktop/ms725443\(v=vs.85\)) nel *riferimento per programmatori OLE DB*.  
  
### <a name="remarks"></a>Note  

È utile se si desidera accedere alle proprietà nell'oggetto origine dati.  
  
## <a name="see-also"></a>Vedere anche  

[Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)