---
title: Classe IConvertTypeImpl
ms.date: 11/04/2016
f1_keywords:
- ATL.IConvertTypeImpl<T>
- IConvertTypeImpl
- ATL.IConvertTypeImpl
- ATL::IConvertTypeImpl
- ATL::IConvertTypeImpl<T>
- IConvertTypeImpl.CanConvert
- CanConvert
- IConvertTypeImpl::CanConvert
helpviewer_keywords:
- IConvertTypeImpl class
- CanConvert method
ms.assetid: 7f81e79e-7d3f-4cbe-b93c-d632a94b15f6
ms.openlocfilehash: b4309e794a83e6c13dcf0051791cd1762a6d5012
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88845562"
---
# <a name="iconverttypeimpl-class"></a>Classe IConvertTypeImpl

Fornisce un'implementazione dell'interfaccia [IConvertType](/previous-versions/windows/desktop/ms715926(v=vs.85)) .

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
class ATL_NO_VTABLE IConvertTypeImpl
   : public IConvertType, public CConvertHelper
```

### <a name="parameters"></a>Parametri

*T*<br/>
Classe derivata da `IConvertTypeImpl` .

## <a name="requirements"></a>Requisiti

**Intestazione:** atldb.h

## <a name="members"></a>Membri

### <a name="interface-methods"></a>Metodi di interfaccia

| Nome | Descrizione |
|-|-|
|[CanConvert](#canconvert)|Fornisce informazioni sulla disponibilità di conversioni di tipi in un comando o in un set di righe.|

## <a name="remarks"></a>Osservazioni

Questa interfaccia è obbligatoria per i comandi, i set di righe e i set di righe dell'indice. `IConvertTypeImpl` implementa l'interfaccia delegando l'oggetto di conversione fornito da OLE DB.

## <a name="iconverttypeimplcanconvert"></a><a name="canconvert"></a> IConvertTypeImpl:: CanConvert

Fornisce informazioni sulla disponibilità di conversioni di tipi in un comando o in un set di righe.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(CanConvert)(DBTYPE wFromType,
   DBTYPE wToType,
   DBCONVERTFLAGS dwConvertFlags);
```

#### <a name="parameters"></a>Parametri

Vedere [IConvertType:: CanConvert](/previous-versions/windows/desktop/ms711224(v=vs.85)) nella Guida *di riferimento per programmatori OLE DB*.

### <a name="remarks"></a>Osservazioni

USA OLE DB conversione dei dati in `MSADC.DLL` .

## <a name="see-also"></a>Vedere anche

[Modelli di provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura del modello di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)
