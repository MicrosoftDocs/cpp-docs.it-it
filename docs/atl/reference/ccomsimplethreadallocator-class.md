---
title: Classe CComSimpleThreadAllocator
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
ms.openlocfilehash: 1644014048b27b7ab6076783c5025140527a7ff5
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50637541"
---
# <a name="ccomsimplethreadallocator-class"></a>Classe CComSimpleThreadAllocator

Questa classe gestisce la selezione di thread per la classe `CComAutoThreadModule`.

## <a name="syntax"></a>Sintassi

```
class CComSimpleThreadAllocator
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComSimpleThreadAllocator::GetThread](#getthread)|Seleziona un thread.|

## <a name="remarks"></a>Note

`CComSimpleThreadAllocator` gestisce la selezione per thread [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md). `CComSimpleThreadAllocator::GetThread` è sufficiente consente di scorrere ogni thread e restituisce quello successivo nella sequenza.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

##  <a name="getthread"></a>  CComSimpleThreadAllocator::GetThread

Seleziona un thread, specificando il thread successivo nella sequenza.

```
int GetThread(CComApartment* /* pApt */, int nThreads);
```

### <a name="parameters"></a>Parametri

*pApt*<br/>
Non utilizzato nell'implementazione predefinita di ATL.

*nThreads*<br/>
Il numero massimo di thread nel modulo EXE.

### <a name="return-value"></a>Valore restituito

Un numero intero compreso tra zero e (*nThreads* - 1). Identifica uno dei thread nel modulo EXE.

### <a name="remarks"></a>Note

È possibile eseguire l'override `GetThread` per fornire un altro metodo di selezione o per rendere utilizzare il *pApt* parametro.

`GetThread` viene chiamato da [CComAutoThreadModule::CreateInstance](../../atl/reference/ccomautothreadmodule-class.md#createinstance).

## <a name="see-also"></a>Vedere anche

[Classe CComApartment](../../atl/reference/ccomapartment-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
