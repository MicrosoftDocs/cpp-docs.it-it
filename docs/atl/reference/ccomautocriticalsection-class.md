---
description: 'Altre informazioni su: classe CComAutoCriticalSection'
title: Classe CComAutoCriticalSection
ms.date: 11/04/2016
f1_keywords:
- CComAutoCriticalSection
- ATLCORE/ATL::CComAutoCriticalSection
- ATLCORE/ATL::CComAutoCriticalSection::CComAutoCriticalSection
helpviewer_keywords:
- CComAutoCriticalSection class
ms.assetid: 491a9d90-3398-4f90-88f5-fd2172a46b30
ms.openlocfilehash: 2441c714b95a3bbefed4a699055d14c6915cffda
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97146965"
---
# <a name="ccomautocriticalsection-class"></a>Classe CComAutoCriticalSection

`CComAutoCriticalSection` fornisce metodi per ottenere e rilasciare la proprietà di un oggetto sezione critica.

## <a name="syntax"></a>Sintassi

```
class CComAutoCriticalSection : public CComCriticalSection
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CComAutoCriticalSection:: CComAutoCriticalSection](#ccomautocriticalsection)|Costruttore.|
|[CComAutoCriticalSection:: ~ CComAutoCriticalSection](#dtor)|Distruttore.|

## <a name="remarks"></a>Commenti

`CComAutoCriticalSection` è simile alla classe [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md), ad eccezione del fatto che `CComAutoCriticalSection` Inizializza automaticamente l'oggetto sezione critica nel costruttore.

In genere si usa `CComAutoCriticalSection` il **`typedef`** nome [AutoCriticalSection](ccommultithreadmodel-class.md#autocriticalsection). Questo nome fa riferimento `CComAutoCriticalSection` al momento in cui viene utilizzato [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) .

I `Init` `Term` metodi e da [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md) non sono disponibili quando si usa questa classe.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md)

`CComAutoCriticalSection`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcore. h

## <a name="ccomautocriticalsectionccomautocriticalsection"></a><a name="ccomautocriticalsection"></a> CComAutoCriticalSection:: CComAutoCriticalSection

Costruttore.

```
CComAutoCriticalSection();
```

### <a name="remarks"></a>Commenti

Chiama la funzione Win32 [InitializeCriticalSection](/windows/win32/api/synchapi/nf-synchapi-initializecriticalsection), che Inizializza l'oggetto sezione critica.

## <a name="ccomautocriticalsectionccomautocriticalsection"></a><a name="dtor"></a> CComAutoCriticalSection:: ~ CComAutoCriticalSection

Distruttore.

```
~CComAutoCriticalSection() throw();
```

### <a name="remarks"></a>Commenti

Il distruttore chiama [DeleteCriticalSection](/windows/win32/api/synchapi/nf-synchapi-deletecriticalsection), che rilascia tutte le risorse di sistema usate dall'oggetto sezione critica.

## <a name="see-also"></a>Vedi anche

[Classe CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Classe CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md)
