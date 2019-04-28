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
ms.openlocfilehash: 613440eceb71f0277f4cc5de2af89fe263772797
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62260192"
---
# <a name="ccomautocriticalsection-class"></a>Classe CComAutoCriticalSection

`CComAutoCriticalSection` fornisce metodi per ottenere e rilasciare la proprietà di un oggetto sezione critica.

## <a name="syntax"></a>Sintassi

```
class CComAutoCriticalSection : public CComCriticalSection
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComAutoCriticalSection::CComAutoCriticalSection](#ccomautocriticalsection)|Costruttore.|
|[CComAutoCriticalSection::~CComAutoCriticalSection](#dtor)|Distruttore.|

## <a name="remarks"></a>Note

`CComAutoCriticalSection` è simile alla classe [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md), tranne `CComAutoCriticalSection` inizializza automaticamente l'oggetto sezione critica nel costruttore.

In genere, si usa `CComAutoCriticalSection` tramite il `typedef` name [AutoCriticalSection](ccommultithreadmodel-class.md#autocriticalsection). Questo nome fa riferimento a `CComAutoCriticalSection` quando si [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md) è in uso.

Il `Init` e `Term` metodi dal [CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md) non sono disponibili quando si utilizza questa classe.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md)

`CComAutoCriticalSection`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcore

##  <a name="ccomautocriticalsection"></a>  CComAutoCriticalSection::CComAutoCriticalSection

Costruttore.

```
CComAutoCriticalSection();
```

### <a name="remarks"></a>Note

Chiama la funzione Win32 [InitializeCriticalSection](/windows/desktop/api/synchapi/nf-synchapi-initializecriticalsection), che inizializza l'oggetto sezione critica.

##  <a name="dtor"></a>  CComAutoCriticalSection:: ~ CComAutoCriticalSection

Distruttore.

```
~CComAutoCriticalSection() throw();
```

### <a name="remarks"></a>Note

Le chiamate del distruttore [DeleteCriticalSection](/windows/desktop/api/synchapi/nf-synchapi-deletecriticalsection), che rilascia tutte le risorse di sistema utilizzate dall'oggetto sezione critica.

## <a name="see-also"></a>Vedere anche

[Classe CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)<br/>
[Classe CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md)
