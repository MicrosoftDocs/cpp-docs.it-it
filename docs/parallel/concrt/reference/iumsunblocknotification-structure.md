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
ms.openlocfilehash: d4fd95b1f11ed6edac26cb03e41e8b650acfafa3
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77139976"
---
# <a name="iumsunblocknotification-structure"></a>Struttura IUMSUnblockNotification

Rappresenta una notifica di Gestione risorse indicante che un proxy del thread, che si è bloccato e ha attivato un valore restituito al contesto di pianificazione definito dell'utilità di pianificazione, si è sbloccato ed è pronto per essere pianificato. Questa interfaccia non è valida una volta riprogrammato il contesto di esecuzione associato del proxy del thread, restituito dal metodo `GetContext`.

## <a name="syntax"></a>Sintassi

```cpp
struct IUMSUnblockNotification;
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IUMSUnblockNotification:: GetContext](#getcontext)|Restituisce l'interfaccia `IExecutionContext` per il contesto di esecuzione associato al proxy del thread che è sbloccato. Una volta che questo metodo viene restituito e il contesto di esecuzione sottostante è stato ripianificato tramite una chiamata al metodo `IThreadProxy::SwitchTo`, questa interfaccia non è più valida.|
|[IUMSUnblockNotification:: GetNextUnblockNotification](#getnextunblocknotification)|Restituisce l'interfaccia `IUMSUnblockNotification` successiva nella catena restituita dal metodo `IUMSCompletionList::GetUnblockNotifications`.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IUMSUnblockNotification`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrtrm. h

**Spazio dei nomi:** Concurrency

## <a name="getcontext"></a>Metodo IUMSUnblockNotification:: GetContext

Restituisce l'interfaccia `IExecutionContext` per il contesto di esecuzione associato al proxy del thread che è sbloccato. Una volta che questo metodo viene restituito e il contesto di esecuzione sottostante è stato ripianificato tramite una chiamata al metodo `IThreadProxy::SwitchTo`, questa interfaccia non è più valida.

```cpp
virtual IExecutionContext* GetContext() = 0;
```

### <a name="return-value"></a>Valore restituito

Interfaccia `IExecutionContext` per il contesto di esecuzione a un proxy del thread che è sbloccato.

## <a name="getnextunblocknotification"></a>Metodo IUMSUnblockNotification:: GetNextUnblockNotification

Restituisce l'interfaccia `IUMSUnblockNotification` successiva nella catena restituita dal metodo `IUMSCompletionList::GetUnblockNotifications`.

```cpp
virtual IUMSUnblockNotification* GetNextUnblockNotification() = 0;
```

### <a name="return-value"></a>Valore restituito

Interfaccia `IUMSUnblockNotification` successiva nella catena restituita dal metodo `IUMSCompletionList::GetUnblockNotifications`.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Struttura IUMSScheduler](iumsscheduler-structure.md)<br/>
[Struttura IUMSCompletionList](iumscompletionlist-structure.md)
