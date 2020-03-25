---
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
ms.openlocfilehash: a53cd653258980d21e9dd297ae61c458732b7250
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80210548"
---
# <a name="irowsetcreatorimpl-class"></a>Classe IRowsetCreatorImpl

Esegue le stesse funzioni di `IObjectWithSite` ma Abilita anche le proprietà del OLE DB `DBPROPCANSCROLLBACKWARDS DBPROPCANFETCHBACKWARDS`.

## <a name="syntax"></a>Sintassi

```cpp
template < class T >
class ATL_NO_VTABLE IRowsetCreatorImpl
   : public IObjectWithSiteImpl< T >
```

### <a name="parameters"></a>Parametri

*T*<br/>
Classe derivata da `IRowsetCreator`.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldb.h

## <a name="members"></a>Members

### <a name="methods"></a>Metodi

|||
|-|-|
|[SetSite](#setsite)|Imposta il sito che contiene l'oggetto set di righe.|

## <a name="remarks"></a>Osservazioni

Questa classe eredita da [IObjectWithSite](/windows/win32/api/ocidl/nn-ocidl-iobjectwithsite) ed esegue l'override di [IObjectWithSite:: SESITE](/windows/win32/api/ocidl/nf-ocidl-iobjectwithsite-setsite). Quando un comando del provider o un oggetto Session crea un set di righe, chiama `QueryInterface` nell'oggetto set di righe che cerca `IObjectWithSite` e chiama `SetSite` passando l'interfaccia `IUnkown` dell'oggetto set di righe come interfaccia del sito.

## <a name="irowsetcreatorimplsetsite"></a><a name="setsite"></a>IRowsetCreatorImpl:: SESITE

Imposta il sito che contiene l'oggetto set di righe. Per ulteriori informazioni, vedere [IObjectWithSite:: SESITE](/windows/win32/api/ocidl/nf-ocidl-iobjectwithsite-setsite).

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(SetSite )(IUnknown* pCreator);
```

#### <a name="parameters"></a>Parametri

*pCreator*<br/>
in Puntatore al puntatore all'interfaccia `IUnknown` del sito che gestisce l'oggetto set di righe.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

`IRowsetCreatorImpl::SetSite` Abilita inoltre le proprietà del `DBPROPCANSCROLLBACKWARDS DBPROPCANFETCHBACKWARDS` OLE DB.

## <a name="see-also"></a>Vedere anche

[Modelli di provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)
