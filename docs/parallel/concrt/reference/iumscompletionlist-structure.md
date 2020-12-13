---
description: 'Altre informazioni su: struttura IUMSCompletionList'
title: Struttura IUMSCompletionList
ms.date: 11/04/2016
f1_keywords:
- IUMSCompletionList
- CONCRTRM/concurrency::IUMSCompletionList
- CONCRTRM/concurrency::IUMSCompletionList::IUMSCompletionList::GetUnblockNotifications
helpviewer_keywords:
- IUMSCompletionList structure
ms.assetid: 81b5250e-3065-492c-b20d-2cdabf12271a
ms.openlocfilehash: b54766e8b1c6f2e7c0afbb5e4e9a8efc0c455b4d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97334356"
---
# <a name="iumscompletionlist-structure"></a>Struttura IUMSCompletionList

Rappresenta un elenco di completamento UMS. Quando si blocca il thread UMS, il contesto di pianificazione definito dell'utilità di pianificazione viene inviato per decidere cosa pianificare sulla radice del processore virtuale sottostante mentre il thread originale è bloccato. Quando il thread originale si sblocca, il sistema operativo lo mette in coda nell'elenco di completamento accessibile tramite l'interfaccia. L'utilità di pianificazione può eseguire una query nell'elenco di completamento sul contesto di pianificazione designato o in qualsiasi altra posizione alla ricerca di lavoro.

## <a name="syntax"></a>Sintassi

```cpp
struct IUMSCompletionList;
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[IUMSCompletionList:: GetUnblockNotifications](#getunblocknotifications)|Recupera una catena di `IUMSUnblockNotification` interfacce che rappresentano contesti di esecuzione i cui proxy di thread associati sono sbloccati dall'ultima volta in cui è stato richiamato questo metodo.|

## <a name="remarks"></a>Commenti

Un'utilità di pianificazione deve prestare particolare attenzione alle azioni che vengono eseguite dopo l'utilizzo di questa interfaccia per rimuovere dalla coda gli elementi dall'elenco di completamento. Gli elementi devono essere inseriti nell'elenco di contesti eseguibili dell'utilità di pianificazione ed essere in genere accessibili il prima possibile. È possibile che a uno degli elementi rimossi dalla coda sia stata assegnata la proprietà di un blocco arbitrario. L'utilità di pianificazione non può eseguire chiamate di funzione arbitrarie che potrebbero bloccarsi tra la chiamata a elementi rimossi dalla coda e la posizione di tali elementi in un elenco a cui è possibile accedere in genere dall'utilità di pianificazione.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IUMSCompletionList`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrtrm. h

**Spazio dei nomi:** Concurrency

## <a name="iumscompletionlistgetunblocknotifications-method"></a><a name="getunblocknotifications"></a> Metodo IUMSCompletionList:: GetUnblockNotifications

Recupera una catena di `IUMSUnblockNotification` interfacce che rappresentano contesti di esecuzione i cui proxy di thread associati sono sbloccati dall'ultima volta in cui è stato richiamato questo metodo.

```cpp
virtual IUMSUnblockNotification *GetUnblockNotifications() = 0;
```

### <a name="return-value"></a>Valore restituito

Catena di `IUMSUnblockNotification` interfacce.

### <a name="remarks"></a>Commenti

Le notifiche restituite non sono valide dopo la ripianificazione dei contesti di esecuzione.

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency](concurrency-namespace.md)<br/>
[Struttura IUMSScheduler](iumsscheduler-structure.md)<br/>
[Struttura IUMSUnblockNotification](iumsunblocknotification-structure.md)
