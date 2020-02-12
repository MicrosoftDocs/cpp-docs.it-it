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
ms.openlocfilehash: f4fb43a4223cad8cc63049d2a0f8345e48b90f17
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77139967"
---
# <a name="iumsthreadproxy-structure"></a>Struttura IUMSThreadProxy

Astrazione per un thread di esecuzione. Se si vuole che all'utilità di pianificazione siano concessi thread UMS, impostare il valore per l'elemento dei criteri dell'utilità di pianificazione `SchedulerKind` su `UmsThreadDefault` e implementare l'interfaccia `IUMSScheduler`. I thread UMS sono supportati solo su sistemi operativi a 64 bit con Windows 7 e versioni successive.

## <a name="syntax"></a>Sintassi

```cpp
struct IUMSThreadProxy : public IThreadProxy;
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IUMSThreadProxy:: EnterCriticalRegion](#entercriticalregion)|Chiamato per accedere a un'area critica. Quando si trova all'interno di un'area critica, l'utilità di pianificazione non osserverà le operazioni di blocco asincrone che si verificano durante l'area. Ciò significa che l'utilità di pianificazione non verrà nuovamente immessa per errori di pagina, sospensioni di thread, chiamate di procedure asincrone del kernel (APC) e così via per un thread UMS.|
|[IUMSThreadProxy:: EnterHyperCriticalRegion](#enterhypercriticalregion)|Chiamato per accedere a un'area ipercritica. All'interno di un'area ipercritica, l'utilità di pianificazione non osserverà le operazioni di blocco che si verificano durante l'area. Pertanto l'utilità di pianificazione non sarà nuovamente immessa per bloccare le chiamate di funzione, i tentativi di acquisizione di blocchi tramite cui vengono eseguiti blocchi, gli errori di pagina, le sospensioni di thread, le chiamate asincrone di procedura del kernel (APC, Asynchronous Procedure Call) e così via, per un thread UMS.|
|[IUMSThreadProxy:: ExitCriticalRegion](#exitcriticalregion)|Chiamato per uscire da un'area critica.|
|[IUMSThreadProxy:: ExitHyperCriticalRegion](#exithypercriticalregion)|Chiamato per uscire da un'area ipercritica.|
|[IUMSThreadProxy:: GetCriticalRegionType](#getcriticalregiontype)|Restituisce il tipo di area critica in cui si trova il proxy del thread. Poiché le aree ipercritiche sono un superset di aree critiche, se il codice è entrato in un'area critica e quindi un'area ipercritica, viene restituito `InsideHyperCriticalRegion`.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[IThreadProxy](ithreadproxy-structure.md)

`IUMSThreadProxy`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrtrm. h

**Spazio dei nomi:** Concurrency

## <a name="entercriticalregion"></a>Metodo IUMSThreadProxy:: EnterCriticalRegion

Chiamato per accedere a un'area critica. Quando si trova all'interno di un'area critica, l'utilità di pianificazione non osserverà le operazioni di blocco asincrone che si verificano durante l'area. Ciò significa che l'utilità di pianificazione non verrà nuovamente immessa per errori di pagina, sospensioni di thread, chiamate di procedure asincrone del kernel (APC) e così via per un thread UMS.

```cpp
virtual int EnterCriticalRegion() = 0;
```

### <a name="return-value"></a>Valore restituito

Nuova profondità dell'area critica. Le aree critiche sono rientranti.

## <a name="enterhypercriticalregion"></a>Metodo IUMSThreadProxy:: EnterHyperCriticalRegion

Chiamato per accedere a un'area ipercritica. All'interno di un'area ipercritica, l'utilità di pianificazione non osserverà le operazioni di blocco che si verificano durante l'area. Pertanto l'utilità di pianificazione non sarà nuovamente immessa per bloccare le chiamate di funzione, i tentativi di acquisizione di blocchi tramite cui vengono eseguiti blocchi, gli errori di pagina, le sospensioni di thread, le chiamate asincrone di procedura del kernel (APC, Asynchronous Procedure Call) e così via, per un thread UMS.

```cpp
virtual int EnterHyperCriticalRegion() = 0;
```

### <a name="return-value"></a>Valore restituito

Nuova profondità dell'area ipercritica. Le aree ipercritiche sono rientranti.

### <a name="remarks"></a>Osservazioni

L'utilità di pianificazione deve prestare particolare attenzione ai metodi che chiama e a quali blocchi acquisisce in tali aree. Se il codice in tale area si blocca in un blocco che è gestito da un elemento che l'utilità di pianificazione è responsabile della pianificazione, è possibile che si verifichi un deadlock.

## <a name="exitcriticalregion"></a>Metodo IUMSThreadProxy:: ExitCriticalRegion

Chiamato per uscire da un'area critica.

```cpp
virtual int ExitCriticalRegion() = 0;
```

### <a name="return-value"></a>Valore restituito

Nuova profondità dell'area critica. Le aree critiche sono rientranti.

## <a name="exithypercriticalregion"></a>Metodo IUMSThreadProxy:: ExitHyperCriticalRegion

Chiamato per uscire da un'area ipercritica.

```cpp
virtual int ExitHyperCriticalRegion() = 0;
```

### <a name="return-value"></a>Valore restituito

Nuova profondità dell'area ipercritica. Le aree ipercritiche sono rientranti.

## <a name="getcriticalregiontype"></a>Metodo IUMSThreadProxy:: GetCriticalRegionType

Restituisce il tipo di area critica in cui si trova il proxy del thread. Poiché le aree ipercritiche sono un superset di aree critiche, se il codice è entrato in un'area critica e quindi un'area ipercritica, viene restituito `InsideHyperCriticalRegion`.

```cpp
virtual CriticalRegionType GetCriticalRegionType() const = 0;
```

### <a name="return-value"></a>Valore restituito

Tipo di area critica in cui si trova il proxy del thread.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Struttura IUMSScheduler](iumsscheduler-structure.md)
