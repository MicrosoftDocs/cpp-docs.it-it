---
title: Classe CComAutoCriticalSection
ms.date: 11/04/2016
f1_keywords:
- CComAutoCriticalSection
- ATLCORE/ATL::CComAutoCriticalSection
- ATLCORE/ATL::CComAutoCriticalSection::CComAutoCriticalSection
helpviewer_keywords:
- CComAutoCriticalSection class
ms.assetid: 491a9d90-3398-4f90-88f5-fd2172a46b30
ms.openlocfilehash: 116c550f45bf622e7620b3a6f552339b4bcc24a7
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69497936"
---
# <a name="ccomautocriticalsection-class"></a>Classe CComAutoCriticalSection

`CComAutoCriticalSection`fornisce metodi per ottenere e rilasciare la proprietà di un oggetto sezione critica.

## <a name="syntax"></a>Sintassi

```
class CComAutoCriticalSection : public CComCriticalSection
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComAutoCriticalSection::CComAutoCriticalSection](#ccomautocriticalsection)|Costruttore.|
|[CComAutoCriticalSection:: ~ CComAutoCriticalSection](#dtor)|Distruttore.|

## <a name="remarks"></a>Note

`CComAutoCriticalSection`è simile alla classe [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md), ad `CComAutoCriticalSection` eccezione del fatto che inizializza automaticamente l'oggetto sezione critica nel costruttore.

In genere si usa `CComAutoCriticalSection` il `typedef` nome [AutoCriticalSection](ccommultithreadmodel-class.md#autocriticalsection). Questo nome fa `CComAutoCriticalSection` riferimento al momento in cui viene utilizzato [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) .

I `Init` metodi `Term` e da [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md) non sono disponibili quando si usa questa classe.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md)

`CComAutoCriticalSection`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcore. h

##  <a name="ccomautocriticalsection"></a>CComAutoCriticalSection:: CComAutoCriticalSection

Costruttore.

```
CComAutoCriticalSection();
```

### <a name="remarks"></a>Note

Chiama la funzione Win32 [InitializeCriticalSection](/windows/win32/api/synchapi/nf-synchapi-initializecriticalsection), che Inizializza l'oggetto sezione critica.

##  <a name="dtor"></a>CComAutoCriticalSection:: ~ CComAutoCriticalSection

Distruttore.

```
~CComAutoCriticalSection() throw();
```

### <a name="remarks"></a>Note

Il distruttore chiama [DeleteCriticalSection](/windows/win32/api/synchapi/nf-synchapi-deletecriticalsection), che rilascia tutte le risorse di sistema usate dall'oggetto sezione critica.

## <a name="see-also"></a>Vedere anche

[Classe CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)<br/>
[Classe CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md)
