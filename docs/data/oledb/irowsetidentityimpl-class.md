---
title: Classe IRowsetIdentityImpl
ms.date: 11/04/2016
f1_keywords:
- ATL::IRowsetIdentityImpl
- ATL.IRowsetIdentityImpl
- IRowsetIdentityImpl
- IsSameRow
- IRowsetIdentityImpl.IsSameRow
- ATL.IRowsetIdentityImpl.IsSameRow
- IRowsetIdentityImpl::IsSameRow
- ATL::IRowsetIdentityImpl::IsSameRow
helpviewer_keywords:
- IRowsetIdentityImpl class
- IsSameRow method
ms.assetid: 56821edf-e045-40c8-96bd-231552cd5799
ms.openlocfilehash: 5ce4db130f4e8569b666047ca7a5c2bc4e0e6cb1
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50593193"
---
# <a name="irowsetidentityimpl-class"></a>Classe IRowsetIdentityImpl

Implementa OLE DB [IRowsetIdentity](/previous-versions/windows/desktop/ms715913) interfaccia, che consente di eseguire test per l'identità di riga.

## <a name="syntax"></a>Sintassi

```cpp
template <class T, class RowClass = CSimpleRow>
class ATL_NO_VTABLE IRowsetIdentityImpl
   : public IRowsetIdentity
```

### <a name="parameters"></a>Parametri

*T*<br/>
Una classe derivata da `IRowsetIdentityImpl`.

*RowClass*<br/>
L'unità di archiviazione per il `HROW`.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldb.h

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

|||
|-|-|
|[IsSameRow](#issamerow)|Confronta due handle di riga per vedere se fanno riferimento alla stessa riga.|

## <a name="issamerow"></a> Irowsetidentityimpl:: Issamerow

Confronta due handle di riga per vedere se fanno riferimento alla stessa riga.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(IsSameRow )(HROW hThisRow,
   HROW hThatRow);
```

#### <a name="parameters"></a>Parametri

Visualizzare [IRowsetIdentity::IsSameRow](/previous-versions/windows/desktop/ms719629) nel *riferimento per programmatori OLE DB*.

### <a name="remarks"></a>Note

Per confrontare gli handle di riga, questo metodo viene eseguito il cast di `HROW` handle a `RowClass` membri e chiamate `memcmp` sugli indicatori di misura.

## <a name="see-also"></a>Vedere anche

[Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)