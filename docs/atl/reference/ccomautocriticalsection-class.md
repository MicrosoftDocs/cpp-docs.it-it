---
title: Classe CComAutoCriticalSection | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CComAutoCriticalSection
- ATLCORE/ATL::CComAutoCriticalSection
- ATLCORE/ATL::CComAutoCriticalSection::CComAutoCriticalSection
dev_langs:
- C++
helpviewer_keywords:
- CComAutoCriticalSection class
ms.assetid: 491a9d90-3398-4f90-88f5-fd2172a46b30
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 91d52b51de263be8f6de82a38e4d774c669dbef9
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43753584"
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
|[CComAutoCriticalSection:: ~ CComAutoCriticalSection](#dtor)|Distruttore.|

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

[Classe CComFakeCriticalSection](../../atl/reference/ccomfakecriticalsection-class.md)   
[Panoramica della classe](../../atl/atl-class-overview.md)   
[Classe CComCriticalSection](../../atl/reference/ccomcriticalsection-class.md)
