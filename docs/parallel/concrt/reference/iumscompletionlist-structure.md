---
title: Struttura IUMSCompletionList | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- IUMSCompletionList
- CONCRTRM/concurrency::IUMSCompletionList
- CONCRTRM/concurrency::IUMSCompletionList::IUMSCompletionList::GetUnblockNotifications
dev_langs: C++
helpviewer_keywords: IUMSCompletionList structure
ms.assetid: 81b5250e-3065-492c-b20d-2cdabf12271a
caps.latest.revision: "19"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: df3bb5be4f2032353dd08e551591a03cdc2f4b17
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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
|[IUMSCompletionList:: GetUnblockNotifications](#getunblocknotifications)|Recupera una catena di `IUMSUnblockNotification` interfacce che rappresentano i contesti di esecuzione cui thread associati proxy sono stati sbloccati dall'ultima esecuzione di questo metodo è stato richiamato.|  
  
## <a name="remarks"></a>Note  
 Un'utilità di pianificazione deve essere particolarmente attenta le azioni da eseguire dopo l'utilizzo di questa interfaccia per gli elementi dell'elenco di completamento di rimozione dalla coda. Gli elementi devono essere inseriti nell'elenco dell'utilità di pianificazione di contesti eseguibili e accessibili in genere appena possibile. È dunque possibile che uno degli elementi rimossi da coda è stato assegnato la proprietà di un blocco arbitrario. L'utilità di pianificazione è non possibile apportare nessuna chiamata di funzione arbitraria che potrebbero causare blocchi tra la chiamata a elementi di rimozione dalla coda e la posizione di tali elementi in un elenco che sono in genere accessibili dall'utilità di pianificazione.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IUMSCompletionList`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** concrtrm. h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="getunblocknotifications"></a>Metodo IUMSCompletionList:: GetUnblockNotifications  
 Recupera una catena di `IUMSUnblockNotification` interfacce che rappresentano i contesti di esecuzione cui thread associati proxy sono stati sbloccati dall'ultima esecuzione di questo metodo è stato richiamato.  
  
```
virtual IUMSUnblockNotification *GetUnblockNotifications() = 0;
```  
  
### <a name="return-value"></a>Valore restituito  
 Una catena di `IUMSUnblockNotification` interfacce.  
  
### <a name="remarks"></a>Note  
 Una volta riprogrammati contesti di esecuzione, le notifiche restituite non sono validi.  
  
## <a name="see-also"></a>Vedere anche  
 [concorrenza Namespace](concurrency-namespace.md)   
 [Struttura IUMSScheduler](iumsscheduler-structure.md)   
 [Struttura IUMSUnblockNotification](iumsunblocknotification-structure.md)
