---
description: 'Altre informazioni su: Classe IConvertTypeImpl'
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
ms.openlocfilehash: 5ac0e70432dbb81bd3f8aa30fd2adb9cb9e3fc30
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97317564"
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

| Nome | Description |
|-|-|
|[CanConvert](#canconvert)|Fornisce informazioni sulla disponibilità di conversioni di tipi in un comando o in un set di righe.|

## <a name="remarks"></a>Commenti

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

### <a name="remarks"></a>Commenti

USA OLE DB conversione dei dati in `MSADC.DLL` .

## <a name="see-also"></a>Vedi anche

[Modelli di provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[Architettura del modello di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)
