---
description: 'Altre informazioni su: classe IRowsetIdentityImpl'
title: Classe IRowsetIdentityImpl
ms.date: 11/04/2016
f1_keywords:
- ATL::IRowsetIdentityImpl
- ATL.IRowsetIdentityImpl
- IRowsetIdentityImpl
- IRowsetIdentityImpl.IsSameRow
- ATL.IRowsetIdentityImpl.IsSameRow
- IRowsetIdentityImpl::IsSameRow
- ATL::IRowsetIdentityImpl::IsSameRow
helpviewer_keywords:
- IRowsetIdentityImpl class
- IsSameRow method
ms.assetid: 56821edf-e045-40c8-96bd-231552cd5799
ms.openlocfilehash: 4cba00d16671c3efd26bc3a9b20e93e1f80a1cc4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97287203"
---
# <a name="irowsetidentityimpl-class"></a>Classe IRowsetIdentityImpl

Implementa l'interfaccia OLE DB [IRowsetIdentity](/previous-versions/windows/desktop/ms715913(v=vs.85)) , che consente di testare l'identità della riga.

## <a name="syntax"></a>Sintassi

```cpp
template <class T, class RowClass = CSimpleRow>
class ATL_NO_VTABLE IRowsetIdentityImpl
   : public IRowsetIdentity
```

### <a name="parameters"></a>Parametri

*T*<br/>
Classe derivata da `IRowsetIdentityImpl` .

*RowClass*<br/>
Unità di archiviazione per `HROW` .

## <a name="requirements"></a>Requisiti

**Intestazione:** atldb.h

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

| Nome | Description |
|-|-|
|[IsSameRow](#issamerow)|Confronta due handle di riga per verificare se fanno riferimento alla stessa riga.|

## <a name="irowsetidentityimplissamerow"></a><a name="issamerow"></a> IRowsetIdentityImpl:: IsSameRow

Confronta due handle di riga per verificare se fanno riferimento alla stessa riga.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(IsSameRow )(HROW hThisRow,
   HROW hThatRow);
```

#### <a name="parameters"></a>Parametri

Vedere [IRowsetIdentity:: IsSameRow](/previous-versions/windows/desktop/ms719629(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

### <a name="remarks"></a>Commenti

Per confrontare gli handle di riga, questo metodo esegue il cast degli `HROW` handle ai `RowClass` membri e chiama `memcmp` sui puntatori.

## <a name="see-also"></a>Vedi anche

[Modelli di provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura del modello di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)
