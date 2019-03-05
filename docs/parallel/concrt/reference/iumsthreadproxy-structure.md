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
ms.openlocfilehash: 258f249aa178b73da2080cca888409dc07f63dbb
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57263034"
---
# <a name="iumsthreadproxy-structure"></a>Struttura IUMSThreadProxy

Astrazione per un thread di esecuzione. Se si vuole che all'utilità di pianificazione siano concessi thread UMS, impostare il valore per l'elemento dei criteri dell'utilità di pianificazione `SchedulerKind` su `UmsThreadDefault` e implementare l'interfaccia `IUMSScheduler`. I thread UMS sono supportati solo su sistemi operativi a 64 bit con Windows 7 e versioni successive.

## <a name="syntax"></a>Sintassi

```
struct IUMSThreadProxy : public IThreadProxy;
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IUMSThreadProxy::EnterCriticalRegion](#entercriticalregion)|Chiamato per entrare in un'area critica. All'interno di un'area critica, l'utilità di pianificazione non verrà considerato dalla operazioni di blocco asincrone che si verificano durante l'area. Ciò significa che l'utilità di pianificazione non verrà essere riattivato per gli errori di pagina, sospensioni di thread, le chiamate asincrone di procedura del kernel (Inizializza) e così via, per un thread UMS.|
|[IUMSThreadProxy::EnterHyperCriticalRegion](#enterhypercriticalregion)|Chiamato per entrare in un'area di hyper-critical. All'interno di un'area di hyper-critical, l'utilità di pianificazione non rispetterà eventuali operazioni di blocco che si verificano durante l'area. Pertanto l'utilità di pianificazione non sarà nuovamente immessa per bloccare le chiamate di funzione, i tentativi di acquisizione di blocchi tramite cui vengono eseguiti blocchi, gli errori di pagina, le sospensioni di thread, le chiamate asincrone di procedura del kernel (APC, Asynchronous Procedure Call) e così via, per un thread UMS.|
|[IUMSThreadProxy::ExitCriticalRegion](#exitcriticalregion)|Chiamato per uscire da un'area critica.|
|[IUMSThreadProxy::ExitHyperCriticalRegion](#exithypercriticalregion)|Chiamato per uscire da un'area di hyper-critical.|
|[IUMSThreadProxy::GetCriticalRegionType](#getcriticalregiontype)|Restituisce il tipo di area critica il proxy thread si trova all'interno. Poiché aree hyper critiche sono un soprainsieme di aree critiche, se un'area critica e quindi un'area, hyper-critical è diventata codice `InsideHyperCriticalRegion` verranno restituiti.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[IThreadProxy](ithreadproxy-structure.md)

`IUMSThreadProxy`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrtrm. h

**Spazio dei nomi:** Concurrency

##  <a name="entercriticalregion"></a>  Metodo IUMSThreadProxy:: EnterCriticalRegion

Chiamato per entrare in un'area critica. All'interno di un'area critica, l'utilità di pianificazione non verrà considerato dalla operazioni di blocco asincrone che si verificano durante l'area. Ciò significa che l'utilità di pianificazione non verrà essere riattivato per gli errori di pagina, sospensioni di thread, le chiamate asincrone di procedura del kernel (Inizializza) e così via, per un thread UMS.

```
virtual int EnterCriticalRegion() = 0;
```

### <a name="return-value"></a>Valore restituito

La nuova profondità dell'area critica. Aree critiche sono rientranti.

##  <a name="enterhypercriticalregion"></a>  Metodo IUMSThreadProxy:: EnterHyperCriticalRegion

Chiamato per entrare in un'area di hyper-critical. All'interno di un'area di hyper-critical, l'utilità di pianificazione non rispetterà eventuali operazioni di blocco che si verificano durante l'area. Pertanto l'utilità di pianificazione non sarà nuovamente immessa per bloccare le chiamate di funzione, i tentativi di acquisizione di blocchi tramite cui vengono eseguiti blocchi, gli errori di pagina, le sospensioni di thread, le chiamate asincrone di procedura del kernel (APC, Asynchronous Procedure Call) e così via, per un thread UMS.

```
virtual int EnterHyperCriticalRegion() = 0;
```

### <a name="return-value"></a>Valore restituito

La nuova profondità dell'area di hyper-critical. Aree Hyper critica sono rientranti.

### <a name="remarks"></a>Note

L'utilità di pianificazione deve essere particolarmente attenta ciò che chiama i metodi e ai blocchi che acquisisce in tali aree. Se i blocchi di codice in un'area di questo tipo in un blocco che viene mantenuto da un elemento che l'utilità di pianificazione è responsabile della pianificazione, potrebbe verificarsi deadlock.

##  <a name="exitcriticalregion"></a>  Metodo IUMSThreadProxy:: ExitCriticalRegion

Chiamato per uscire da un'area critica.

```
virtual int ExitCriticalRegion() = 0;
```

### <a name="return-value"></a>Valore restituito

La nuova profondità dell'area critica. Aree critiche sono rientranti.

##  <a name="exithypercriticalregion"></a>  Metodo IUMSThreadProxy:: ExitHyperCriticalRegion

Chiamato per uscire da un'area di hyper-critical.

```
virtual int ExitHyperCriticalRegion() = 0;
```

### <a name="return-value"></a>Valore restituito

La nuova profondità dell'area di hyper-critical. Aree Hyper critica sono rientranti.

##  <a name="getcriticalregiontype"></a>  Metodo IUMSThreadProxy:: GetCriticalRegionType

Restituisce il tipo di area critica il proxy thread si trova all'interno. Poiché aree hyper critiche sono un soprainsieme di aree critiche, se un'area critica e quindi un'area, hyper-critical è diventata codice `InsideHyperCriticalRegion` verranno restituiti.

```
virtual CriticalRegionType GetCriticalRegionType() const = 0;
```

### <a name="return-value"></a>Valore restituito

Il tipo di area critica che il proxy thread si trova all'interno.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Struttura IUMSScheduler](iumsscheduler-structure.md)
