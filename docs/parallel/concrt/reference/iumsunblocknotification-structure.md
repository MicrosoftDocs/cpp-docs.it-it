---
title: Struttura IUMSUnblockNotification
ms.date: 11/04/2016
f1_keywords:
- IUMSUnblockNotification
- CONCRTRM/concurrency::IUMSUnblockNotification
- CONCRTRM/concurrency::IUMSUnblockNotification::IUMSUnblockNotification::GetContext
- CONCRTRM/concurrency::IUMSUnblockNotification::IUMSUnblockNotification::GetNextUnblockNotification
helpviewer_keywords:
- IUMSUnblockNotification structure
ms.assetid: eaca9529-c1cc-472b-8ec6-722a1ff0fa2a
ms.openlocfilehash: 219e32cedb02d4ecab73390e33601de32f9b0992
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50677968"
---
# <a name="iumsunblocknotification-structure"></a>Struttura IUMSUnblockNotification

Rappresenta una notifica di Gestione risorse indicante che un proxy del thread, che si è bloccato e ha attivato un valore restituito al contesto di pianificazione definito dell'utilità di pianificazione, si è sbloccato ed è pronto per essere pianificato. Questa interfaccia non è valida una volta riprogrammato il contesto di esecuzione associato del proxy del thread, restituito dal metodo `GetContext`.

## <a name="syntax"></a>Sintassi

```
struct IUMSUnblockNotification;
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IUMSUnblockNotification::GetContext](#getcontext)|Restituisce il `IExecutionContext` interfaccia per il contesto di esecuzione associato al proxy thread che è stato sbloccato. Dopo che questo metodo viene restituito e riprogrammato il contesto di esecuzione sottostante tramite una chiamata verso la `IThreadProxy::SwitchTo` (metodo), questa interfaccia non è più valida.|
|[IUMSUnblockNotification:: GetNextUnblockNotification](#getnextunblocknotification)|Restituisce il successivo `IUMSUnblockNotification` interfaccia nella catena restituita dal metodo `IUMSCompletionList::GetUnblockNotifications`.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IUMSUnblockNotification`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrtrm. h

**Spazio dei nomi:** Concurrency

##  <a name="getcontext"></a>  Metodo IUMSUnblockNotification:: GetContext

Restituisce il `IExecutionContext` interfaccia per il contesto di esecuzione associato al proxy thread che è stato sbloccato. Dopo che questo metodo viene restituito e riprogrammato il contesto di esecuzione sottostante tramite una chiamata verso la `IThreadProxy::SwitchTo` (metodo), questa interfaccia non è più valida.

```
virtual IExecutionContext* GetContext() = 0;
```

### <a name="return-value"></a>Valore restituito

Un `IExecutionContext` interfaccia per il contesto di esecuzione per un proxy del thread che è stato sbloccato.

##  <a name="getnextunblocknotification"></a>  Metodo IUMSUnblockNotification:: GetNextUnblockNotification

Restituisce il successivo `IUMSUnblockNotification` interfaccia nella catena restituita dal metodo `IUMSCompletionList::GetUnblockNotifications`.

```
virtual IUMSUnblockNotification* GetNextUnblockNotification() = 0;
```

### <a name="return-value"></a>Valore restituito

La prossima `IUMSUnblockNotification` interfaccia nella catena restituita dal metodo `IUMSCompletionList::GetUnblockNotifications`.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Struttura IUMSScheduler](iumsscheduler-structure.md)<br/>
[Struttura IUMSCompletionList](iumscompletionlist-structure.md)
