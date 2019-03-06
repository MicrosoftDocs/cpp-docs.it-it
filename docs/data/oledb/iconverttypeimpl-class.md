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
ms.openlocfilehash: e1117cfb8e68cbdc5432355315213faad903ea35
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57424652"
---
# <a name="iconverttypeimpl-class"></a>Classe IConvertTypeImpl

Fornisce un'implementazione del [IConvertType](/previous-versions/windows/desktop/ms715926(v=vs.85)) interfaccia.

## <a name="syntax"></a>Sintassi

```cpp
template <class T>
class ATL_NO_VTABLE IConvertTypeImpl
   : public IConvertType, public CConvertHelper
```

### <a name="parameters"></a>Parametri

*T*<br/>
La classe, derivata da `IConvertTypeImpl`.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldb.h

## <a name="members"></a>Membri

### <a name="interface-methods"></a>Metodi di interfaccia

|||
|-|-|
|[CanConvert](#canconvert)|Fornisce informazioni sulla disponibilità di conversioni di tipi in un comando o in un set di righe.|

## <a name="remarks"></a>Note

Questa interfaccia è obbligatoria in caso di comandi, i set di righe e i set di righe di indice. `IConvertTypeImpl` implementa l'interfaccia mediante la delega all'oggetto di conversione fornita da OLE DB.

## <a name="canconvert"></a> IConvertTypeImpl::CanConvert

Fornisce informazioni sulla disponibilità di conversioni di tipi in un comando o in un set di righe.

### <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(CanConvert)(DBTYPE wFromType,
   DBTYPE wToType,
   DBCONVERTFLAGS dwConvertFlags);
```

#### <a name="parameters"></a>Parametri

Visualizzare [IConvertType::CanConvert](/previous-versions/windows/desktop/ms711224(v=vs.85)) nel *riferimento per programmatori OLE DB*.

### <a name="remarks"></a>Note

Utilizza la conversione di dati OLE DB in `MSADC.DLL`.

## <a name="see-also"></a>Vedere anche

[Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)