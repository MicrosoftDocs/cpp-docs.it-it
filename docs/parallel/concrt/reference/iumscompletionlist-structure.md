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
ms.openlocfilehash: c388cc98aedbd35b2d0e00a4653a85a47abcb838
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81368115"
---
# <a name="iumscompletionlist-structure"></a>Struttura IUMSCompletionList

Rappresenta un elenco di completamento UMS. Quando si blocca il thread UMS, il contesto di pianificazione definito dell'utilità di pianificazione viene inviato per decidere cosa pianificare sulla radice del processore virtuale sottostante mentre il thread originale è bloccato. Quando il thread originale si sblocca, il sistema operativo lo mette in coda nell'elenco di completamento accessibile tramite l'interfaccia. L'utilità di pianificazione può eseguire una query nell'elenco di completamento sul contesto di pianificazione designato o in qualsiasi altra posizione alla ricerca di lavoro.

## <a name="syntax"></a>Sintassi

```cpp
struct IUMSCompletionList;
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IUMSCompletionList::GetUnblockNotifications](#getunblocknotifications)|Recupera una catena `IUMSUnblockNotification` di interfacce che rappresentano i contesti di esecuzione i cui proxy di thread associati sono sbloccati dall'ultima volta che questo metodo è stato richiamato.|

## <a name="remarks"></a>Osservazioni

Un'utilità di pianificazione deve prestare straordinariaattenzione sulle azioni eseguite dopo l'utilizzo di questa interfaccia per rimuovere gli elementi dall'elenco di completamento. Gli elementi devono essere inseriti nell'elenco dei contesti gestibili dell'utilità di pianificazione ed essere in genere accessibili il prima possibile. È del tutto possibile che a uno degli elementi rimossi dalla coda sia stata assegnata la proprietà di un blocco arbitrario. L'utilità di pianificazione non può effettuare chiamate di funzione arbitrarie che potrebbero bloccarsi tra la chiamata agli elementi di rimozione dalla coda e il posizionamento di tali elementi in un elenco a cui è in genere possibile accedere dall'interno dell'utilità di pianificazione.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IUMSCompletionList`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrtrm.h

**Spazio dei nomi:** Concurrency

## <a name="iumscompletionlistgetunblocknotifications-method"></a><a name="getunblocknotifications"></a>Metodo IUMSCompletionList::GetUnblockNotificationsIUMSCompletionList::GetUnblockNotifications Method

Recupera una catena `IUMSUnblockNotification` di interfacce che rappresentano i contesti di esecuzione i cui proxy di thread associati sono sbloccati dall'ultima volta che questo metodo è stato richiamato.

```cpp
virtual IUMSUnblockNotification *GetUnblockNotifications() = 0;
```

### <a name="return-value"></a>Valore restituito

Una catena `IUMSUnblockNotification` di interfacce.

### <a name="remarks"></a>Osservazioni

Le notifiche restituite non sono valide dopo la riprogrammazione dei contesti di esecuzione.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Struttura IUMSScheduler](iumsscheduler-structure.md)<br/>
[Struttura IUMSUnblockNotification](iumsunblocknotification-structure.md)
