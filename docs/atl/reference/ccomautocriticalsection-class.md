---
title: CComAutoCriticalSection (classe)
ms.date: 11/04/2016
f1_keywords:
- CComAutoCriticalSection
- ATLCORE/ATL::CComAutoCriticalSection
- ATLCORE/ATL::CComAutoCriticalSection::CComAutoCriticalSection
helpviewer_keywords:
- CComAutoCriticalSection class
ms.assetid: 491a9d90-3398-4f90-88f5-fd2172a46b30
ms.openlocfilehash: 8cbf08082fd24ef2cf0e8794e2944a799baec084
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81321084"
---
# <a name="ccomautocriticalsection-class"></a>CComAutoCriticalSection (classe)

`CComAutoCriticalSection`fornisce metodi per ottenere e rilasciare la proprietà di un oggetto sezione critica.

## <a name="syntax"></a>Sintassi

```
class CComAutoCriticalSection : public CComCriticalSection
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComAutoCriticalSection::CComAutoCriticalSection](#ccomautocriticalsection)|Costruttore.|
|[CComAutoCriticalSection:: CComAutoCriticalSection](#dtor)|Distruttore.|

## <a name="remarks"></a>Osservazioni

`CComAutoCriticalSection`è simile alla classe [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md), ad eccezione del fatto che `CComAutoCriticalSection` inizializza automaticamente l'oggetto sezione critica nel costruttore.

In genere, `CComAutoCriticalSection` si `typedef` utilizza tramite il nome [AutoCriticalSection](ccommultithreadmodel-class.md#autocriticalsection). Questo nome `CComAutoCriticalSection` fa riferimento quando viene utilizzato [CComMultiThreadModel.This](../../atl/reference/ccommultithreadmodel-class.md) name references when CComMultiThreadModel is being used.

I `Init` `Term` metodi e da [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md) non sono disponibili quando si utilizza questa classe .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md)

`CComAutoCriticalSection`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcore.h

## <a name="ccomautocriticalsectionccomautocriticalsection"></a><a name="ccomautocriticalsection"></a>CComAutoCriticalSection::CComAutoCriticalSection

Costruttore.

```
CComAutoCriticalSection();
```

### <a name="remarks"></a>Osservazioni

Chiama la funzione Win32 [InitializeCriticalSection](/windows/win32/api/synchapi/nf-synchapi-initializecriticalsection), che inizializza l'oggetto sezione critica.

## <a name="ccomautocriticalsectionccomautocriticalsection"></a><a name="dtor"></a>CComAutoCriticalSection:: CComAutoCriticalSection

Distruttore.

```
~CComAutoCriticalSection() throw();
```

### <a name="remarks"></a>Osservazioni

Il distruttore chiama [DeleteCriticalSection](/windows/win32/api/synchapi/nf-synchapi-deletecriticalsection), che rilascia tutte le risorse di sistema utilizzate dall'oggetto sezione critica.

## <a name="see-also"></a>Vedere anche

[CComFakeCriticalSection (classe)](../../atl/reference/ccomfakecriticalsection-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[CComCriticalSection (classe)](../../atl/reference/ccomcriticalsection-class.md)
