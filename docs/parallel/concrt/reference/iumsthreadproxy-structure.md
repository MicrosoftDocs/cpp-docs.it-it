---
title: Struttura IUMSThreadProxy
ms.date: 11/04/2016
f1_keywords:
- IUMSThreadProxy
- CONCRTRM/concurrency::IUMSThreadProxy
- CONCRTRM/concurrency::IUMSThreadProxy::IUMSThreadProxy::EnterCriticalRegion
- CONCRTRM/concurrency::IUMSThreadProxy::IUMSThreadProxy::EnterHyperCriticalRegion
- CONCRTRM/concurrency::IUMSThreadProxy::IUMSThreadProxy::ExitCriticalRegion
- CONCRTRM/concurrency::IUMSThreadProxy::IUMSThreadProxy::ExitHyperCriticalRegion
- CONCRTRM/concurrency::IUMSThreadProxy::IUMSThreadProxy::GetCriticalRegionType
helpviewer_keywords:
- IUMSThreadProxy structure
ms.assetid: 61c69b7e-5c37-4048-bcb4-e75c536afd86
ms.openlocfilehash: 2e748b1da02394e1f70afd8b92947e1291957c62
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81368074"
---
# <a name="iumsthreadproxy-structure"></a>Struttura IUMSThreadProxy

Astrazione per un thread di esecuzione. Se si vuole che all'utilità di pianificazione siano concessi thread UMS, impostare il valore per l'elemento dei criteri dell'utilità di pianificazione `SchedulerKind` su `UmsThreadDefault` e implementare l'interfaccia `IUMSScheduler`. I thread UMS sono supportati solo su sistemi operativi a 64 bit con Windows 7 e versioni successive.

## <a name="syntax"></a>Sintassi

```cpp
struct IUMSThreadProxy : public IThreadProxy;
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IUMSThreadProxy::EnterCriticalRegion](#entercriticalregion)|Chiamato per entrare in un'area critica. Quando si è all'interno di un'area critica, l'utilità di pianificazione non osserverà le operazioni di blocco asincrone che si verificano durante l'area. Ciò significa che l'utilità di pianificazione non verrà reinserita per errori di pagina, sospensioni del thread, chiamate di procedura asincrona (APC) del kernel e così via, per un thread UMS.|
|[IUMSThreadProxy::EnterHyperCriticalRegion](#enterhypercriticalregion)|Chiamato per entrare in un'area ipercritica. Quando si è all'interno di un'area ipercritica, l'utilità di pianificazione non osserverà le operazioni di blocco che si verificano durante l'area. Pertanto l'utilità di pianificazione non sarà nuovamente immessa per bloccare le chiamate di funzione, i tentativi di acquisizione di blocchi tramite cui vengono eseguiti blocchi, gli errori di pagina, le sospensioni di thread, le chiamate asincrone di procedura del kernel (APC, Asynchronous Procedure Call) e così via, per un thread UMS.|
|[IUMSThreadProxy::ExitCriticalRegion](#exitcriticalregion)|Chiamato per uscire da un'area critica.|
|[IUMSThreadProxy::ExitHyperCriticalRegion](#exithypercriticalregion)|Chiamato per uscire da un'area ipercritica.|
|[IUMSThreadProxy::GetCriticalRegionType](#getcriticalregiontype)|Restituisce il tipo di area critica all'interno del proxy del thread. Poiché le aree ipercritiche sono un superset di aree critiche, se `InsideHyperCriticalRegion` il codice è entrato in un'area critica e quindi in un'area ipercritica, verrà restituito.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[Proxy Thread](ithreadproxy-structure.md)

`IUMSThreadProxy`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrtrm.h

**Spazio dei nomi:** Concurrency

## <a name="iumsthreadproxyentercriticalregion-method"></a><a name="entercriticalregion"></a>Metodo IUMSThreadProxy::EnterCriticalRegion

Chiamato per entrare in un'area critica. Quando si è all'interno di un'area critica, l'utilità di pianificazione non osserverà le operazioni di blocco asincrone che si verificano durante l'area. Ciò significa che l'utilità di pianificazione non verrà reinserita per errori di pagina, sospensioni del thread, chiamate di procedura asincrona (APC) del kernel e così via, per un thread UMS.

```cpp
virtual int EnterCriticalRegion() = 0;
```

### <a name="return-value"></a>Valore restituito

La nuova profondità dell'area critica. Le aree critiche sono rientranti.

## <a name="iumsthreadproxyenterhypercriticalregion-method"></a><a name="enterhypercriticalregion"></a>Metodo IUMSThreadProxy::EnterHyperCriticalRegion

Chiamato per entrare in un'area ipercritica. Quando si è all'interno di un'area ipercritica, l'utilità di pianificazione non osserverà le operazioni di blocco che si verificano durante l'area. Pertanto l'utilità di pianificazione non sarà nuovamente immessa per bloccare le chiamate di funzione, i tentativi di acquisizione di blocchi tramite cui vengono eseguiti blocchi, gli errori di pagina, le sospensioni di thread, le chiamate asincrone di procedura del kernel (APC, Asynchronous Procedure Call) e così via, per un thread UMS.

```cpp
virtual int EnterHyperCriticalRegion() = 0;
```

### <a name="return-value"></a>Valore restituito

La nuova profondità dell'area ipercritica. Le aree iper-critiche rientrano.

### <a name="remarks"></a>Osservazioni

L'utilità di pianificazione deve essere straordinariamente attenta a quali metodi chiama e quali blocchi acquisisce in tali aree. Se il codice in tale area si blocca su un blocco che è tenuto da un elemento che l'utilità di pianificazione è responsabile della pianificazione, potrebbe verificarsi un deadlock.

## <a name="iumsthreadproxyexitcriticalregion-method"></a><a name="exitcriticalregion"></a>Metodo IUMSThreadProxy::ExitCriticalRegion

Chiamato per uscire da un'area critica.

```cpp
virtual int ExitCriticalRegion() = 0;
```

### <a name="return-value"></a>Valore restituito

La nuova profondità dell'area critica. Le aree critiche sono rientranti.

## <a name="iumsthreadproxyexithypercriticalregion-method"></a><a name="exithypercriticalregion"></a>Metodo IUMSThreadProxy::ExitHyperCriticalRegion

Chiamato per uscire da un'area ipercritica.

```cpp
virtual int ExitHyperCriticalRegion() = 0;
```

### <a name="return-value"></a>Valore restituito

La nuova profondità dell'area ipercritica. Le aree iper-critiche rientrano.

## <a name="iumsthreadproxygetcriticalregiontype-method"></a><a name="getcriticalregiontype"></a>Metodo IUMSThreadProxy::GetCriticalRegionType

Restituisce il tipo di area critica all'interno del proxy del thread. Poiché le aree ipercritiche sono un superset di aree critiche, se `InsideHyperCriticalRegion` il codice è entrato in un'area critica e quindi in un'area ipercritica, verrà restituito.

```cpp
virtual CriticalRegionType GetCriticalRegionType() const = 0;
```

### <a name="return-value"></a>Valore restituito

Tipo di area critica all'interno del proxy del thread.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Struttura IUMSScheduler](iumsscheduler-structure.md)
