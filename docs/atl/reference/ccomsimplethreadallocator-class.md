---
description: 'Altre informazioni su: classe CComSimpleThreadAllocator'
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
ms.openlocfilehash: 5925707ecd459475d9e9002af76fb76dd9cf9d38
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97142187"
---
# <a name="ccomsimplethreadallocator-class"></a>Classe CComSimpleThreadAllocator

Questa classe gestisce la selezione dei thread per la classe `CComAutoThreadModule` .

## <a name="syntax"></a>Sintassi

```
class CComSimpleThreadAllocator
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CComSimpleThreadAllocator:: GetThread](#getthread)|Seleziona un thread.|

## <a name="remarks"></a>Commenti

`CComSimpleThreadAllocator` gestisce la selezione dei thread per [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md). `CComSimpleThreadAllocator::GetThread` scorre semplicemente ogni thread e restituisce quello successivo nella sequenza.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

## <a name="ccomsimplethreadallocatorgetthread"></a><a name="getthread"></a> CComSimpleThreadAllocator:: GetThread

Seleziona un thread specificando il thread successivo nella sequenza.

```
int GetThread(CComApartment* /* pApt */, int nThreads);
```

### <a name="parameters"></a>Parametri

*pApt*<br/>
Non utilizzato nell'implementazione predefinita di ATL.

*nThreads*<br/>
Numero massimo di thread nel modulo EXE.

### <a name="return-value"></a>Valore restituito

Numero intero compreso tra zero e (*nThreads* -1). Identifica uno dei thread nel modulo EXE.

### <a name="remarks"></a>Commenti

È possibile eseguire l'override `GetThread` di per fornire un metodo di selezione diverso o per usare il parametro *pApt* .

`GetThread` viene chiamato da [CComAutoThreadModule:: CreateInstance](../../atl/reference/ccomautothreadmodule-class.md#createinstance).

## <a name="see-also"></a>Vedi anche

[Classe CComApartment](../../atl/reference/ccomapartment-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
