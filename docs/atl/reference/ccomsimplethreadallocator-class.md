---
title: CComSimpleThreadAllocator (classe)
ms.date: 11/04/2016
f1_keywords:
- CComSimpleThreadAllocator
- ATLBASE/ATL::CComSimpleThreadAllocator
- ATLBASE/ATL::CComSimpleThreadAllocator::GetThread
helpviewer_keywords:
- threading [ATL], selecting threads
- ATL threads
- CComSimpleThreadAllocator class
- ATL threads, allocating
ms.assetid: 66b2166a-8c50-49fd-b8e4-7f293470327d
ms.openlocfilehash: 4a3cce492db4db9f46aeb4efe738ee6a594ddcfc
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81327340"
---
# <a name="ccomsimplethreadallocator-class"></a>CComSimpleThreadAllocator (classe)

Questa classe gestisce la `CComAutoThreadModule`selezione dei thread per la classe .

## <a name="syntax"></a>Sintassi

```
class CComSimpleThreadAllocator
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComSimpleThreadAllocator::GetThread](#getthread)|Seleziona un thread.|

## <a name="remarks"></a>Osservazioni

`CComSimpleThreadAllocator`gestisce la selezione dei thread per [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md). `CComSimpleThreadAllocator::GetThread`semplicemente ciclicamente attraverso ogni thread e restituisce quello successivo nella sequenza.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase.h

## <a name="ccomsimplethreadallocatorgetthread"></a><a name="getthread"></a>CComSimpleThreadAllocator::GetThread

Seleziona un thread specificando il thread successivo nella sequenza.

```
int GetThread(CComApartment* /* pApt */, int nThreads);
```

### <a name="parameters"></a>Parametri

*pApt*<br/>
Non utilizzato nell'implementazione predefinita di ATL.

*nThreads (in base alle ani*<br/>
Numero massimo di thread nel modulo EXE.

### <a name="return-value"></a>Valore restituito

Un numero intero compreso tra zero e (*nThreads* - 1). Identifica uno dei thread nel modulo EXE.

### <a name="remarks"></a>Osservazioni

È possibile `GetThread` eseguire l'override per fornire un metodo diverso di selezione o per utilizzare il parametro *pApt.*

`GetThread`viene chiamato da [CComAutoThreadModule::CreateInstance](../../atl/reference/ccomautothreadmodule-class.md#createinstance).

## <a name="see-also"></a>Vedere anche

[Classe CComApartment](../../atl/reference/ccomapartment-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
