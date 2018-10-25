---
title: Classe IRowsetCreatorImpl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- ATL::IRowsetCreatorImpl
- ATL.IRowsetCreatorImpl
- ATL::IRowsetCreatorImpl<T>
- ATL.IRowsetCreatorImpl<T>
- IRowsetCreatorImpl
- IRowsetCreatorImpl.SetSite
- IRowsetCreatorImpl<T>::SetSite
- IRowsetCreatorImpl::SetSite
- SetSite
- ATL.IRowsetCreatorImpl.SetSite
- ATL::IRowsetCreatorImpl<T>::SetSite
- ATL::IRowsetCreatorImpl::SetSite
- ATL.IRowsetCreatorImpl<T>.SetSite
dev_langs:
- C++
helpviewer_keywords:
- IRowsetCreatorImpl class
- SetSite method
ms.assetid: 92cc950f-7978-4754-8d9a-defa63867d82
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 34fc1304fe4fad1196b5f204e6ba241093e03f32
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50066214"
---
# <a name="irowsetcreatorimpl-class"></a>Classe IRowsetCreatorImpl

Esegue le stesse funzioni `IObjectWithSite` ma consente anche le proprietà OLE DB `DBPROPCANSCROLLBACKWARDS DBPROPCANFETCHBACKWARDS`.

## <a name="syntax"></a>Sintassi

```cpp
template < class T >
class ATL_NO_VTABLE IRowsetCreatorImpl
   : public IObjectWithSiteImpl< T >
```

### <a name="parameters"></a>Parametri

*T*<br/>
Una classe derivata da `IRowsetCreator`.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldb.h

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

|||
|-|-|
|[SetSite](#setsite)|Imposta il sito che contiene l'oggetto set di righe.|

## <a name="remarks"></a>Note

Questa classe eredita da [IObjectWithSite](/windows/desktop/api/ocidl/nn-ocidl-iobjectwithsite) ed esegue l'override [IObjectWithSite::SetSite](/windows/desktop/api/ocidl/nf-ocidl-iobjectwithsite-setsite). Quando un oggetto provider di sessione o comando crea un set di righe, viene chiamato `QueryInterface` sull'oggetto set di righe cercando `IObjectWithSite` e chiama `SetSite` passando l'oggetto set di righe `IUnkown` interfaccia come interfaccia di sito.

## <a name="setsite"></a> IRowsetCreatorImpl:: SetSite

Imposta il sito che contiene l'oggetto set di righe. Per altre informazioni, vedere [IObjectWithSite::SetSite](/windows/desktop/api/ocidl/nf-ocidl-iobjectwithsite-setsite).

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(SetSite )(IUnknown* pCreator);
```

#### <a name="parameters"></a>Parametri

*pCreator*<br/>
[in] Puntatore al `IUnknown` puntatore all'interfaccia del sito di gestione di oggetto set di righe.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

È inoltre `IRowsetCreatorImpl::SetSite` consente di OLE DB `DBPROPCANSCROLLBACKWARDS DBPROPCANFETCHBACKWARDS` proprietà.

## <a name="see-also"></a>Vedere anche

[Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)