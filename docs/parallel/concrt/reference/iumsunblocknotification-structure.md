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
ms.openlocfilehash: 0b88ddd4184e982a5e07c536efc301eaa16f4a41
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81368066"
---
# <a name="iumsunblocknotification-structure"></a>Struttura IUMSUnblockNotification

Rappresenta una notifica di Gestione risorse indicante che un proxy del thread, che si è bloccato e ha attivato un valore restituito al contesto di pianificazione definito dell'utilità di pianificazione, si è sbloccato ed è pronto per essere pianificato. Questa interfaccia non è valida una volta riprogrammato il contesto di esecuzione associato del proxy del thread, restituito dal metodo `GetContext`.

## <a name="syntax"></a>Sintassi

```cpp
struct IUMSUnblockNotification;
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IUMSUnblockNotification::GetContext](#getcontext)|Restituisce `IExecutionContext` l'interfaccia per il contesto di esecuzione associato al proxy del thread che è stato sbloccato. Una volta che questo metodo restituisce e il contesto di esecuzione sottostante è stato riprogrammato tramite una chiamata al `IThreadProxy::SwitchTo` metodo, questa interfaccia non è più valida.|
|[IUMSUnblockNotification::GetNextUnblockNotification](#getnextunblocknotification)|Restituisce `IUMSUnblockNotification` l'interfaccia successiva nella catena `IUMSCompletionList::GetUnblockNotifications`restituita dal metodo .|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IUMSUnblockNotification`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrtrm.h

**Spazio dei nomi:** Concurrency

## <a name="iumsunblocknotificationgetcontext-method"></a><a name="getcontext"></a>Metodo IUMSUnblockNotification::GetContext

Restituisce `IExecutionContext` l'interfaccia per il contesto di esecuzione associato al proxy del thread che è stato sbloccato. Una volta che questo metodo restituisce e il contesto di esecuzione sottostante è stato riprogrammato tramite una chiamata al `IThreadProxy::SwitchTo` metodo, questa interfaccia non è più valida.

```cpp
virtual IExecutionContext* GetContext() = 0;
```

### <a name="return-value"></a>Valore restituito

Interfaccia `IExecutionContext` per il contesto di esecuzione a un proxy del thread che è stato sbloccato.

## <a name="iumsunblocknotificationgetnextunblocknotification-method"></a><a name="getnextunblocknotification"></a>Metodo IUMSUnblockNotification::GetNextUnblockNotification

Restituisce `IUMSUnblockNotification` l'interfaccia successiva nella catena `IUMSCompletionList::GetUnblockNotifications`restituita dal metodo .

```cpp
virtual IUMSUnblockNotification* GetNextUnblockNotification() = 0;
```

### <a name="return-value"></a>Valore restituito

L'interfaccia successiva `IUMSUnblockNotification` nella catena restituita dal metodo `IUMSCompletionList::GetUnblockNotifications`.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Struttura IUMSScheduler](iumsscheduler-structure.md)<br/>
[Struttura IUMSCompletionList](iumscompletionlist-structure.md)
