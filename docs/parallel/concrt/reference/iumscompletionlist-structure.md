---
title: Struttura IUMSCompletionList
ms.date: 11/04/2016
f1_keywords:
- IUMSCompletionList
- CONCRTRM/concurrency::IUMSCompletionList
- CONCRTRM/concurrency::IUMSCompletionList::IUMSCompletionList::GetUnblockNotifications
helpviewer_keywords:
- IUMSCompletionList structure
ms.assetid: 81b5250e-3065-492c-b20d-2cdabf12271a
ms.openlocfilehash: 02382ef4606a6e73804fcbd5ce7735ecf2f0dcc7
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77140043"
---
# <a name="iumscompletionlist-structure"></a>Struttura IUMSCompletionList

Rappresenta un elenco di completamento UMS. Quando si blocca il thread UMS, il contesto di pianificazione definito dell'utilità di pianificazione viene inviato per decidere cosa pianificare sulla radice del processore virtuale sottostante mentre il thread originale è bloccato. Quando il thread originale si sblocca, il sistema operativo lo mette in coda nell'elenco di completamento accessibile tramite l'interfaccia. L'utilità di pianificazione può eseguire una query nell'elenco di completamento sul contesto di pianificazione designato o in qualsiasi altra posizione alla ricerca di lavoro.

## <a name="syntax"></a>Sintassi

```cpp
struct IUMSCompletionList;
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IUMSCompletionList:: GetUnblockNotifications](#getunblocknotifications)|Recupera una catena di interfacce di `IUMSUnblockNotification` che rappresentano i contesti di esecuzione i cui proxy di thread associati sono sbloccati dall'ultima volta in cui è stato richiamato questo metodo.|

## <a name="remarks"></a>Osservazioni

Un'utilità di pianificazione deve prestare particolare attenzione alle azioni che vengono eseguite dopo l'utilizzo di questa interfaccia per rimuovere dalla coda gli elementi dall'elenco di completamento. Gli elementi devono essere inseriti nell'elenco di contesti eseguibili dell'utilità di pianificazione ed essere in genere accessibili il prima possibile. È possibile che a uno degli elementi rimossi dalla coda sia stata assegnata la proprietà di un blocco arbitrario. L'utilità di pianificazione non può eseguire chiamate di funzione arbitrarie che potrebbero bloccarsi tra la chiamata a elementi rimossi dalla coda e la posizione di tali elementi in un elenco a cui è possibile accedere in genere dall'utilità di pianificazione.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IUMSCompletionList`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrtrm. h

**Spazio dei nomi:** Concurrency

## <a name="getunblocknotifications"></a>Metodo IUMSCompletionList:: GetUnblockNotifications

Recupera una catena di interfacce di `IUMSUnblockNotification` che rappresentano i contesti di esecuzione i cui proxy di thread associati sono sbloccati dall'ultima volta in cui è stato richiamato questo metodo.

```cpp
virtual IUMSUnblockNotification *GetUnblockNotifications() = 0;
```

### <a name="return-value"></a>Valore restituito

Catena di interfacce di `IUMSUnblockNotification`.

### <a name="remarks"></a>Osservazioni

Le notifiche restituite non sono valide dopo la ripianificazione dei contesti di esecuzione.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Struttura IUMSScheduler](iumsscheduler-structure.md)<br/>
[Struttura IUMSUnblockNotification](iumsunblocknotification-structure.md)
