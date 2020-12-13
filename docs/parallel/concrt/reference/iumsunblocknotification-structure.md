---
description: 'Altre informazioni su: Struttura IUMSUnblockNotification'
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
ms.openlocfilehash: bec40ee1e7326ad37e205c3035f965cb3f0ec8d4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97334311"
---
# <a name="iumsunblocknotification-structure"></a>Struttura IUMSUnblockNotification

Rappresenta una notifica di Gestione risorse indicante che un proxy del thread, che si è bloccato e ha attivato un valore restituito al contesto di pianificazione definito dell'utilità di pianificazione, si è sbloccato ed è pronto per essere pianificato. Questa interfaccia non è valida una volta riprogrammato il contesto di esecuzione associato del proxy del thread, restituito dal metodo `GetContext`.

## <a name="syntax"></a>Sintassi

```cpp
struct IUMSUnblockNotification;
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[IUMSUnblockNotification:: GetContext](#getcontext)|Restituisce l' `IExecutionContext` interfaccia per il contesto di esecuzione associato al proxy del thread che è sbloccato. Una volta che questo metodo viene restituito e il contesto di esecuzione sottostante è stato ripianificato tramite una chiamata al `IThreadProxy::SwitchTo` metodo, questa interfaccia non è più valida.|
|[IUMSUnblockNotification:: GetNextUnblockNotification](#getnextunblocknotification)|Restituisce l' `IUMSUnblockNotification` interfaccia successiva nella catena restituita dal metodo `IUMSCompletionList::GetUnblockNotifications` .|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IUMSUnblockNotification`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrtrm. h

**Spazio dei nomi:** Concurrency

## <a name="iumsunblocknotificationgetcontext-method"></a><a name="getcontext"></a> Metodo IUMSUnblockNotification:: GetContext

Restituisce l' `IExecutionContext` interfaccia per il contesto di esecuzione associato al proxy del thread che è sbloccato. Una volta che questo metodo viene restituito e il contesto di esecuzione sottostante è stato ripianificato tramite una chiamata al `IThreadProxy::SwitchTo` metodo, questa interfaccia non è più valida.

```cpp
virtual IExecutionContext* GetContext() = 0;
```

### <a name="return-value"></a>Valore restituito

`IExecutionContext`Interfaccia per il contesto di esecuzione di un proxy del thread che è sbloccato.

## <a name="iumsunblocknotificationgetnextunblocknotification-method"></a><a name="getnextunblocknotification"></a> Metodo IUMSUnblockNotification:: GetNextUnblockNotification

Restituisce l' `IUMSUnblockNotification` interfaccia successiva nella catena restituita dal metodo `IUMSCompletionList::GetUnblockNotifications` .

```cpp
virtual IUMSUnblockNotification* GetNextUnblockNotification() = 0;
```

### <a name="return-value"></a>Valore restituito

Interfaccia successiva `IUMSUnblockNotification` nella catena restituita dal metodo `IUMSCompletionList::GetUnblockNotifications` .

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)<br/>
[Struttura IUMSScheduler](iumsscheduler-structure.md)<br/>
[Struttura IUMSCompletionList](iumscompletionlist-structure.md)
