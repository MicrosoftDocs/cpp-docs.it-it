---
description: 'Altre informazioni su: Classe IRowsetCreatorImpl'
title: Classe IRowsetCreatorImpl
ms.date: 11/04/2016
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
helpviewer_keywords:
- IRowsetCreatorImpl class
- SetSite method
ms.assetid: 92cc950f-7978-4754-8d9a-defa63867d82
ms.openlocfilehash: 6a478e86bdb09851afed091c99ed0d0931a9115e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97317402"
---
# <a name="irowsetcreatorimpl-class"></a>Classe IRowsetCreatorImpl

Esegue le stesse funzioni di `IObjectWithSite` ma Abilita anche le proprietà OLE DB `DBPROPCANSCROLLBACKWARDS DBPROPCANFETCHBACKWARDS` .

## <a name="syntax"></a>Sintassi

```cpp
template < class T >
class ATL_NO_VTABLE IRowsetCreatorImpl
   : public IObjectWithSiteImpl< T >
```

### <a name="parameters"></a>Parametri

*T*<br/>
Classe derivata da `IRowsetCreator` .

## <a name="requirements"></a>Requisiti

**Intestazione:** atldb.h

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

| Nome | Description |
|-|-|
|[SetSite](#setsite)|Imposta il sito che contiene l'oggetto set di righe.|

## <a name="remarks"></a>Commenti

Questa classe eredita da [IObjectWithSite](/windows/win32/api/ocidl/nn-ocidl-iobjectwithsite) ed esegue l'override di [IObjectWithSite:: SESITE](/windows/win32/api/ocidl/nf-ocidl-iobjectwithsite-setsite). Quando un comando del provider o un oggetto Session crea un set di righe, chiama `QueryInterface` sull'oggetto set di righe che cerca `IObjectWithSite` e chiama il `SetSite` passaggio dell'interfaccia dell'oggetto set di righe `IUnkown` come interfaccia del sito.

## <a name="irowsetcreatorimplsetsite"></a><a name="setsite"></a> IRowsetCreatorImpl:: SESITE

Imposta il sito che contiene l'oggetto set di righe. Per ulteriori informazioni, vedere [IObjectWithSite:: SESITE](/windows/win32/api/ocidl/nf-ocidl-iobjectwithsite-setsite).

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(SetSite )(IUnknown* pCreator);
```

#### <a name="parameters"></a>Parametri

*pCreator*<br/>
in Puntatore al `IUnknown` puntatore a interfaccia del sito che gestisce l'oggetto set di righe.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Commenti

Inoltre, `IRowsetCreatorImpl::SetSite` Abilita le proprietà OLE DB `DBPROPCANSCROLLBACKWARDS DBPROPCANFETCHBACKWARDS` .

## <a name="see-also"></a>Vedi anche

[Modelli di provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura del modello di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)
