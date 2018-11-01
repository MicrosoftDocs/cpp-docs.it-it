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
ms.openlocfilehash: ec3c38ee609dfa7aec8d688269f1183d307be5b2
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50438207"
---
# <a name="iumscompletionlist-structure"></a>Struttura IUMSCompletionList

Rappresenta un elenco di completamento UMS. Quando si blocca il thread UMS, il contesto di pianificazione definito dell'utilità di pianificazione viene inviato per decidere cosa pianificare sulla radice del processore virtuale sottostante mentre il thread originale è bloccato. Quando il thread originale si sblocca, il sistema operativo lo mette in coda nell'elenco di completamento accessibile tramite l'interfaccia. L'utilità di pianificazione può eseguire una query nell'elenco di completamento sul contesto di pianificazione designato o in qualsiasi altra posizione alla ricerca di lavoro.

## <a name="syntax"></a>Sintassi

```
struct IUMSCompletionList;
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[IUMSCompletionList::GetUnblockNotifications](#getunblocknotifications)|Recupera una catena di `IUMSUnblockNotification` interfacce che rappresentano i contesti di esecuzione è stata richiamata cui thread associati i proxy sono stati sbloccati dall'ultima esecuzione di questo metodo.|

## <a name="remarks"></a>Note

Un'utilità di pianificazione deve essere particolarmente attenta le azioni da eseguire dopo l'utilizzo di questa interfaccia per gli elementi dall'elenco di completamento di rimozione dalla coda. Gli elementi da inserire nell'elenco dell'utilità di pianificazione di contesti eseguibili e accessibili a livello generale appena possibile. È anche possibile che uno degli elementi rimossi da coda ha ottenuto la proprietà di un blocco arbitrario. L'utilità di pianificazione non può effettuano alcuna chiamata di funzione arbitrario che può bloccarsi tra la chiamata a elementi di rimozione dalla coda e il posizionamento di tali elementi in un elenco che sono in genere accessibili dall'utilità di pianificazione.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`IUMSCompletionList`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrtrm. h

**Spazio dei nomi:** Concurrency

##  <a name="getunblocknotifications"></a>  Metodo IUMSCompletionList:: GetUnblockNotifications

Recupera una catena di `IUMSUnblockNotification` interfacce che rappresentano i contesti di esecuzione è stata richiamata cui thread associati i proxy sono stati sbloccati dall'ultima esecuzione di questo metodo.

```
virtual IUMSUnblockNotification *GetUnblockNotifications() = 0;
```

### <a name="return-value"></a>Valore restituito

Una catena di `IUMSUnblockNotification` interfacce.

### <a name="remarks"></a>Note

Le notifiche restituite non sono validi dopo i contesti di esecuzione vengono riprogrammati.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)<br/>
[Struttura IUMSScheduler](iumsscheduler-structure.md)<br/>
[Struttura IUMSUnblockNotification](iumsunblocknotification-structure.md)
